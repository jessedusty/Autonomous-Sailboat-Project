/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



