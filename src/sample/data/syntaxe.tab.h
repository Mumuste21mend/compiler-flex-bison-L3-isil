
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_import = 258,
     bib_io = 259,
     bib_lang = 260,
     bib_lst = 261,
     pvg = 262,
     err = 263,
     mc_public = 264,
     mc_private = 265,
     mc_protected = 266,
     mc_class = 267,
     mc_int = 268,
     mc_chaine = 269,
     mc_reel = 270,
     parenthOuv = 271,
     parenthFer = 272,
     accoladeOuv = 273,
     accoladeFer = 274,
     IDF = 275,
     vrg = 276,
     crochetOuv = 277,
     crochetFer = 278,
     CONST = 279,
     CONSTchCharac = 280,
     mc_Const = 281,
     IDFTab = 282,
     CONSTR = 283,
     affecte = 284,
     mc_main = 285,
     mc_FOR = 286,
     Signe_Formattage = 287,
     mc_IF = 288,
     mc_ELSE = 289,
     mc_ELIF = 290,
     mc_ENDIF = 291,
     mc_STRUCT = 292,
     pointeur = 293,
     op_div = 294,
     op_fois = 295,
     op_plus = 296,
     op_moins = 297,
     op_equal = 298,
     op_notequal = 299,
     op_inf = 300,
     op_infORequal = 301,
     op_sup = 302,
     op_supORequal = 303,
     sig_format_entier = 304,
     sig_format_reel = 305,
     sig_format_chaine = 306,
     mc_IN = 307,
     mc_OUT = 308,
     mc_Liste = 309,
     lst_svt = 310,
     lst_add = 311,
     lst_rmv = 312,
     lst_rei = 313,
     mc_Iterate = 314,
     mc_allouer = 315
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 14 "syntaxe.y"

int Entier;
char* Chaine;
float Reel;



/* Line 1676 of yacc.c  */
#line 120 "syntaxe.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


