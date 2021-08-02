/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "proiect.y" /* yacc.c:339  */

#include <stdio.h>
#include "proiect.h"
#include <stdlib.h>

int erori=0;
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
int yylex();
int yyerror();



#line 81 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 31 "proiect.y" /* yacc.c:355  */

char *tip;
char *nume; 
int val;

#line 243 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 260 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   240

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  197

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    62,     2,    60,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    59,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    61,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    58,    62,    63,    66,    70,    71,    72,
      75,    76,    77,    78,    79,    80,    81,    82,    86,    87,
      91,    92,    96,    99,   101,   106,   109,   111,   118,   119,
     122,   123,   124,   125,   126,   127,   133,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   153,   154,   155,
     160,   166,   170,   171,   172,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   193,   194,   198,   201,   206,
     207,   211,   212,   215,   217,   220,   221,   225,   229,   230,
     235,   241,   245,   250,   251,   257,   258,   259,   263,   264,
     265,   266,   267,   270,   271,   272,   273,   274,   275,   276,
     277
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LIB", "IDENT", "PLUS", "MINUS", "AFIS",
  "ATRIBUIRE", "MUL", "DIV", "CALL", "BGNFUNC", "ENDFUNC", "BGNMAIN",
  "ENDMAIN", "TIPDATA", "STPRG", "ENPRG", "AND", "OR", "DACA", "ALTFEL",
  "PENTRU", "CATTIMP", "MAIMIC", "MAIMARE", "EGAL", "MMICEGAL",
  "MMAREEGAL", "INTREG", "FLOTANT", "CARACTER", "SIR_CHAR", "BOOLEAN",
  "VECTOR", "MATRICE", "INT", "RATIONAL", "BGBLOCK", "CLOSEBLOCK",
  "BITAND", "BITOR", "BITNOT", "BITXOR", "STRCOPY", "STRLENGTH", "STRCATS",
  "STRSTRING", "ATUNCI", "PRIVATE", "PUBLIC", "ENDCLASS", "BGCLASS", "NOT",
  "STRUCT", "ENDSTRUCT", "PARANTEZADESC", "PARANTEZAINC", "';'", "'.'",
  "'|'", "','", "$accept", "limbaj", "$@1", "clase", "clasa",
  "continut_clasa", "cod", "librarii", "declaratii_globale", "variabila",
  "variabila_functie", "operatiuni", "operatiune", "atribuie", "expresie",
  "accesare", "apel", "tipDeVariabila", "parametriiApel", "functii",
  "functie", "content", "paramFormali", "structura", "idents", "structuri",
  "main", "instructiuniMain", "afisare", "dacaCond", "altfelcond",
  "dacaop", "blocCod", "comparator", "conditie", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,    59,
      46,   124,    44
};
# endif

#define YYPACT_NINF -96

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-96)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -9,    13,    25,    13,   -96,    23,   -96,   -96,    27,    37,
      -7,    19,   -96,   -96,   -96,   -96,    65,   189,    49,    89,
      24,    52,    88,    96,    62,    -1,   -96,    23,   124,   132,
     115,   137,   127,    87,    93,   100,   105,   189,   110,   130,
     -96,   131,   135,   -96,   -96,    63,    23,    88,   -96,   -96,
     -96,   -96,   -96,    24,    88,   -96,   -96,   138,   115,   139,
     -96,   -96,   115,   101,   -96,   -96,   141,   -96,   -96,   -96,
      14,   193,    14,   -96,   -96,   -96,   -96,   -96,   -96,   189,
     189,   151,   148,   -96,    88,   -96,   -96,   186,   101,   202,
     -96,   115,   115,   115,   115,   115,   115,   115,   150,   -96,
     -96,   -96,   146,    14,   146,    69,   149,    71,   156,   189,
     -96,   -96,   205,   -96,   207,   157,   -96,    74,    74,   140,
     140,   -96,   -18,   173,   139,   158,   159,   160,   161,   162,
     166,   -96,   -96,   -96,   -96,   -96,    50,    81,   155,    14,
      14,   167,    14,   178,   189,   -96,   -28,   -96,   163,   189,
     150,   150,   150,   150,   150,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   199,   144,     2,   189,   -96,   -96,   205,
     186,   -96,   213,   -96,   -96,   -96,   -96,   -96,   189,   -96,
     206,   193,   187,   -96,   -96,   -96,   190,   144,   -96,   171,
     -96,   -96,   -96,   192,   189,   194,   -96
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    19,     2,     0,     1,    18,     0,     0,
       0,     0,     3,    22,    23,    24,     0,     0,     0,     0,
       0,     4,     0,    65,    76,     0,    13,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
      34,     0,     0,    87,    35,     0,     0,     0,    12,     5,
      11,    66,    75,     0,     0,    17,    21,     0,     0,    46,
      45,    48,     0,    80,    49,    47,     0,    25,    26,    27,
       0,     0,     0,    33,    78,    30,    31,    77,    32,     0,
       0,     0,     0,    10,     0,    16,    15,     0,    36,     0,
      43,     0,     0,     0,     0,     0,     0,     0,     0,    52,
      53,    54,     0,     0,     0,     0,     0,     0,     8,    28,
       9,     6,    71,    14,     0,     0,    50,    37,    38,    39,
      40,    41,    42,    44,    52,    58,    62,    64,    60,    56,
       0,    89,    88,    90,    91,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,    72,    69,     0,
       0,     0,     0,     0,     0,    51,    96,    95,    98,    94,
      97,    93,    99,   100,     0,     0,     0,     7,    73,     0,
       0,    68,     0,    57,    61,    63,    59,    55,     0,    83,
       0,     0,     0,    74,    70,    67,     0,     0,    81,     0,
      85,    84,    82,     0,     0,     0,    86
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,   -96,     3,   -96,   -96,   -96,   229,   103,   -96,
     -96,   -74,   -17,   -69,    41,   -95,   -29,   -56,    26,     7,
      -6,   -96,    66,   -96,    64,   211,   -10,   200,   -96,   -96,
     -96,    51,   -96,   136,   -63
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    20,    21,    81,     4,     5,    10,    11,
      36,   108,   109,    38,    63,    64,    39,   104,   130,    22,
      40,   172,   115,    24,   147,    25,    26,    41,    42,    43,
     188,   180,    44,   136,   105
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      37,    65,   106,   127,    23,    16,   110,    17,     1,   107,
      48,    16,    50,    17,    23,    55,     3,    23,    99,    23,
      37,   139,   140,    95,    49,     6,    97,    47,    53,    65,
      51,   168,    54,    65,   169,   145,    16,    83,    17,     9,
     137,    13,   129,    85,    86,    12,    18,    23,    19,   100,
     101,   102,    18,    45,    99,   127,   127,   127,   127,   127,
      84,   181,    65,    65,    65,    65,    65,    65,    65,   128,
     167,   103,    14,    15,   113,   171,   162,   163,    27,   165,
     157,    28,   161,    93,    94,   100,   101,   156,   139,   140,
     139,   140,   182,    46,   129,   129,   129,   129,   129,    88,
     139,   140,    17,    90,   186,    18,    91,    92,    16,   160,
      93,    94,   189,    79,    80,    95,    96,    19,    97,    59,
     195,   128,   128,   128,   128,   128,    31,   141,    57,   143,
      56,    67,   117,   118,   119,   120,   121,   122,   123,   158,
      58,    66,    95,    96,    70,    97,    77,   179,    29,    82,
      71,    30,    60,    61,   124,    31,    16,    72,    62,    99,
      32,    31,    68,    69,    73,    33,    31,    34,    35,    75,
     179,   131,   132,   133,   134,   135,   173,   174,   175,   176,
     177,    95,    96,   178,    97,   100,   101,   125,   126,    76,
     100,   101,   159,    29,    78,    87,    30,    29,    98,    89,
      31,    16,   114,   111,   112,    32,   116,   144,   142,   146,
      33,   148,    34,    35,    95,   149,   164,   166,   139,   150,
     151,   152,   153,   154,   155,   170,   185,   190,   187,   193,
     191,   194,     7,   183,   196,    52,   184,    74,   192,     0,
     138
};

static const yytype_int16 yycheck[] =
{
      17,    30,    71,    98,    10,    12,    80,    14,    17,    72,
      20,    12,    22,    14,    20,    25,     3,    23,     4,    25,
      37,    19,    20,    41,    21,     0,    44,    20,    25,    58,
      23,    59,    25,    62,    62,   109,    12,    47,    14,    16,
     103,     4,    98,    53,    54,    18,    53,    53,    55,    35,
      36,    37,    53,     4,     4,   150,   151,   152,   153,   154,
      53,    59,    91,    92,    93,    94,    95,    96,    97,    98,
     144,    57,    35,    36,    84,   149,   139,   140,    59,   142,
     136,    16,   138,     9,    10,    35,    36,    37,    19,    20,
      19,    20,   166,     4,   150,   151,   152,   153,   154,    58,
      19,    20,    14,    62,   178,    53,     5,     6,    12,   138,
       9,    10,   181,    50,    51,    41,    42,    55,    44,     4,
     194,   150,   151,   152,   153,   154,    11,    58,     4,    58,
      27,     4,    91,    92,    93,    94,    95,    96,    97,    58,
       8,     4,    41,    42,    57,    44,    15,   164,     4,    46,
      57,     7,    37,    38,     4,    11,    12,    57,    43,     4,
      16,    11,    35,    36,    59,    21,    11,    23,    24,    59,
     187,    25,    26,    27,    28,    29,   150,   151,   152,   153,
     154,    41,    42,    39,    44,    35,    36,    37,    38,    59,
      35,    36,    37,     4,    59,    57,     7,     4,    57,    60,
      11,    12,    16,    52,    56,    16,     4,    51,    59,     4,
      21,     4,    23,    24,    41,    58,    49,    39,    19,    61,
      61,    61,    61,    61,    58,    62,    13,    40,    22,    58,
      40,    39,     3,   169,    40,    24,   170,    37,   187,    -1,
     104
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    64,     3,    69,    70,     0,    70,    65,    16,
      71,    72,    18,     4,    35,    36,    12,    14,    53,    55,
      66,    67,    82,    83,    86,    88,    89,    59,    16,     4,
       7,    11,    16,    21,    23,    24,    73,    75,    76,    79,
      83,    90,    91,    92,    95,     4,     4,    82,    89,    66,
      89,    82,    88,    66,    82,    89,    71,     4,     8,     4,
      37,    38,    43,    77,    78,    79,     4,     4,    35,    36,
      57,    57,    57,    59,    90,    59,    59,    15,    59,    50,
      51,    68,    71,    89,    82,    89,    89,    57,    77,    60,
      77,     5,     6,     9,    10,    41,    42,    44,    57,     4,
      35,    36,    37,    57,    80,    97,    76,    97,    74,    75,
      74,    52,    56,    89,    16,    85,     4,    77,    77,    77,
      77,    77,    77,    77,     4,    37,    38,    78,    79,    80,
      81,    25,    26,    27,    28,    29,    96,    97,    96,    19,
      20,    58,    59,    58,    51,    74,     4,    87,     4,    58,
      61,    61,    61,    61,    61,    58,    37,    80,    58,    37,
      79,    80,    97,    97,    49,    97,    39,    74,    59,    62,
      62,    74,    84,    81,    81,    81,    81,    81,    39,    75,
      94,    59,    74,    87,    85,    13,    74,    22,    93,    76,
      40,    40,    94,    58,    39,    74,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    65,    64,    66,    66,    67,    68,    68,    68,
      69,    69,    69,    69,    69,    69,    69,    69,    70,    70,
      71,    71,    72,    72,    72,    73,    73,    73,    74,    74,
      75,    75,    75,    75,    75,    75,    76,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      78,    79,    80,    80,    80,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    82,    82,    83,    84,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    90,    90,
      91,    92,    93,    94,    94,    95,    95,    95,    96,    96,
      96,    96,    96,    97,    97,    97,    97,    97,    97,    97,
      97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     1,     2,     4,     4,     2,     2,
       5,     4,     4,     3,     6,     5,     5,     4,     2,     1,
       2,     3,     2,     2,     2,     2,     2,     2,     1,     2,
       2,     2,     2,     2,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     1,     1,     1,     1,     1,
       3,     5,     1,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     2,     8,     1,     2,
       4,     4,     5,     2,     3,     2,     1,     3,     2,     1,
       2,     7,     2,     1,     3,     7,    11,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 58 "proiect.y" /* yacc.c:1646  */
    {if(erori==0)printf("Program corect sintactic!\n"); else printf("Au fost gasite erori!\n");}
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 96 "proiect.y" /* yacc.c:1646  */
    {if(isAvailable((yyvsp[0].nume), 0)==1) declaraVariabila((yyvsp[0].nume),(yyvsp[-1].tip), 0);
				else {yyerror(); printf("%d:Numele variabilei a fost folosit deja!!!\n",yylineno);}}
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 99 "proiect.y" /* yacc.c:1646  */
    {if(isArrayAvailable((yyvsp[0].nume), 0)==1) declaraArray((yyvsp[0].nume),(yyvsp[-1].tip), 0);
			else {yyerror(); printf("%d:Numele variabilei a fost folosit deja!!!\n",yylineno);}}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 101 "proiect.y" /* yacc.c:1646  */
    {if(isArrayAvailable((yyvsp[0].nume), 0)==1) declaraArray((yyvsp[0].nume),(yyvsp[-1].tip), 0);
			else {yyerror(); printf("%d:Numele variabilei a fost folosit deja!!!\n",yylineno);}}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 106 "proiect.y" /* yacc.c:1646  */
    {if(isAvailable((yyvsp[0].nume), 1)==1) declaraVariabila((yyvsp[0].nume),(yyvsp[-1].tip), 1);
				else {yyerror(); printf("%d:Numele variabilei a fost folosit deja!!!\n",yylineno);}}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 109 "proiect.y" /* yacc.c:1646  */
    {if(isArrayAvailable((yyvsp[0].nume), 1)==1) declaraArray((yyvsp[0].nume),(yyvsp[-1].tip), 1);
			else {yyerror(); printf("%d:Numele variabilei a fost folosit deja!!!\n",yylineno);}}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 111 "proiect.y" /* yacc.c:1646  */
    {if(isArrayAvailable((yyvsp[0].nume), 1)==1) declaraArray((yyvsp[0].nume),(yyvsp[-1].tip), 1);
			else {yyerror(); printf("%d:Numele variabilei a fost folosit deja!!!\n",yylineno);}}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 133 "proiect.y" /* yacc.c:1646  */
    {if(isAvailable((yyvsp[-2].nume), 0)==0 || isAvailable((yyvsp[-2].nume), 1)==0)
					if(strcmp(variables[getPoz((yyvsp[-2].nume))].tip,"int")==0)
						asignareInt((yyvsp[-2].nume),(yyvsp[0].val));
					else {yyerror(); printf("%d:Variabila nu e de tipul int\n",yylineno);}
				else {yyerror(); printf("%d:Variabila nu e initializata!\n",yylineno);}}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 141 "proiect.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[-2].val)+(yyvsp[0].val);}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 142 "proiect.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[-2].val)-(yyvsp[0].val);}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 143 "proiect.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[-2].val)*(yyvsp[0].val);}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 144 "proiect.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[-2].val)/(yyvsp[0].val);}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 145 "proiect.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[-2].val) & (yyvsp[0].val);}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 146 "proiect.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[-2].val) | (yyvsp[0].val);}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 147 "proiect.y" /* yacc.c:1646  */
    {(yyval.val) = complementare((yyvsp[0].val));}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 148 "proiect.y" /* yacc.c:1646  */
    {(yyval.val) = (yyvsp[-2].val) ^ (yyvsp[0].val);}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 149 "proiect.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 150 "proiect.y" /* yacc.c:1646  */
    {if(isAvailable((yyvsp[0].nume), 0)==0 && isAvailable((yyvsp[0].nume), 1)==0){yyerror();printf("%d:Variabila nu a fost declarata\n",yylineno);}
			if(strcmp(variables[getPoz((yyvsp[0].nume))].tip,"int"))
{yyerror();printf("%d:Variabila nu e de tipul int\n",yylineno);} (yyval.val)=variables[getPoz((yyvsp[0].nume))].val;}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 153 "proiect.y" /* yacc.c:1646  */
    {(yyval.val)=0;}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 154 "proiect.y" /* yacc.c:1646  */
    {(yyval.val)=0;}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 155 "proiect.y" /* yacc.c:1646  */
    {(yyval.val)=0;}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 160 "proiect.y" /* yacc.c:1646  */
    {if(isStruct((yyvsp[-2].nume))==0){yyerror(); printf("%d:Eroare accesare struct!\n",yylineno);}}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 170 "proiect.y" /* yacc.c:1646  */
    {if(isAvailable((yyvsp[0].nume), 0)==0 && isAvailable((yyvsp[0].nume), 1)==0){yyerror(); printf("%d:Variabila nu e initializata\n",yylineno);} }
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 171 "proiect.y" /* yacc.c:1646  */
    {if(isArrayAvailable((yyvsp[0].nume), 0)==0 && isArrayAvailable((yyvsp[0].nume), 1)==0){yyerror(); printf("%d:Variabila nu e initializata\n",yylineno);}}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 172 "proiect.y" /* yacc.c:1646  */
    {if(isArrayAvailable((yyvsp[0].nume), 0)==0 && isArrayAvailable((yyvsp[0].nume), 1)==0){yyerror(); printf("%d:Variabila nu e initializata\n",yylineno);}}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 215 "proiect.y" /* yacc.c:1646  */
    {if (isStructAvailable((yyvsp[-1].nume))) {declaraStruct((yyvsp[-1].nume));}
                                                               else {yyerror(); printf("Variablila e luata!\n");}}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 235 "proiect.y" /* yacc.c:1646  */
    {

       if(erori==0) printf("EVAL = %d la linia %d\n",(yyvsp[0].val),yylineno);}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1667 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 282 "proiect.y" /* yacc.c:1906  */


int yyerror(char * s)
{
erori++;
}

int main(int argc, char** argv)
{
yyin=fopen(argv[1],"r");
yyparse();

show_symbol_table();
exit(0);
}



