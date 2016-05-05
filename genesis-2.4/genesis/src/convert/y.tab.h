/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
    LT = 258,
    LE = 259,
    GT = 260,
    GE = 261,
    EQ = 262,
    NE = 263,
    OR = 264,
    AND = 265,
    UMINUS = 266,
    WHILE = 267,
    IF = 268,
    ELSE = 269,
    FOR = 270,
    FOREACH = 271,
    END = 272,
    INCLUDE = 273,
    ENDSCRIPT = 274,
    BREAK = 275,
    INT = 276,
    FLOAT = 277,
    STR = 278,
    RETURN = 279,
    WHITESPACE = 280,
    FUNCTION = 281,
    INTCONST = 282,
    DOLLARARG = 283,
    FLOATCONST = 284,
    STRCONST = 285,
    LITERAL = 286,
    IDENT = 287,
    VARREF = 288,
    FUNCREF = 289,
    EXTERN = 290,
    SL = 291,
    COMMAND = 292,
    ARGUMENT = 293,
    ARGLIST = 294,
    LOCREF = 295,
    ICAST = 296,
    FCAST = 297,
    SCAST = 298
  };
#endif
/* Tokens.  */
#define LT 258
#define LE 259
#define GT 260
#define GE 261
#define EQ 262
#define NE 263
#define OR 264
#define AND 265
#define UMINUS 266
#define WHILE 267
#define IF 268
#define ELSE 269
#define FOR 270
#define FOREACH 271
#define END 272
#define INCLUDE 273
#define ENDSCRIPT 274
#define BREAK 275
#define INT 276
#define FLOAT 277
#define STR 278
#define RETURN 279
#define WHITESPACE 280
#define FUNCTION 281
#define INTCONST 282
#define DOLLARARG 283
#define FLOATCONST 284
#define STRCONST 285
#define LITERAL 286
#define IDENT 287
#define VARREF 288
#define FUNCREF 289
#define EXTERN 290
#define SL 291
#define COMMAND 292
#define ARGUMENT 293
#define ARGLIST 294
#define LOCREF 295
#define ICAST 296
#define FCAST 297
#define SCAST 298

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
