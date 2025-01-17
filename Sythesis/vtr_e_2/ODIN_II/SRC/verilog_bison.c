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
#line 1 "SRC/verilog_bison.y" /* yacc.c:339  */

/*
Copyright (c) 2009 Peter Andrew Jamieson (jamieson.peter@gmail.com)

Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without
restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following
conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.
*/ 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "parse_making_ast.h"
 
#define PARSE {printf("here\n");}

#ifndef YYLINENO
int yylineno;
#define YYLINENO yylineno
#else
extern int yylineno;
#endif

void yyerror(const char *str);
int yywrap();
int yyparse();
int yylex(void);

 // RESPONCE in an error
void yyerror(const char *str)
{
	fprintf(stderr,"error in parsing: %s - on line number %d\n",str, yylineno);
	exit(-1);
}
 
// point of continued file reading
int yywrap()
{
	return 1;
}


#line 126 "SRC/verilog_bison.c" /* yacc.c:339  */

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
   by #include "verilog_bison.h".  */
#ifndef YY_YY_SRC_VERILOG_BISON_H_INCLUDED
# define YY_YY_SRC_VERILOG_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    vSYMBOL_ID = 258,
    vNUMBER_ID = 259,
    vDELAY_ID = 260,
    vALWAYS = 261,
    vAND = 262,
    vASSIGN = 263,
    vBEGIN = 264,
    vCASE = 265,
    vDEFAULT = 266,
    vDEFINE = 267,
    vELSE = 268,
    vEND = 269,
    vENDCASE = 270,
    vENDMODULE = 271,
    vIF = 272,
    vINOUT = 273,
    vINPUT = 274,
    vMODULE = 275,
    vNAND = 276,
    vNEGEDGE = 277,
    vNOR = 278,
    vNOT = 279,
    vOR = 280,
    vFOR = 281,
    vOUTPUT = 282,
    vPARAMETER = 283,
    vPOSEDGE = 284,
    vREG = 285,
    vWIRE = 286,
    vXNOR = 287,
    vXOR = 288,
    vDEFPARAM = 289,
    voANDAND = 290,
    voOROR = 291,
    voLTE = 292,
    voGTE = 293,
    voSLEFT = 294,
    voSRIGHT = 295,
    voEQUAL = 296,
    voNOTEQUAL = 297,
    voCASEEQUAL = 298,
    voCASENOTEQUAL = 299,
    voXNOR = 300,
    voNAND = 301,
    voNOR = 302,
    vWHILE = 303,
    vINTEGER = 304,
    vNOT_SUPPORT = 305,
    UOR = 306,
    UAND = 307,
    UNOT = 308,
    UNAND = 309,
    UNOR = 310,
    UXNOR = 311,
    UXOR = 312,
    ULNOT = 313,
    UADD = 314,
    UMINUS = 315,
    LOWER_THAN_ELSE = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 61 "SRC/verilog_bison.y" /* yacc.c:355  */

	char *id_name;
	char *num_value;
	ast_node_t *node;

#line 234 "SRC/verilog_bison.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_VERILOG_BISON_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 251 "SRC/verilog_bison.c" /* yacc.c:358  */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1534

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  334

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,     2,    86,     2,    62,    55,     2,
      63,    64,    60,    58,    83,    59,    84,    61,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,    82,
      56,    85,    57,    51,    87,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,    54,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    65,    53,    66,    69,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   119,   119,   122,   132,   133,   134,   137,   140,   141,
     142,   145,   146,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   162,   165,   169,   172,   175,   178,   179,
     180,   183,   184,   185,   188,   189,   190,   191,   192,   195,
     199,   200,   201,   202,   203,   204,   205,   208,   209,   210,
     211,   215,   218,   219,   220,   221,   224,   225,   228,   229,
     232,   233,   236,   237,   241,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   255,   256,   259,   260,   263,   264,
     267,   268,   271,   274,   275,   278,   279,   283,   284,   287,
     288,   289,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   331,   332,
     335,   336,   337,   338,   339,   342,   343
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "vSYMBOL_ID", "vNUMBER_ID", "vDELAY_ID",
  "vALWAYS", "vAND", "vASSIGN", "vBEGIN", "vCASE", "vDEFAULT", "vDEFINE",
  "vELSE", "vEND", "vENDCASE", "vENDMODULE", "vIF", "vINOUT", "vINPUT",
  "vMODULE", "vNAND", "vNEGEDGE", "vNOR", "vNOT", "vOR", "vFOR", "vOUTPUT",
  "vPARAMETER", "vPOSEDGE", "vREG", "vWIRE", "vXNOR", "vXOR", "vDEFPARAM",
  "voANDAND", "voOROR", "voLTE", "voGTE", "voSLEFT", "voSRIGHT", "voEQUAL",
  "voNOTEQUAL", "voCASEEQUAL", "voCASENOTEQUAL", "voXNOR", "voNAND",
  "voNOR", "vWHILE", "vINTEGER", "vNOT_SUPPORT", "'?'", "':'", "'|'",
  "'^'", "'&'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'('",
  "')'", "'{'", "'}'", "'['", "']'", "'~'", "'!'", "UOR", "UAND", "UNOT",
  "UNAND", "UNOR", "UXNOR", "UXOR", "ULNOT", "UADD", "UMINUS",
  "LOWER_THAN_ELSE", "';'", "','", "'.'", "'='", "'#'", "'@'", "$accept",
  "source_text", "items", "define", "module", "list_of_module_items",
  "module_item", "parameter_declaration", "defparam_declaration",
  "input_declaration", "output_declaration", "inout_declaration",
  "net_declaration", "variable_list", "variable", "continuous_assign",
  "gate_declaration", "gate_instance", "module_instantiation",
  "module_instance", "list_of_module_connections", "module_connection",
  "list_of_module_parameters", "module_parameter", "always", "statement",
  "blocking_assignment", "non_blocking_assignment", "case_item_list",
  "case_items", "seq_block", "stmt_list", "delay_control",
  "event_expression_list", "event_expression", "expression", "primary",
  "expression_list", YY_NULLPTR
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
     305,    63,    58,   124,    94,    38,    60,    62,    43,    45,
      42,    47,    37,    40,    41,   123,   125,    91,    93,   126,
      33,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,    59,    44,    46,    61,    35,    64
};
# endif

#define YYPACT_NINF -177

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-177)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,    21,    30,    35,    11,  -177,  -177,    46,   -24,  -177,
    -177,  -177,  -177,     4,   -30,   -29,   462,   -39,  -177,    37,
     778,    -9,  -177,   462,   462,   462,   462,   462,   462,   462,
     462,   462,   462,   462,   462,  1218,  -177,   -15,     5,    31,
     462,  -177,    19,   -17,    40,    37,    31,    31,    40,    40,
      40,    40,    31,    31,    31,    31,    40,    40,    31,    31,
     682,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,  -177,   462,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,   978,   947,   -37,  -177,  -177,   462,   462,   462,   462,
     462,   462,   462,   462,   462,   462,   462,   462,   462,   462,
     462,   462,   462,   462,   462,   462,   462,   462,   462,   462,
     462,   778,    24,  -177,  -177,  1330,    45,    47,  -177,    49,
     202,    51,   462,    33,    50,    38,   -22,   -18,    52,    55,
      57,    62,    67,   114,   157,   169,    63,    72,   195,   199,
    -177,  -177,   779,  -177,   462,  -177,   462,  1384,  1358,   108,
     108,   187,   187,  1472,  1472,  1472,  1472,  1436,  1446,  1436,
    1246,   813,  1410,  1436,  1446,   108,   108,   230,   230,  -177,
    -177,  -177,   714,   778,   118,   285,   124,   202,    92,    96,
     115,   117,  -177,  -177,   103,   104,  -177,    15,   462,   560,
    -177,  -177,   377,  -177,    31,  -177,  -177,  -177,  -177,  -177,
    -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,   462,  -177,
     915,    41,  1330,   462,   189,  -177,   746,   112,   196,   -36,
    -177,  1330,   198,   -34,  -177,  1330,   200,   201,   143,   -16,
    -177,  -177,  -177,   126,   462,   462,    37,   462,  -177,  -177,
     405,   591,   462,   462,  1330,   847,   144,   147,  1330,   -31,
    -177,  -177,   127,   133,   320,   146,   213,   285,  -177,  -177,
    -177,    34,  -177,  -177,  -177,  1008,  1038,   136,  1068,   462,
    1330,   462,   498,  1330,  -177,  -177,  -177,   462,    37,   462,
    -177,  -177,   462,   160,  -177,  -177,   434,   202,   462,   202,
    1330,   529,  -177,   462,  1274,  -177,  1098,  1128,   257,   168,
     348,  -177,  1302,   222,   622,  -177,  -177,   462,  1158,   462,
    -177,  -177,   154,   -32,   202,  -177,  -177,   202,   202,    37,
    1188,  -177,   881,  -177,   161,  -177,  -177,  -177,   190,  -177,
    -177,  -177,   202,  -177
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     6,     5,     0,     0,     1,
       4,     3,     7,     0,    34,     0,     0,     0,    33,     0,
       0,   131,   130,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    22,    14,    15,    16,    17,    18,    19,
      20,    21,     0,   100,    98,    99,    97,   102,    96,    93,
      94,     0,   136,     0,    95,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,   136,     0,     0,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,   127,     0,   134,     0,   125,   124,   120,
     121,   117,   116,   118,   119,   122,   123,   113,   111,   112,
       0,     0,   110,   103,   109,   114,   115,   107,   108,   104,
     105,   106,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    64,     0,     0,    65,     0,     0,     0,
      40,    39,     0,    27,     0,    25,    41,    42,    43,    44,
      26,    23,    29,    28,    45,    46,    24,    30,     0,   132,
     136,     0,   135,     0,     0,     8,     0,     0,     0,     0,
      57,    59,     0,     0,    61,    63,     0,     0,     0,     0,
      88,    89,    84,     0,     0,     0,     0,     0,    66,    67,
       0,     0,     0,     0,    74,     0,     0,     0,   126,    35,
       9,    54,     0,     0,     0,     0,     0,     0,    91,    90,
      86,     0,    85,    82,    83,     0,     0,     0,     0,     0,
      76,     0,     0,    75,   133,   128,   129,     0,     0,     0,
      52,    56,     0,     0,    60,    87,     0,     0,     0,     0,
      77,     0,    50,     0,     0,    37,     0,     0,     0,     0,
       0,    79,     0,    68,     0,    72,    49,     0,     0,     0,
      58,    62,     0,     0,     0,    70,    78,     0,     0,     0,
       0,    48,     0,    55,     0,    81,    80,    69,     0,    47,
      36,    53,     0,    71
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -177,  -177,  -177,   251,   253,   -69,   -56,  -177,  -177,  -177,
    -177,  -177,  -177,   179,   -33,  -177,  -177,    69,  -177,  -177,
     -35,     8,  -177,    14,  -177,  -176,   -43,  -177,  -177,   -28,
    -177,  -177,  -177,  -177,    13,   -13,   -19,   121
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    60,    61,    62,    63,    64,
      65,    66,    67,    17,    18,    68,    69,   123,    70,   118,
     219,   220,   223,   224,    71,   183,   184,   185,   300,   301,
     186,   233,   120,   229,   230,   221,    36,    83
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      41,   232,   124,    35,   141,   113,   114,    14,    14,   261,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      84,    85,   116,     1,     7,    37,   125,   115,   253,   145,
     256,     2,   324,     8,    14,     9,   277,    21,    22,    13,
      21,    22,   172,   121,    38,    39,   146,   254,   262,   257,
      12,   254,   240,    20,   278,    19,   226,   264,    72,   142,
     193,   194,    39,   227,   195,   194,    39,   111,    15,   112,
     119,    16,    16,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,    16,    40,
     192,   187,    40,   122,   216,   117,   173,   247,   174,   189,
     175,   303,   176,   305,   188,   190,   141,   128,   129,   130,
     131,    21,    22,   192,   146,   136,   137,    21,    22,    21,
      22,   210,   191,   212,   196,   177,   178,   197,   325,   198,
     263,   326,   327,   179,   199,   204,   226,    90,    91,   200,
     194,    39,   180,   227,   205,   234,   333,   231,   187,   235,
     141,   113,   225,    23,    24,    25,   106,   107,   108,   109,
     110,    26,    27,    28,   181,   241,    29,    30,   236,   244,
     237,    31,   217,    32,   228,   238,   239,    33,    34,    40,
     279,    40,   249,   267,   251,   245,   201,   194,    39,   252,
     248,   255,   218,   258,   259,    21,    22,   260,   182,   282,
     275,   177,   178,   276,   187,   280,   283,   125,   288,   179,
     314,   265,   266,   298,   268,   126,   127,   270,   180,   272,
     273,   132,   133,   134,   135,   318,   323,   138,   139,   202,
     194,    39,   231,   331,   225,   106,   107,   108,   109,   110,
     181,   203,   194,    39,   332,    10,   290,    11,   291,   295,
      21,    22,   281,   313,   294,   211,   296,    40,   187,   297,
     187,   284,   316,   302,   285,   304,   328,   206,   194,    39,
     308,   207,   194,    39,   182,     0,     0,   302,    21,    22,
     108,   109,   110,     0,   320,   187,   322,     0,   187,   187,
     125,     0,    23,    24,    25,     0,     0,     0,     0,     0,
      26,    27,    28,   187,     0,    29,    30,     0,     0,     0,
      31,   312,    32,    21,    22,     0,    33,    34,     0,     0,
      23,    24,    25,     0,     0,     0,     0,     0,    26,    27,
      28,   218,     0,    29,    30,     0,     0,     0,    31,     0,
      32,    21,    22,     0,    33,    34,     0,     0,     0,   299,
       0,     0,     0,   315,     0,    23,    24,    25,     0,   222,
       0,     0,     0,    26,    27,    28,     0,     0,    29,    30,
      21,    22,   243,    31,     0,    32,     0,     0,     0,    33,
      34,     0,     0,    23,    24,    25,     0,     0,     0,     0,
       0,    26,    27,    28,   218,     0,    29,    30,    21,    22,
     269,    31,     0,    32,     0,     0,     0,    33,    34,     0,
       0,     0,    23,    24,    25,     0,     0,     0,     0,     0,
      26,    27,    28,     0,     0,    29,    30,    21,    22,     0,
      31,     0,    32,     0,     0,   299,    33,    34,     0,     0,
      23,    24,    25,     0,     0,     0,     0,     0,    26,    27,
      28,     0,     0,    29,    30,    21,    22,     0,    31,     0,
      32,     0,     0,     0,    33,    34,     0,     0,     0,    23,
      24,    25,     0,     0,     0,     0,     0,    26,    27,    28,
       0,     0,    29,    30,     0,     0,     0,    31,     0,    32,
       0,     0,     0,    33,    34,     0,     0,    23,    24,    25,
       0,     0,     0,     0,     0,    26,    27,    28,     0,     0,
      29,    30,     0,     0,     0,    31,     0,    32,     0,     0,
       0,    33,    34,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,    99,
       0,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     0,   292,     0,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,     0,     0,     0,
      99,   293,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,   306,     0,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,     0,     0,
       0,    99,   307,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,     0,
       0,     0,    99,   242,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,     0,     0,     0,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
       0,     0,     0,    99,   271,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    42,     0,     0,    43,    44,
      45,     0,     0,     0,     0,     0,     0,     0,   140,     0,
      46,    47,     0,    48,   319,    49,    50,    51,     0,    52,
      53,     0,    54,    55,    56,    57,    58,    42,     0,     0,
      43,    44,    45,     0,     0,     0,     0,     0,     0,     0,
     215,    59,    46,    47,     0,    48,     0,    49,    50,    51,
       0,    52,    53,     0,    54,    55,    56,    57,    58,    42,
       0,     0,    43,    44,    45,     0,     0,     0,     0,     0,
       0,     0,   250,    59,    46,    47,     0,    48,     0,    49,
      50,    51,     0,    52,    53,     0,    54,    55,    56,    57,
      58,    42,     0,     0,    43,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    46,    47,     0,    48,
       0,    49,    50,    51,     0,    52,    53,     0,    54,    55,
      56,    57,    58,     0,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    59,     0,     0,
      99,   208,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,   209,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,     0,     0,     0,    99,     0,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,     0,     0,     0,     0,
       0,   214,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,     0,     0,     0,    99,     0,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
       0,     0,     0,     0,     0,   274,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,     0,
       0,     0,    99,     0,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,     0,     0,     0,     0,     0,   330,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,     0,     0,     0,    99,     0,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,     0,     0,
       0,   246,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,     0,     0,     0,    99,     0,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
       0,     0,   144,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,    99,
       0,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     0,   143,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,    99,
       0,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     0,   286,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,    99,
       0,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     0,   287,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,    99,
       0,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     0,   289,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,    99,
       0,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     0,   310,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,    99,
       0,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     0,   311,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,    99,
       0,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     0,   321,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,    99,
       0,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     0,   329,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,     0,     0,     0,    99,   213,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     0,     0,     0,    99,   309,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
       0,     0,     0,    99,   317,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,     0,     0,
       0,    99,     0,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    86,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,     0,
       0,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     0,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,     0,     0,
       0,     0,     0,     0,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    88,    89,    90,    91,    92,    93,    94,
      95,     0,    97,    88,    89,    90,    91,    92,    93,    94,
      95,   103,   104,   105,   106,   107,   108,   109,   110,     0,
       0,     0,   104,   105,   106,   107,   108,   109,   110,    88,
      89,    90,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   104,   105,
     106,   107,   108,   109,   110
};

static const yytype_int16 yycheck[] =
{
      19,   177,    45,    16,    60,    38,    39,     3,     3,    25,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     3,    12,     3,    64,    45,    40,    64,    66,
      64,    20,    64,     3,     3,     0,    67,     3,     4,    63,
       3,     4,   111,     3,    83,    84,    83,    83,    64,    83,
       4,    83,    37,    82,    85,    85,    22,   233,    67,    72,
      82,    83,    84,    29,    82,    83,    84,    82,    64,    64,
      87,    67,    67,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,    67,    65,
      85,   120,    65,    63,   173,    86,    82,    66,    63,   122,
      63,   287,    63,   289,    63,    82,   172,    48,    49,    50,
      51,     3,     4,    85,    83,    56,    57,     3,     4,     3,
       4,   144,    82,   146,    82,     9,    10,    82,   314,    82,
      14,   317,   318,    17,    82,    82,    22,    39,    40,    82,
      83,    84,    26,    29,    82,    63,   332,   176,   177,    63,
     216,   194,   175,    45,    46,    47,    58,    59,    60,    61,
      62,    53,    54,    55,    48,   188,    58,    59,    63,   192,
      63,    63,    64,    65,    60,    82,    82,    69,    70,    65,
      63,    65,     3,   236,    82,   208,    82,    83,    84,     3,
     213,     3,    84,     3,     3,     3,     4,    64,    82,    63,
      66,     9,    10,    66,   233,    82,     3,   236,    82,    17,
      52,   234,   235,    63,   237,    46,    47,   240,    26,   242,
     243,    52,    53,    54,    55,    13,    82,    58,    59,    82,
      83,    84,   261,    82,   257,    58,    59,    60,    61,    62,
      48,    82,    83,    84,    64,     4,   269,     4,   271,   278,
       3,     4,   254,   298,   277,   144,   279,    65,   287,   282,
     289,   257,   300,   286,   261,   288,   319,    82,    83,    84,
     293,    82,    83,    84,    82,    -1,    -1,   300,     3,     4,
      60,    61,    62,    -1,   307,   314,   309,    -1,   317,   318,
     319,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,   332,    -1,    58,    59,    -1,    -1,    -1,
      63,    64,    65,     3,     4,    -1,    69,    70,    -1,    -1,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    53,    54,
      55,    84,    -1,    58,    59,    -1,    -1,    -1,    63,    -1,
      65,     3,     4,    -1,    69,    70,    -1,    -1,    -1,    11,
      -1,    -1,    -1,    15,    -1,    45,    46,    47,    -1,    84,
      -1,    -1,    -1,    53,    54,    55,    -1,    -1,    58,    59,
       3,     4,     5,    63,    -1,    65,    -1,    -1,    -1,    69,
      70,    -1,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    84,    -1,    58,    59,     3,     4,
       5,    63,    -1,    65,    -1,    -1,    -1,    69,    70,    -1,
      -1,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    -1,    -1,    58,    59,     3,     4,    -1,
      63,    -1,    65,    -1,    -1,    11,    69,    70,    -1,    -1,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    53,    54,
      55,    -1,    -1,    58,    59,     3,     4,    -1,    63,    -1,
      65,    -1,    -1,    -1,    69,    70,    -1,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      -1,    -1,    58,    59,    -1,    -1,    -1,    63,    -1,    65,
      -1,    -1,    -1,    69,    70,    -1,    -1,    45,    46,    47,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    -1,    -1,
      58,    59,    -1,    -1,    -1,    63,    -1,    65,    -1,    -1,
      -1,    69,    70,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      51,    83,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    51,    83,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    51,    83,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    51,    83,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,     3,    -1,    -1,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,
      18,    19,    -1,    21,    82,    23,    24,    25,    -1,    27,
      28,    -1,    30,    31,    32,    33,    34,     3,    -1,    -1,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    49,    18,    19,    -1,    21,    -1,    23,    24,    25,
      -1,    27,    28,    -1,    30,    31,    32,    33,    34,     3,
      -1,    -1,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    49,    18,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,     3,    -1,    -1,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    18,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    49,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    68,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    -1,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    68,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    51,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    68,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    68,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    66,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    51,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    65,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    51,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    37,    38,    39,    40,    41,    42,    43,
      44,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    20,    89,    90,    91,    92,     3,     3,     0,
      91,    92,     4,    63,     3,    64,    67,   101,   102,    85,
      82,     3,     4,    45,    46,    47,    53,    54,    55,    58,
      59,    63,    65,    69,    70,   123,   124,    64,    83,    84,
      65,   124,     3,     6,     7,     8,    18,    19,    21,    23,
      24,    25,    27,    28,    30,    31,    32,    33,    34,    49,
      93,    94,    95,    96,    97,    98,    99,   100,   103,   104,
     106,   112,    67,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   125,   123,   123,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    82,    64,   102,   102,   123,     3,    86,   107,    87,
     120,     3,    63,   105,   114,   124,   101,   101,   105,   105,
     105,   105,   101,   101,   101,   101,   105,   105,   101,   101,
      16,    94,   123,    64,    65,    66,    83,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,    93,    82,    63,    63,    63,     9,    10,    17,
      26,    48,    82,   113,   114,   115,   118,   124,    63,   123,
      82,    82,    85,    82,    83,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    52,    68,
     123,   125,   123,    52,    68,    16,    93,    64,    84,   108,
     109,   123,    84,   110,   111,   123,    22,    29,    60,   121,
     122,   124,   113,   119,    63,    63,    63,    63,    82,    82,
      37,   123,    83,     5,   123,   123,    66,    66,   123,     3,
      16,    82,     3,    64,    83,     3,    64,    83,     3,     3,
      64,    25,    64,    14,   113,   123,   123,   114,   123,     5,
     123,    83,   123,   123,    68,    66,    66,    67,    85,    63,
      82,   109,    63,     3,   111,   122,    64,    64,    82,    64,
     123,   123,    64,    83,   123,   124,   123,   123,    63,    11,
     116,   117,   123,   113,   123,   113,    64,    83,   123,    52,
      64,    64,    64,   108,    52,    15,   117,    52,    13,    82,
     123,    64,   123,    82,    64,   113,   113,   113,   114,    64,
      68,    82,    64,   113
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    90,    90,    90,    90,    91,    92,    92,
      92,    93,    93,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    95,    96,    97,    98,    99,   100,   100,
     100,   101,   101,   101,   102,   102,   102,   102,   102,   103,
     104,   104,   104,   104,   104,   104,   104,   105,   105,   105,
     105,   106,   107,   107,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   119,   119,   120,   120,   121,   121,   122,
     122,   122,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     124,   124,   124,   124,   124,   125,   125
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     3,     8,     9,
       7,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     6,    11,     8,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     8,     7,     6,
       5,     2,     5,     9,     4,     8,     3,     1,     5,     1,
       3,     1,     5,     1,     3,     1,     2,     2,     5,     7,
       6,     9,     5,     1,     3,     4,     3,     4,     2,     1,
       3,     3,     3,     2,     1,     4,     4,     3,     1,     1,
       2,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     3,     6,     6,
       1,     1,     4,     6,     3,     3,     1
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
#line 119 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {next_parsed_verilog_file((yyvsp[0].node));}
#line 1801 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 3:
#line 122 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {
											if ((yyvsp[-1].node) != NULL)
											{
												(yyval.node) = newList_entry((yyvsp[-1].node), (yyvsp[0].node));
											}
											else
											{
												(yyval.node) = newList(FILE_ITEMS, (yyvsp[0].node));
											}
										}
#line 1816 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 4:
#line 132 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1822 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 5:
#line 133 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newList(FILE_ITEMS, (yyvsp[0].node));}
#line 1828 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 6:
#line 134 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;}
#line 1834 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 7:
#line 137 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = NULL; newConstant((yyvsp[-1].id_name), (yyvsp[0].num_value), yylineno);}
#line 1840 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 8:
#line 140 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newModule((yyvsp[-6].id_name), (yyvsp[-4].node), (yyvsp[-1].node), yylineno);}
#line 1846 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 9:
#line 141 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newModule((yyvsp[-7].id_name), (yyvsp[-5].node), (yyvsp[-1].node), yylineno);}
#line 1852 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 10:
#line 142 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newModule((yyvsp[-5].id_name), NULL, (yyvsp[-1].node), yylineno);}
#line 1858 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 11:
#line 145 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newList_entry((yyvsp[-1].node), (yyvsp[0].node));}
#line 1864 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 12:
#line 146 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newList(MODULE_ITEMS, (yyvsp[0].node));}
#line 1870 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 13:
#line 149 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1876 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 14:
#line 150 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1882 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 15:
#line 151 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1888 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 16:
#line 152 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1894 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 17:
#line 153 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1900 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 18:
#line 154 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1906 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 19:
#line 155 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1912 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 20:
#line 156 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1918 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 21:
#line 157 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1924 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 22:
#line 158 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1930 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 23:
#line 162 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = markAndProcessSymbolListWith(PARAMETER, (yyvsp[-1].node));}
#line 1936 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 24:
#line 165 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newDefparam(MODULE_PARAMETER_LIST, (yyvsp[-1].node), yylineno);}
#line 1942 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 25:
#line 169 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = markAndProcessSymbolListWith(INPUT, (yyvsp[-1].node));}
#line 1948 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 26:
#line 172 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = markAndProcessSymbolListWith(OUTPUT, (yyvsp[-1].node));}
#line 1954 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 27:
#line 175 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = markAndProcessSymbolListWith(INOUT, (yyvsp[-1].node));}
#line 1960 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 28:
#line 178 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = markAndProcessSymbolListWith(WIRE, (yyvsp[-1].node));}
#line 1966 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 29:
#line 179 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = markAndProcessSymbolListWith(REG, (yyvsp[-1].node));}
#line 1972 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 30:
#line 180 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = markAndProcessSymbolListWith(INTEGER, (yyvsp[-1].node));}
#line 1978 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 31:
#line 183 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newList_entry((yyvsp[-2].node), (yyvsp[0].node));}
#line 1984 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 32:
#line 184 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newList_entry((yyvsp[-2].node), (yyvsp[0].node));}
#line 1990 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 33:
#line 185 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newList(VAR_DECLARE_LIST, (yyvsp[0].node));}
#line 1996 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 34:
#line 188 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newVarDeclare((yyvsp[0].id_name), NULL, NULL, NULL, NULL, NULL, yylineno);}
#line 2002 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 35:
#line 189 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newVarDeclare((yyvsp[0].id_name), (yyvsp[-4].node), (yyvsp[-2].node), NULL, NULL, NULL, yylineno);}
#line 2008 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 36:
#line 190 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newVarDeclare((yyvsp[-5].id_name), (yyvsp[-9].node), (yyvsp[-7].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL, yylineno);}
#line 2014 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 37:
#line 191 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newVarDeclare((yyvsp[-2].id_name), (yyvsp[-6].node), (yyvsp[-4].node), NULL, NULL, (yyvsp[0].node), yylineno);}
#line 2020 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 38:
#line 192 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newVarDeclare((yyvsp[-2].id_name), NULL, NULL, NULL, NULL, (yyvsp[0].node), yylineno);}
#line 2026 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 39:
#line 195 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newAssign((yyvsp[-1].node), yylineno);}
#line 2032 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 40:
#line 199 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newGate(BITWISE_AND, (yyvsp[-1].node), yylineno);}
#line 2038 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 41:
#line 200 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newGate(BITWISE_NAND, (yyvsp[-1].node), yylineno);}
#line 2044 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 42:
#line 201 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newGate(BITWISE_NOR, (yyvsp[-1].node), yylineno);}
#line 2050 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 43:
#line 202 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newGate(BITWISE_NOT, (yyvsp[-1].node), yylineno);}
#line 2056 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 44:
#line 203 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newGate(BITWISE_OR, (yyvsp[-1].node), yylineno);}
#line 2062 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 45:
#line 204 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newGate(BITWISE_XNOR, (yyvsp[-1].node), yylineno);}
#line 2068 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 46:
#line 205 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newGate(BITWISE_XOR, (yyvsp[-1].node), yylineno);}
#line 2074 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 47:
#line 208 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newGateInstance((yyvsp[-7].id_name), (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node), yylineno);}
#line 2080 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 48:
#line 209 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newGateInstance(NULL, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node), yylineno);}
#line 2086 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 49:
#line 210 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newGateInstance((yyvsp[-5].id_name), (yyvsp[-3].node), (yyvsp[-1].node), NULL, yylineno);}
#line 2092 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 50:
#line 211 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newGateInstance(NULL, (yyvsp[-3].node), (yyvsp[-1].node), NULL, yylineno);}
#line 2098 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 51:
#line 215 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newModuleInstance((yyvsp[-1].id_name), (yyvsp[0].node), yylineno);}
#line 2104 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 52:
#line 218 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newModuleNamedInstance((yyvsp[-4].id_name), (yyvsp[-2].node), NULL, yylineno);}
#line 2110 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 53:
#line 219 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newModuleNamedInstance((yyvsp[-4].id_name), (yyvsp[-2].node), (yyvsp[-6].node), yylineno); }
#line 2116 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 54:
#line 220 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newModuleNamedInstance((yyvsp[-3].id_name), NULL, NULL, yylineno);}
#line 2122 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 55:
#line 221 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newModuleNamedInstance((yyvsp[-3].id_name), NULL, (yyvsp[-5].node), yylineno);}
#line 2128 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 56:
#line 224 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newList_entry((yyvsp[-2].node), (yyvsp[0].node));}
#line 2134 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 57:
#line 225 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newList(MODULE_CONNECT_LIST, (yyvsp[0].node));}
#line 2140 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 58:
#line 228 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newModuleConnection((yyvsp[-3].id_name), (yyvsp[-1].node), yylineno);}
#line 2146 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 59:
#line 229 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newModuleConnection(NULL, (yyvsp[0].node), yylineno);}
#line 2152 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 60:
#line 232 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newList_entry((yyvsp[-2].node), (yyvsp[0].node));}
#line 2158 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 61:
#line 233 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newList(MODULE_PARAMETER_LIST, (yyvsp[0].node));}
#line 2164 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 62:
#line 236 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newModuleParameter((yyvsp[-3].id_name), (yyvsp[-1].node), yylineno);}
#line 2170 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 63:
#line 237 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newModuleParameter(NULL, (yyvsp[0].node), yylineno);}
#line 2176 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 64:
#line 241 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newAlways((yyvsp[-1].node), (yyvsp[0].node), yylineno);}
#line 2182 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 65:
#line 244 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2188 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 66:
#line 245 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2194 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 67:
#line 246 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2200 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 68:
#line 247 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newIf((yyvsp[-2].node), (yyvsp[0].node), NULL, yylineno);}
#line 2206 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 69:
#line 248 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newIf((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2212 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 70:
#line 249 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newCase((yyvsp[-3].node), (yyvsp[-1].node), yylineno);}
#line 2218 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 71:
#line 250 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newFor((yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2224 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 72:
#line 251 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newWhile((yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2230 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 73:
#line 252 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;}
#line 2236 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 74:
#line 255 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBlocking((yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2242 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 75:
#line 256 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBlocking((yyvsp[-3].node), (yyvsp[0].node), yylineno);}
#line 2248 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 76:
#line 259 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newNonBlocking((yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2254 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 77:
#line 260 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newNonBlocking((yyvsp[-3].node), (yyvsp[0].node), yylineno);}
#line 2260 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 78:
#line 263 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newList_entry((yyvsp[-1].node), (yyvsp[0].node));}
#line 2266 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 79:
#line 264 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newList(CASE_LIST, (yyvsp[0].node));}
#line 2272 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 80:
#line 267 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newCaseItem((yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2278 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 81:
#line 268 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newDefaultCase((yyvsp[0].node), yylineno);}
#line 2284 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 82:
#line 271 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2290 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 83:
#line 274 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newList_entry((yyvsp[-1].node), (yyvsp[0].node));}
#line 2296 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 84:
#line 275 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newList(BLOCK, (yyvsp[0].node));}
#line 2302 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 85:
#line 278 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2308 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 86:
#line 279 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;}
#line 2314 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 87:
#line 283 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newList_entry((yyvsp[-2].node), (yyvsp[0].node));}
#line 2320 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 88:
#line 284 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newList(DELAY_CONTROL, (yyvsp[0].node));}
#line 2326 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 89:
#line 287 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2332 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 90:
#line 288 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newPosedgeSymbol((yyvsp[0].id_name), yylineno);}
#line 2338 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 91:
#line 289 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newNegedgeSymbol((yyvsp[0].id_name), yylineno);}
#line 2344 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 92:
#line 292 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2350 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 93:
#line 293 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newUnaryOperation(ADD, (yyvsp[0].node), yylineno);}
#line 2356 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 94:
#line 294 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newUnaryOperation(MINUS, (yyvsp[0].node), yylineno);}
#line 2362 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 95:
#line 295 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newUnaryOperation(BITWISE_NOT, (yyvsp[0].node), yylineno);}
#line 2368 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 96:
#line 296 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newUnaryOperation(BITWISE_AND, (yyvsp[0].node), yylineno);}
#line 2374 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 97:
#line 297 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newUnaryOperation(BITWISE_OR, (yyvsp[0].node), yylineno);}
#line 2380 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 98:
#line 298 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newUnaryOperation(BITWISE_NAND, (yyvsp[0].node), yylineno);}
#line 2386 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 99:
#line 299 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newUnaryOperation(BITWISE_NOR, (yyvsp[0].node), yylineno);}
#line 2392 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 100:
#line 300 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newUnaryOperation(BITWISE_XNOR, (yyvsp[0].node), yylineno);}
#line 2398 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 101:
#line 301 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newUnaryOperation(LOGICAL_NOT, (yyvsp[0].node), yylineno);}
#line 2404 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 102:
#line 302 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newUnaryOperation(BITWISE_XOR, (yyvsp[0].node), yylineno);}
#line 2410 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 103:
#line 303 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(BITWISE_XOR, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2416 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 104:
#line 304 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(MULTIPLY, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2422 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 105:
#line 305 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(DIVIDE, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2428 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 106:
#line 306 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(MODULO, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2434 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 107:
#line 307 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(ADD, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2440 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 108:
#line 308 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(MINUS, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2446 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 109:
#line 309 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(BITWISE_AND, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2452 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 110:
#line 310 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(BITWISE_OR, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2458 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 111:
#line 311 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(BITWISE_NAND, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2464 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 112:
#line 312 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(BITWISE_NOR, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2470 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 113:
#line 313 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(BITWISE_XNOR, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2476 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 114:
#line 314 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(LT, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2482 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 115:
#line 315 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(GT, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2488 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 116:
#line 316 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(SR, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2494 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 117:
#line 317 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(SL, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2500 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 118:
#line 318 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(LOGICAL_EQUAL, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2506 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 119:
#line 319 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(NOT_EQUAL, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2512 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 120:
#line 320 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(LTE, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2518 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 121:
#line 321 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(GTE, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2524 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 122:
#line 322 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(CASE_EQUAL, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2530 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 123:
#line 323 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(CASE_NOT_EQUAL, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2536 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 124:
#line 324 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(LOGICAL_OR, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2542 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 125:
#line 325 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newBinaryOperation(LOGICAL_AND, (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2548 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 126:
#line 326 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newIfQuestion((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), yylineno);}
#line 2554 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 127:
#line 327 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2560 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 128:
#line 331 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newListReplicate( (yyvsp[-4].node), (yyvsp[-2].node) ); }
#line 2566 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 129:
#line 332 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newListReplicate( (yyvsp[-4].node), (yyvsp[-2].node) ); }
#line 2572 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 130:
#line 335 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newNumberNode((yyvsp[0].num_value), yylineno);}
#line 2578 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 131:
#line 336 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newSymbolNode((yyvsp[0].id_name), yylineno);}
#line 2584 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 132:
#line 337 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newArrayRef((yyvsp[-3].id_name), (yyvsp[-1].node), yylineno);}
#line 2590 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 133:
#line 338 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newRangeRef((yyvsp[-5].id_name), (yyvsp[-3].node), (yyvsp[-1].node), yylineno);}
#line 2596 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 134:
#line 339 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node); ((yyvsp[-1].node))->types.concat.num_bit_strings = -1;}
#line 2602 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 135:
#line 342 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newList_entry((yyvsp[-2].node), (yyvsp[0].node)); /* note this will be in order lsb = greatest to msb = 0 in the node child list */}
#line 2608 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;

  case 136:
#line 343 "SRC/verilog_bison.y" /* yacc.c:1646  */
    {(yyval.node) = newList(CONCATENATE, (yyvsp[0].node));}
#line 2614 "SRC/verilog_bison.c" /* yacc.c:1646  */
    break;


#line 2618 "SRC/verilog_bison.c" /* yacc.c:1646  */
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
#line 346 "SRC/verilog_bison.y" /* yacc.c:1906  */

