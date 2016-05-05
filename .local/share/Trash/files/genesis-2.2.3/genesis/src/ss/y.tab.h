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
    OR = 258,
    AND = 259,
    LT = 260,
    LE = 261,
    GT = 262,
    GE = 263,
    EQ = 264,
    NE = 265,
    POW = 266,
    UMINUS = 267,
    WHILE = 268,
    IF = 269,
    ELSE = 270,
    ELIF = 271,
    FOR = 272,
    FOREACH = 273,
    END = 274,
    INCLUDE = 275,
    ENDSCRIPT = 276,
    BREAK = 277,
    INT = 278,
    FLOAT = 279,
    STR = 280,
    RETURN = 281,
    WHITESPACE = 282,
    FUNCTION = 283,
    INTCONST = 284,
    DOLLARARG = 285,
    FLOATCONST = 286,
    STRCONST = 287,
    LITERAL = 288,
    IDENT = 289,
    VARREF = 290,
    FUNCREF = 291,
    EXTERN = 292,
    SL = 293,
    COMMAND = 294,
    EXPRCALL = 295,
    ARGUMENT = 296,
    ARGLIST = 297,
    LOCREF = 298,
    ICAST = 299,
    FCAST = 300,
    SCAST = 301
  };
#endif
/* Tokens.  */
#define OR 258
#define AND 259
#define LT 260
#define LE 261
#define GT 262
#define GE 263
#define EQ 264
#define NE 265
#define POW 266
#define UMINUS 267
#define WHILE 268
#define IF 269
#define ELSE 270
#define ELIF 271
#define FOR 272
#define FOREACH 273
#define END 274
#define INCLUDE 275
#define ENDSCRIPT 276
#define BREAK 277
#define INT 278
#define FLOAT 279
#define STR 280
#define RETURN 281
#define WHITESPACE 282
#define FUNCTION 283
#define INTCONST 284
#define DOLLARARG 285
#define FLOATCONST 286
#define STRCONST 287
#define LITERAL 288
#define IDENT 289
#define VARREF 290
#define FUNCREF 291
#define EXTERN 292
#define SL 293
#define COMMAND 294
#define EXPRCALL 295
#define ARGUMENT 296
#define ARGLIST 297
#define LOCREF 298
#define ICAST 299
#define FCAST 300
#define SCAST 301

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
