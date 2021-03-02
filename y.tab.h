/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    T_Break = 258,
    T_For = 259,
    T_Func = 260,
    T_Import = 261,
    T_Package = 262,
    T_Return = 263,
    T_Var = 264,
    T_Fmt = 265,
    T_Main = 266,
    T_Int = 267,
    T_Float = 268,
    T_Double = 269,
    T_Bool = 270,
    T_String = 271,
    T_Inc = 272,
    T_Dec = 273,
    T_Relop = 274,
    T_For_Init = 275,
    T_Assgnop = 276,
    T_True = 277,
    T_False = 278,
    T_And = 279,
    T_Or = 280,
    T_Paren = 281,
    T_Dims = 282,
    T_Brace = 283,
    T_Id = 284,
    T_Num = 285,
    T_Not = 286
  };
#endif
/* Tokens.  */
#define T_Break 258
#define T_For 259
#define T_Func 260
#define T_Import 261
#define T_Package 262
#define T_Return 263
#define T_Var 264
#define T_Fmt 265
#define T_Main 266
#define T_Int 267
#define T_Float 268
#define T_Double 269
#define T_Bool 270
#define T_String 271
#define T_Inc 272
#define T_Dec 273
#define T_Relop 274
#define T_For_Init 275
#define T_Assgnop 276
#define T_True 277
#define T_False 278
#define T_And 279
#define T_Or 280
#define T_Paren 281
#define T_Dims 282
#define T_Brace 283
#define T_Id 284
#define T_Num 285
#define T_Not 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */