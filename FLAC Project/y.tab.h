/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LIB = 258,
    IDENT = 259,
    PLUS = 260,
    MINUS = 261,
    AFIS = 262,
    ATRIBUIRE = 263,
    MUL = 264,
    DIV = 265,
    CALL = 266,
    BGNFUNC = 267,
    ENDFUNC = 268,
    BGNMAIN = 269,
    ENDMAIN = 270,
    TIPDATA = 271,
    STPRG = 272,
    ENPRG = 273,
    AND = 274,
    OR = 275,
    DACA = 276,
    ALTFEL = 277,
    PENTRU = 278,
    CATTIMP = 279,
    MAIMIC = 280,
    MAIMARE = 281,
    EGAL = 282,
    MMICEGAL = 283,
    MMAREEGAL = 284,
    INTREG = 285,
    FLOTANT = 286,
    CARACTER = 287,
    SIR_CHAR = 288,
    BOOLEAN = 289,
    VECTOR = 290,
    MATRICE = 291,
    INT = 292,
    RATIONAL = 293,
    BGBLOCK = 294,
    CLOSEBLOCK = 295,
    BITAND = 296,
    BITOR = 297,
    BITNOT = 298,
    BITXOR = 299,
    STRCOPY = 300,
    STRLENGTH = 301,
    STRCATS = 302,
    STRSTRING = 303,
    ATUNCI = 304,
    PRIVATE = 305,
    PUBLIC = 306,
    ENDCLASS = 307,
    BGCLASS = 308,
    NOT = 309,
    STRUCT = 310,
    ENDSTRUCT = 311,
    PARANTEZADESC = 312,
    PARANTEZAINC = 313
  };
#endif
/* Tokens.  */
#define LIB 258
#define IDENT 259
#define PLUS 260
#define MINUS 261
#define AFIS 262
#define ATRIBUIRE 263
#define MUL 264
#define DIV 265
#define CALL 266
#define BGNFUNC 267
#define ENDFUNC 268
#define BGNMAIN 269
#define ENDMAIN 270
#define TIPDATA 271
#define STPRG 272
#define ENPRG 273
#define AND 274
#define OR 275
#define DACA 276
#define ALTFEL 277
#define PENTRU 278
#define CATTIMP 279
#define MAIMIC 280
#define MAIMARE 281
#define EGAL 282
#define MMICEGAL 283
#define MMAREEGAL 284
#define INTREG 285
#define FLOTANT 286
#define CARACTER 287
#define SIR_CHAR 288
#define BOOLEAN 289
#define VECTOR 290
#define MATRICE 291
#define INT 292
#define RATIONAL 293
#define BGBLOCK 294
#define CLOSEBLOCK 295
#define BITAND 296
#define BITOR 297
#define BITNOT 298
#define BITXOR 299
#define STRCOPY 300
#define STRLENGTH 301
#define STRCATS 302
#define STRSTRING 303
#define ATUNCI 304
#define PRIVATE 305
#define PUBLIC 306
#define ENDCLASS 307
#define BGCLASS 308
#define NOT 309
#define STRUCT 310
#define ENDSTRUCT 311
#define PARANTEZADESC 312
#define PARANTEZAINC 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 31 "proiect.y" /* yacc.c:1909  */

char *tip;
char *nume; 
int val;

#line 176 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
