#ifndef SYMBOL_H
#define SYMBOL_H

#include <stdint.h>


typedef enum symtype {
    SYM_UNKNOWN = 0,     /* unknown symbol */
    SYM_HW_REG,          /* hardware register */
    SYM_RESERVED,        /* reserved word */
    SYM_CONSTANT,        /* integer constant */
    SYM_VARIABLE,        /* member variable */
    SYM_INSTR,           /* PASM instruction */
    SYM_HWREG,           /* hardware register */
    SYM_FUNCTION,        /* function */
    SYM_LABEL,           /* dat block label */
    SYM_INSTRMODIFIER,   /* effect or condition */
    SYM_BUILTIN,         /* builtin symbol */
    SYM_NAME,            /* a plain identifier */
    SYM_OBJECT,          /* an object name */
    SYM_PARAMETER,       /* function parameter */
    SYM_FLOAT_CONSTANT,  /* floating point constant */
    SYM_RESULT,          /* result expression */
    SYM_LOCALVAR,        /* local variable in function */
    SYM_TEMPVAR,         /* temporary variable in function */
} Symtype;

typedef struct symbol {
    struct symbol *next;  /* next in hash table */
    const char   *name;   /* name */
    Symtype       type;   /* symbol type */
    void         *val;    /* symbol value */
    int           count;  /* extra value recording symbol order within a function */
} Symbol;

#define INTVAL(sym) ((intptr_t)((sym)->val))


/*
 * symbol tables are basically just hash tables containing
 * all the symbols
 */

/* make this a power of two, please */
#define SYMTABLE_HASH_SIZE 128

typedef struct symtab {
    Symbol *hash[SYMTABLE_HASH_SIZE];
} SymbolTable;

Symbol *AddSymbol(SymbolTable *table, const char *name, int type, void *val);
Symbol *FindSymbol(SymbolTable *table, const char *name);

char *NewTemporaryVariable(const char *prefix);

#endif
