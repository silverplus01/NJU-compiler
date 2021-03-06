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
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     FLOAT = 259,
     ID = 260,
     SEMI = 261,
     COMMA = 262,
     ASSIGNOP = 263,
     RELOP = 264,
     PLUS = 265,
     MINUS = 266,
     STAR = 267,
     DIV = 268,
     AND = 269,
     OR = 270,
     DOT = 271,
     NOT = 272,
     TYPE = 273,
     LP = 274,
     RP = 275,
     LB = 276,
     RB = 277,
     LC = 278,
     RC = 279,
     STRUCT = 280,
     RETURN = 281,
     IF = 282,
     ELSE = 283,
     WHILE = 284,
     LOWER_THAN_ELSE = 285
   };
#endif
/* Tokens.  */
#define INT 258
#define FLOAT 259
#define ID 260
#define SEMI 261
#define COMMA 262
#define ASSIGNOP 263
#define RELOP 264
#define PLUS 265
#define MINUS 266
#define STAR 267
#define DIV 268
#define AND 269
#define OR 270
#define DOT 271
#define NOT 272
#define TYPE 273
#define LP 274
#define RP 275
#define LB 276
#define RB 277
#define LC 278
#define RC 279
#define STRUCT 280
#define RETURN 281
#define IF 282
#define ELSE 283
#define WHILE 284
#define LOWER_THAN_ELSE 285




/* Copy the first part of user declarations.  */
#line 1 "syntax.y"

	#include"node.h"
	#include"lex.yy.c"
	#include "semantic.h"
	Node* root;
	


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 9 "syntax.y"
{
	int type_int;
	float type_float;
	double type_double;
	Node* node;
}
/* Line 193 of yacc.c.  */
#line 171 "syntax.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 184 "syntax.tab.c"

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   329

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNRULES -- Number of states.  */
#define YYNSTATES  136

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    13,    16,    20,    24,
      28,    30,    34,    36,    38,    44,    47,    49,    50,    52,
      54,    59,    64,    68,    72,    77,    81,    83,    86,    91,
      96,    99,   100,   103,   105,   109,   115,   123,   131,   137,
     142,   148,   151,   154,   155,   159,   163,   165,   169,   171,
     175,   179,   183,   187,   191,   195,   199,   203,   207,   211,
     214,   217,   222,   226,   231,   235,   237,   239,   241,   245,
     250,   254
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      32,     0,    -1,    33,    -1,    34,    33,    -1,    -1,    36,
      35,     6,    -1,    36,     6,    -1,    36,    41,    44,    -1,
      36,    41,     6,    -1,    36,     1,     6,    -1,    40,    -1,
      40,     7,    35,    -1,    18,    -1,    37,    -1,    25,    38,
      23,    47,    24,    -1,    25,    39,    -1,     5,    -1,    -1,
       5,    -1,     5,    -1,    40,    21,     3,    22,    -1,     5,
      19,    42,    20,    -1,     5,    19,    20,    -1,     5,     1,
      20,    -1,     5,    19,     1,    20,    -1,    43,     7,    42,
      -1,    43,    -1,    36,    40,    -1,    23,    47,    45,    24,
      -1,    23,    47,     1,    24,    -1,    46,    45,    -1,    -1,
      51,     6,    -1,    44,    -1,    26,    51,     6,    -1,    27,
      19,    51,    20,    46,    -1,    27,    19,    51,    20,    46,
      28,    46,    -1,    27,    19,    51,    20,     1,    28,    46,
      -1,    29,    19,    51,    20,    46,    -1,    27,    19,     1,
       6,    -1,    29,    19,     1,    20,    46,    -1,     1,     6,
      -1,    48,    47,    -1,    -1,    36,    49,     6,    -1,    36,
       1,     6,    -1,    50,    -1,    50,     7,    49,    -1,    40,
      -1,    40,     8,    51,    -1,    51,     8,    51,    -1,    51,
      14,    51,    -1,    51,    15,    51,    -1,    51,     9,    51,
      -1,    51,    10,    51,    -1,    51,    11,    51,    -1,    51,
      12,    51,    -1,    51,    13,    51,    -1,    19,    51,    20,
      -1,    11,    51,    -1,    17,    51,    -1,     5,    19,    52,
      20,    -1,     5,    19,    20,    -1,    51,    21,    51,    22,
      -1,    51,    16,     5,    -1,     5,    -1,     3,    -1,     4,
      -1,    19,     1,    20,    -1,    51,    21,     1,    22,    -1,
      51,     7,    52,    -1,    51,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    37,    37,    39,    40,    42,    43,    44,    45,    46,
      48,    49,    53,    54,    56,    57,    59,    60,    62,    66,
      67,    69,    70,    71,    72,    74,    75,    77,    81,    82,
      84,    85,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,   100,   101,   103,   104,   106,   107,   109,   110,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     135,   136
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "ID", "SEMI", "COMMA",
  "ASSIGNOP", "RELOP", "PLUS", "MINUS", "STAR", "DIV", "AND", "OR", "DOT",
  "NOT", "TYPE", "LP", "RP", "LB", "RB", "LC", "RC", "STRUCT", "RETURN",
  "IF", "ELSE", "WHILE", "LOWER_THAN_ELSE", "$accept", "Program",
  "ExtDefList", "ExtDef", "ExtDecList", "Specifier", "StructSpecifier",
  "OptTag", "Tag", "VarDec", "FunDec", "VarList", "ParamDec", "CompSt",
  "StmtList", "Stmt", "DefList", "Def", "DecList", "Dec", "Exp", "Args", 0
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
     285
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    34,    34,    34,    34,
      35,    35,    36,    36,    37,    37,    38,    38,    39,    40,
      40,    41,    41,    41,    41,    42,    42,    43,    44,    44,
      45,    45,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    47,    47,    48,    48,    49,    49,    50,    50,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      52,    52
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     2,     3,     3,     3,
       1,     3,     1,     1,     5,     2,     1,     0,     1,     1,
       4,     4,     3,     3,     4,     3,     1,     2,     4,     4,
       2,     0,     2,     1,     3,     5,     7,     7,     5,     4,
       5,     2,     2,     0,     3,     3,     1,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     4,     3,     4,     3,     1,     1,     1,     3,     4,
       3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    12,    17,     0,     2,     4,     0,    13,    18,     0,
      15,     1,     3,     0,     0,     6,     0,    10,     0,    43,
       9,     0,     0,     5,     0,     0,     8,    43,     7,     0,
       0,    43,    23,     0,    22,     0,     0,    26,    19,    11,
       0,     0,     0,    48,     0,    46,    14,    42,    24,    27,
      21,     0,    20,     0,    66,    67,    65,     0,     0,     0,
       0,     0,     0,    33,     0,     0,     0,    45,     0,    44,
       0,    25,    41,    29,     0,    59,    60,     0,     0,     0,
       0,     0,    28,     0,    30,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,    47,    62,    71,
       0,    68,    58,    34,     0,     0,     0,     0,    50,    53,
      54,    55,    56,    57,    51,    52,    64,     0,     0,     0,
      61,    39,     0,     0,     0,    69,    63,    70,     0,    35,
      40,    38,     0,     0,    37,    36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    16,    29,     7,     9,    10,    17,
      18,    36,    37,    63,    64,    65,    30,    31,    44,    45,
      66,   100
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -58
static const yytype_int16 yypact[] =
{
      -5,   -58,    11,    18,   -58,    -5,    97,   -58,    -4,    17,
     -58,   -58,   -58,    54,   114,   -58,    59,     7,    16,    -5,
     -58,    68,    36,   -58,    82,    89,   -58,    -5,   -58,    41,
      75,    -5,   -58,    80,   -58,    82,    94,   110,   -58,   -58,
      96,    40,   117,     0,   120,   122,   -58,   -58,   -58,   109,
     -58,    -5,   -58,     1,   -58,   -58,   118,   108,   108,   135,
     108,   123,   128,   -58,   124,    67,   181,   -58,   108,   -58,
      82,   -58,   -58,   -58,   166,    37,    -6,   129,   239,   195,
     140,   157,   -58,   144,   -58,   -58,   108,   108,   108,   108,
     108,   108,   108,   108,   148,   162,   281,   -58,   -58,   210,
     136,   -58,   -58,   -58,   149,   253,   152,   267,   281,   301,
      37,    37,    -6,    -6,    64,   294,   -58,   142,   224,   108,
     -58,   -58,    78,   105,   105,   -58,   -58,   -58,    -1,   147,
     -58,   -58,   105,   105,   -58,   -58
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -58,   -58,   173,   -58,   156,     4,   -58,   -58,   -58,   -23,
     -58,   131,   -58,   170,   119,   196,    21,   -58,   130,   -58,
     -57,    79
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -32
static const yytype_int16 yytable[] =
{
      75,    76,    78,    79,     6,    72,    43,    72,    68,     6,
      94,    96,    49,     1,    24,    95,     8,    99,    11,   -16,
       2,    25,    26,   105,   107,    73,    35,   132,    25,   108,
     109,   110,   111,   112,   113,   114,   115,    33,   118,    27,
      19,    53,    42,    54,    55,    56,    38,    43,    41,    90,
      91,    57,    47,    94,     1,    35,    34,    58,    95,    59,
      20,     2,    99,    27,   -31,    23,    60,    61,    83,    62,
      54,    55,    56,    87,    88,    89,    90,    91,    57,   128,
      94,    54,    55,    56,    58,    95,    59,    38,    32,    57,
      27,   -31,    40,    60,    61,    58,    62,    59,    13,    46,
      48,    27,    14,    15,    60,    61,    83,    62,    54,    55,
      56,    54,    55,    56,    50,    21,    57,    51,    52,    57,
     -19,   -19,    58,    67,    59,    58,    69,    59,    27,    70,
      25,    60,    61,    22,    62,   -19,    77,    74,    54,    55,
      56,   104,    80,    54,    55,    56,    57,    81,    82,   101,
      72,    57,    58,   116,    59,   121,   120,    58,   106,    59,
      54,    55,    56,   117,   125,    54,    55,    56,    57,    54,
      55,    56,   123,    57,    58,   133,    59,    57,    12,    58,
      39,    59,    71,    58,    84,    59,    98,    85,    28,    86,
      87,    88,    89,    90,    91,    92,    93,    94,   127,     0,
      97,   103,    95,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     0,     0,     0,     0,    95,   119,    86,    87,
      88,    89,    90,    91,    92,    93,    94,     0,     0,     0,
       0,    95,    86,    87,    88,    89,    90,    91,    92,    93,
      94,     0,     0,     0,     0,    95,   126,    86,    87,    88,
      89,    90,    91,    92,    93,    94,     0,     0,     0,   102,
      95,    86,    87,    88,    89,    90,    91,    92,    93,    94,
       0,     0,     0,   122,    95,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     0,     0,     0,   124,    95,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     0,     0,
       0,     0,    95,    87,    88,    89,    90,    91,    92,     0,
      94,    88,    89,    90,    91,    95,     0,    94,   129,   130,
     131,     0,    95,     0,     0,     0,     0,     0,   134,   135
};

static const yytype_int16 yycheck[] =
{
      57,    58,    59,    60,     0,     6,    29,     6,     8,     5,
      16,    68,    35,    18,     7,    21,     5,    74,     0,    23,
      25,    21,     6,    80,    81,    24,    22,    28,    21,    86,
      87,    88,    89,    90,    91,    92,    93,     1,    95,    23,
      23,     1,     1,     3,     4,     5,     5,    70,    27,    12,
      13,    11,    31,    16,    18,    51,    20,    17,    21,    19,
       6,    25,   119,    23,    24,     6,    26,    27,     1,    29,
       3,     4,     5,     9,    10,    11,    12,    13,    11,     1,
      16,     3,     4,     5,    17,    21,    19,     5,    20,    11,
      23,    24,     3,    26,    27,    17,    29,    19,     1,    24,
      20,    23,     5,     6,    26,    27,     1,    29,     3,     4,
       5,     3,     4,     5,    20,     1,    11,     7,    22,    11,
       6,     7,    17,     6,    19,    17,     6,    19,    23,     7,
      21,    26,    27,    19,    29,    21,     1,    19,     3,     4,
       5,     1,    19,     3,     4,     5,    11,    19,    24,    20,
       6,    11,    17,     5,    19,     6,    20,    17,     1,    19,
       3,     4,     5,     1,    22,     3,     4,     5,    11,     3,
       4,     5,    20,    11,    17,    28,    19,    11,     5,    17,
      24,    19,    51,    17,    65,    19,    20,     6,    18,     8,
       9,    10,    11,    12,    13,    14,    15,    16,   119,    -1,
      70,     6,    21,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    21,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    21,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    -1,    21,    22,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    -1,    20,
      21,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    20,    21,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    20,    21,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    21,     9,    10,    11,    12,    13,    14,    -1,
      16,    10,    11,    12,    13,    21,    -1,    16,   122,   123,
     124,    -1,    21,    -1,    -1,    -1,    -1,    -1,   132,   133
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    25,    32,    33,    34,    36,    37,     5,    38,
      39,     0,    33,     1,     5,     6,    35,    40,    41,    23,
       6,     1,    19,     6,     7,    21,     6,    23,    44,    36,
      47,    48,    20,     1,    20,    36,    42,    43,     5,    35,
       3,    47,     1,    40,    49,    50,    24,    47,    20,    40,
      20,     7,    22,     1,     3,     4,     5,    11,    17,    19,
      26,    27,    29,    44,    45,    46,    51,     6,     8,     6,
       7,    42,     6,    24,    19,    51,    51,     1,    51,    51,
      19,    19,    24,     1,    45,     6,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    21,    51,    49,    20,    51,
      52,    20,    20,     6,     1,    51,     1,    51,    51,    51,
      51,    51,    51,    51,    51,    51,     5,     1,    51,     7,
      20,     6,    20,    20,    20,    22,    22,    52,     1,    46,
      46,    46,    28,    28,    46,    46
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
        case 2:
#line 37 "syntax.y"
    {(yyval.node)=initNode("Program","");addChild((yyval.node),(yyvsp[(1) - (1)].node));root=(yyval.node);;}
    break;

  case 3:
#line 39 "syntax.y"
    {(yyval.node)=initNode("ExtDefList","");addChild((yyval.node),(yyvsp[(2) - (2)].node));addChild((yyval.node),(yyvsp[(1) - (2)].node));;}
    break;

  case 4:
#line 40 "syntax.y"
    {(yyval.node)=initNode("ExtDefList","");;}
    break;

  case 5:
#line 42 "syntax.y"
    {(yyval.node)=initNode("ExtDef","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 6:
#line 43 "syntax.y"
    {(yyval.node)=initNode("ExtDef","");addChild((yyval.node),(yyvsp[(2) - (2)].node));addChild((yyval.node),(yyvsp[(1) - (2)].node));;}
    break;

  case 7:
#line 44 "syntax.y"
    {(yyval.node)=initNode("ExtDef","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 8:
#line 45 "syntax.y"
    {(yyval.node)=initNode("ExtDef","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 9:
#line 46 "syntax.y"
    {errorCount++;;}
    break;

  case 10:
#line 48 "syntax.y"
    {(yyval.node)=initNode("ExtDecList","");addChild((yyval.node),(yyvsp[(1) - (1)].node));;}
    break;

  case 11:
#line 49 "syntax.y"
    {(yyval.node)=initNode("ExtDecList","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 12:
#line 53 "syntax.y"
    {(yyval.node)=initNode("Specifier","");addChild((yyval.node),(yyvsp[(1) - (1)].node));;}
    break;

  case 13:
#line 54 "syntax.y"
    {(yyval.node)=initNode("Specifier","");addChild((yyval.node),(yyvsp[(1) - (1)].node));;}
    break;

  case 14:
#line 56 "syntax.y"
    {(yyval.node)=initNode("StructSpecifier","");addChild((yyval.node),(yyvsp[(5) - (5)].node));addChild((yyval.node),(yyvsp[(4) - (5)].node));addChild((yyval.node),(yyvsp[(3) - (5)].node));addChild((yyval.node),(yyvsp[(2) - (5)].node));addChild((yyval.node),(yyvsp[(1) - (5)].node));;}
    break;

  case 15:
#line 57 "syntax.y"
    {(yyval.node)=initNode("StructSpecifier","");addChild((yyval.node),(yyvsp[(2) - (2)].node));addChild((yyval.node),(yyvsp[(1) - (2)].node));;}
    break;

  case 16:
#line 59 "syntax.y"
    {(yyval.node)=initNode("OptTag","");addChild((yyval.node),(yyvsp[(1) - (1)].node));;}
    break;

  case 17:
#line 60 "syntax.y"
    {(yyval.node)=initNode("OptTag","");;}
    break;

  case 18:
#line 62 "syntax.y"
    {(yyval.node)=initNode("Tag","");addChild((yyval.node),(yyvsp[(1) - (1)].node));;}
    break;

  case 19:
#line 66 "syntax.y"
    {(yyval.node)=initNode("VarDec","");addChild((yyval.node),(yyvsp[(1) - (1)].node));;}
    break;

  case 20:
#line 67 "syntax.y"
    {(yyval.node)=initNode("VarDec","");addChild((yyval.node),(yyvsp[(4) - (4)].node));addChild((yyval.node),(yyvsp[(3) - (4)].node));addChild((yyval.node),(yyvsp[(2) - (4)].node));addChild((yyval.node),(yyvsp[(1) - (4)].node));;}
    break;

  case 21:
#line 69 "syntax.y"
    {(yyval.node)=initNode("FunDec","");addChild((yyval.node),(yyvsp[(4) - (4)].node));addChild((yyval.node),(yyvsp[(3) - (4)].node));addChild((yyval.node),(yyvsp[(2) - (4)].node));addChild((yyval.node),(yyvsp[(1) - (4)].node));;}
    break;

  case 22:
#line 70 "syntax.y"
    {(yyval.node)=initNode("FunDec","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 23:
#line 71 "syntax.y"
    {errorCount++;;}
    break;

  case 24:
#line 72 "syntax.y"
    {errorCount++;;}
    break;

  case 25:
#line 74 "syntax.y"
    {(yyval.node)=initNode("VarList","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 26:
#line 75 "syntax.y"
    {(yyval.node)=initNode("VarList","");addChild((yyval.node),(yyvsp[(1) - (1)].node));;}
    break;

  case 27:
#line 77 "syntax.y"
    {(yyval.node)=initNode("ParamDec","");addChild((yyval.node),(yyvsp[(2) - (2)].node));addChild((yyval.node),(yyvsp[(1) - (2)].node));;}
    break;

  case 28:
#line 81 "syntax.y"
    {(yyval.node)=initNode("CompSt","");addChild((yyval.node),(yyvsp[(4) - (4)].node));addChild((yyval.node),(yyvsp[(3) - (4)].node));addChild((yyval.node),(yyvsp[(2) - (4)].node));addChild((yyval.node),(yyvsp[(1) - (4)].node));;}
    break;

  case 29:
#line 82 "syntax.y"
    {errorCount++;;}
    break;

  case 30:
#line 84 "syntax.y"
    {(yyval.node)=initNode("StmtList","");addChild((yyval.node),(yyvsp[(2) - (2)].node));addChild((yyval.node),(yyvsp[(1) - (2)].node));;}
    break;

  case 31:
#line 85 "syntax.y"
    {(yyval.node)=initNode("StmtList","");;}
    break;

  case 32:
#line 87 "syntax.y"
    {(yyval.node)=initNode("Stmt","");addChild((yyval.node),(yyvsp[(2) - (2)].node));addChild((yyval.node),(yyvsp[(1) - (2)].node));;}
    break;

  case 33:
#line 88 "syntax.y"
    {(yyval.node)=initNode("Stmt","");addChild((yyval.node),(yyvsp[(1) - (1)].node));;}
    break;

  case 34:
#line 89 "syntax.y"
    {(yyval.node)=initNode("Stmt","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 35:
#line 90 "syntax.y"
    {(yyval.node)=initNode("Stmt","");addChild((yyval.node),(yyvsp[(5) - (5)].node));addChild((yyval.node),(yyvsp[(4) - (5)].node));addChild((yyval.node),(yyvsp[(3) - (5)].node));addChild((yyval.node),(yyvsp[(2) - (5)].node));addChild((yyval.node),(yyvsp[(1) - (5)].node));;}
    break;

  case 36:
#line 91 "syntax.y"
    {(yyval.node)=initNode("Stmt","");addChild((yyval.node),(yyvsp[(7) - (7)].node));addChild((yyval.node),(yyvsp[(6) - (7)].node));addChild((yyval.node),(yyvsp[(5) - (7)].node));addChild((yyval.node),(yyvsp[(4) - (7)].node));addChild((yyval.node),(yyvsp[(3) - (7)].node));addChild((yyval.node),(yyvsp[(2) - (7)].node));addChild((yyval.node),(yyvsp[(1) - (7)].node));;}
    break;

  case 37:
#line 92 "syntax.y"
    {errorCount++;;}
    break;

  case 38:
#line 93 "syntax.y"
    {(yyval.node)=initNode("Stmt","");addChild((yyval.node),(yyvsp[(5) - (5)].node));addChild((yyval.node),(yyvsp[(4) - (5)].node));addChild((yyval.node),(yyvsp[(3) - (5)].node));addChild((yyval.node),(yyvsp[(2) - (5)].node));addChild((yyval.node),(yyvsp[(1) - (5)].node));;}
    break;

  case 39:
#line 94 "syntax.y"
    {errorCount++;;}
    break;

  case 40:
#line 95 "syntax.y"
    {errorCount++;;}
    break;

  case 41:
#line 96 "syntax.y"
    {errorCount++;;}
    break;

  case 42:
#line 100 "syntax.y"
    {(yyval.node)=initNode("DefList","");addChild((yyval.node),(yyvsp[(2) - (2)].node));addChild((yyval.node),(yyvsp[(1) - (2)].node));;}
    break;

  case 43:
#line 101 "syntax.y"
    {(yyval.node)=initNode("DefList","");;}
    break;

  case 44:
#line 103 "syntax.y"
    {(yyval.node)=initNode("Def","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 45:
#line 104 "syntax.y"
    {errorCount++;;}
    break;

  case 46:
#line 106 "syntax.y"
    {(yyval.node)=initNode("DecList","");addChild((yyval.node),(yyvsp[(1) - (1)].node));;}
    break;

  case 47:
#line 107 "syntax.y"
    {(yyval.node)=initNode("DecList","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 48:
#line 109 "syntax.y"
    {(yyval.node)=initNode("Dec","");addChild((yyval.node),(yyvsp[(1) - (1)].node));;}
    break;

  case 49:
#line 110 "syntax.y"
    {(yyval.node)=initNode("Dec","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 50:
#line 114 "syntax.y"
    {(yyval.node)=initNode("Exp","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 51:
#line 115 "syntax.y"
    {(yyval.node)=initNode("Exp","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 52:
#line 116 "syntax.y"
    {(yyval.node)=initNode("Exp","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 53:
#line 117 "syntax.y"
    {(yyval.node)=initNode("Exp","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 54:
#line 118 "syntax.y"
    {(yyval.node)=initNode("Exp","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 55:
#line 119 "syntax.y"
    {(yyval.node)=initNode("Exp","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 56:
#line 120 "syntax.y"
    {(yyval.node)=initNode("Exp","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 57:
#line 121 "syntax.y"
    {(yyval.node)=initNode("Exp","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 58:
#line 122 "syntax.y"
    {(yyval.node)=initNode("Exp","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 59:
#line 123 "syntax.y"
    {(yyval.node)=initNode("Exp","");addChild((yyval.node),(yyvsp[(2) - (2)].node));addChild((yyval.node),(yyvsp[(1) - (2)].node));;}
    break;

  case 60:
#line 124 "syntax.y"
    {(yyval.node)=initNode("Exp","");addChild((yyval.node),(yyvsp[(2) - (2)].node));addChild((yyval.node),(yyvsp[(1) - (2)].node));;}
    break;

  case 61:
#line 125 "syntax.y"
    {(yyval.node)=initNode("Exp","");addChild((yyval.node),(yyvsp[(4) - (4)].node));addChild((yyval.node),(yyvsp[(3) - (4)].node));addChild((yyval.node),(yyvsp[(2) - (4)].node));addChild((yyval.node),(yyvsp[(1) - (4)].node));;}
    break;

  case 62:
#line 126 "syntax.y"
    {(yyval.node)=initNode("Exp","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 63:
#line 127 "syntax.y"
    {(yyval.node)=initNode("Exp","");addChild((yyval.node),(yyvsp[(4) - (4)].node));addChild((yyval.node),(yyvsp[(3) - (4)].node));addChild((yyval.node),(yyvsp[(2) - (4)].node));addChild((yyval.node),(yyvsp[(1) - (4)].node));;}
    break;

  case 64:
#line 128 "syntax.y"
    {(yyval.node)=initNode("Exp","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 65:
#line 129 "syntax.y"
    {(yyval.node)=initNode("Exp","");addChild((yyval.node),(yyvsp[(1) - (1)].node));;}
    break;

  case 66:
#line 130 "syntax.y"
    {(yyval.node)=initNode("Exp","");addChild((yyval.node),(yyvsp[(1) - (1)].node));;}
    break;

  case 67:
#line 131 "syntax.y"
    {(yyval.node)=initNode("Exp","");addChild((yyval.node),(yyvsp[(1) - (1)].node));;}
    break;

  case 68:
#line 132 "syntax.y"
    {errorCount++;;}
    break;

  case 69:
#line 133 "syntax.y"
    {errorCount++;;}
    break;

  case 70:
#line 135 "syntax.y"
    {(yyval.node)=initNode("Args","");addChild((yyval.node),(yyvsp[(3) - (3)].node));addChild((yyval.node),(yyvsp[(2) - (3)].node));addChild((yyval.node),(yyvsp[(1) - (3)].node));;}
    break;

  case 71:
#line 136 "syntax.y"
    {(yyval.node)=initNode("Args","");addChild((yyval.node),(yyvsp[(1) - (1)].node));;}
    break;


/* Line 1267 of yacc.c.  */
#line 1884 "syntax.tab.c"
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


#line 139 "syntax.y"

int yyerror(char* msg){
		
		fprintf(stderr,"Error type B at line %d: %s.  (unexpected near '%s')\n", yylineno, msg, yylval.node->value);
}

