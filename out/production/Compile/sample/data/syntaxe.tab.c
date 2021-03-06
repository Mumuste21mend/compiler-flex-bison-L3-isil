
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syntaxe.y"

int nbLigne = 1;
char sauvTyp[10];
char* sauvIdf;
char sauvOp;
char io = 'n';
char lang = 'n';
char list = 'n';
char strInstOut[250];
char strExp[250];
char a[1];
char sauvEnc;


/* Line 189 of yacc.c  */
#line 88 "syntaxe.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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

/* Line 214 of yacc.c  */
#line 14 "syntaxe.y"

int Entier;
char* Chaine;
float Reel;



/* Line 214 of yacc.c  */
#line 192 "syntaxe.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 204 "syntaxe.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   198

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNRULES -- Number of states.  */
#define YYNSTATES  223

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    11,    14,    15,    19,    21,    23,
      25,    29,    31,    33,    35,    43,    49,    54,    63,    64,
      66,    68,    70,    72,    74,    75,    79,    83,    84,    86,
      88,    92,    94,    98,   100,   104,   108,   111,   116,   119,
     122,   125,   126,   128,   131,   133,   136,   138,   140,   143,
     146,   154,   155,   158,   167,   172,   181,   182,   194,   202,
     206,   210,   212,   214,   216,   218,   220,   222,   224,   226,
     228,   235,   245,   249,   253,   254,   256,   258,   260,   263,
     264,   267,   273,   277,   284,   287,   288,   291,   294,   297,
     299,   304,   306,   308,   310,   313,   314,   316,   318,   320,
     322,   324,   329,   335,   340,   345
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    63,    66,    18,    68,    19,    -1,    64,
      -1,    64,    63,    -1,    -1,     3,    65,     7,    -1,     4,
      -1,     5,    -1,     6,    -1,    67,    12,    20,    -1,     9,
      -1,    10,    -1,    11,    -1,    69,    30,    16,    17,    18,
      85,    19,    -1,    67,    70,    77,     7,    69,    -1,    67,
      79,     7,    69,    -1,    67,    54,    45,    70,    47,    78,
       7,    69,    -1,    -1,    14,    -1,    13,    -1,    15,    -1,
      20,    -1,    20,    -1,    -1,    27,    74,    75,    -1,    22,
      24,    23,    -1,    -1,    20,    -1,    71,    -1,    71,    21,
      77,    -1,    73,    -1,    73,    21,    77,    -1,    76,    -1,
      76,    21,    78,    -1,    26,    70,    80,    -1,    72,    81,
      -1,    72,    81,    21,    80,    -1,    29,    82,    -1,    29,
      83,    -1,    29,    25,    -1,    -1,    24,    -1,    42,    24,
      -1,    28,    -1,    42,    28,    -1,    88,    -1,    86,    -1,
      91,     7,    -1,   109,     7,    -1,    60,    16,    27,    21,
      24,    17,     7,    -1,    -1,    84,    85,    -1,    33,    16,
      89,    17,    18,    85,    19,    87,    -1,    34,    18,    85,
      19,    -1,    35,    16,    89,    17,    18,    85,    19,    87,
      -1,    -1,    31,    16,    99,     7,    89,     7,    99,    17,
      18,    85,    19,    -1,    59,    16,   110,    17,    18,    85,
      19,    -1,   100,    90,   100,    -1,   100,    90,    89,    -1,
      45,    -1,    47,    -1,    46,    -1,    48,    -1,    43,    -1,
      44,    -1,    99,    -1,    92,    -1,    93,    -1,    52,    16,
      32,    21,    20,    17,    -1,    52,    16,    32,    21,    27,
      22,    24,    23,    17,    -1,    94,    97,    17,    -1,    96,
      16,    95,    -1,    -1,    25,    -1,    32,    -1,    53,    -1,
      98,    97,    -1,    -1,    21,    20,    -1,    21,    27,    22,
      24,    23,    -1,    20,    29,   100,    -1,    27,    22,    24,
      23,    29,   100,    -1,   101,   102,    -1,    -1,   103,   106,
      -1,   104,   106,    -1,   105,   106,    -1,    20,    -1,    27,
      22,    24,    23,    -1,    82,    -1,    25,    -1,    83,    -1,
     107,   102,    -1,    -1,   108,    -1,    41,    -1,    42,    -1,
      39,    -1,    40,    -1,   110,    55,    16,    17,    -1,   110,
      56,    16,   100,    17,    -1,   110,    57,    16,    17,    -1,
     110,    58,    16,    17,    -1,    20,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    28,    28,    31,    32,    33,    35,    37,    38,    39,
      42,    44,    45,    46,    48,    50,    51,    52,    53,    56,
      57,    58,    60,    65,    70,    70,    72,    77,    81,    87,
      88,    89,    90,    92,    93,    97,    99,   100,   102,   103,
     104,   105,   107,   109,   111,   112,   115,   116,   117,   118,
     119,   125,   126,   128,   130,   131,   132,   134,   135,   137,
     138,   140,   141,   142,   143,   144,   145,   147,   148,   149,
     152,   157,   166,   168,   169,   171,   172,   174,   176,   177,
     179,   182,   190,   195,   202,   204,   206,   207,   208,   210,
     215,   223,   224,   225,   227,   228,   230,   232,   233,   234,
     235,   237,   238,   240,   241,   243
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_import", "bib_io", "bib_lang",
  "bib_lst", "pvg", "err", "mc_public", "mc_private", "mc_protected",
  "mc_class", "mc_int", "mc_chaine", "mc_reel", "parenthOuv", "parenthFer",
  "accoladeOuv", "accoladeFer", "IDF", "vrg", "crochetOuv", "crochetFer",
  "CONST", "CONSTchCharac", "mc_Const", "IDFTab", "CONSTR", "affecte",
  "mc_main", "mc_FOR", "Signe_Formattage", "mc_IF", "mc_ELSE", "mc_ELIF",
  "mc_ENDIF", "mc_STRUCT", "pointeur", "op_div", "op_fois", "op_plus",
  "op_moins", "op_equal", "op_notequal", "op_inf", "op_infORequal",
  "op_sup", "op_supORequal", "sig_format_entier", "sig_format_reel",
  "sig_format_chaine", "mc_IN", "mc_OUT", "mc_Liste", "lst_svt", "lst_add",
  "lst_rmv", "lst_rei", "mc_Iterate", "mc_allouer", "$accept", "S",
  "ListeBib", "BIB", "Nom_BIB", "HEADER_CLASS", "MODIFICATEUR", "CORPS",
  "Partie_Dec_Var", "TYPE", "UnIDF", "UnIDFCst", "UnIDFTab", "$@1",
  "SuiteIDFTab", "UnIDFList", "ListeIDF", "ListeIDFListe", "Dec_Const",
  "Liste_IDFConst", "Valeur", "CONSTANTE", "CONSTReel", "Instruction",
  "Partie_Instruction", "Inst_If", "Suite_If", "Inst_Boucle", "Condition",
  "OperandeLogique", "InstructionIOAFF", "Inst_Lecture", "Inst_Ecriture",
  "DebEcriture", "EcritureDe", "OUT", "ListeIDsOUT", "UniteeListIdOut",
  "Inst_Affectation", "ExpressionValable", "InitExpressionValable",
  "Expression", "E1", "E2", "E3", "SuiteExpression", "Oper",
  "OperandeArithmetique", "InstructionListe", "IDFListe", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    63,    64,    65,    65,    65,
      66,    67,    67,    67,    68,    69,    69,    69,    69,    70,
      70,    70,    71,    72,    74,    73,    75,    75,    76,    77,
      77,    77,    77,    78,    78,    79,    80,    80,    81,    81,
      81,    81,    82,    82,    83,    83,    84,    84,    84,    84,
      84,    85,    85,    86,    87,    87,    87,    88,    88,    89,
      89,    90,    90,    90,    90,    90,    90,    91,    91,    91,
      92,    92,    93,    94,    94,    95,    95,    96,    97,    97,
      98,    98,    99,    99,   100,   101,   102,   102,   102,   103,
     104,   105,   105,   105,   106,   106,   107,   108,   108,   108,
     108,   109,   109,   109,   109,   110
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     1,     2,     0,     3,     1,     1,     1,
       3,     1,     1,     1,     7,     5,     4,     8,     0,     1,
       1,     1,     1,     1,     0,     3,     3,     0,     1,     1,
       3,     1,     3,     1,     3,     3,     2,     4,     2,     2,
       2,     0,     1,     2,     1,     2,     1,     1,     2,     2,
       7,     0,     2,     8,     4,     8,     0,    11,     7,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       6,     9,     3,     3,     0,     1,     1,     1,     2,     0,
       2,     5,     3,     6,     2,     0,     2,     2,     2,     1,
       4,     1,     1,     1,     2,     0,     1,     1,     1,     1,
       1,     4,     5,     4,     4,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     0,     3,     7,     8,     9,     0,     1,
      11,    12,    13,     0,     0,     4,     6,    18,     0,     0,
       0,     0,    10,    20,    19,    21,     0,     0,     0,     0,
       2,     0,     0,     0,    22,    24,    29,    31,     0,    18,
       0,    23,    41,    35,     0,    27,     0,     0,    18,    16,
       0,     0,    36,     0,     0,    25,    30,    32,    15,    74,
      42,    40,    44,     0,    38,    39,     0,    28,    33,     0,
       0,   105,     0,     0,     0,     0,    77,     0,     0,    74,
       0,    47,    46,     0,    68,    69,    79,     0,    67,     0,
       0,    43,    45,    37,     0,    18,    26,    85,     0,     0,
      85,     0,     0,     0,    52,    14,    48,     0,     0,    79,
       0,    49,     0,     0,     0,     0,    34,    17,    82,     0,
       0,     0,     0,     0,     0,     0,   105,     0,     0,    80,
       0,    72,    78,    75,    76,    73,     0,    85,     0,     0,
      89,    92,     0,    91,    93,    84,    95,    95,    95,     0,
      85,     0,    65,    66,    61,    63,    62,    64,    85,     0,
       0,     0,     0,   101,     0,   103,   104,     0,    99,   100,
      97,    98,    86,     0,    96,    87,    88,    85,     0,    74,
      60,    59,     0,     0,    74,     0,     0,   102,     0,    94,
      83,     0,     0,    70,     0,     0,     0,    81,    90,     0,
      56,     0,    58,    50,     0,     0,     0,    53,     0,    74,
      74,    85,    71,     0,     0,     0,    57,    54,     0,    74,
       0,    56,    55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     8,    13,    19,    20,    21,    28,
      36,    42,    37,    45,    55,    68,    38,    69,    29,    43,
      52,   143,   144,    79,    80,    81,   207,    82,   123,   158,
      83,    84,    85,    86,   135,    87,   108,   109,    88,   124,
     119,   145,   146,   147,   148,   172,   173,   174,    89,    90
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -148
static const yytype_int16 yypact[] =
{
      14,    69,    38,    67,    14,  -148,  -148,  -148,    26,  -148,
    -148,  -148,  -148,    27,    44,  -148,  -148,    67,    42,    -5,
      68,    55,  -148,  -148,  -148,  -148,    66,    41,   -15,    81,
    -148,    73,    70,    66,  -148,  -148,    71,    74,    84,    67,
      77,  -148,    72,  -148,    49,    75,   -15,   -15,    67,  -148,
      80,     6,    78,    82,    79,  -148,  -148,  -148,  -148,   -13,
    -148,  -148,  -148,    33,  -148,  -148,    70,  -148,    83,    99,
      85,    86,    87,    91,    94,    95,  -148,    96,    97,   -13,
      98,  -148,  -148,   107,  -148,  -148,   100,   102,  -148,   109,
      10,  -148,  -148,  -148,    82,    67,  -148,  -148,   101,     2,
    -148,    88,   103,    92,  -148,  -148,  -148,     5,   105,   100,
       3,  -148,   108,   110,   111,   112,  -148,  -148,  -148,    -1,
     106,    86,   125,   116,     7,   113,  -148,   118,   115,  -148,
     117,  -148,  -148,  -148,  -148,  -148,   120,  -148,   121,   124,
    -148,  -148,   122,  -148,  -148,  -148,    30,    30,    30,   114,
    -148,   127,  -148,  -148,  -148,  -148,  -148,  -148,  -148,    16,
     128,   123,   126,  -148,   131,  -148,  -148,   129,  -148,  -148,
    -148,  -148,  -148,    -1,  -148,  -148,  -148,  -148,   135,   -13,
    -148,     7,   132,   130,   -13,   134,   133,  -148,   136,  -148,
    -148,     2,   138,  -148,   137,   139,   147,  -148,  -148,   143,
     -19,   140,  -148,  -148,   144,   146,   149,  -148,   150,   -13,
     -13,  -148,  -148,   151,   152,   155,  -148,  -148,   148,   -13,
     154,   -19,  -148
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,   164,  -148,  -148,  -148,   166,  -148,   -35,    11,
    -148,  -148,  -148,  -148,  -148,  -148,    12,    61,  -148,   119,
    -148,   141,   142,  -148,   -79,  -148,   -47,  -148,  -147,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,    89,  -148,   -98,   -95,
    -148,     4,  -148,  -148,  -148,   -64,  -148,  -148,  -148,    76
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -52
static const yytype_int16 yytable[] =
{
     104,   122,   118,   178,    49,    34,   -51,    71,    23,    24,
      25,   180,    35,    58,    72,   205,   206,     1,    73,   140,
      74,    26,   121,    60,   141,   129,   142,    62,   133,    72,
      60,    61,   130,    16,    62,   134,   182,    32,     9,    75,
      76,    63,   164,   183,    44,    17,    77,    78,    63,    27,
     152,   153,   154,   155,   156,   157,    18,    91,    56,    57,
     117,    92,    22,   181,   215,   112,   113,   114,   115,   168,
     169,   170,   171,     5,     6,     7,    10,    11,    12,    23,
      24,    25,   190,   175,   176,    31,    33,    30,    39,    40,
      41,    48,    46,   199,    50,    47,    53,    54,    59,    66,
     192,    51,    67,    70,    94,   195,    95,    99,    96,    98,
     100,   101,   102,   103,   106,    97,   111,   105,   110,   128,
     125,   107,   131,   126,   136,   120,   137,   138,   139,   149,
     213,   214,   150,   151,   159,   160,   161,   163,   165,   162,
     220,   166,   191,   177,   167,   179,   184,   185,   187,   193,
     186,   196,   194,   188,   203,   116,   197,   200,   202,   198,
     204,   201,   209,   208,   210,   211,   219,   212,    15,    14,
     216,   217,   218,   221,   222,     0,     0,   189,   127,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,    64,    65,     0,     0,     0,     0,   132
};

static const yytype_int16 yycheck[] =
{
      79,    99,    97,   150,    39,    20,    19,    20,    13,    14,
      15,   158,    27,    48,    27,    34,    35,     3,    31,    20,
      33,    26,    20,    24,    25,    20,    27,    28,    25,    27,
      24,    25,    27,     7,    28,    32,    20,    26,     0,    52,
      53,    42,   137,    27,    33,    18,    59,    60,    42,    54,
      43,    44,    45,    46,    47,    48,    12,    24,    46,    47,
      95,    28,    20,   158,   211,    55,    56,    57,    58,    39,
      40,    41,    42,     4,     5,     6,     9,    10,    11,    13,
      14,    15,   177,   147,   148,    30,    45,    19,     7,    16,
      20,     7,    21,   191,    17,    21,    47,    22,    18,    21,
     179,    29,    20,    24,    21,   184,     7,    16,    23,    22,
      16,    16,    16,    16,     7,    29,     7,    19,    16,    27,
      32,    21,    17,    20,    16,    24,    16,    16,    16,    23,
     209,   210,     7,    17,    21,    17,    21,    17,    17,    22,
     219,    17,     7,    29,    22,    18,    18,    24,    17,    17,
      24,    17,    22,    24,     7,    94,    23,    19,    19,    23,
      17,    24,    18,    23,    18,    16,    18,    17,     4,     3,
      19,    19,    17,    19,   221,    -1,    -1,   173,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    51,    -1,    -1,    -1,    -1,   109
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    62,    63,    64,     4,     5,     6,    65,     0,
       9,    10,    11,    66,    67,    63,     7,    18,    12,    67,
      68,    69,    20,    13,    14,    15,    26,    54,    70,    79,
      19,    30,    70,    45,    20,    27,    71,    73,    77,     7,
      16,    20,    72,    80,    70,    74,    21,    21,     7,    69,
      17,    29,    81,    47,    22,    75,    77,    77,    69,    18,
      24,    25,    28,    42,    82,    83,    21,    20,    76,    78,
      24,    20,    27,    31,    33,    52,    53,    59,    60,    84,
      85,    86,    88,    91,    92,    93,    94,    96,    99,   109,
     110,    24,    28,    80,    21,     7,    23,    29,    22,    16,
      16,    16,    16,    16,    85,    19,     7,    21,    97,    98,
      16,     7,    55,    56,    57,    58,    78,    69,   100,   101,
      24,    20,    99,    89,   100,    32,    20,   110,    27,    20,
      27,    17,    97,    25,    32,    95,    16,    16,    16,    16,
      20,    25,    27,    82,    83,   102,   103,   104,   105,    23,
       7,    17,    43,    44,    45,    46,    47,    48,    90,    21,
      17,    21,    22,    17,   100,    17,    17,    22,    39,    40,
      41,    42,   106,   107,   108,   106,   106,    29,    89,    18,
      89,   100,    20,    27,    18,    24,    24,    17,    24,   102,
     100,     7,    85,    17,    22,    85,    17,    23,    23,    99,
      19,    24,    19,     7,    17,    34,    35,    87,    23,    18,
      18,    16,    17,    85,    85,    89,    19,    19,    17,    18,
      85,    19,    87
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
# if YYLTYPE_IS_TRIVIAL
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 2:

/* Line 1455 of yacc.c  */
#line 28 "syntaxe.y"
    {printf("Syntaxe correcte");YYACCEPT;;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 37 "syntaxe.y"
    {if(io == 'y')printf("error semantique bibliotheque double importe a la ligne %d \n ",nbLigne);else io = 'y';;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 38 "syntaxe.y"
    {if(lang == 'y')printf("error semantique bibliotheque double importe a la ligne %d \n ",nbLigne);else lang = 'y';;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 39 "syntaxe.y"
    {if(list == 'y')printf("error semantique bibliotheque double importe a la ligne %d \n ",nbLigne);else list = 'y';;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 42 "syntaxe.y"
    {ChangerCode((yyvsp[(3) - (3)].Chaine),1);InsererType((yyvsp[(3) - (3)].Chaine)," ",1,sauvEnc);;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 44 "syntaxe.y"
    {sauvEnc='+';;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 45 "syntaxe.y"
    {sauvEnc='-';;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 46 "syntaxe.y"
    {sauvEnc='*';;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 56 "syntaxe.y"
    {strcpy(sauvTyp,(yyvsp[(1) - (1)].Chaine));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 57 "syntaxe.y"
    {strcpy(sauvTyp,(yyvsp[(1) - (1)].Chaine));;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 58 "syntaxe.y"
    {strcpy(sauvTyp,(yyvsp[(1) - (1)].Chaine));;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 60 "syntaxe.y"
    {
		InsererTaille((yyvsp[(1) - (1)].Chaine), 1);
		if(DoubleDeclaration((yyvsp[(1) - (1)].Chaine))==0)InsererType((yyvsp[(1) - (1)].Chaine),sauvTyp,0,sauvEnc);
		else printf("Erreur semantique double declaration a la ligne %d\n",nbLigne);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 65 "syntaxe.y"
    {
		InsererTaille((yyvsp[(1) - (1)].Chaine), 1);
		if(DoubleDeclaration((yyvsp[(1) - (1)].Chaine))==0)InsererType((yyvsp[(1) - (1)].Chaine),sauvTyp,1,sauvEnc);
		else printf("Erreur semantique double declaration de constante a la ligne %d\n",nbLigne);;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 70 "syntaxe.y"
    {sauvIdf=yylval.Chaine;;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 72 "syntaxe.y"
    {
					if(DoubleDeclaration(sauvIdf)==0){InsererType(sauvIdf,sauvTyp,0,sauvEnc);
					if((yyvsp[(2) - (3)].Entier)>32767) printf("Erreur semantique, taille de tableau invalide a la ligne %d\n",nbLigne);
					InsererTaille(sauvIdf, (yyvsp[(2) - (3)].Entier));}
					else printf("Erreur semantique double declaration a la ligne %d\n",nbLigne);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 77 "syntaxe.y"
    {if(DoubleDeclaration(sauvIdf)==0){InsererType(sauvIdf,sauvTyp,0,sauvEnc);
					InsererTaille(sauvIdf, 0);}
					else printf("Erreur semantique double declaration a la ligne %d\n",nbLigne);;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 81 "syntaxe.y"
    {
		ChangerCode((yyvsp[(1) - (1)].Chaine),2);
		InsererTaille((yyvsp[(1) - (1)].Chaine), 0);
		if(DoubleDeclaration((yyvsp[(1) - (1)].Chaine))==0)InsererType((yyvsp[(1) - (1)].Chaine),sauvTyp,0,sauvEnc);
		else printf("Erreur semantique double declaration a la ligne %d\n",nbLigne);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 102 "syntaxe.y"
    {if(strcmp(sauvTyp,"Entier")!=0)printf("Incompatibilite de types a la ligne %d\n",nbLigne);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 103 "syntaxe.y"
    {if(strcmp(sauvTyp,"Reel")!=0)printf("Incompatibilite de types a la ligne %d\n",nbLigne);;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 104 "syntaxe.y"
    {if(strcmp(sauvTyp,"Chaine")!=0)printf("Incompatibilite de types a la ligne %d\n",nbLigne);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 105 "syntaxe.y"
    {PeutModifierConstante(yylval.Chaine,2);;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 107 "syntaxe.y"
    {if((yyvsp[(1) - (1)].Entier)>32767) printf("Erreur semantique valeur non valable pour une case a la ligne %d\n",nbLigne);
				if((sauvOp=='/')&&((yyvsp[(1) - (1)].Entier)==0)) printf("Erreur semantique division sur zero a la ligne %d\n",nbLigne);;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 109 "syntaxe.y"
    {if(yylval.Entier>32768) printf("Erreur semantique valeur non valable pour une case a la ligne %d\n",nbLigne);;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 118 "syntaxe.y"
    {if(list=='n') printf("Erreur semantique bibliotheque manquante a la ligne %d\n",nbLigne);;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 119 "syntaxe.y"
    {
													if(NonDeclare((yyvsp[(3) - (7)].Chaine))==0) printf("Erreur semantique variable non declaree a la ligne %d\n",nbLigne);
													if(TailleDe((yyvsp[(3) - (7)].Chaine))>0)printf("Erreur semantique reallocation d'un tableau a la ligne %d\n",nbLigne);
													if(((yyvsp[(5) - (7)].Entier)<1)||((yyvsp[(5) - (7)].Entier)>32767)) printf("Erreur semantique taille de tableau non valable a la ligne %d\n",nbLigne);
													else InsererTaille((yyvsp[(3) - (7)].Chaine),(yyvsp[(5) - (7)].Entier));;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 147 "syntaxe.y"
    {if(lang=='n') printf("Erreur semantique bibliotheque manquante a la ligne %d\n",nbLigne);;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 148 "syntaxe.y"
    {if(io=='n') printf("Erreur semantique bibliotheque manquante a la ligne %d\n",nbLigne);;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 149 "syntaxe.y"
    {if(io=='n') printf("Erreur semantique bibliotheque manquante a la ligne %d\n",nbLigne);;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 152 "syntaxe.y"
    {
			if(NonDeclare((yyvsp[(5) - (6)].Chaine))==0) printf("Erreur semantique variable non declaree a la ligne %d\n",nbLigne);
			strcpy(strInstOut,(yyvsp[(3) - (6)].Chaine));strcat(strInstOut,",");strcat(strInstOut,(yyvsp[(5) - (6)].Chaine));
			ErreurFormatage(RespecteFormatage(strInstOut),nbLigne);
			;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 157 "syntaxe.y"
    {
			if(NonDeclare((yyvsp[(5) - (9)].Chaine))==0) printf("Erreur semantique tableau non declare a la ligne %d\n",nbLigne);
			if((yyvsp[(7) - (9)].Entier)>32767) printf("Erreur semantique valeur non valable pour une case a la ligne %d\n",nbLigne);
			if((yyvsp[(7) - (9)].Entier)>=TailleDe((yyvsp[(5) - (9)].Chaine))) printf("Index out of bounds a la ligne %d\n",nbLigne);
			strcpy(strInstOut,(yyvsp[(3) - (9)].Chaine));strcat(strInstOut,",");strcat(strInstOut,(yyvsp[(5) - (9)].Chaine));
 			ErreurFormatage(RespecteFormatage(strInstOut),nbLigne);
 			;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 166 "syntaxe.y"
    {ErreurFormatage(RespecteFormatage(strInstOut), nbLigne);;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 168 "syntaxe.y"
    {strcat(strInstOut,yylval.Chaine);;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 174 "syntaxe.y"
    {strcpy(strInstOut,"");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 179 "syntaxe.y"
    {if(NonDeclare((yyvsp[(2) - (2)].Chaine))==0) printf("Erreur semantique variable non declaree a la ligne %d\n",nbLigne);
		strcat(strInstOut,",");
		strcat(strInstOut,(yyvsp[(2) - (2)].Chaine));;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 182 "syntaxe.y"
    {
		if(NonDeclare((yyvsp[(2) - (5)].Chaine))==0) printf("Erreur semantique tableau non declare a la ligne %d\n",nbLigne);
		if((yyvsp[(4) - (5)].Entier)>32767) printf("Erreur semantique valeur non valable pour une case a la ligne %d\n",nbLigne);
		if((yyvsp[(4) - (5)].Entier)>=TailleDe((yyvsp[(2) - (5)].Chaine))) printf("Index out of bounds a la ligne %d\n",nbLigne);
		strcat(strInstOut,",");
		strcat(strInstOut,(yyvsp[(2) - (5)].Chaine));;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 190 "syntaxe.y"
    {if(NonDeclare((yyvsp[(1) - (3)].Chaine))==0) printf("Erreur semantique variable non declaree a la ligne %d\n",nbLigne);
											if(Constante((yyvsp[(1) - (3)].Chaine))==1) printf("Erreur semantique modification de constante a la ligne %d\n",nbLigne);
											else if(Constante((yyvsp[(1) - (3)].Chaine))==2) PeutModifierConstante((yyvsp[(1) - (3)].Chaine),1);
											if(affExp((yyvsp[(1) - (3)].Chaine),strExp)==0) printf("Incompatibilite de types a la ligne %d\n",nbLigne);
											;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 195 "syntaxe.y"
    {
		if(NonDeclare((yyvsp[(1) - (6)].Chaine))==0) printf("Erreur semantique variable non declaree a la ligne %d\n",nbLigne);
		if((yyvsp[(3) - (6)].Entier)>32767) printf("Erreur semantique valeur non valable pour une case a la ligne %d\n",nbLigne);
		if((yyvsp[(3) - (6)].Entier)>=TailleDe((yyvsp[(1) - (6)].Chaine))) printf("Index out of bounds a la ligne %d\n",nbLigne);
		if(affExp((yyvsp[(1) - (6)].Chaine),strExp)==0) printf("Incompatibilite de types a la ligne %d\n",nbLigne);
		;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 204 "syntaxe.y"
    {strcpy(strExp,"");;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 210 "syntaxe.y"
    {if(NonDeclare((yyvsp[(1) - (1)].Chaine))==0) printf("Erreur semantique variable non declaree a la ligne %d\n",nbLigne);
				a[0]=getType((yyvsp[(1) - (1)].Chaine));
				strcat(strExp,a);
				;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 215 "syntaxe.y"
    {
		if(NonDeclare((yyvsp[(1) - (4)].Chaine))==0) printf("Erreur semantique tableau non declare a la ligne %d\n",nbLigne);
		if((yyvsp[(3) - (4)].Entier)>32767) printf("Erreur semantique valeur non valable pour une case a la ligne %d\n",nbLigne);
		if((yyvsp[(3) - (4)].Entier)>=TailleDe((yyvsp[(1) - (4)].Chaine))) printf("Index out of bounds a la ligne %d\n",nbLigne);
		a[0]=getType((yyvsp[(1) - (4)].Chaine));
		strcat(strExp,a);
		;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 223 "syntaxe.y"
    {strcat(strExp,"n");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 224 "syntaxe.y"
    {strcat(strExp,"c");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 225 "syntaxe.y"
    {strcat(strExp,"r");;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 230 "syntaxe.y"
    {a[0]=sauvOp;strcat(strExp,a);;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 232 "syntaxe.y"
    {sauvOp='+';;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 233 "syntaxe.y"
    {sauvOp='-';;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 234 "syntaxe.y"
    {sauvOp='/';;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 235 "syntaxe.y"
    {sauvOp='*';;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 237 "syntaxe.y"
    {nextInList(sauvIdf);;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 238 "syntaxe.y"
    {addToList(sauvIdf);
		if(affExp(sauvIdf,strExp)==0) printf("Incompatibilite de types a la ligne %d\n",nbLigne);;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 240 "syntaxe.y"
    {if(removeFromList(sauvIdf)==-1) printf("Erreur semantique, pas d'element a supprimer a la ligne %d\n",nbLigne);;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 243 "syntaxe.y"
    {strcpy(sauvIdf,(yyvsp[(1) - (1)].Chaine));
				if(estListe((yyvsp[(1) - (1)].Chaine))!=0) printf("Erreur semantique, instruction valable uniquement avec Liste a la ligne %d\n",nbLigne);;}
    break;



/* Line 1455 of yacc.c  */
#line 2020 "syntaxe.tab.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 245 "syntaxe.y"

main()
{yyparse();
Afficher();
}

yywrap(){
}
yyerror(char*msg){
printf("Erreur syntaxique dans le projet compIsilA2020 a la ligne %d",nbLigne);
}
