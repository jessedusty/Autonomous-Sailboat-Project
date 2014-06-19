/*
 * Generic and very simple preprocessor
 * Copyright (c) 2012 Total Spectrum Software Inc.
 * MIT Licensed, see terms of use at end of file
 *
 * Reads UTF-16LE or UTF-8 encoded files, and returns a
 * string containing UTF-8 characters.
 * The following directives are supported:
 *  #define FOO  - simple macros with no arguments
 *  #undef
 *  #ifdef FOO / #ifndef FOO
 *  #else / #elseifdef FOO / #elseifndef FOO
 *  #endif
 *  #error message
 *  #warn message
 *  #include "file"
 *
 * Any other # directives are passed through.
 *
 * Note that the preprocessor itself will insert #line directives
 * before and after any included text, of the form:
 *   #line NNNN "filename"
 * where NNNN is a decimal line number. The scanner or parser may
 * use these directives to make sure error numbers come out right.
 *
 * Here's an example of reading a file foo.txt in and preprocessing
 * it in an environment where "VALUE1" is defined to "VALUE" and
 * "VALUE2" is defined to "0":
 *
 *   struct preprocess pp;
 *   char *parser_str;
 *
 *   pp_init(&pp);
 *   pp_define(&pp, "VALUE1", "VALUE");
 *   pp_define(&pp, "VALUE2", "0");
 *   pp_push_file(&pp, "foo.txt");
 *   pp_run(&pp);
 *   // any additional files to read can be pushed and run here
 *   parser_str = pp_finish(&pp);
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>
#include "flexbuf.h"
#include "preprocess.h"

#ifdef _MSC_VER
#define strdup _strdup
#endif

/*
 * function to read a single LATIN-1 character
 * from a file
 * returns number of bytes placed in buffer, or -1 on EOF
 */
static int
read_latin1(FILE *f, char buf[4])
{
  int c = fgetc(f);
  if (c == EOF)
    return -1;
  if (c <= 127) {
    buf[0] = (char)c;
    return 1;
  }
  buf[0] = 0xC0 + ((c>>6) & 0x1f);
  buf[1] = 0x80 + ( c & 0x3f );
  return 2;
}

/*
 * function to read a single UTF-8 character
 * from a file
 * returns number of bytes placed in buffer, or -1 on EOF
 */
static int
read_single(FILE *f, char buf[4])
{
    int c = fgetc(f);
    if (c == EOF)
        return -1;
    buf[0] = (char)c;
    return 1;
}

/*
 * function to read a single UTF-16 character
 * from a file
 * returns number of bytes placed in buffer, or -1 on EOF
 */
static int
read_utf16(FILE *f, char buf[4])
{
    int c, d;
    int r;
    c = fgetc(f);
    if (c < 0)
        return -1;
    d = fgetc(f);
    if (d < 0)
        return -1;

    c = c + (d<<8);
    /* here we need to translate UTF-16 to UTF-8 */
    /* FIXME: this code is not done properly; it does
       not handle surrogate pairs (0xD800 - 0xDFFF)
     */
    if (c < 128) {
        buf[0] = (char)c;
        r = 1;
    } else if (c < 0x800) {
        buf[0] = 0xC0 + ((c>>6) &  0x1F);
        buf[1] = 0x80 + ( c & 0x3F );
        r = 2;
    } else if (c < 0x10000) {
        buf[0] = 0xE0 + ((c>>12) & 0x0F);
        buf[1] = 0x80 + ((c>>6) & 0x3F);
        buf[2] = 0x80 + (c & 0x3F);
        r = 3;
    } else {
        buf[0] = 0xE0 + ((c>>18) & 0x07);
        buf[1] = 0x80 + ((c>>12) & 0x3F);
        buf[2] = 0x80 + ((c>>6) & 0x3F);
        buf[3] = 0x80 + (c & 0x3F);
        r = 4;
    }
    return r;
}


/*
 * read a line
 * returns number of bytes read, or 0 on EOF
 */
int
pp_nextline(struct preprocess *pp)
{
    int r;
    int count = 0;
    FILE *f;
    char buf[4];
    struct filestate *A;

    A = pp->fil;
    if (!A)
        return 0;
    f = A->f;

    flexbuf_clear(&pp->line);
    if (A->readfunc == NULL) {
        int c0, c1;
        c0 = fgetc(f);
        if (c0 < 0) return 0;
	if (c0 == 0xef) {
	    A->readfunc = read_single;
	    c1 = fgetc(f);
	    if (c1 == 0xbb) {
	        c1 = fgetc(f);
		if (c1 == 0xbf) {
		  /* discard the byte order mark */
		} else {
		  ungetc(c1, f);
		  ungetc(0xbb, f);
		}
	    } else {
	        ungetc(c1, f);
	    }
	} else
        if (c0 != 0xff) {
            if (c0 >= 0x80 && c0 < 0xc0) {
	        A->readfunc = read_latin1;
	    } else {
                A->readfunc = read_single;
	    }
            flexbuf_addchar(&pp->line, c0);
        } else {
            c1 = fgetc(f);
            if (c1 == 0xfe) {
                A->readfunc = read_utf16;
            } else {
                A->readfunc = read_single;
                flexbuf_addchar(&pp->line, c0);
                ungetc(c1, f);
            }
        }
        if (c0 == '\n') {
            flexbuf_addchar(&pp->line, 0);
            A->lineno++;
            return 1;
        }
    }
    for(;;) {
        r = (*A->readfunc)(f, buf);
        if (r <= 0) break;
        count += r;
        flexbuf_addmem(&pp->line, buf, r);
        if (r == 1 && buf[0] == '\n') {
            A->lineno++;
            break;
        }
    }
    flexbuf_addchar(&pp->line, '\0');
    return count;
}

/*
 * default error handling functions
 */
static void default_errfunc(void *dummy, const char *filename, int line, const char *msg)
{
    const char *level = (const char *)dummy;

    fprintf(stderr, "%s:%d: %s: ", filename, line, level);
    fprintf(stderr, "%s", msg);
    fprintf(stderr, "\n");
}

static void
doerror(struct preprocess *pp, const char *msg, ...)
{
    va_list args;
    char tmpmsg[BUFSIZ];
    struct filestate *fil;

    va_start(args, msg);
    vsnprintf(tmpmsg, sizeof(tmpmsg), msg, args);
    va_end(args);

    pp->numerrors++;
    fil = pp->fil;
    if (fil) {
        (*pp->errfunc)(pp->errarg, pp->fil->name, pp->fil->lineno, tmpmsg);
    } else {
        (*pp->errfunc)(pp->errarg, "", 0, tmpmsg);
    }
}

static void
dowarning(struct preprocess *pp, const char *msg, ...)
{
    va_list args;
    char tmpmsg[BUFSIZ];
    struct filestate *fil;

    pp->numwarnings++;
    va_start(args, msg);
    vsnprintf(tmpmsg, sizeof(tmpmsg), msg, args);
    va_end(args);

    fil = pp->fil;
    if (fil) {
        (*pp->warnfunc)(pp->warnarg, pp->fil->name, pp->fil->lineno, tmpmsg);
    } else {
        (*pp->warnfunc)(pp->warnarg, "", 0, tmpmsg);
    }
}

/*
 * initialize preprocessor
 */
void
pp_init(struct preprocess *pp)
{
    memset(pp, 0, sizeof(*pp));
    flexbuf_init(&pp->line, 128);
    flexbuf_init(&pp->whole, 102400);

    pp->errfunc = default_errfunc;
    pp->warnfunc = default_errfunc;
    pp->errarg = (void *)"error";
    pp->warnarg = (void *)"warning";
    pp->linechange = "#line %d \"%s\"\n";
}

/*
 * push a file into the preprocessor
 * files will be processed in LIFO order,
 * so the one on top of the stack is the
 * "current" one; this makes #include implementation
 * easier
 */
void
pp_push_file_struct(struct preprocess *pp, FILE *f, const char *filename)
{
    struct filestate *A;

    A = (struct filestate *)calloc(1, sizeof(*A));
    if (!A) {
        doerror(pp, "Out of memory!\n");
        return;
    }
    A->lineno = 1;
    A->f = f;
    A->next = pp->fil;
    A->name = filename;
    pp->fil = A;
    if (A->name) {
        char temp[128];
        snprintf(temp, sizeof(temp), pp->linechange, A->lineno, A->name);
        temp[127] = 0; /* make sure it is 0 terminated */
        flexbuf_addstr(&pp->whole, temp);
    }
}

void
pp_push_file(struct preprocess *pp, const char *name)
{
    FILE *f;

    f = fopen(name, "rb");
    if (!f) {
        doerror(pp, "Unable to open file %s", name);
        return;
    }
    pp_push_file_struct(pp, f, name);
    pp->fil->flags |= FILE_FLAGS_CLOSEFILE;
}

/*
 * pop the current file state off the stack
 * closes the file as a side effect
 */
void pp_pop_file(struct preprocess *pp)
{
    struct filestate *A;
    struct ifstate *I;

    while (pp->ifs) {
        I = pp->ifs;
        pp->ifs = I->next;
        doerror(pp, "Unterminated #if starting at line %d", I->linenum);
        free(I);
    }
    A = pp->fil;
    if (A) {
        pp->fil = A->next;
        if (A->flags & FILE_FLAGS_CLOSEFILE)
            fclose(A->f);
        free(A);
        A = pp->fil;
        if (A && A->name) {
            char temp[128];
            snprintf(temp, sizeof(temp), pp->linechange, A->lineno, A->name);
            temp[127] = 0; /* make sure it is 0 terminated */
            flexbuf_addstr(&pp->whole, temp);
        }
    }
}

/*
 * add a definition
 * "flags" indicates things like whether we must free the memory
 * associated with name and def
 */
static void
pp_define_internal(struct preprocess *pp, const char *name, const char *def, int flags)
{
    struct predef *the;

    the = (struct predef *)calloc(sizeof(*the), 1);
    the->name = name;
    the->def = def;
    the->flags = flags;
    the->next = pp->defs;
    pp->defs = the;
}

/*
 * the user visible "pp_define"; used mainly for constant strings and
 * such, so we do not free those
 */
void
pp_define(struct preprocess *pp, const char *name, const char *str)
{
    pp_define_internal(pp, name, str, 0);
}

/*
 * retrieive a definition
 * returns NULL if no definition exists (or if there was an
 * explicit #undef)
 */
const char *
pp_getdef(struct preprocess *pp, const char *name)
{
    struct predef *X;
    const char *def = NULL;
    X = pp->defs;
    while (X) {
        if (!strcmp(X->name, name)) {
            def = X->def;
            break;
        }
        X = X->next;
    }
    return def;
}

/* structure describing current parse state of a string */
typedef struct parse_state {
    char *str;  /* pointer to start of string */
    char *save; /* pointer to where last parse ended */
    int   c;    /* saved character */
} ParseState;

static void parse_init(ParseState *P, char *s)
{
    P->str = s;
    P->save = NULL;
    P->c = 0;
}

#define PARSE_ISSPACE 1
#define PARSE_IDCHAR  2
#define PARSE_OTHER   3

static int
classify_char(int c)
{
    if (isspace(c))
        return PARSE_ISSPACE;
    if (isalnum(c) || (c == '_'))
        return PARSE_IDCHAR;
    return PARSE_OTHER;
}

/*
 * skip over a quoted string
 * returns a pointer to the last character (normally a quote)
 */
static char *
skip_quoted_string(char *ptr)
{
  while (*ptr && (*ptr != '\"'))
    ptr++;
  return ptr;
}

/*
 * fetch the next word
 * a word is a sequence of identifier characters, spaces, or
 * other characters
 */
static char *parse_getword(ParseState *P)
{
    char *word, *ptr;
    int state;

    if (P->save) {
        *P->save = (char)P->c;
        ptr = P->save;
    } else {
        ptr = P->str;
    }
    word = ptr;
    if (!*ptr) return ptr;

    if (*ptr == '\"') {
      ptr = skip_quoted_string(ptr+1);
      if (*ptr == '\"') ptr++;
    } else {
      state = classify_char((unsigned char)*ptr);
      ptr++;
      while (*ptr && classify_char((unsigned char)*ptr) == state)
        ptr++;
    }
    P->save = ptr;
    P->c = *ptr;
    *ptr = 0;
    return word;
}

static char *parse_restofline(ParseState *P)
{
    char *ptr;
    char *ret;

    if (P->save) {
      *P->save = (char)(P->c);
        ptr = P->save;
    } else {
        ptr = P->str;
    }
    ret = ptr;
    while (*ptr && *ptr != '\n')
        ptr++;
    if (*ptr) {
        P->c = *ptr;
        *ptr = 0;
        P->save = ptr;
    } else {
        P->save = NULL;
    }
    P->str = ret;
    return P->str;
}

static void
parse_skipspaces(ParseState *P)
{
    char *ptr;
    if (P->save) {
        *P->save = P->c;
        ptr = P->save;
    } else {
        ptr = P->str;
    }
    while (*ptr && isspace(*ptr))
        ptr++;
    P->str = ptr;
    P->save = NULL;
}

static char *parse_getwordafterspaces(ParseState *P)
{
    parse_skipspaces(P);
    return parse_getword(P);
}

static char *parse_getquotedstring(ParseState *P)
{
    char *ptr, *start;
    parse_skipspaces(P);
    ptr = P->str;
    if (*ptr != '\"')
        return NULL;
    ptr++;
    start = ptr;
    ptr = skip_quoted_string(ptr);
    if (!*ptr)
        return NULL;
    P->save = ptr;
    P->c = *ptr;
    *ptr = 0;
    return start;
}


/*
 * expand macros in a buffer
 * "src" is the source data
 * "dst" is a destination flexbuf
 */
static int
expand_macros(struct preprocess *pp, struct flexbuf *dst, char *src)
{
    ParseState P;
    char *word;
    const char *def;
    int len;

    if (!pp_active(pp))
        return 0;

    parse_init(&P, src);
    for(;;) {
        word = parse_getword(&P);
        if (!*word)
            break;
        if (pp->incomment) {
            if (strstr(word, pp->endcomment)) {
                --pp->incomment;
            } else {
                if (strstr(word, pp->startcomment)) {
                    pp->incomment++;
                }
            }
            def = word;
        } else if (isalpha((unsigned char)*word)) {
            def = pp_getdef(pp, word);
            if (!def)
                def = word;
        } else {
            if (pp->startcomment && strstr(word, pp->startcomment)) {
                pp->incomment++;
            }
            def = word;
        }
        flexbuf_addstr(dst, def);
    }
    len = flexbuf_curlen(dst);
    flexbuf_addchar(dst, 0);
    return len;
}

static void
handle_ifdef(struct preprocess *pp, ParseState *P, int invert)
{
    char *word;
    const char *def;
    struct ifstate *I;

    I = (struct ifstate *)calloc(1, sizeof(*I));
    if (!I) {
        doerror(pp, "Out of memory\n");
        return;
    }
    I->next = pp->ifs;
    if (pp->fil) {
        I->linenum = pp->fil->lineno;
    }
    pp->ifs = I;
    if (!pp_active(pp)) {
        I->skip = 1;
        I->skiprest = 1;  /* skip all branches, even else */
        return;
    }
    word = parse_getwordafterspaces(P);
    def = pp_getdef(pp, word);
    if (invert ^ (def != NULL)) {
        I->skip = 0;
        I->skiprest = 1;
    } else {
        I->skip = 1;
    }
}

static void
handle_else(struct preprocess *pp, ParseState *P)
{
    struct ifstate *I = pp->ifs;

    (void)(P); /* unused parameter */
    if (!I) {
        doerror(pp, "#else without matching #if");
        return;
    }
    if (I->sawelse) {
        doerror(pp, "multiple #else statements in #if");
        return;
    }
    I->sawelse = 1;
    if (I->skiprest) {
        /* some branch was already handled */
        I->skip = 1;
    } else {
        I->skip = 0;
    }
}

static void
handle_elseifdef(struct preprocess *pp, ParseState *P, int invert)
{
    struct ifstate *I = pp->ifs;
    char *word;
    const char *def;

    if (!I) {
        doerror(pp, "#else without matching #if");
        return;
    }

    if (I->skiprest) {
        /* some branch was already handled */
        I->skip = 1;
        return;
    }
    word = parse_getwordafterspaces(P);
    def = pp_getdef(pp, word);
    if (invert ^ (def != NULL)) {
        I->skip = 0;
        I->skiprest = 1;
    } else {
        I->skip = 1;
    }
}

static void
handle_endif(struct preprocess *pp, ParseState *P)
{
    struct ifstate *I = pp->ifs;

    if (!I) {
        doerror(pp, "#endif without matching #if");
        return;
    }
    pp->ifs = I->next;
    free(I);
}

static void
handle_error(struct preprocess *pp, ParseState *P)
{
    char *msg;
    if (!pp_active(pp)) {
        return;
    }
    msg = parse_restofline(P);
    doerror(pp, "#error: %s", msg);
}

static void
handle_warn(struct preprocess *pp, ParseState *P)
{
    char *msg;
    if (!pp_active(pp)) {
        return;
    }
    msg = parse_restofline(P);
    dowarning(pp, "#warn: %s", msg);
}

static void
handle_define(struct preprocess *pp, ParseState *P, int isDef)
{
    char *def;
    char *name;
    const char *oldvalue;
    struct flexbuf newdef;

    if (!pp_active(pp)) {
        return;
    }
    name = parse_getwordafterspaces(P);
    if (classify_char(name[0]) != PARSE_IDCHAR) {
        doerror(pp, "%s is not a valid identifier for define", name);
        return;
    }
    oldvalue = pp_getdef(pp, name);
    if (oldvalue && isDef) {
        dowarning(pp, "redefining `%s'", name);
    }
    name = strdup(name);

    if (isDef) {
        parse_skipspaces(P);
        def = parse_restofline(P);
        flexbuf_init(&newdef, 80);
        expand_macros(pp, &newdef, def);
        def = flexbuf_get(&newdef);
    } else {
        def = NULL;
    }
    pp_define_internal(pp, name, def, PREDEF_FLAG_FREEDEFS);
}

char *
find_file_on_path(struct preprocess *pp, const char *name, const char *ext, const char *incpath)
{
  const char *path = NULL;
  char *ret;
  char *last;
  FILE *f;

  if (name[0] == '/' || name[0] == '\\') {
    /* absolute path */
    path = "";
  } else if (incpath) {
      path = incpath;
  } else {
    if (pp && pp->fil)
      path = pp->fil->name;
    if (!path)
      path = "";
  }
  if (ext) {
    ret = malloc(strlen(path) + strlen(name) + strlen(ext) + 2);
  } else {
    ret = malloc(strlen(path) + strlen(name) + 2);
  }
  if (!ret) {
    fprintf(stderr, "FATAL ERROR: out of memory\n");
    exit(2);
  }
  strcpy(ret, path);
  last = strrchr(ret, '/');
  if (last) {
    last[1] = 0;
  } else {
    ret[0] = 0;
  }
  strcat(ret, name);
  f = fopen(ret, "r");
  if (!f && ext) {
    strcat(ret, ext);
    f = fopen(ret, "r");
  }
  if (!f) {
    /* give up */
    free(ret);
    ret = NULL;
  }
  if (f)
    fclose(f);
  return ret;
}

static void
handle_include(struct preprocess *pp, ParseState *P)
{
    char *name;
    char *orig_name;

    if (!pp_active(pp)) {
        return;
    }
    orig_name = parse_getquotedstring(P);
    if (!orig_name) {
        doerror(pp, "no string found for include");
        return;
    }
    /* if the file does not start with a /, it could be relative
       to the current file name
    */
    name = find_file_on_path(pp, orig_name, NULL, NULL);
    if (!name)
      name = strdup(orig_name);
    pp_push_file(pp, name);
    pp->fil->lineno = 0;  /* hack to correct for \n in buffer?? */
}

/*
 * expand a line and process any directives
 * returns 0 if the line should be skipped, otherwise returns the length
 * of the expanded line
 */
static int
do_line(struct preprocess *pp)
{
    char *data = flexbuf_get(&pp->line);
    char *func;
    int r = 0;

    if (data[0] != '#' || pp->incomment) {
        r = expand_macros(pp, &pp->line, data);
    } else {
        ParseState P;
        parse_init(&P, data+1);
        parse_skipspaces(&P);
        func = parse_getword(&P);
        if (!strcmp(func, "ifdef")) {
            handle_ifdef(pp, &P, 0);
        } else if (!strcmp(func, "ifndef")) {
            handle_ifdef(pp, &P, 1);
        } else if (!strcmp(func, "else")) {
            handle_else(pp, &P);
        } else if (!strcmp(func, "elseifdef")) {
            handle_elseifdef(pp, &P, 0);
        } else if (!strcmp(func, "elseifndef")) {
            handle_elseifdef(pp, &P, 1);
        } else if (!strcmp(func, "endif")) {
            handle_endif(pp, &P);
        } else if (!strcmp(func, "error")) {
            handle_error(pp, &P);
        } else if (!strcmp(func, "warning")) {
            handle_warn(pp, &P);
        } else if (!strcmp(func, "define")) {
            handle_define(pp, &P, 1);
        } else if (!strcmp(func, "undef")) {
            handle_define(pp, &P, 0);
        } else if (!strcmp(func, "include")) {
            handle_include(pp, &P);
        } else {
//            doerror(pp, "Unknown preprocessor directive `%s'", func);
            // just pass it through for the language processor to deal with
            if (P.save) {
                *P.save = P.c;
                P.save = NULL;
            }
            r = expand_macros(pp, &pp->line, data);
        }
    }
    free(data);
    return r;
}

/*
 * main function
 */
void
pp_run(struct preprocess *pp)
{
    int linelen;

    while (pp->fil) {
        for(;;) {
            linelen = pp_nextline(pp);
            if (linelen <= 0) break;  /* end of file */
            /* now expand directives and/or macros */
            linelen = do_line(pp);
            /* if the whole line should be skipped check_directives will return 0 */
            if (linelen == 0) {
                /* add a newline so line number errors will be correct */
                flexbuf_addchar(&pp->whole, '\n');
            } else {
                char *line = flexbuf_get(&pp->line);
                flexbuf_addstr(&pp->whole, line);
            }
        }
        pp_pop_file(pp);
    }
}

char *
pp_finish(struct preprocess *pp)
{
    flexbuf_addchar(&pp->whole, 0);
    return flexbuf_get(&pp->whole);
}

/*
 * set comment characters
 */
void
pp_setcomments(struct preprocess *pp, const char *line, const char *start, const char *end)
{
    pp->linecomment = line;
    pp->startcomment = start;
    pp->endcomment = end;
}

/*
 * set line directive format
 */
void
pp_setlinedirective(struct preprocess *pp, const char *dir)
{
    pp->linechange = dir;
}

/*
 * get/restore define state
 * this may be used to ensure that #defines in sub files are not
 * seen in the main file
 */
void *
pp_get_define_state(struct preprocess *pp)
{
    return (void *)pp->defs;
}

void
pp_restore_define_state(struct preprocess *pp, void *vp)
{
    struct predef *where = (struct predef *)vp;
    struct predef *x, *old;

    x = pp->defs;
    while (x && x != where) {
        old = x;
        x = old->next;
        if (old->flags & PREDEF_FLAG_FREEDEFS)
        {
            free((void *)old->name);
            if (old->def) free((void *)old->def);
        }
        free(old);
    }
    pp->defs = x;
}

#ifdef TEST
char *
preprocess(const char *filename)
{
    struct preprocess pp;
    FILE *f;
    char *result;

    f = fopen(filename, "rb");
    if (!f) {
        perror(filename);
        return NULL;
    }
    pp_init(&pp);
    pp_push_file_struct(&pp, f);
    pp_run(&pp);
    result = pp_finish(&pp);
    fclose(f);
    return result;
}

int
main(int argc, char **argv)
{
    char *str;
    if (argc != 2) {
        fprintf(stderr, "usage: %s file\n", argv[0]);
        return 2;
    }
    str = preprocess(argv[1]);
    if (!str) {
        fprintf(stderr, "error reading file %s\n", argv[1]);
        return 1;
    } else {
        printf("%s", str);
        fflush(stdout);
    }
    return 0;
}
#endif

/*
 * +--------------------------------------------------------------------
 * ¦  TERMS OF USE: MIT License
 * +--------------------------------------------------------------------
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files
 * (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 * +--------------------------------------------------------------------
 */
