/*
 * Spin to C/C++ converter
 * Copyright 2011-2014 Total Spectrum Software Inc.
 * main header file
 */

#ifndef SPINC_H
#define SPINC_H

#include <stdint.h>

#define VERSIONSTR "1.91"

/* Yacc define */
/* we need to put it up here because the lexer includes spin.tab.h */
#define YYSTYPE AST *

#include "ast.h"
#include "lexer.h"
#include "symbol.h"
#include "expr.h"

/* useful macro */
#define N_ELEMENTS(x) (sizeof(x)/sizeof(x[0]))

/* some globals */

/* compilation flags */
extern int gl_ccode;  /* if set, we are outputting C code instead of C++*/
extern int gl_nospin; /* if set, suppress output of Spin methods */
extern int gl_static; /* if set, objects are static; this is the default in C mode */
extern int gl_preprocess; /* if set, run the preprocessor on input */
extern int gl_gas_dat;    /* if set, output GAS assembly code inline */
extern char *gl_header; /* comment to prepend to files */
extern int gl_normalizeIdents; /* if set, change case of all identifiers to all lower except first letter upper */

/* types */
extern AST *ast_type_long;
extern AST *ast_type_word;
extern AST *ast_type_byte;

typedef enum InstrOps {
    NO_OPERANDS,
    NOP_OPERANDS,
    SRC_OPERAND_ONLY,
    DST_OPERAND_ONLY,
    TWO_OPERANDS,
    CALL_OPERAND,
    JMPRET_OPERANDS,
} InstrOps;

/* structure describing a PASM instruction */
typedef struct Instruction {
    const char *name;      /* instruction mnemonic */
    uint32_t    binary;    /* binary form of instruction */
    InstrOps    ops;       /* operand forms */
} Instruction;

/* instruction modifiers */
typedef struct instrmodifier {
    const char *name;
    uint32_t modifier;
} InstrModifier;

#define IMMEDIATE_INSTR (1<<22)

/* structure describing a dat block label */
typedef struct label {
    uint32_t offset;
    uint32_t asmval;
    AST *type;  /* type of value following the label */
} Label;

/* structure describing a hardware register */
typedef struct hwreg {
    const char *name;
    uint32_t    addr;
    const char *cname;
} HwReg;

/* forward declaration */
typedef struct parserstate ParserState;

/* structure describing an object function (method) */
typedef struct funcdef {
    struct funcdef *next;
    int is_public;
    const char *name;
    AST *type;        /* the function type, normally long */
    AST *annotations; /* any annotations for the function (section, etc.) */
    AST *doccomment;  /* documentation comments */
    int numparams;
    AST *params;      /* parameter list */
    AST *locals;      /* local variables */
    AST *body;
    AST *resultexpr;
    /* array holding parameters, if necessary */
    const char *parmarray;
    /* true if the result should be placed in the parameter array */
    int result_in_parmarray;
    /* array holding locals, if necessary */
    const char *localarray;
    /* total size of localarray */
    int localarray_len;

    /* local symbols */
    SymbolTable localsyms;

    /* parser state during compilation */
    ParserState *parse;

    /* various flags */
    unsigned result_used:1;
} Function;

/* structure describing a builtin function */
typedef struct builtin {
    const char *name;
    int         numparameters;
    /* function to actually print the builtin */
    void        (*printit)(FILE *, struct builtin *, AST *params);
    const char *cname;  /* c version of the name */

    /* hook called during parsing, or NULL if none needed */
    void        (*parsehook)(struct builtin *);
} Builtin;

/* parser state structure */
struct parserstate {
    struct parserstate *next;  /* to make a stack */
    /* top level objects */
    AST *conblock;
    AST *datblock;
    AST *varblock;
    AST *objblock;
    AST *funcblock;
    AST *topcomment;
    AST *botcomment;

    /* annotations for the DAT block */
    AST *datannotations;

    /* list of methods */
    Function *functions;

    /* lexer state */
    LexStream L;

    /* the symbol table */
    SymbolTable objsyms;

    /* various file name related strings */
    const char *fullname;    /* full name and path of the file */
    char *basename;    /* the file name without ".spin" */
    char *classname;   /* the class name */

    char *datname;     /* the name of the dat section (normally "dat") */

    /* flags for emitting macros */
    char needsMinMax;
    char needsRotate;
    char needsShr;
    char needsStdlib;
    char needsYield;
    char needsBetween;
    char needsAbortdef;
    char needsRand;
    char needsSqrt;
    char needsLookup;
    char needsLookdown;
    char needsHighmult;
    char needsBitEncode;
    char needsLockFuncs;

    /* flags for output */
    char printLabelsVerbatim;
    char fixImmediate;
    char volatileVariables;
    char sawToken;
};

/* the current parser state */
extern ParserState *current;
extern Function *curfunc;

/* defines given on the command line */
struct cmddefs {
    const char *name;
    const char *val;
};

/* printing functions */

/* flags for PrintVarList */
#define PUBLIC 0
#define PRIVATE 1
#define LOCAL 2
#define VOLATILE 4
int PrintVarList(FILE *f, AST *type, AST *list, int flags);

void PrintAssign(FILE *f, AST *left, AST *right);

/* create a new AST describing a table lookup */
AST *NewLookup(AST *expr, AST *table);

/* declare labels in PASM */
void DeclareLabels(ParserState *);

/* declare constants */
void DeclareConstants(AST **conlist);

/* declare all functions */
void DeclareFunctions(ParserState *);

/* declare a function */
/* "body" is the list of statements */
/* "funcdef" is an AST_FUNCDEF; this is set up as follows:
            AST_FUNCDEF
           /           \
    AST_FUNCDECL       AST_FUNCVARS
     /      \            /       \
    name    result    parameters locals

 here:
 "name" and "result" are AST_IDENTIFIERS
 "parameters" and "locals" are AST_LISTHOLDERS
 holding a list of identifiers and/or array declarations

 "annotate" is a list of C++ annotation strings
 "comment" is the list of comments preceding this function
*/
void DeclareFunction(int is_public, AST *funcdef, AST *body, AST *annotate, AST *comment);
void DeclareAnnotation(AST *annotation);
int PrintPublicFunctionDecls(FILE *f, ParserState *P);
int PrintPrivateFunctionDecls(FILE *f, ParserState *P);
void PrintFunctionBodies(FILE *f, ParserState *P);
void PrintDataBlock(FILE *f, ParserState *P, int isBinary);
void PrintDataBlockForGas(FILE *f, ParserState *P, int inlineAsm);
int  EnterVars(int kind, SymbolTable *stab, void *symval, AST *varlist);
void PrintAnnotationList(FILE *f, AST *ast, char terminal);
void PrintIndentedComment(FILE *f, AST *ast, int indent);

#define PrintComment(f, ast) PrintIndentedComment(f, ast, 0)

void DeclareObjects(AST *newobjs);

/* defines for isBinary flag of PrintDataBlock */
#define TEXT_OUTPUT 0
#define BINARY_OUTPUT 1

/* checks to see whether an AST is a function parameter */
int funcParameterNum(Function *func, AST *var);

/* code for printing errors */
extern int gl_errors;
void ERROR(AST *, const char *msg, ...);

extern SymbolTable reservedWords;
extern void InitPasm(int prop2);

extern int IsReservedWord(const char *str);

/* return a new object */
AST *NewObject(AST *identifier, AST *string);

/* utility to create a new string by adding an extension to a base file name */
/* if the base string has an extension already, we remove it */
char *ReplaceExtension(const char *base, const char *ext);

/* different kinds of output functions */
void OutputCppCode(const char *name, ParserState *P, int printMain);
void OutputDatFile(const char *name, ParserState *P);
void OutputGasFile(const char *name, ParserState *P);

/* function to canonicalize an identifier */
void CanonicalizeIdentifier(char *idstr);

#endif
