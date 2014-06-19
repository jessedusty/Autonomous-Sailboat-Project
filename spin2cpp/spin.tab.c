/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_IDENTIFIER = 258,
     T_NUM = 259,
     T_STRING = 260,
     T_FLOATNUM = 261,
     T_CON = 262,
     T_VAR = 263,
     T_DAT = 264,
     T_PUB = 265,
     T_PRI = 266,
     T_OBJ = 267,
     T_BYTE = 268,
     T_WORD = 269,
     T_LONG = 270,
     T_INSTR = 271,
     T_INSTRMODIFIER = 272,
     T_HWREG = 273,
     T_ORG = 274,
     T_RES = 275,
     T_FIT = 276,
     T_REPEAT = 277,
     T_FROM = 278,
     T_TO = 279,
     T_STEP = 280,
     T_WHILE = 281,
     T_UNTIL = 282,
     T_IF = 283,
     T_IFNOT = 284,
     T_ELSE = 285,
     T_ELSEIF = 286,
     T_ELSEIFNOT = 287,
     T_LOOKDOWN = 288,
     T_LOOKDOWNZ = 289,
     T_LOOKUP = 290,
     T_LOOKUPZ = 291,
     T_CASE = 292,
     T_OTHER = 293,
     T_QUIT = 294,
     T_NEXT = 295,
     T_ABORT = 296,
     T_RESULT = 297,
     T_RETURN = 298,
     T_INDENT = 299,
     T_OUTDENT = 300,
     T_EOLN = 301,
     T_EOF = 302,
     T_DOTS = 303,
     T_HERE = 304,
     T_STRINGPTR = 305,
     T_FILE = 306,
     T_ANNOTATION = 307,
     T_ASSIGN = 308,
     T_OR = 309,
     T_AND = 310,
     T_EQ = 311,
     T_NE = 312,
     T_LE = 313,
     T_GE = 314,
     T_LIMITMAX = 315,
     T_LIMITMIN = 316,
     T_HIGHMULT = 317,
     T_MODULUS = 318,
     T_REV = 319,
     T_SAR = 320,
     T_SHR = 321,
     T_SHL = 322,
     T_ROTR = 323,
     T_ROTL = 324,
     T_ENCODE = 325,
     T_DECODE = 326,
     T_SQRT = 327,
     T_ABS = 328,
     T_BIT_NOT = 329,
     T_NEGATE = 330,
     T_NOT = 331,
     T_DOUBLEAT = 332,
     T_DECREMENT = 333,
     T_INCREMENT = 334,
     T_DOUBLETILDE = 335,
     T_ROUND = 336,
     T_TRUNC = 337,
     T_FLOAT = 338,
     T_CONSTANT = 339
   };
#endif
/* Tokens.  */
#define T_IDENTIFIER 258
#define T_NUM 259
#define T_STRING 260
#define T_FLOATNUM 261
#define T_CON 262
#define T_VAR 263
#define T_DAT 264
#define T_PUB 265
#define T_PRI 266
#define T_OBJ 267
#define T_BYTE 268
#define T_WORD 269
#define T_LONG 270
#define T_INSTR 271
#define T_INSTRMODIFIER 272
#define T_HWREG 273
#define T_ORG 274
#define T_RES 275
#define T_FIT 276
#define T_REPEAT 277
#define T_FROM 278
#define T_TO 279
#define T_STEP 280
#define T_WHILE 281
#define T_UNTIL 282
#define T_IF 283
#define T_IFNOT 284
#define T_ELSE 285
#define T_ELSEIF 286
#define T_ELSEIFNOT 287
#define T_LOOKDOWN 288
#define T_LOOKDOWNZ 289
#define T_LOOKUP 290
#define T_LOOKUPZ 291
#define T_CASE 292
#define T_OTHER 293
#define T_QUIT 294
#define T_NEXT 295
#define T_ABORT 296
#define T_RESULT 297
#define T_RETURN 298
#define T_INDENT 299
#define T_OUTDENT 300
#define T_EOLN 301
#define T_EOF 302
#define T_DOTS 303
#define T_HERE 304
#define T_STRINGPTR 305
#define T_FILE 306
#define T_ANNOTATION 307
#define T_ASSIGN 308
#define T_OR 309
#define T_AND 310
#define T_EQ 311
#define T_NE 312
#define T_LE 313
#define T_GE 314
#define T_LIMITMAX 315
#define T_LIMITMIN 316
#define T_HIGHMULT 317
#define T_MODULUS 318
#define T_REV 319
#define T_SAR 320
#define T_SHR 321
#define T_SHL 322
#define T_ROTR 323
#define T_ROTL 324
#define T_ENCODE 325
#define T_DECODE 326
#define T_SQRT 327
#define T_ABS 328
#define T_BIT_NOT 329
#define T_NEGATE 330
#define T_NOT 331
#define T_DOUBLEAT 332
#define T_DECREMENT 333
#define T_INCREMENT 334
#define T_DOUBLETILDE 335
#define T_ROUND 336
#define T_TRUNC 337
#define T_FLOAT 338
#define T_CONSTANT 339




/* Copy the first part of user declarations.  */
#line 7 "spin.y"

#include <stdio.h>
#include <stdlib.h>
#include "spinc.h"

/* Yacc functions */
    void yyerror(char *);
    int yylex();

    extern int gl_errors;

/* utility functions */
AST *
AstYield(void)
{
    current->needsYield = 1;
    return NewAST(AST_STMTLIST, NewAST(AST_YIELD, NULL, NULL), NULL);
}

AST *
AstAbort(AST *expr)
{
    current->needsAbortdef = 1;
    current->needsStdlib = 1;
    return NewAST(AST_ABORT, expr, NULL);
}

AST *
AstCatch(AST *expr)
{
    current->needsAbortdef = 1;
    return NewAST(AST_CATCH, expr, NULL);
}

/* create an AST in a comment holder */
AST *
NewCommentedAST(enum astkind kind, AST *left, AST *right, AST *comment)
{
    AST *ast;

    ast = NewAST(kind, left, right);
    if (comment) {
        ast = NewAST(AST_COMMENTEDNODE, ast, comment);
    }
    return ast;
}

/* add a list element together with accumulated comments */
AST *
CommentedListHolder(AST *ast)
{
    AST *comment;

    if (!ast)
        return ast;

    comment = GetComments();

    if (comment) {
        ast = NewAST(AST_COMMENTEDNODE, ast, comment);
    }
    ast = NewAST(AST_LISTHOLDER, ast, NULL);
    return ast;
}

AST *
NewStatement(AST *stmt)
{
    AST *ast;

    if (!stmt) return NULL;
    ast = NewAST(AST_STMTLIST, stmt, NULL);
    return ast;
}

AST *
NewCommentedStatement(AST *stmt)
{
    AST *ast;
    AST *comment;

    if (!stmt) return NULL;
    comment = GetComments();
    if (comment) {
        stmt = NewAST(AST_COMMENTEDNODE, stmt, comment);
    }
    ast = NewAST(AST_STMTLIST, stmt, NULL);
    return ast;
}

void
SkipComments(void)
{
    (void)GetComments();
}

/* determine whether a loop needs a yield, and if so, insert one */
AST *
CheckYield(AST *body)
{
    AST *ast = body;

    if (!body)
        return AstYield();
    while (ast) {
        if (ast->left)
            return body;
        ast = ast->right;
    }
    return AddToList(body, AstYield());
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 388 "spin.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  60
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6421

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  258
/* YYNRULES -- Number of states.  */
#define YYNSTATES  529

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   339

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   106,     2,   104,     2,     2,    72,     2,
      97,    98,    66,    65,   100,    64,   107,    67,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    99,     2,
      56,   101,    57,    88,    86,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   102,   105,   103,    71,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    70,     2,    87,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    58,    59,    60,    61,    62,    63,    68,    69,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    89,    90,    91,    92,    93,    94,    95,    96
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    15,    17,    18,
      21,    24,    27,    31,    34,    37,    41,    45,    50,    55,
      58,    62,    67,    73,    78,    79,    81,    85,    88,    91,
      92,    94,    96,    99,   101,   103,   105,   108,   111,   115,
     118,   122,   125,   128,   131,   133,   135,   137,   139,   143,
     146,   151,   156,   158,   163,   169,   175,   182,   184,   187,
     191,   194,   196,   200,   202,   206,   208,   210,   214,   216,
     220,   224,   231,   238,   244,   250,   261,   270,   275,   282,
     289,   296,   303,   305,   308,   311,   313,   316,   318,   322,
     326,   328,   333,   336,   338,   341,   343,   346,   348,   351,
     354,   358,   361,   365,   368,   372,   375,   379,   383,   388,
     391,   395,   399,   403,   406,   410,   412,   415,   417,   420,
     424,   426,   429,   433,   437,   441,   443,   446,   448,   451,
     455,   457,   462,   464,   466,   468,   473,   475,   478,   481,
     485,   489,   493,   497,   501,   505,   509,   513,   517,   521,
     525,   529,   533,   537,   541,   545,   549,   553,   557,   561,
     565,   569,   573,   577,   581,   585,   589,   594,   599,   604,
     609,   614,   619,   624,   629,   634,   639,   644,   649,   654,
     659,   664,   669,   674,   679,   684,   689,   694,   699,   704,
     708,   711,   714,   716,   719,   722,   725,   728,   731,   734,
     737,   740,   743,   745,   748,   751,   754,   757,   760,   763,
     766,   769,   774,   779,   784,   789,   791,   793,   795,   800,
     802,   807,   812,   814,   819,   824,   829,   833,   837,   841,
     846,   853,   857,   867,   874,   876,   881,   886,   891,   893,
     897,   899,   902,   904,   908,   910,   914,   916,   918,   920,
     922,   924,   926,   928,   930,   933,   935,   937,   940
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     109,     0,    -1,   111,    -1,   111,   109,    -1,   110,    -1,
     113,    -1,   113,   110,    -1,    46,    -1,    -1,   112,   111,
      -1,     7,   137,    -1,     9,   141,    -1,     9,   163,   141,
      -1,     8,   146,    -1,    12,   144,    -1,    10,   114,   118,
      -1,    11,   114,   118,    -1,    10,   163,   114,   118,    -1,
      11,   163,   114,   118,    -1,   163,   112,    -1,   162,   115,
      46,    -1,   162,   115,   117,    46,    -1,   162,   115,   116,
     117,    46,    -1,   162,   115,   116,    46,    -1,    -1,   148,
      -1,    97,   148,    98,    -1,    99,   162,    -1,    70,   148,
      -1,    -1,   119,    -1,   120,    -1,   119,   120,    -1,   121,
      -1,   122,    -1,    46,    -1,     1,    46,    -1,    43,    46,
      -1,    43,   150,    46,    -1,    41,    46,    -1,    41,   150,
      46,    -1,   150,    46,    -1,    39,    46,    -1,    40,    46,
      -1,   124,    -1,   134,    -1,   123,    -1,   126,    -1,    44,
     119,    45,    -1,    44,    45,    -1,    28,   150,    46,   125,
      -1,    29,   150,    46,   125,    -1,   123,    -1,   123,    30,
      46,   123,    -1,   123,    31,   150,    46,   125,    -1,   123,
      32,   150,    46,   125,    -1,    37,   150,    46,    44,   127,
      45,    -1,   128,    -1,   127,   128,    -1,   129,    46,   123,
      -1,   130,    99,    -1,   131,    -1,   130,   100,   131,    -1,
      38,    -1,   150,    48,   150,    -1,   150,    -1,   150,    -1,
     150,    48,   150,    -1,   132,    -1,   133,   100,   132,    -1,
      22,    46,   123,    -1,    22,    46,   123,    26,   150,    46,
      -1,    22,    46,   123,    27,   150,    46,    -1,    22,    26,
     150,    46,   123,    -1,    22,    27,   150,    46,   123,    -1,
      22,   162,    23,   150,    24,   150,    25,   150,    46,   123,
      -1,    22,   162,    23,   150,    24,   150,    46,   123,    -1,
      22,   150,    46,   123,    -1,    36,    97,   150,    99,   133,
      98,    -1,    35,    97,   150,    99,   133,    98,    -1,    34,
      97,   150,    99,   133,    98,    -1,    33,    97,   150,    99,
     133,    98,    -1,   138,    -1,   137,   138,    -1,   139,    46,
      -1,    46,    -1,     1,    46,    -1,   140,    -1,   139,   100,
     140,    -1,   162,   101,   150,    -1,   162,    -1,   162,   102,
     150,   103,    -1,   104,   150,    -1,   142,    -1,   141,   142,
      -1,   143,    -1,   162,   143,    -1,    46,    -1,     1,    46,
      -1,    13,    46,    -1,    13,   155,    46,    -1,    14,    46,
      -1,    14,   155,    46,    -1,    15,    46,    -1,    15,   155,
      46,    -1,   165,    46,    -1,   165,   157,    46,    -1,   165,
     167,    46,    -1,   165,   157,   167,    46,    -1,    19,    46,
      -1,    19,   150,    46,    -1,    20,   150,    46,    -1,    21,
     150,    46,    -1,    21,    46,    -1,    51,   161,    46,    -1,
     145,    -1,   144,   145,    -1,    46,    -1,     1,    46,    -1,
     149,    99,   161,    -1,   147,    -1,   146,   147,    -1,    13,
     148,    46,    -1,    14,   148,    46,    -1,    15,   148,    46,
      -1,    46,    -1,     1,    46,    -1,   149,    -1,   163,   149,
      -1,   148,   100,   149,    -1,   162,    -1,   162,   102,   150,
     103,    -1,   159,    -1,   160,    -1,   161,    -1,    50,    97,
     155,    98,    -1,   151,    -1,    86,   151,    -1,    89,   151,
      -1,   151,    53,   150,    -1,   162,   104,   162,    -1,   150,
      65,   150,    -1,   150,    64,   150,    -1,   150,    66,   150,
      -1,   150,    67,   150,    -1,   150,    72,   150,    -1,   150,
      70,   150,    -1,   150,    71,   150,    -1,   150,    57,   150,
      -1,   150,    56,   150,    -1,   150,    61,   150,    -1,   150,
      60,   150,    -1,   150,    59,   150,    -1,   150,    58,   150,
      -1,   150,    69,   150,    -1,   150,    68,   150,    -1,   150,
      63,   150,    -1,   150,    62,   150,    -1,   150,    73,   150,
      -1,   150,    78,   150,    -1,   150,    77,   150,    -1,   150,
      76,   150,    -1,   150,    75,   150,    -1,   150,    74,   150,
      -1,   150,    54,   150,    -1,   150,    55,   150,    -1,   150,
      65,   101,   150,    -1,   150,    64,   101,   150,    -1,   150,
      67,   101,   150,    -1,   150,    66,   101,   150,    -1,   150,
      72,   101,   150,    -1,   150,    70,   101,   150,    -1,   150,
      71,   101,   150,    -1,   150,    69,   101,   150,    -1,   150,
      68,   101,   150,    -1,   150,    63,   101,   150,    -1,   150,
      62,   101,   150,    -1,   150,    73,   101,   150,    -1,   150,
      78,   101,   150,    -1,   150,    77,   101,   150,    -1,   150,
      76,   101,   150,    -1,   150,    75,   101,   150,    -1,   150,
      74,   101,   150,    -1,   150,    55,   101,   150,    -1,   150,
      54,   101,   150,    -1,   150,    56,   101,   150,    -1,   150,
      57,   101,   150,    -1,   150,    60,   101,   150,    -1,   150,
      61,   101,   150,    -1,    97,   150,    98,    -1,   105,   153,
      -1,   105,   162,    -1,   153,    -1,    64,   150,    -1,   106,
     150,    -1,    87,   150,    -1,    92,   150,    -1,    85,   150,
      -1,    82,   150,    -1,    81,   150,    -1,    80,   150,    -1,
      79,   150,    -1,    49,    -1,   151,    91,    -1,   151,    90,
      -1,    91,   151,    -1,    90,   151,    -1,   151,    88,    -1,
      88,   151,    -1,   151,    87,    -1,   151,    92,    -1,    96,
      97,   150,    98,    -1,    95,    97,   150,    98,    -1,    93,
      97,   150,    98,    -1,    94,    97,   150,    98,    -1,   135,
      -1,   136,    -1,   162,    -1,   162,   102,   150,   103,    -1,
     164,    -1,   164,   102,   158,   103,    -1,   152,   102,   150,
     103,    -1,   152,    -1,    13,   102,   150,   103,    -1,    14,
     102,   150,   103,    -1,    15,   102,   150,   103,    -1,   162,
     107,    13,    -1,   162,   107,    14,    -1,   162,   107,    15,
      -1,   162,    97,   155,    98,    -1,   162,   107,   162,    97,
     155,    98,    -1,   162,   107,   162,    -1,   162,   102,   150,
     103,   107,   162,    97,   155,    98,    -1,   162,   102,   150,
     103,   107,   162,    -1,   150,    -1,   159,   102,   150,   103,
      -1,   160,   102,   150,   103,    -1,   161,   102,   150,   103,
      -1,   154,    -1,   155,   100,   154,    -1,   150,    -1,   104,
     150,    -1,   156,    -1,   157,   100,   156,    -1,   150,    -1,
     150,    48,   150,    -1,     4,    -1,     6,    -1,     5,    -1,
       3,    -1,    42,    -1,    52,    -1,    18,    -1,    16,    -1,
     166,   165,    -1,    17,    -1,   166,    -1,   167,   166,    -1,
     167,   100,   166,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   202,   202,   203,   204,   208,   209,   213,   216,   217,
     221,   223,   225,   230,   232,   235,   237,   239,   241,   243,
     248,   253,   258,   263,   272,   273,   275,   279,   284,   290,
     291,   296,   300,   307,   309,   311,   313,   319,   321,   323,
     325,   327,   329,   331,   337,   339,   341,   343,   348,   350,
     355,   357,   362,   364,   366,   368,   373,   378,   380,   385,
     393,   401,   402,   407,   409,   411,   417,   419,   424,   425,
     430,   433,   435,   437,   440,   443,   451,   459,   473,   475,
     479,   481,   486,   488,   493,   495,   497,   502,   504,   509,
     511,   513,   517,   522,   524,   529,   530,   537,   539,   541,
     543,   545,   547,   549,   551,   553,   555,   557,   559,   561,
     563,   565,   567,   569,   571,   576,   578,   583,   585,   587,
     592,   594,   599,   601,   603,   605,   607,   612,   614,   617,
     622,   624,   630,   631,   632,   633,   635,   636,   638,   640,
     642,   644,   646,   648,   650,   652,   654,   656,   658,   660,
     662,   664,   666,   668,   670,   672,   674,   676,   678,   680,
     682,   684,   686,   688,   690,   692,   694,   696,   698,   700,
     702,   704,   706,   708,   710,   712,   714,   716,   718,   720,
     722,   724,   726,   728,   730,   732,   734,   736,   738,   740,
     742,   744,   746,   748,   759,   761,   766,   771,   773,   775,
     777,   779,   781,   783,   785,   787,   789,   791,   793,   795,
     797,   799,   801,   803,   805,   807,   809,   813,   814,   816,
     817,   819,   821,   826,   828,   830,   832,   834,   836,   841,
     843,   847,   851,   856,   865,   867,   871,   875,   882,   883,
     888,   890,   894,   896,   901,   903,   908,   912,   916,   920,
     922,   927,   933,   938,   940,   945,   950,   952,   954
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_IDENTIFIER", "T_NUM", "T_STRING",
  "T_FLOATNUM", "T_CON", "T_VAR", "T_DAT", "T_PUB", "T_PRI", "T_OBJ",
  "T_BYTE", "T_WORD", "T_LONG", "T_INSTR", "T_INSTRMODIFIER", "T_HWREG",
  "T_ORG", "T_RES", "T_FIT", "T_REPEAT", "T_FROM", "T_TO", "T_STEP",
  "T_WHILE", "T_UNTIL", "T_IF", "T_IFNOT", "T_ELSE", "T_ELSEIF",
  "T_ELSEIFNOT", "T_LOOKDOWN", "T_LOOKDOWNZ", "T_LOOKUP", "T_LOOKUPZ",
  "T_CASE", "T_OTHER", "T_QUIT", "T_NEXT", "T_ABORT", "T_RESULT",
  "T_RETURN", "T_INDENT", "T_OUTDENT", "T_EOLN", "T_EOF", "T_DOTS",
  "T_HERE", "T_STRINGPTR", "T_FILE", "T_ANNOTATION", "T_ASSIGN", "T_OR",
  "T_AND", "'<'", "'>'", "T_EQ", "T_NE", "T_LE", "T_GE", "T_LIMITMAX",
  "T_LIMITMIN", "'-'", "'+'", "'*'", "'/'", "T_HIGHMULT", "T_MODULUS",
  "'|'", "'^'", "'&'", "T_REV", "T_SAR", "T_SHR", "T_SHL", "T_ROTR",
  "T_ROTL", "T_ENCODE", "T_DECODE", "T_SQRT", "T_ABS", "T_BIT_NOT",
  "T_NEGATE", "T_NOT", "'@'", "'~'", "'?'", "T_DOUBLEAT", "T_DECREMENT",
  "T_INCREMENT", "T_DOUBLETILDE", "T_ROUND", "T_TRUNC", "T_FLOAT",
  "T_CONSTANT", "'('", "')'", "':'", "','", "'='", "'['", "']'", "'#'",
  "'\\\\'", "'!'", "'.'", "$accept", "input", "rest", "emptyline",
  "emptylines", "topelement", "funcdef", "optparamlist", "resultname",
  "localvars", "funcbody", "stmtlist", "stmt", "basicstmt", "compoundstmt",
  "stmtblock", "ifstmt", "elseblock", "casestmt", "casematchlist",
  "casematchitem", "casematch", "matchexprlist", "matchexpritem",
  "rangeexpritem", "rangeexprlist", "repeatstmt", "lookupexpr",
  "lookdownexpr", "conblock", "conline", "enumlist", "enumitem",
  "datblock", "datline", "basedatline", "objblock", "objline", "varblock",
  "varline", "identlist", "identdecl", "expr", "lhs", "memref", "funccall",
  "expritem", "exprlist", "operand", "operandlist", "range", "integer",
  "float", "string", "identifier", "annotation", "hwreg", "instruction",
  "instrmodifier", "modifierlist", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,    60,    62,   311,   312,
     313,   314,   315,   316,    45,    43,    42,    47,   317,   318,
     124,    94,    38,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,    64,   126,    63,   332,
     333,   334,   335,   336,   337,   338,   339,    40,    41,    58,
      44,    61,    91,    93,    35,    92,    33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   109,   109,   110,   110,   111,   112,   112,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     114,   114,   114,   114,   115,   115,   115,   116,   117,   118,
     118,   119,   119,   120,   120,   120,   120,   121,   121,   121,
     121,   121,   121,   121,   122,   122,   122,   122,   123,   123,
     124,   124,   125,   125,   125,   125,   126,   127,   127,   128,
     129,   130,   130,   131,   131,   131,   132,   132,   133,   133,
     134,   134,   134,   134,   134,   134,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   138,   139,   139,   140,
     140,   140,   140,   141,   141,   142,   142,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   144,   144,   145,   145,   145,
     146,   146,   147,   147,   147,   147,   147,   148,   148,   148,
     149,   149,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   151,   151,   151,
     151,   151,   151,   152,   152,   152,   152,   152,   152,   153,
     153,   153,   153,   153,   154,   154,   154,   154,   155,   155,
     156,   156,   157,   157,   158,   158,   159,   160,   161,   162,
     162,   163,   164,   165,   165,   166,   167,   167,   167
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     1,     0,     2,
       2,     2,     3,     2,     2,     3,     3,     4,     4,     2,
       3,     4,     5,     4,     0,     1,     3,     2,     2,     0,
       1,     1,     2,     1,     1,     1,     2,     2,     3,     2,
       3,     2,     2,     2,     1,     1,     1,     1,     3,     2,
       4,     4,     1,     4,     5,     5,     6,     1,     2,     3,
       2,     1,     3,     1,     3,     1,     1,     3,     1,     3,
       3,     6,     6,     5,     5,    10,     8,     4,     6,     6,
       6,     6,     1,     2,     2,     1,     2,     1,     3,     3,
       1,     4,     2,     1,     2,     1,     2,     1,     2,     2,
       3,     2,     3,     2,     3,     2,     3,     3,     4,     2,
       3,     3,     3,     2,     3,     1,     2,     1,     2,     3,
       1,     2,     3,     3,     3,     1,     2,     1,     2,     3,
       1,     4,     1,     1,     1,     4,     1,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     3,
       2,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     4,     4,     4,     4,     1,     1,     1,     4,     1,
       4,     4,     1,     4,     4,     4,     3,     3,     3,     4,
       6,     3,     9,     6,     1,     4,     4,     4,     1,     3,
       1,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     7,   251,     0,
       4,     2,     5,     8,     0,   249,   250,    85,     0,     0,
      82,     0,    87,    90,     0,     0,     0,     0,   125,     0,
     120,     0,     0,     0,     0,   253,   255,     0,     0,     0,
      97,     0,     0,    93,    95,     0,     0,     0,     0,     0,
      24,     0,     0,     0,     0,   117,     0,   115,     0,   130,
       1,     3,     6,    19,    86,   246,   248,   247,     0,     0,
       0,   252,     0,     0,     0,     0,   202,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   215,   216,
      92,   136,   222,   192,   132,   133,   134,   217,   219,    83,
      84,     0,     0,     0,   126,     0,   127,     0,     0,     0,
     121,    98,    99,   234,   238,     0,   132,   133,   134,   101,
       0,   103,     0,   109,     0,     0,   113,     0,     0,    94,
      96,     0,   105,     0,   240,   242,     0,   256,     0,   254,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    15,     0,    31,    33,    34,    46,    44,    47,    45,
       0,     0,     0,    25,     0,    16,     0,   118,   116,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
     193,   201,   200,   199,   198,   197,   137,   217,   195,   208,
     138,   206,   205,   196,     0,     0,     0,     0,     0,   190,
     191,   194,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   209,   207,
     204,   203,   210,     0,     0,     0,     0,     0,     0,    88,
      89,     0,   122,     0,   128,   123,   124,   100,     0,     0,
       0,     0,   102,   104,   110,   111,   112,   114,   241,   106,
       0,     0,   107,     0,   257,    36,     0,     0,     0,     0,
     217,     0,     0,     0,    42,    43,    39,     0,    37,     0,
      49,     0,    32,    41,     0,    20,     0,     0,     0,     0,
      17,    18,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,     0,
       0,     0,   164,     0,   165,     0,   149,     0,   148,   153,
     152,     0,   151,     0,   150,     0,   157,     0,   156,     0,
     142,     0,   141,     0,   143,     0,   144,     0,   155,     0,
     154,     0,   146,     0,   147,     0,   145,     0,   158,     0,
     163,     0,   162,     0,   161,     0,   160,     0,   159,   139,
       0,     0,     0,   140,   226,   227,   228,   231,   244,     0,
      91,   129,   239,     0,     0,     0,   243,   108,   258,     0,
       0,    70,     0,     0,     0,     0,     0,    40,    38,    48,
      26,    28,    27,    23,     0,    21,   131,   223,   224,   225,
       0,     0,     0,     0,   135,     0,   213,   214,   212,   211,
       0,   184,   183,   185,   186,   187,   188,   176,   175,   167,
     166,   169,   168,   174,   173,   171,   172,   170,   177,   182,
     181,   180,   179,   178,   221,   229,   218,     0,     0,   220,
     235,   236,   237,     0,     0,     0,     0,    77,     0,    52,
      50,    51,     0,    22,    68,     0,    66,     0,     0,     0,
     218,     0,     0,     0,   245,    73,    74,     0,     0,     0,
       0,     0,     0,    63,     0,    57,     0,     0,    61,    65,
      81,     0,     0,    80,    79,    78,   233,   230,    71,    72,
       0,     0,     0,     0,    56,    58,     0,    60,     0,     0,
      69,    67,     0,     0,     0,    53,     0,     0,    59,    62,
      64,     0,     0,    76,    54,    55,   232,     0,    75
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    63,    12,    49,   172,   298,   299,
     161,   162,   163,   164,   165,   166,   167,   460,   168,   484,
     485,   486,   487,   488,   464,   465,   169,    98,    99,    19,
      20,    21,    22,    42,    43,    44,    56,    57,    29,    30,
     115,   116,   123,   101,   102,   103,   124,   125,   145,   146,
     379,   104,   105,   106,   107,   117,   108,    47,    48,   148
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -380
static const yytype_int16 yypact[] =
{
     410,    10,   104,   466,   180,   180,   236,  -380,  -380,    40,
    -380,   410,   514,  -380,   -14,  -380,  -380,  -380,  4479,    38,
    -380,     9,  -380,   -92,     8,   180,   180,   180,  -380,   256,
    -380,    28,  1232,  1327,  1422,  -380,  -380,  1517,  4479,  1612,
    -380,    98,  4665,  -380,  -380,   353,   953,   947,     6,   528,
      24,    78,   528,    78,    64,  -380,   276,  -380,    16,    21,
    -380,  -380,  -380,   108,  -380,  -380,  -380,  -380,    82,   118,
     122,  -380,    81,   132,   152,   154,  -380,   163,  4479,  4479,
    4479,  4479,  4479,  4479,   584,  4479,   584,   584,   584,   584,
    4479,   165,   175,   178,   183,  4479,    78,  4479,  -380,  -380,
    6343,   289,   188,  -380,  -380,  -380,  -380,    75,   191,  -380,
    -380,     0,  4479,  4479,  -380,    11,  -380,    78,    22,    27,
    -380,  -380,  -380,  6343,  -380,    29,   197,   198,   202,  -380,
      32,  -380,    43,  -380,  5697,  5730,  -380,  5763,   260,  -380,
    -380,  4689,  -380,  4479,  6343,  -380,    -3,  -380,    -2,  -380,
     264,  1042,  4479,  4479,  4479,   265,   266,  1707,  1802,   755,
    -380,  -380,   658,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
    5796,   180,    46,   214,   528,  -380,   528,  -380,  -380,    98,
    4479,  -380,  4479,  4479,  4479,  4479,  4479,  4479,  4479,  4479,
    -380,  -380,  -380,  -380,  -380,  -380,  -380,   -19,  -380,  -380,
    -380,  -380,  -380,  -380,  4479,  4479,  4479,  4479,  5472,  -380,
      83,  -380,  1897,  2001,  2105,  2209,  4479,  4479,  2313,  2417,
    2521,  2625,  2729,  2833,  2937,  3041,  3145,  3249,  3353,  3457,
    3561,  3665,  3769,  3873,  3977,  4081,  4185,  4479,  -380,  -380,
    -380,  -380,  -380,  4479,  4479,  4479,    78,   393,  4479,  -380,
    6343,  4688,  -380,    78,  -380,  -380,  -380,  -380,  4479,  4479,
    4479,  4479,  -380,  -380,  -380,  -380,  -380,  -380,  6343,  -380,
    4289,    13,  -380,   299,  -380,  -380,  4479,  4479,   280,  5829,
     -11,  5862,  5895,  5928,  -380,  -380,  -380,  5961,  -380,  5994,
    -380,   852,  -380,  -380,   -13,  -380,   180,    78,    12,   274,
    -380,  -380,  -380,  4738,  4788,  4838,  4888,  5288,  5334,  5380,
    5426,     2,  4479,   231,  5517,  5562,  5607,  5652,  -380,  4479,
      78,  4479,  4712,  4479,  4761,  4479,   573,  4479,   573,   573,
     573,  4479,   573,  4479,   573,  4479,  4548,  4479,  4548,  4479,
     657,  4479,   657,  4479,   641,  4479,   641,  4479,   641,  4479,
     641,  4479,   734,  4479,   734,  4479,   508,  4479,  -380,  4479,
    -380,  4479,  -380,  4479,  -380,  4479,  -380,  4479,  -380,  6343,
    4938,    26,  4988,  -380,  -380,  -380,  -380,   229,  6256,   227,
    -380,  -380,  -380,  5038,  5088,  5138,  -380,  -380,  -380,  6027,
    6060,   120,   280,  4479,   280,   280,   288,  -380,  -380,  -380,
    -380,   214,  -380,  -380,   290,  -380,  -380,  -380,  -380,  -380,
    4479,  4479,  4479,  4479,  -380,  5188,  -380,  -380,  -380,  -380,
    5238,  6343,  6343,  6343,  6343,  6343,  6343,  6343,  6343,  6343,
    6343,  6343,  6343,  6343,  6343,  6343,  6343,  6343,  6343,  6343,
    6343,  6343,  6343,  6343,  -380,  -380,   233,  4479,  4479,  -380,
    -380,  -380,  -380,   280,   280,  4479,  4479,  -380,  4532,   223,
    -380,  -380,  4384,  -380,  -380,    57,  6287,    63,    76,    93,
    -380,   233,    78,   123,  6343,  -380,  -380,  6093,  6126,  4479,
     292,  4479,  4479,  -380,  1137,  -380,   298,   135,  -380,  6318,
    -380,  4479,  4479,  -380,  -380,  -380,   237,  -380,  -380,  -380,
    4586,   280,  6159,  6192,  -380,  -380,   280,  -380,  4384,  4479,
    -380,  6343,  4479,  4479,   280,  -380,   280,   280,  -380,  -380,
    6343,   140,  6225,  -380,  -380,  -380,  -380,   280,  -380
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -380,   335,   336,   296,  -380,  -380,    48,  -380,  -380,    54,
     -46,   212,  -160,  -380,  -380,  -103,  -380,  -379,  -380,  -380,
    -123,  -380,  -380,  -126,  -108,  -115,  -380,  -380,  -380,  -380,
     368,  -380,   277,   343,   -34,   345,  -380,   341,  -380,   362,
     -22,    -5,   -18,   269,  -380,   304,   144,   -16,   146,  -380,
    -380,     3,    37,    -8,   359,   148,  -380,   375,   -40,   279
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -31
static const yytype_int16 yytable[] =
{
     100,    58,   292,    15,   118,   119,   175,   147,   139,   112,
     113,    14,   393,    15,    36,    36,   461,   130,   132,   134,
     135,   137,    35,    36,   128,   128,   128,    15,   173,   144,
      36,   170,    64,   138,   170,   126,   126,   126,   -10,    14,
      60,    15,    16,   269,   272,   -10,   -10,   -10,   -10,   -10,
     -10,    58,    16,    52,   114,   110,    17,   252,   403,   387,
     190,   191,   192,   193,   194,   195,    16,   198,   255,   127,
     127,   127,   203,   256,   121,   257,     8,   208,   262,   211,
      16,    15,   296,   312,    17,   400,   244,   253,   313,   263,
     -10,   245,   295,   246,   250,   251,   247,   270,   273,   174,
     414,   176,   258,    66,    18,    24,   147,   139,   274,   111,
     177,   253,   254,   273,    18,   179,   296,    25,    26,    27,
      16,   171,   253,   180,   445,   268,   258,   253,   300,   258,
     301,   292,   258,   279,   281,   282,   283,   524,   525,   287,
     289,   170,    18,   258,   170,   297,   455,   456,    13,   294,
      28,    46,    51,    53,     7,   490,   170,   491,   170,    13,
      13,   493,   303,   491,   304,   305,   306,   307,   308,   309,
     310,   302,   244,   311,   494,   391,   491,   245,   185,   246,
     244,   128,   247,    15,   182,   319,   314,   315,   316,   317,
     320,   495,   126,   491,   322,   324,   326,   328,   329,   330,
     332,   334,   336,   338,   340,   342,   344,   346,   348,   350,
     352,   354,   356,   358,   360,   362,   364,   366,   368,   369,
     183,   497,    16,   258,   184,   370,   127,   372,   371,   186,
     378,   274,     8,   388,   507,   508,   128,    54,   526,    15,
     258,   383,   384,   385,   374,   375,   376,   126,   381,   187,
     128,   188,   144,   480,   481,   482,   -13,    24,   389,   390,
     189,   126,   204,   -13,   -13,   -13,   -13,   -13,   -13,    25,
      26,    27,   205,   170,   401,   206,   -14,    54,    16,    15,
     207,   127,    55,   -14,   -14,   -14,   -14,   -14,   -14,   457,
     243,   459,   459,   248,   415,   127,   467,   468,   469,   259,
     260,   420,    28,   421,   261,   422,   267,   423,   -13,   424,
     275,   284,   285,   425,   253,   426,    36,   427,    16,   428,
     405,   429,    55,   430,   159,   431,   447,   432,   -14,   433,
     449,   434,   462,   435,   512,   436,   463,   437,   501,   438,
     472,   439,   237,   440,   506,   441,    61,   442,    62,   443,
     475,   476,   404,   196,    31,   199,   200,   201,   202,   181,
      23,   505,    45,    50,    50,    59,    32,    33,    34,    35,
      36,   291,    37,    38,    39,   458,   238,   239,    23,   240,
     241,   242,   519,   510,    59,    59,    59,   109,   249,   141,
     140,   120,   466,   466,   466,   466,    15,   178,   515,    40,
     209,    45,   382,   518,    41,    45,   374,   375,   376,    59,
      50,   523,    50,   459,   459,    59,   386,     1,     2,     3,
       4,     5,     6,   149,   528,   271,     0,     0,     0,     0,
     474,   473,     0,     0,     0,    16,     0,   477,   478,   128,
       0,     0,     0,   197,   489,   197,   197,   197,   197,     0,
     126,     0,     0,     0,     0,   210,     7,     0,     0,     0,
       0,   500,     8,   502,   503,     0,   489,    31,     0,    15,
      23,     0,     0,   466,   511,     0,    59,     0,     0,    32,
      33,    34,    35,    36,   127,    37,    38,    39,     0,     0,
     489,   520,     0,     0,     0,   522,   521,     0,     0,     0,
      45,     0,     0,     0,   128,     0,     0,     0,    16,     0,
     280,     0,    40,     0,     0,   126,     0,    41,     8,     0,
       0,     1,     2,     3,     4,     5,     6,     0,   -29,   150,
      59,    15,    65,    66,    67,   -29,   -29,   -29,   -29,   -29,
     -29,    68,    69,    70,     0,     0,    71,     0,     0,   127,
     151,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,    72,    73,    74,    75,   154,     8,   155,   156,   157,
      16,   158,   159,     0,   160,     0,     0,    76,    77,     0,
     -29,   231,   232,   233,   234,   235,   236,    15,     0,     0,
       0,     0,    78,     0,     0,     0,     0,    68,    69,    70,
       0,     0,    71,     0,     0,   373,   377,    79,    80,    81,
      82,     0,    59,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    16,     0,     0,     0,
       0,     0,     0,    96,    97,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,     0,     0,     0,    59,   402,     0,   -30,   150,
       0,    15,    65,    66,    67,   -30,   -30,   -30,   -30,   -30,
     -30,    68,    69,    70,     0,     0,    71,     0,     0,   377,
     151,     0,     0,     0,     0,     0,   152,   153,     0,     0,
       0,    72,    73,    74,    75,   154,     0,   155,   156,   157,
      16,   158,   159,     0,   160,     0,     0,    76,    77,     0,
     -30,   228,   229,   230,   231,   232,   233,   234,   235,   236,
       0,     0,    78,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,     0,    79,    80,    81,
      82,     0,     0,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,   150,     0,    15,    65,
      66,    67,     0,    96,    97,     0,     0,     0,    68,    69,
      70,     0,     0,    71,     0,     0,     0,   151,     0,     0,
       0,     0,     0,   152,   153,     0,     0,     0,    72,    73,
      74,    75,   154,     0,   155,   156,   157,    16,   158,   159,
     290,   160,     0,     0,    76,    77,   230,   231,   232,   233,
     234,   235,   236,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   496,     0,     0,    79,    80,    81,    82,     0,     0,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,   150,     0,    15,    65,    66,    67,     0,
      96,    97,     0,     0,     0,    68,    69,    70,     0,     0,
      71,     0,     0,     0,   151,     0,     0,     0,     0,     0,
     152,   153,     0,     0,     0,    72,    73,    74,    75,   154,
       0,   155,   156,   157,    16,   158,   159,   399,   160,     0,
       0,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,    80,    81,    82,     0,     0,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      15,    65,    66,    67,    31,     0,    15,    96,    97,     0,
      68,    69,    70,     0,    36,    71,    32,    33,    34,    35,
      36,     0,    37,    38,    39,     0,     0,     0,     0,     0,
      72,    73,    74,    75,     0,     0,     0,     0,     0,    16,
       0,     0,     0,   142,     0,    16,    76,    77,     0,    40,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    15,    65,    66,    67,     0,
       0,   143,    96,    97,     0,    68,    69,    70,     0,     0,
      71,     0,     0,     0,     0,     0,     0,     0,   276,   277,
       0,     0,     0,     0,     0,    72,    73,    74,    75,     0,
       0,     0,     0,     0,    16,     0,     0,     0,   278,     0,
       0,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,    80,    81,    82,     0,     0,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      15,    65,    66,    67,     0,     0,     0,    96,    97,     0,
      68,    69,    70,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,     0,   483,     0,     0,     0,    16,
       0,     0,   504,     0,     0,     0,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    15,    65,    66,    67,     0,
       0,     0,    96,    97,     0,    68,    69,    70,     0,     0,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,     0,
       0,     0,     0,     0,    16,     0,     0,     0,   122,     0,
       0,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,    80,    81,    82,     0,     0,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      15,    65,    66,    67,     0,     0,     0,    96,    97,     0,
      68,    69,    70,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,     0,     0,     0,     0,     0,    16,
       0,     0,     0,   129,     0,     0,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    15,    65,    66,    67,     0,
       0,     0,    96,    97,     0,    68,    69,    70,     0,     0,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,     0,
       0,     0,     0,     0,    16,     0,     0,     0,   131,     0,
       0,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,    80,    81,    82,     0,     0,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      15,    65,    66,    67,     0,     0,     0,    96,    97,     0,
      68,    69,    70,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,     0,     0,     0,     0,     0,    16,
       0,     0,     0,   133,     0,     0,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    15,    65,    66,    67,     0,
       0,     0,    96,    97,     0,    68,    69,    70,     0,     0,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,     0,
       0,     0,     0,     0,    16,     0,     0,     0,   136,     0,
       0,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,    80,    81,    82,     0,     0,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      15,    65,    66,    67,     0,     0,     0,    96,    97,     0,
      68,    69,    70,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,     0,     0,     0,     0,     0,    16,
       0,     0,     0,   286,     0,     0,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    15,    65,    66,    67,     0,
       0,     0,    96,    97,     0,    68,    69,    70,     0,     0,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,     0,
       0,     0,     0,     0,    16,     0,     0,     0,   288,     0,
       0,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,    80,    81,    82,     0,     0,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      15,    65,    66,    67,     0,     0,     0,    96,    97,     0,
      68,    69,    70,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,     0,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,     0,     0,     0,   321,     0,
       0,     0,    96,    97,    15,    65,    66,    67,     0,     0,
       0,     0,     0,     0,    68,    69,    70,     0,     0,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    74,    75,     0,     0,
       0,     0,     0,    16,     0,     0,     0,     0,     0,     0,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,     0,     0,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,     0,
       0,     0,   323,     0,     0,     0,    96,    97,    15,    65,
      66,    67,     0,     0,     0,     0,     0,     0,    68,    69,
      70,     0,     0,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,    75,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,     0,     0,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,     0,     0,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     0,     0,     0,   325,     0,     0,     0,
      96,    97,    15,    65,    66,    67,     0,     0,     0,     0,
       0,     0,    68,    69,    70,     0,     0,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,     0,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,     0,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,     0,     0,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     0,     0,     0,
     327,     0,     0,     0,    96,    97,    15,    65,    66,    67,
       0,     0,     0,     0,     0,     0,    68,    69,    70,     0,
       0,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
       0,     0,     0,     0,     0,    16,     0,     0,     0,     0,
       0,     0,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,     0,     0,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,     0,     0,     0,   331,     0,     0,     0,    96,    97,
      15,    65,    66,    67,     0,     0,     0,     0,     0,     0,
      68,    69,    70,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,     0,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,     0,     0,     0,   333,     0,
       0,     0,    96,    97,    15,    65,    66,    67,     0,     0,
       0,     0,     0,     0,    68,    69,    70,     0,     0,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    74,    75,     0,     0,
       0,     0,     0,    16,     0,     0,     0,     0,     0,     0,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,     0,     0,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,     0,
       0,     0,   335,     0,     0,     0,    96,    97,    15,    65,
      66,    67,     0,     0,     0,     0,     0,     0,    68,    69,
      70,     0,     0,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,    75,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,     0,     0,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,     0,     0,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     0,     0,     0,   337,     0,     0,     0,
      96,    97,    15,    65,    66,    67,     0,     0,     0,     0,
       0,     0,    68,    69,    70,     0,     0,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,     0,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,     0,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,     0,     0,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     0,     0,     0,
     339,     0,     0,     0,    96,    97,    15,    65,    66,    67,
       0,     0,     0,     0,     0,     0,    68,    69,    70,     0,
       0,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
       0,     0,     0,     0,     0,    16,     0,     0,     0,     0,
       0,     0,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,     0,     0,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,     0,     0,     0,   341,     0,     0,     0,    96,    97,
      15,    65,    66,    67,     0,     0,     0,     0,     0,     0,
      68,    69,    70,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,     0,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,     0,     0,     0,   343,     0,
       0,     0,    96,    97,    15,    65,    66,    67,     0,     0,
       0,     0,     0,     0,    68,    69,    70,     0,     0,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    74,    75,     0,     0,
       0,     0,     0,    16,     0,     0,     0,     0,     0,     0,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,     0,     0,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,     0,
       0,     0,   345,     0,     0,     0,    96,    97,    15,    65,
      66,    67,     0,     0,     0,     0,     0,     0,    68,    69,
      70,     0,     0,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,    75,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,     0,     0,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,     0,     0,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     0,     0,     0,   347,     0,     0,     0,
      96,    97,    15,    65,    66,    67,     0,     0,     0,     0,
       0,     0,    68,    69,    70,     0,     0,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,     0,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,     0,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,     0,     0,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     0,     0,     0,
     349,     0,     0,     0,    96,    97,    15,    65,    66,    67,
       0,     0,     0,     0,     0,     0,    68,    69,    70,     0,
       0,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
       0,     0,     0,     0,     0,    16,     0,     0,     0,     0,
       0,     0,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,     0,     0,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,     0,     0,     0,   351,     0,     0,     0,    96,    97,
      15,    65,    66,    67,     0,     0,     0,     0,     0,     0,
      68,    69,    70,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,     0,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,     0,     0,     0,   353,     0,
       0,     0,    96,    97,    15,    65,    66,    67,     0,     0,
       0,     0,     0,     0,    68,    69,    70,     0,     0,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    74,    75,     0,     0,
       0,     0,     0,    16,     0,     0,     0,     0,     0,     0,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,     0,     0,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,     0,
       0,     0,   355,     0,     0,     0,    96,    97,    15,    65,
      66,    67,     0,     0,     0,     0,     0,     0,    68,    69,
      70,     0,     0,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,    75,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,     0,     0,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,     0,     0,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     0,     0,     0,   357,     0,     0,     0,
      96,    97,    15,    65,    66,    67,     0,     0,     0,     0,
       0,     0,    68,    69,    70,     0,     0,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,     0,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,     0,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,     0,     0,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     0,     0,     0,
     359,     0,     0,     0,    96,    97,    15,    65,    66,    67,
       0,     0,     0,     0,     0,     0,    68,    69,    70,     0,
       0,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
       0,     0,     0,     0,     0,    16,     0,     0,     0,     0,
       0,     0,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,     0,     0,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,     0,     0,     0,   361,     0,     0,     0,    96,    97,
      15,    65,    66,    67,     0,     0,     0,     0,     0,     0,
      68,    69,    70,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,     0,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,     0,     0,     0,   363,     0,
       0,     0,    96,    97,    15,    65,    66,    67,     0,     0,
       0,     0,     0,     0,    68,    69,    70,     0,     0,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    74,    75,     0,     0,
       0,     0,     0,    16,     0,     0,     0,     0,     0,     0,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,     0,     0,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,     0,
       0,     0,   365,     0,     0,     0,    96,    97,    15,    65,
      66,    67,     0,     0,     0,     0,     0,     0,    68,    69,
      70,     0,     0,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,    75,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,     0,     0,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,     0,     0,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     0,     0,     0,   367,     0,     0,     0,
      96,    97,    15,    65,    66,    67,     0,     0,     0,     0,
       0,     0,    68,    69,    70,     0,     0,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,     0,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,     0,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,     0,     0,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    15,    65,    66,
      67,     0,     0,   143,    96,    97,     0,    68,    69,    70,
       0,     0,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,     0,   483,     0,     0,     0,    16,     0,     0,     0,
       0,     0,     0,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,    80,    81,    82,     0,     0,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    15,    65,    66,    67,     0,     0,     0,    96,
      97,     0,    68,    69,    70,     0,     0,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,     0,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,     0,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   479,     0,    79,    80,
      81,    82,     0,     0,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     0,     0,     0,
       0,     0,     0,     0,    96,    97,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   513,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,     0,     0,     0,
       0,     0,   514,     0,     0,     0,     0,     0,     0,     0,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   -11,    31,     0,    15,     0,
       0,     0,   -11,   -11,   -11,   -11,   -11,   -11,    32,    33,
      34,    35,    36,     0,    37,    38,    39,     0,     0,   -12,
      31,     0,    15,     0,     0,     0,   -12,   -12,   -12,   -12,
     -12,   -12,    32,    33,    34,    35,    36,    16,    37,    38,
      39,    40,     0,     0,     0,     0,    41,   -11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,     0,     0,     0,    40,     0,     0,     0,     0,
      41,   -12,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   380,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
       0,   406,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   407,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   408,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   409,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   444,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   446,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   450,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   451,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   452,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   470,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   471,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   410,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   411,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   412,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   413,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     318,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   416,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     417,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   418,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   264,     0,     0,     0,     0,     0,     0,
     419,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   265,     0,     0,     0,
       0,     0,     0,     0,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   266,
       0,     0,     0,     0,     0,     0,     0,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   293,     0,     0,     0,     0,     0,     0,     0,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   392,     0,     0,     0,     0,
       0,     0,     0,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   394,     0,
       0,     0,     0,     0,     0,     0,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   395,     0,     0,     0,     0,     0,     0,     0,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   396,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   397,     0,     0,
       0,     0,     0,     0,     0,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     398,     0,     0,     0,     0,     0,     0,     0,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   453,     0,     0,     0,     0,     0,     0,
       0,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   454,     0,     0,     0,
       0,     0,     0,     0,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   498,
       0,     0,     0,     0,     0,     0,     0,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   499,     0,     0,     0,     0,     0,     0,     0,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   516,     0,     0,     0,     0,
       0,     0,     0,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   517,     0,
       0,     0,     0,     0,     0,     0,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   527,     0,     0,     0,     0,     0,     0,     0,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   448,     0,     0,     0,     0,     0,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   492,     0,     0,     0,     0,
       0,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   509,     0,     0,     0,
       0,     0,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236
};

static const yytype_int16 yycheck[] =
{
      18,     6,   162,     3,    26,    27,    52,    47,    42,   101,
     102,     1,    23,     3,    17,    17,   395,    33,    34,    37,
      38,    39,    16,    17,    32,    33,    34,     3,    50,    47,
      17,    49,    46,    41,    52,    32,    33,    34,     0,     1,
       0,     3,    42,    46,    46,     7,     8,     9,    10,    11,
      12,    56,    42,     5,    46,    46,    46,    46,    46,    46,
      78,    79,    80,    81,    82,    83,    42,    85,    46,    32,
      33,    34,    90,    46,    46,    46,    52,    95,    46,    97,
      42,     3,    70,   102,    46,    98,    97,   100,   107,    46,
      52,   102,    46,   104,   112,   113,   107,   100,   100,    51,
      98,    53,   100,     5,   104,     1,   146,   141,   148,   100,
      46,   100,   117,   100,   104,    99,    70,    13,    14,    15,
      42,    97,   100,   102,    98,   143,   100,   100,   174,   100,
     176,   291,   100,   151,   152,   153,   154,   516,   517,   157,
     158,   159,   104,   100,   162,    99,    26,    27,     0,   171,
      46,     3,     4,     5,    46,    98,   174,   100,   176,    11,
      12,    98,   180,   100,   182,   183,   184,   185,   186,   187,
     188,   179,    97,   189,    98,   278,   100,   102,    97,   104,
      97,   189,   107,     3,   102,   102,   204,   205,   206,   207,
     107,    98,   189,   100,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     102,    98,    42,   100,   102,   243,   189,   245,   244,    97,
     248,   271,    52,   273,    99,   100,   244,     1,    98,     3,
     100,   259,   260,   261,    13,    14,    15,   244,   253,    97,
     258,    97,   270,    30,    31,    32,     0,     1,   276,   277,
      97,   258,    97,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    97,   291,   296,    97,     0,     1,    42,     3,
      97,   244,    46,     7,     8,     9,    10,    11,    12,   392,
     102,   394,   395,   102,   312,   258,   411,   412,   413,   102,
     102,   319,    46,   321,   102,   323,    46,   325,    52,   327,
      46,    46,    46,   331,   100,   333,    17,   335,    42,   337,
      46,   339,    46,   341,    44,   343,    97,   345,    52,   347,
     103,   349,    44,   351,    97,   353,    46,   355,    46,   357,
     107,   359,    53,   361,    46,   363,    11,   365,    12,   367,
     453,   454,   298,    84,     1,    86,    87,    88,    89,    63,
       1,   484,     3,     4,     5,     6,    13,    14,    15,    16,
      17,   159,    19,    20,    21,   393,    87,    88,    19,    90,
      91,    92,   508,   491,    25,    26,    27,    19,   111,    46,
      45,    29,   410,   411,   412,   413,     3,    56,   501,    46,
      96,    42,   258,   506,    51,    46,    13,    14,    15,    50,
      51,   514,    53,   516,   517,    56,   270,     7,     8,     9,
      10,    11,    12,    48,   527,   146,    -1,    -1,    -1,    -1,
     448,   447,    -1,    -1,    -1,    42,    -1,   455,   456,   447,
      -1,    -1,    -1,    84,   462,    86,    87,    88,    89,    -1,
     447,    -1,    -1,    -1,    -1,    96,    46,    -1,    -1,    -1,
      -1,   479,    52,   481,   482,    -1,   484,     1,    -1,     3,
     111,    -1,    -1,   491,   492,    -1,   117,    -1,    -1,    13,
      14,    15,    16,    17,   447,    19,    20,    21,    -1,    -1,
     508,   509,    -1,    -1,    -1,   513,   512,    -1,    -1,    -1,
     141,    -1,    -1,    -1,   512,    -1,    -1,    -1,    42,    -1,
     151,    -1,    46,    -1,    -1,   512,    -1,    51,    52,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,     0,     1,
     171,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    -1,    -1,   512,
      22,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    52,    39,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    49,    50,    -1,
      52,    73,    74,    75,    76,    77,    78,     3,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    -1,    18,    -1,    -1,   246,   247,    79,    80,    81,
      82,    -1,   253,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    42,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,   296,   297,    -1,     0,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    -1,    -1,   320,
      22,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    49,    50,    -1,
      52,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    64,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    79,    80,    81,
      82,    -1,    -1,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,     1,    -1,     3,     4,
       5,     6,    -1,   105,   106,    -1,    -1,    -1,    13,    14,
      15,    -1,    -1,    18,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    49,    50,    72,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   472,    -1,    -1,    79,    80,    81,    82,    -1,    -1,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,     1,    -1,     3,     4,     5,     6,    -1,
     105,   106,    -1,    -1,    -1,    13,    14,    15,    -1,    -1,
      18,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    -1,    -1,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,     1,    -1,     3,   105,   106,    -1,
      13,    14,    15,    -1,    17,    18,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    46,    -1,    42,    49,    50,    -1,    46,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,    -1,
      -1,   104,   105,   106,    -1,    13,    14,    15,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    -1,    -1,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,    -1,    -1,    -1,   105,   106,    -1,
      13,    14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    38,    -1,    -1,    -1,    42,
      -1,    -1,    45,    -1,    -1,    -1,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,    -1,
      -1,    -1,   105,   106,    -1,    13,    14,    15,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    -1,    -1,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,    -1,    -1,    -1,   105,   106,    -1,
      13,    14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    46,    -1,    -1,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,    -1,
      -1,    -1,   105,   106,    -1,    13,    14,    15,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    -1,    -1,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,    -1,    -1,    -1,   105,   106,    -1,
      13,    14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    46,    -1,    -1,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,    -1,
      -1,    -1,   105,   106,    -1,    13,    14,    15,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    -1,    -1,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,    -1,    -1,    -1,   105,   106,    -1,
      13,    14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    46,    -1,    -1,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     3,     4,     5,     6,    -1,
      -1,    -1,   105,   106,    -1,    13,    14,    15,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    -1,    -1,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       3,     4,     5,     6,    -1,    -1,    -1,   105,   106,    -1,
      13,    14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    -1,    -1,    -1,   101,    -1,
      -1,    -1,   105,   106,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    -1,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    -1,
      -1,    -1,   101,    -1,    -1,    -1,   105,   106,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    -1,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    -1,    -1,    -1,   101,    -1,    -1,    -1,
     105,   106,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    -1,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,    -1,    -1,
     101,    -1,    -1,    -1,   105,   106,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    -1,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    -1,    -1,    -1,   101,    -1,    -1,    -1,   105,   106,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    -1,    -1,    -1,   101,    -1,
      -1,    -1,   105,   106,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    -1,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    -1,
      -1,    -1,   101,    -1,    -1,    -1,   105,   106,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    -1,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    -1,    -1,    -1,   101,    -1,    -1,    -1,
     105,   106,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    -1,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,    -1,    -1,
     101,    -1,    -1,    -1,   105,   106,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    -1,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    -1,    -1,    -1,   101,    -1,    -1,    -1,   105,   106,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    -1,    -1,    -1,   101,    -1,
      -1,    -1,   105,   106,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    -1,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    -1,
      -1,    -1,   101,    -1,    -1,    -1,   105,   106,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    -1,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    -1,    -1,    -1,   101,    -1,    -1,    -1,
     105,   106,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    -1,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,    -1,    -1,
     101,    -1,    -1,    -1,   105,   106,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    -1,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    -1,    -1,    -1,   101,    -1,    -1,    -1,   105,   106,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    -1,    -1,    -1,   101,    -1,
      -1,    -1,   105,   106,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    -1,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    -1,
      -1,    -1,   101,    -1,    -1,    -1,   105,   106,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    -1,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    -1,    -1,    -1,   101,    -1,    -1,    -1,
     105,   106,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    -1,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,    -1,    -1,
     101,    -1,    -1,    -1,   105,   106,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    -1,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    -1,    -1,    -1,   101,    -1,    -1,    -1,   105,   106,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    -1,    -1,    -1,   101,    -1,
      -1,    -1,   105,   106,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    -1,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    -1,
      -1,    -1,   101,    -1,    -1,    -1,   105,   106,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    -1,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    -1,    -1,    -1,   101,    -1,    -1,    -1,
     105,   106,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    -1,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,     3,     4,     5,
       6,    -1,    -1,   104,   105,   106,    -1,    13,    14,    15,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    -1,    -1,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,     3,     4,     5,     6,    -1,    -1,    -1,   105,
     106,    -1,    13,    14,    15,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    79,    80,
      81,    82,    -1,    -1,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   106,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    25,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,     0,     1,    -1,     3,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    -1,    -1,     0,
       1,    -1,     3,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    42,    19,    20,
      21,    46,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      51,    52,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,   103,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,   103,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    48,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    48,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    48,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,     9,    10,    11,    12,    46,    52,   109,
     110,   111,   113,   163,     1,     3,    42,    46,   104,   137,
     138,   139,   140,   162,     1,    13,    14,    15,    46,   146,
     147,     1,    13,    14,    15,    16,    17,    19,    20,    21,
      46,    51,   141,   142,   143,   162,   163,   165,   166,   114,
     162,   163,   114,   163,     1,    46,   144,   145,   149,   162,
       0,   109,   110,   112,    46,     4,     5,     6,    13,    14,
      15,    18,    33,    34,    35,    36,    49,    50,    64,    79,
      80,    81,    82,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   105,   106,   135,   136,
     150,   151,   152,   153,   159,   160,   161,   162,   164,   138,
      46,   100,   101,   102,    46,   148,   149,   163,   148,   148,
     147,    46,    46,   150,   154,   155,   159,   160,   161,    46,
     155,    46,   155,    46,   150,   150,    46,   150,   161,   142,
     143,   141,    46,   104,   150,   156,   157,   166,   167,   165,
       1,    22,    28,    29,    37,    39,    40,    41,    43,    44,
      46,   118,   119,   120,   121,   122,   123,   124,   126,   134,
     150,    97,   115,   148,   114,   118,   114,    46,   145,    99,
     102,   111,   102,   102,   102,    97,    97,    97,    97,    97,
     150,   150,   150,   150,   150,   150,   151,   162,   150,   151,
     151,   151,   151,   150,    97,    97,    97,    97,   150,   153,
     162,   150,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    53,    87,    88,
      90,    91,    92,   102,    97,   102,   104,   107,   102,   140,
     150,   150,    46,   100,   149,    46,    46,    46,   100,   102,
     102,   102,    46,    46,    46,    46,    46,    46,   150,    46,
     100,   167,    46,   100,   166,    46,    26,    27,    46,   150,
     162,   150,   150,   150,    46,    46,    46,   150,    46,   150,
      45,   119,   120,    46,   148,    46,    70,    99,   116,   117,
     118,   118,   161,   150,   150,   150,   150,   150,   150,   150,
     150,   155,   102,   107,   150,   150,   150,   150,    98,   102,
     107,   101,   150,   101,   150,   101,   150,   101,   150,   150,
     150,   101,   150,   101,   150,   101,   150,   101,   150,   101,
     150,   101,   150,   101,   150,   101,   150,   101,   150,   101,
     150,   101,   150,   101,   150,   101,   150,   101,   150,   101,
     150,   101,   150,   101,   150,   101,   150,   101,   150,   150,
     150,   155,   150,   162,    13,    14,    15,   162,   150,   158,
     103,   149,   154,   150,   150,   150,   156,    46,   166,   150,
     150,   123,    46,    23,    46,    46,    46,    46,    46,    45,
      98,   148,   162,    46,   117,    46,   103,   103,   103,   103,
      99,    99,    99,    99,    98,   150,    98,    98,    98,    98,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   103,    98,   103,    97,    48,   103,
     103,   103,   103,    46,    46,    26,    27,   123,   150,   123,
     125,   125,    44,    46,   132,   133,   150,   133,   133,   133,
     103,   103,   107,   155,   150,   123,   123,   150,   150,    24,
      30,    31,    32,    38,   127,   128,   129,   130,   131,   150,
      98,   100,    48,    98,    98,    98,   162,    98,    46,    46,
     150,    46,   150,   150,    45,   128,    46,    99,   100,    48,
     132,   150,    97,    25,    46,   123,    46,    46,   123,   131,
     150,   155,   150,   123,   125,   125,    98,    46,   123
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 10:
#line 222 "spin.y"
    { (yyval) = current->conblock = AddToList(current->conblock, (yyvsp[(2) - (2)])); ;}
    break;

  case 11:
#line 224 "spin.y"
    { (yyval) = current->datblock = AddToList(current->datblock, (yyvsp[(2) - (2)])); ;}
    break;

  case 12:
#line 226 "spin.y"
    { 
      current->datannotations = AddToList(current->datannotations, (yyvsp[(2) - (3)]));
      (yyval) = current->datblock = AddToList(current->datblock, (yyvsp[(3) - (3)])); 
  ;}
    break;

  case 13:
#line 231 "spin.y"
    { (yyval) = current->varblock = AddToList(current->varblock, (yyvsp[(2) - (2)])); ;}
    break;

  case 14:
#line 233 "spin.y"
    { DeclareObjects((yyvsp[(2) - (2)]));
    (yyval) = current->objblock = AddToList(current->objblock, (yyvsp[(2) - (2)])); ;}
    break;

  case 15:
#line 236 "spin.y"
    { DeclareFunction(1, (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), NULL, (yyvsp[(1) - (3)])); ;}
    break;

  case 16:
#line 238 "spin.y"
    { DeclareFunction(0, (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), NULL, (yyvsp[(1) - (3)])); ;}
    break;

  case 17:
#line 240 "spin.y"
    { DeclareFunction(1, (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(1) - (4)])); ;}
    break;

  case 18:
#line 242 "spin.y"
    { DeclareFunction(0, (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(1) - (4)])); ;}
    break;

  case 19:
#line 244 "spin.y"
    { DeclareAnnotation((yyvsp[(1) - (2)])); ;}
    break;

  case 20:
#line 249 "spin.y"
    { AST *funcdecl = NewAST(AST_FUNCDECL, (yyvsp[(1) - (3)]), NULL);
    AST *funcvars = NewAST(AST_FUNCVARS, (yyvsp[(2) - (3)]), NULL);
    (yyval) = NewAST(AST_FUNCDEF, funcdecl, funcvars);
  ;}
    break;

  case 21:
#line 254 "spin.y"
    { AST *funcdecl = NewAST(AST_FUNCDECL, (yyvsp[(1) - (4)]), NULL);
    AST *funcvars = NewAST(AST_FUNCVARS, (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
    (yyval) = NewAST(AST_FUNCDEF, funcdecl, funcvars);
  ;}
    break;

  case 22:
#line 259 "spin.y"
    { AST *funcdecl = NewAST(AST_FUNCDECL, (yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]));
    AST *funcvars = NewAST(AST_FUNCVARS, (yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
    (yyval) = NewAST(AST_FUNCDEF, funcdecl, funcvars);
  ;}
    break;

  case 23:
#line 264 "spin.y"
    { AST *funcdecl = NewAST(AST_FUNCDECL, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
    AST *funcvars = NewAST(AST_FUNCVARS, (yyvsp[(2) - (4)]), NULL);
    (yyval) = NewAST(AST_FUNCDEF, funcdecl, funcvars);
  ;}
    break;

  case 24:
#line 272 "spin.y"
    { (yyval) = NULL; ;}
    break;

  case 25:
#line 274 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 26:
#line 276 "spin.y"
    { (yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 27:
#line 280 "spin.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 28:
#line 285 "spin.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 29:
#line 290 "spin.y"
    { (yyval) = NULL; ;}
    break;

  case 30:
#line 292 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 31:
#line 297 "spin.y"
    {
        (yyval) = (yyvsp[(1) - (1)]);
    ;}
    break;

  case 32:
#line 301 "spin.y"
    {
      (yyval) = AddToList((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); 
  ;}
    break;

  case 33:
#line 308 "spin.y"
    {  (yyval) = NewCommentedStatement((yyvsp[(1) - (1)])); ;}
    break;

  case 34:
#line 310 "spin.y"
    { (yyval) = NewStatement((yyvsp[(1) - (1)])); ;}
    break;

  case 35:
#line 312 "spin.y"
    { (yyval) = NULL; ;}
    break;

  case 36:
#line 314 "spin.y"
    { (yyval) = NULL; ;}
    break;

  case 37:
#line 320 "spin.y"
    { (yyval) = NewCommentedAST(AST_RETURN, NULL, NULL, (yyvsp[(1) - (2)])); ;}
    break;

  case 38:
#line 322 "spin.y"
    { (yyval) = NewCommentedAST(AST_RETURN, (yyvsp[(2) - (3)]), NULL, (yyvsp[(1) - (3)])); ;}
    break;

  case 39:
#line 324 "spin.y"
    { (yyval) = AstAbort(NULL); ;}
    break;

  case 40:
#line 326 "spin.y"
    { (yyval) = AstAbort((yyvsp[(2) - (3)])); ;}
    break;

  case 41:
#line 328 "spin.y"
    { (yyval) = (yyvsp[(1) - (2)]); ;}
    break;

  case 42:
#line 330 "spin.y"
    { (yyval) = NewAST(AST_QUIT, NULL, NULL); ;}
    break;

  case 43:
#line 332 "spin.y"
    { (yyval) = NewAST(AST_NEXT, NULL, NULL); ;}
    break;

  case 44:
#line 338 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 45:
#line 340 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 46:
#line 342 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 47:
#line 344 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 48:
#line 349 "spin.y"
    { (yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 49:
#line 351 "spin.y"
    { (yyval) = NULL; ;}
    break;

  case 50:
#line 356 "spin.y"
    { (yyval) = NewCommentedAST(AST_IF, (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]), (yyvsp[(1) - (4)])); ;}
    break;

  case 51:
#line 358 "spin.y"
    { (yyval) = NewCommentedAST(AST_IF, AstOperator(T_NOT, NULL, (yyvsp[(2) - (4)])), (yyvsp[(4) - (4)]), (yyvsp[(1) - (4)])); ;}
    break;

  case 52:
#line 363 "spin.y"
    { (yyval) = NewAST(AST_THENELSE, (yyvsp[(1) - (1)]), NULL); ;}
    break;

  case 53:
#line 365 "spin.y"
    { (yyval) = NewCommentedAST(AST_THENELSE, (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]), (yyvsp[(2) - (4)])); ;}
    break;

  case 54:
#line 367 "spin.y"
    { (yyval) = NewAST(AST_THENELSE, (yyvsp[(1) - (5)]), NewAST(AST_STMTLIST, NewCommentedAST(AST_IF, (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), (yyvsp[(2) - (5)])), NULL)); ;}
    break;

  case 55:
#line 369 "spin.y"
    { (yyval) = NewAST(AST_THENELSE, (yyvsp[(1) - (5)]), NewAST(AST_STMTLIST, NewCommentedAST(AST_IF, AstOperator(T_NOT, NULL, (yyvsp[(3) - (5)])), (yyvsp[(5) - (5)]), (yyvsp[(2) - (5)])), NULL)); ;}
    break;

  case 56:
#line 374 "spin.y"
    { (yyval) = NewCommentedAST(AST_CASE, (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(1) - (6)])); ;}
    break;

  case 57:
#line 379 "spin.y"
    { (yyval) = NewAST(AST_LISTHOLDER, (yyvsp[(1) - (1)]), NULL); ;}
    break;

  case 58:
#line 381 "spin.y"
    { (yyval) = AddToList((yyvsp[(1) - (2)]), NewAST(AST_LISTHOLDER, (yyvsp[(2) - (2)]), NULL)); ;}
    break;

  case 59:
#line 386 "spin.y"
    {
        AST *slist = NewAST(AST_STMTLIST, (yyvsp[(3) - (3)]), NULL);
        (yyval) = NewAST(AST_CASEITEM, (yyvsp[(1) - (3)]), slist);
    ;}
    break;

  case 60:
#line 394 "spin.y"
    {
      (yyval) = (yyvsp[(1) - (2)]);
      EstablishIndent(&current->L, -1);
      resetLineState(&current->L);
  ;}
    break;

  case 62:
#line 403 "spin.y"
    { (yyval) = AddToList((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 63:
#line 408 "spin.y"
    { (yyval) = NewAST(AST_OTHER, NULL, NULL); ;}
    break;

  case 64:
#line 410 "spin.y"
    { (yyval) = NewAST(AST_EXPRLIST, NewAST(AST_RANGE, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])), NULL); current->needsBetween = 1; ;}
    break;

  case 65:
#line 412 "spin.y"
    { (yyval) = NewAST(AST_EXPRLIST, (yyvsp[(1) - (1)]), NULL); ;}
    break;

  case 66:
#line 418 "spin.y"
    { (yyval) = NewAST(AST_EXPRLIST, (yyvsp[(1) - (1)]), NULL); ;}
    break;

  case 67:
#line 420 "spin.y"
    { (yyval) = NewAST(AST_EXPRLIST, NewAST(AST_RANGE, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])), NULL); ;}
    break;

  case 69:
#line 426 "spin.y"
    { (yyval) = AddToList((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 70:
#line 431 "spin.y"
    {   AST *body = (yyvsp[(3) - (3)]); body = CheckYield(body); 
        (yyval) = NewCommentedAST(AST_WHILE, AstInteger(1), body, (yyvsp[(1) - (3)])); ;}
    break;

  case 71:
#line 434 "spin.y"
    { (yyval) = NewCommentedAST(AST_DOWHILE, (yyvsp[(5) - (6)]), CheckYield((yyvsp[(3) - (6)])), (yyvsp[(1) - (6)])); ;}
    break;

  case 72:
#line 436 "spin.y"
    { (yyval) = NewCommentedAST(AST_DOWHILE, AstOperator(T_NOT, NULL, (yyvsp[(5) - (6)])), CheckYield((yyvsp[(3) - (6)])), (yyvsp[(1) - (6)])); ;}
    break;

  case 73:
#line 438 "spin.y"
    {   AST *body = (yyvsp[(5) - (5)]); body = CheckYield(body); 
        (yyval) = NewCommentedAST(AST_WHILE, (yyvsp[(3) - (5)]), body, (yyvsp[(1) - (5)])); ;}
    break;

  case 74:
#line 441 "spin.y"
    {   AST *body = (yyvsp[(5) - (5)]); body = CheckYield(body); 
        (yyval) = NewCommentedAST(AST_WHILE, AstOperator(T_NOT, NULL, (yyvsp[(3) - (5)])), body, (yyvsp[(1) - (5)])); ;}
    break;

  case 75:
#line 444 "spin.y"
    {
      AST *from, *to, *step; 
      step = NewAST(AST_STEP, (yyvsp[(8) - (10)]), (yyvsp[(10) - (10)]));
      to = NewAST(AST_TO, (yyvsp[(6) - (10)]), step);
      from = NewAST(AST_FROM, (yyvsp[(4) - (10)]), to);
      (yyval) = NewCommentedAST(AST_COUNTREPEAT, (yyvsp[(2) - (10)]), from, (yyvsp[(1) - (10)]));
    ;}
    break;

  case 76:
#line 452 "spin.y"
    {
      AST *from, *to, *step; 
      step = NewAST(AST_STEP, AstInteger(1), (yyvsp[(8) - (8)]));
      to = NewAST(AST_TO, (yyvsp[(6) - (8)]), step);
      from = NewAST(AST_FROM, (yyvsp[(4) - (8)]), to);
      (yyval) = NewCommentedAST(AST_COUNTREPEAT, (yyvsp[(2) - (8)]), from, (yyvsp[(1) - (8)]));
    ;}
    break;

  case 77:
#line 460 "spin.y"
    {
      AST *from, *to, *step;
      AST *body = (yyvsp[(4) - (4)]);
      body = CheckYield(body);
      step = NewAST(AST_STEP, AstInteger(1), body);
      to = NewAST(AST_TO, (yyvsp[(2) - (4)]), step);
      from = NewAST(AST_FROM, NULL, to);
      (yyval) = NewCommentedAST(AST_COUNTREPEAT, NULL, from, (yyvsp[(1) - (4)]));
    ;}
    break;

  case 78:
#line 474 "spin.y"
    { (yyval) = AstLookup(AST_LOOKUP, 0, (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)])); ;}
    break;

  case 79:
#line 476 "spin.y"
    { (yyval) = AstLookup(AST_LOOKUP, 1, (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)])); ;}
    break;

  case 80:
#line 480 "spin.y"
    { (yyval) = AstLookup(AST_LOOKDOWN, 0, (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)])); ;}
    break;

  case 81:
#line 482 "spin.y"
    { (yyval) = AstLookup(AST_LOOKDOWN, 1, (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)])); ;}
    break;

  case 82:
#line 487 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 83:
#line 489 "spin.y"
    { (yyval) = AddToList((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 84:
#line 494 "spin.y"
    { (yyval) = (yyvsp[(1) - (2)]); ;}
    break;

  case 85:
#line 496 "spin.y"
    { (yyval) = NULL; ;}
    break;

  case 86:
#line 498 "spin.y"
    { (yyval) = NULL; ;}
    break;

  case 87:
#line 503 "spin.y"
    { (yyval) = CommentedListHolder((yyvsp[(1) - (1)])); ;}
    break;

  case 88:
#line 505 "spin.y"
    { (yyval) = AddToList((yyvsp[(1) - (3)]), CommentedListHolder((yyvsp[(3) - (3)]))); ;}
    break;

  case 89:
#line 510 "spin.y"
    { (yyval) = NewAST(AST_ASSIGN, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 90:
#line 512 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 91:
#line 514 "spin.y"
    {
        (yyval) = NewAST(AST_ENUMSKIP, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
    ;}
    break;

  case 92:
#line 518 "spin.y"
    { (yyval) = NewAST(AST_ENUMSET, (yyvsp[(2) - (2)]), NULL); ;}
    break;

  case 93:
#line 523 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); SkipComments(); ;}
    break;

  case 94:
#line 525 "spin.y"
    { (yyval) = AddToList((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 96:
#line 531 "spin.y"
    {   AST *linebreak = NewAST(AST_LINEBREAK, NULL, NULL);
        (yyval) = AddToList(linebreak, AddToList((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]))); 
    ;}
    break;

  case 97:
#line 538 "spin.y"
    { (yyval) = NULL; ;}
    break;

  case 98:
#line 540 "spin.y"
    { (yyval) = NULL; ;}
    break;

  case 99:
#line 542 "spin.y"
    { (yyval) = NewAST(AST_BYTELIST, NULL, NULL); ;}
    break;

  case 100:
#line 544 "spin.y"
    { (yyval) = NewAST(AST_BYTELIST, (yyvsp[(2) - (3)]), NULL); ;}
    break;

  case 101:
#line 546 "spin.y"
    { (yyval) = NewAST(AST_WORDLIST, NULL, NULL); ;}
    break;

  case 102:
#line 548 "spin.y"
    { (yyval) = NewAST(AST_WORDLIST, (yyvsp[(2) - (3)]), NULL); ;}
    break;

  case 103:
#line 550 "spin.y"
    { (yyval) = NewAST(AST_LONGLIST, NULL, NULL); ;}
    break;

  case 104:
#line 552 "spin.y"
    { (yyval) = NewAST(AST_LONGLIST, (yyvsp[(2) - (3)]), NULL); ;}
    break;

  case 105:
#line 554 "spin.y"
    { (yyval) = NewAST(AST_INSTRHOLDER, (yyvsp[(1) - (2)]), NULL); ;}
    break;

  case 106:
#line 556 "spin.y"
    { (yyval) = NewAST(AST_INSTRHOLDER, AddToList((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)])), NULL); ;}
    break;

  case 107:
#line 558 "spin.y"
    { (yyval) = NewAST(AST_INSTRHOLDER, AddToList((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)])), NULL); ;}
    break;

  case 108:
#line 560 "spin.y"
    { (yyval) = NewAST(AST_INSTRHOLDER, AddToList((yyvsp[(1) - (4)]), AddToList((yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]))), NULL); ;}
    break;

  case 109:
#line 562 "spin.y"
    { (yyval) = NewAST(AST_ORG, NULL, NULL); ;}
    break;

  case 110:
#line 564 "spin.y"
    { (yyval) = NewAST(AST_ORG, (yyvsp[(2) - (3)]), NULL); ;}
    break;

  case 111:
#line 566 "spin.y"
    { (yyval) = NewAST(AST_RES, (yyvsp[(2) - (3)]), NULL); ;}
    break;

  case 112:
#line 568 "spin.y"
    { (yyval) = NewAST(AST_FIT, (yyvsp[(2) - (3)]), NULL); ;}
    break;

  case 113:
#line 570 "spin.y"
    { (yyval) = NewAST(AST_FIT, AstInteger(0x1f0), NULL); ;}
    break;

  case 114:
#line 572 "spin.y"
    { (yyval) = NewAST(AST_FILE, (yyvsp[(2) - (3)]), NULL); ;}
    break;

  case 115:
#line 577 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 116:
#line 579 "spin.y"
    { (yyval) = AddToList((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 117:
#line 584 "spin.y"
    { (yyval) = NULL; ;}
    break;

  case 118:
#line 586 "spin.y"
    { (yyval) = NULL; ;}
    break;

  case 119:
#line 588 "spin.y"
    { (yyval) = NewObject((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 120:
#line 593 "spin.y"
    { (yyval) = CommentedListHolder((yyvsp[(1) - (1)])); ;}
    break;

  case 121:
#line 595 "spin.y"
    { (yyval) = AddToList((yyvsp[(1) - (2)]), CommentedListHolder((yyvsp[(2) - (2)]))); ;}
    break;

  case 122:
#line 600 "spin.y"
    { (yyval) = NewAST(AST_BYTELIST, (yyvsp[(2) - (3)]), NULL); ;}
    break;

  case 123:
#line 602 "spin.y"
    { (yyval) = NewAST(AST_WORDLIST, (yyvsp[(2) - (3)]), NULL); ;}
    break;

  case 124:
#line 604 "spin.y"
    { (yyval) = NewAST(AST_LONGLIST, (yyvsp[(2) - (3)]), NULL); ;}
    break;

  case 125:
#line 606 "spin.y"
    { (yyval) = NULL; ;}
    break;

  case 126:
#line 608 "spin.y"
    { (yyval) = NULL; ;}
    break;

  case 127:
#line 613 "spin.y"
    { (yyval) = NewAST(AST_LISTHOLDER, (yyvsp[(1) - (1)]), NULL); ;}
    break;

  case 128:
#line 615 "spin.y"
    { (yyval) = AddToList(NewAST(AST_LISTHOLDER, (yyvsp[(1) - (2)]), NULL),
                   NewAST(AST_LISTHOLDER, (yyvsp[(2) - (2)]), NULL)); ;}
    break;

  case 129:
#line 618 "spin.y"
    { (yyval) = AddToList((yyvsp[(1) - (3)]), NewAST(AST_LISTHOLDER, (yyvsp[(3) - (3)]), NULL)); ;}
    break;

  case 130:
#line 623 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 131:
#line 625 "spin.y"
    { (yyval) = NewAST(AST_ARRAYDECL, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])); ;}
    break;

  case 135:
#line 634 "spin.y"
    { (yyval) = NewAST(AST_STRINGPTR, (yyvsp[(3) - (4)]), NULL); ;}
    break;

  case 137:
#line 637 "spin.y"
    { (yyval) = NewAST(AST_ADDROF, (yyvsp[(2) - (2)]), NULL); ;}
    break;

  case 138:
#line 639 "spin.y"
    { (yyval) = NewAST(AST_DATADDROF, (yyvsp[(2) - (2)]), NULL); ;}
    break;

  case 139:
#line 641 "spin.y"
    { (yyval) = AstAssign(T_ASSIGN, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 140:
#line 643 "spin.y"
    { (yyval) = NewAST(AST_CONSTREF, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 141:
#line 645 "spin.y"
    { (yyval) = AstOperator('+', (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 142:
#line 647 "spin.y"
    { (yyval) = AstOperator('-', (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 143:
#line 649 "spin.y"
    { (yyval) = AstOperator('*', (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 144:
#line 651 "spin.y"
    { (yyval) = AstOperator('/', (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 145:
#line 653 "spin.y"
    { (yyval) = AstOperator('&', (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 146:
#line 655 "spin.y"
    { (yyval) = AstOperator('|', (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 147:
#line 657 "spin.y"
    { (yyval) = AstOperator('^', (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 148:
#line 659 "spin.y"
    { (yyval) = AstOperator('>', (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 149:
#line 661 "spin.y"
    { (yyval) = AstOperator('<', (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 150:
#line 663 "spin.y"
    { (yyval) = AstOperator(T_GE, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 151:
#line 665 "spin.y"
    { (yyval) = AstOperator(T_LE, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 152:
#line 667 "spin.y"
    { (yyval) = AstOperator(T_NE, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 153:
#line 669 "spin.y"
    { (yyval) = AstOperator(T_EQ, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 154:
#line 671 "spin.y"
    { (yyval) = AstOperator(T_MODULUS, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 155:
#line 673 "spin.y"
    { (yyval) = AstOperator(T_HIGHMULT, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); current->needsHighmult = 1; ;}
    break;

  case 156:
#line 675 "spin.y"
    { (yyval) = AstOperator(T_LIMITMIN, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); current->needsMinMax = 1; ;}
    break;

  case 157:
#line 677 "spin.y"
    { (yyval) = AstOperator(T_LIMITMAX, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); current->needsMinMax = 1;;}
    break;

  case 158:
#line 679 "spin.y"
    { (yyval) = AstOperator(T_REV, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 159:
#line 681 "spin.y"
    { (yyval) = AstOperator(T_ROTL, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); current->needsRotate = 1; ;}
    break;

  case 160:
#line 683 "spin.y"
    { (yyval) = AstOperator(T_ROTR, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); current->needsRotate = 1; ;}
    break;

  case 161:
#line 685 "spin.y"
    { (yyval) = AstOperator(T_SHL, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 162:
#line 687 "spin.y"
    { (yyval) = AstOperator(T_SHR, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); current->needsShr = 1; ;}
    break;

  case 163:
#line 689 "spin.y"
    { (yyval) = AstOperator(T_SAR, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 164:
#line 691 "spin.y"
    { (yyval) = AstOperator(T_OR, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 165:
#line 693 "spin.y"
    { (yyval) = AstOperator(T_AND, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 166:
#line 695 "spin.y"
    { (yyval) = AstAssign('+', (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 167:
#line 697 "spin.y"
    { (yyval) = AstAssign('-', (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 168:
#line 699 "spin.y"
    { (yyval) = AstAssign('/', (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 169:
#line 701 "spin.y"
    { (yyval) = AstAssign('*', (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 170:
#line 703 "spin.y"
    { (yyval) = AstAssign('&', (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 171:
#line 705 "spin.y"
    { (yyval) = AstAssign('|', (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 172:
#line 707 "spin.y"
    { (yyval) = AstAssign('^', (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 173:
#line 709 "spin.y"
    { (yyval) = AstAssign(T_MODULUS, (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 174:
#line 711 "spin.y"
    { (yyval) = AstAssign(T_HIGHMULT, (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); current->needsHighmult = 1;;}
    break;

  case 175:
#line 713 "spin.y"
    { (yyval) = AstAssign(T_LIMITMIN, (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); current->needsMinMax = 1; ;}
    break;

  case 176:
#line 715 "spin.y"
    { (yyval) = AstAssign(T_LIMITMAX, (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); current->needsMinMax = 1; ;}
    break;

  case 177:
#line 717 "spin.y"
    { (yyval) = AstAssign(T_REV, (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 178:
#line 719 "spin.y"
    { (yyval) = AstAssign(T_ROTL, (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); current->needsRotate = 1; ;}
    break;

  case 179:
#line 721 "spin.y"
    { (yyval) = AstAssign(T_ROTR, (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); current->needsRotate = 1; ;}
    break;

  case 180:
#line 723 "spin.y"
    { (yyval) = AstAssign(T_SHL, (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 181:
#line 725 "spin.y"
    { (yyval) = AstAssign(T_SHR, (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); current->needsShr = 1; ;}
    break;

  case 182:
#line 727 "spin.y"
    { (yyval) = AstAssign(T_SAR, (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 183:
#line 729 "spin.y"
    { (yyval) = AstAssign(T_AND, (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 184:
#line 731 "spin.y"
    { (yyval) = AstAssign(T_OR, (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 185:
#line 733 "spin.y"
    { (yyval) = AstAssign('<', (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 186:
#line 735 "spin.y"
    { (yyval) = AstAssign('>', (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 187:
#line 737 "spin.y"
    { (yyval) = AstAssign(T_LE, (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 188:
#line 739 "spin.y"
    { (yyval) = AstAssign(T_GE, (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 189:
#line 741 "spin.y"
    { (yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 190:
#line 743 "spin.y"
    { (yyval) = AstCatch((yyvsp[(2) - (2)])); ;}
    break;

  case 191:
#line 745 "spin.y"
    { (yyval) = AstCatch(NewAST(AST_FUNCCALL, (yyvsp[(2) - (2)]), NULL)); ;}
    break;

  case 192:
#line 747 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 193:
#line 749 "spin.y"
    {
        AST *op = (yyvsp[(2) - (2)]);
        /* special case -x where x is a float constant */
        if (op->kind == AST_FLOAT) {
            op->d.ival ^= 0x80000000U;
            (yyval) = op;
        } else {
            (yyval) = AstOperator(T_NEGATE, NULL, (yyvsp[(2) - (2)]));
        }
    ;}
    break;

  case 194:
#line 760 "spin.y"
    { (yyval) = AstOperator(T_BIT_NOT, NULL, (yyvsp[(2) - (2)])); ;}
    break;

  case 195:
#line 762 "spin.y"
    { AST *shf;
      shf = AstOperator(T_SHL, (yyvsp[(2) - (2)]), AstInteger(24));
      (yyval) = AstOperator(T_SAR, shf, AstInteger(24)); 
    ;}
    break;

  case 196:
#line 767 "spin.y"
    { AST *shf;
      shf = AstOperator(T_SHL, (yyvsp[(2) - (2)]), AstInteger(16));
      (yyval) = AstOperator(T_SAR, shf, AstInteger(16)); 
    ;}
    break;

  case 197:
#line 772 "spin.y"
    { (yyval) = AstOperator(T_NOT, NULL, (yyvsp[(2) - (2)])); ;}
    break;

  case 198:
#line 774 "spin.y"
    { (yyval) = AstOperator(T_ABS, NULL, (yyvsp[(2) - (2)])); current->needsStdlib = 1; ;}
    break;

  case 199:
#line 776 "spin.y"
    { (yyval) = AstOperator(T_SQRT, NULL, (yyvsp[(2) - (2)])); current->needsSqrt = 1; ;}
    break;

  case 200:
#line 778 "spin.y"
    { (yyval) = AstOperator(T_DECODE, NULL, (yyvsp[(2) - (2)])); ;}
    break;

  case 201:
#line 780 "spin.y"
    { (yyval) = AstOperator(T_ENCODE, NULL, (yyvsp[(2) - (2)])); current->needsBitEncode = 1; ;}
    break;

  case 202:
#line 782 "spin.y"
    { (yyval) = NewAST(AST_HERE, NULL, NULL); ;}
    break;

  case 203:
#line 784 "spin.y"
    { (yyval) = AstOperator(T_INCREMENT, (yyvsp[(1) - (2)]), NULL); ;}
    break;

  case 204:
#line 786 "spin.y"
    { (yyval) = AstOperator(T_DECREMENT, (yyvsp[(1) - (2)]), NULL); ;}
    break;

  case 205:
#line 788 "spin.y"
    { (yyval) = AstOperator(T_INCREMENT, NULL, (yyvsp[(2) - (2)])); ;}
    break;

  case 206:
#line 790 "spin.y"
    { (yyval) = AstOperator(T_DECREMENT, NULL, (yyvsp[(2) - (2)])); ;}
    break;

  case 207:
#line 792 "spin.y"
    { (yyval) = AstOperator('?', (yyvsp[(1) - (2)]), NULL); current->needsRand = 1; ;}
    break;

  case 208:
#line 794 "spin.y"
    { (yyval) = AstOperator('?', NULL, (yyvsp[(2) - (2)])); current->needsRand = 1; ;}
    break;

  case 209:
#line 796 "spin.y"
    { (yyval) = NewAST(AST_POSTEFFECT, (yyvsp[(1) - (2)]), NULL); (yyval)->d.ival = '~'; ;}
    break;

  case 210:
#line 798 "spin.y"
    { (yyval) = NewAST(AST_POSTEFFECT, (yyvsp[(1) - (2)]), NULL); (yyval)->d.ival = T_DOUBLETILDE; ;}
    break;

  case 211:
#line 800 "spin.y"
    { (yyval) = NewAST(AST_CONSTANT, (yyvsp[(3) - (4)]), NULL); ;}
    break;

  case 212:
#line 802 "spin.y"
    { (yyval) = NewAST(AST_TOFLOAT, (yyvsp[(3) - (4)]), NULL); ;}
    break;

  case 213:
#line 804 "spin.y"
    { (yyval) = NewAST(AST_ROUND, (yyvsp[(3) - (4)]), NULL); ;}
    break;

  case 214:
#line 806 "spin.y"
    { (yyval) = NewAST(AST_TRUNC, (yyvsp[(3) - (4)]), NULL); ;}
    break;

  case 215:
#line 808 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); current->needsLookup = 1; ;}
    break;

  case 216:
#line 810 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); current->needsLookdown = 1; ;}
    break;

  case 218:
#line 815 "spin.y"
    { (yyval) = NewAST(AST_ARRAYREF, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])); ;}
    break;

  case 220:
#line 818 "spin.y"
    { (yyval) = NewAST(AST_RANGEREF, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])); ;}
    break;

  case 221:
#line 820 "spin.y"
    { (yyval) = NewAST(AST_ARRAYREF, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])); ;}
    break;

  case 222:
#line 822 "spin.y"
    { (yyval) = NewAST(AST_ARRAYREF, (yyvsp[(1) - (1)]), AstInteger(0)); ;}
    break;

  case 223:
#line 827 "spin.y"
    { (yyval) = NewAST(AST_MEMREF, ast_type_byte, (yyvsp[(3) - (4)])); ;}
    break;

  case 224:
#line 829 "spin.y"
    { (yyval) = NewAST(AST_MEMREF, ast_type_word, (yyvsp[(3) - (4)])); ;}
    break;

  case 225:
#line 831 "spin.y"
    { (yyval) = NewAST(AST_MEMREF, ast_type_long, (yyvsp[(3) - (4)])); ;}
    break;

  case 226:
#line 833 "spin.y"
    { (yyval) = NewAST(AST_MEMREF, ast_type_byte, NewAST(AST_ADDROF, (yyvsp[(1) - (3)]), NULL)); ;}
    break;

  case 227:
#line 835 "spin.y"
    { (yyval) = NewAST(AST_MEMREF, ast_type_word, NewAST(AST_ADDROF, (yyvsp[(1) - (3)]), NULL)); ;}
    break;

  case 228:
#line 837 "spin.y"
    { (yyval) = NewAST(AST_MEMREF, ast_type_long, NewAST(AST_ADDROF, (yyvsp[(1) - (3)]), NULL)); ;}
    break;

  case 229:
#line 842 "spin.y"
    { (yyval) = NewAST(AST_FUNCCALL, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])); ;}
    break;

  case 230:
#line 844 "spin.y"
    { 
        (yyval) = NewAST(AST_FUNCCALL, NewAST(AST_METHODREF, (yyvsp[(1) - (6)]), (yyvsp[(3) - (6)])), (yyvsp[(5) - (6)]));
    ;}
    break;

  case 231:
#line 848 "spin.y"
    { 
        (yyval) = NewAST(AST_FUNCCALL, NewAST(AST_METHODREF, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])), NULL);
    ;}
    break;

  case 232:
#line 852 "spin.y"
    { 
        AST *arr = NewAST(AST_ARRAYREF, (yyvsp[(1) - (9)]), (yyvsp[(3) - (9)]));
        (yyval) = NewAST(AST_FUNCCALL, NewAST(AST_METHODREF, arr, (yyvsp[(6) - (9)])), (yyvsp[(8) - (9)]));
    ;}
    break;

  case 233:
#line 857 "spin.y"
    { 
        AST *arr = NewAST(AST_ARRAYREF, (yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]));
        (yyval) = NewAST(AST_FUNCCALL, NewAST(AST_METHODREF, arr, (yyvsp[(6) - (6)])), NULL);
    ;}
    break;

  case 234:
#line 866 "spin.y"
    { (yyval) = NewAST(AST_EXPRLIST, (yyvsp[(1) - (1)]), NULL); ;}
    break;

  case 235:
#line 868 "spin.y"
    {
       (yyval) = NewAST(AST_EXPRLIST, NewAST(AST_ARRAYDECL, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])), NULL);
   ;}
    break;

  case 236:
#line 872 "spin.y"
    {
       (yyval) = NewAST(AST_EXPRLIST, NewAST(AST_ARRAYDECL, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])), NULL);
   ;}
    break;

  case 237:
#line 876 "spin.y"
    {
       (yyval) = NewAST(AST_EXPRLIST, NewAST(AST_ARRAYDECL, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])), NULL);
   ;}
    break;

  case 239:
#line 884 "spin.y"
    { (yyval) = AddToList((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 240:
#line 889 "spin.y"
    { (yyval) = NewAST(AST_EXPRLIST, (yyvsp[(1) - (1)]), NULL); ;}
    break;

  case 241:
#line 891 "spin.y"
    { (yyval) = AddToList(NewAST(AST_EXPRLIST, (yyvsp[(2) - (2)]), NULL), AstInstrModifier(IMMEDIATE_INSTR)); ;}
    break;

  case 242:
#line 895 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 243:
#line 897 "spin.y"
    { (yyval) = AddToList((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 244:
#line 902 "spin.y"
    { (yyval) = NewAST(AST_RANGE, (yyvsp[(1) - (1)]), NULL); ;}
    break;

  case 245:
#line 904 "spin.y"
    { (yyval) = NewAST(AST_RANGE, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 249:
#line 921 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 250:
#line 923 "spin.y"
    { (yyval) = NewAST(AST_RESULT, NULL, NULL); ;}
    break;

  case 251:
#line 928 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 252:
#line 934 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 253:
#line 939 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 254:
#line 941 "spin.y"
    { (yyval) = AddToList((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)])); ;}
    break;

  case 255:
#line 946 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 256:
#line 951 "spin.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 257:
#line 953 "spin.y"
    { (yyval) = AddToList((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 258:
#line 955 "spin.y"
    { (yyval) = AddToList((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4521 "spin.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 958 "spin.y"


void
yyerror(char *msg)
{
    fprintf(stderr, "%s:%d: %s\n", current->L.fileName, current->L.lineCounter, msg);
    gl_errors++;
}

