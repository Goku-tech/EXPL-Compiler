/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "ast.y"

	#include <stdlib.h>
	#include <stdio.h>
    #include<string.h>
    
    #include "symboltable.h"
    #include "ast.h"

    #include "ast.c"
    #include "codegen.c"
    #include "symboltable.c"

    extern FILE* yyin;
    extern char* yytext;

	int yylex(void);
    int yyerror();
    void indextypecheck(int type);

#line 91 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    BEG = 258,                     /* BEG  */
    END = 259,                     /* END  */
    READ = 260,                    /* READ  */
    WRITE = 261,                   /* WRITE  */
    ID = 262,                      /* ID  */
    NUM = 263,                     /* NUM  */
    PLUS = 264,                    /* PLUS  */
    MINUS = 265,                   /* MINUS  */
    MUL = 266,                     /* MUL  */
    DIV = 267,                     /* DIV  */
    EQUAL = 268,                   /* EQUAL  */
    IF = 269,                      /* IF  */
    Then = 270,                    /* Then  */
    Else = 271,                    /* Else  */
    ENDIF = 272,                   /* ENDIF  */
    WHILE = 273,                   /* WHILE  */
    DO = 274,                      /* DO  */
    ENDWHILE = 275,                /* ENDWHILE  */
    REPEAT = 276,                  /* REPEAT  */
    UNTIL = 277,                   /* UNTIL  */
    BREAK = 278,                   /* BREAK  */
    CONTINUE = 279,                /* CONTINUE  */
    DECL = 280,                    /* DECL  */
    ENDDECL = 281,                 /* ENDDECL  */
    INT = 282,                     /* INT  */
    STR = 283,                     /* STR  */
    STRING = 284,                  /* STRING  */
    MOD = 285,                     /* MOD  */
    COMP = 286                     /* COMP  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define BEG 258
#define END 259
#define READ 260
#define WRITE 261
#define ID 262
#define NUM 263
#define PLUS 264
#define MINUS 265
#define MUL 266
#define DIV 267
#define EQUAL 268
#define IF 269
#define Then 270
#define Else 271
#define ENDIF 272
#define WHILE 273
#define DO 274
#define ENDWHILE 275
#define REPEAT 276
#define UNTIL 277
#define BREAK 278
#define CONTINUE 279
#define DECL 280
#define ENDDECL 281
#define INT 282
#define STR 283
#define STRING 284
#define MOD 285
#define COMP 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "ast.y"

	struct tnode *no;
    struct Gsymbol* symbol;
    char* c;
    int i;

#line 213 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BEG = 3,                        /* BEG  */
  YYSYMBOL_END = 4,                        /* END  */
  YYSYMBOL_READ = 5,                       /* READ  */
  YYSYMBOL_WRITE = 6,                      /* WRITE  */
  YYSYMBOL_ID = 7,                         /* ID  */
  YYSYMBOL_NUM = 8,                        /* NUM  */
  YYSYMBOL_PLUS = 9,                       /* PLUS  */
  YYSYMBOL_MINUS = 10,                     /* MINUS  */
  YYSYMBOL_MUL = 11,                       /* MUL  */
  YYSYMBOL_DIV = 12,                       /* DIV  */
  YYSYMBOL_EQUAL = 13,                     /* EQUAL  */
  YYSYMBOL_IF = 14,                        /* IF  */
  YYSYMBOL_Then = 15,                      /* Then  */
  YYSYMBOL_Else = 16,                      /* Else  */
  YYSYMBOL_ENDIF = 17,                     /* ENDIF  */
  YYSYMBOL_WHILE = 18,                     /* WHILE  */
  YYSYMBOL_DO = 19,                        /* DO  */
  YYSYMBOL_ENDWHILE = 20,                  /* ENDWHILE  */
  YYSYMBOL_REPEAT = 21,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 22,                     /* UNTIL  */
  YYSYMBOL_BREAK = 23,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 24,                  /* CONTINUE  */
  YYSYMBOL_DECL = 25,                      /* DECL  */
  YYSYMBOL_ENDDECL = 26,                   /* ENDDECL  */
  YYSYMBOL_INT = 27,                       /* INT  */
  YYSYMBOL_STR = 28,                       /* STR  */
  YYSYMBOL_STRING = 29,                    /* STRING  */
  YYSYMBOL_MOD = 30,                       /* MOD  */
  YYSYMBOL_COMP = 31,                      /* COMP  */
  YYSYMBOL_32_ = 32,                       /* ','  */
  YYSYMBOL_33_ = 33,                       /* '['  */
  YYSYMBOL_34_ = 34,                       /* ']'  */
  YYSYMBOL_35_ = 35,                       /* '('  */
  YYSYMBOL_36_ = 36,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_Program = 38,                   /* Program  */
  YYSYMBOL_Declarations = 39,              /* Declarations  */
  YYSYMBOL_DeclList = 40,                  /* DeclList  */
  YYSYMBOL_Decl = 41,                      /* Decl  */
  YYSYMBOL_Type = 42,                      /* Type  */
  YYSYMBOL_VarList = 43,                   /* VarList  */
  YYSYMBOL_Slist = 44,                     /* Slist  */
  YYSYMBOL_Stmt = 45,                      /* Stmt  */
  YYSYMBOL_Ifstmt = 46,                    /* Ifstmt  */
  YYSYMBOL_Whilestmt = 47,                 /* Whilestmt  */
  YYSYMBOL_Dowhilestmt = 48,               /* Dowhilestmt  */
  YYSYMBOL_Repeatuntil = 49,               /* Repeatuntil  */
  YYSYMBOL_InputStmt = 50,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 51,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 52,                   /* AsgStmt  */
  YYSYMBOL_E = 53                          /* E  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   390

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  130

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      35,    36,     2,     2,    32,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    33,     2,    34,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    39,    39,    56,    73,    74,    76,    76,    78,    78,
      80,    82,    83,    85,    86,    87,    88,    89,    90,    92,
      93,    95,    96,    97,    98,    99,   100,   101,   102,   107,
     113,   121,   124,   126,   128,   130,   134,   143,   154,   156,
     161,   169,   179,   181,   183,   185,   187,   189,   192,   200,
     210,   211,   213,   216
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BEG", "END", "READ",
  "WRITE", "ID", "NUM", "PLUS", "MINUS", "MUL", "DIV", "EQUAL", "IF",
  "Then", "Else", "ENDIF", "WHILE", "DO", "ENDWHILE", "REPEAT", "UNTIL",
  "BREAK", "CONTINUE", "DECL", "ENDDECL", "INT", "STR", "STRING", "MOD",
  "COMP", "','", "'['", "']'", "'('", "')'", "$accept", "Program",
  "Declarations", "DeclList", "Decl", "Type", "VarList", "Slist", "Stmt",
  "Ifstmt", "Whilestmt", "Dowhilestmt", "Repeatuntil", "InputStmt",
  "OutputStmt", "AsgStmt", "E", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-31)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,   183,    96,    10,     9,   -31,   -17,    -9,    -2,    -8,
      -7,   346,   346,   -31,   -31,   204,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   156,   -31,    12,
     -31,   225,    51,     1,     1,     1,     1,     1,   366,   286,
     -31,   -31,   -31,   -31,    30,    36,   -31,   246,   -16,    40,
     -31,   -31,     1,    34,   169,    97,    41,    45,    39,    44,
      61,    77,   -31,     1,   -31,     1,    81,     1,     1,     1,
       1,     1,     1,   -31,    16,    71,    84,     1,     1,    70,
      80,   123,   128,   -31,    55,    55,   -31,   -31,   -31,     4,
       1,     1,   346,   346,    85,    89,    93,   102,    26,   103,
     169,   133,   266,   306,    84,   -31,   106,    95,     1,   -31,
       1,   105,   346,   -31,   -31,   107,   113,   138,   164,     1,
     326,   -31,   122,   115,   -31,   169,   -31,   118,   -31,   -31
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     5,     0,     0,     0,     0,
       0,     0,     0,    28,    29,     0,    20,    24,    25,    26,
      27,    21,    22,    23,     7,    11,    12,     0,     9,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,    19,     6,     8,    18,    10,     4,     0,     0,    51,
      50,    52,     0,     0,    39,     0,     0,     0,     0,     0,
       0,     0,     3,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
      15,     0,     0,    47,    42,    43,    44,    45,    46,    53,
       0,     0,     0,     0,     0,     0,    16,     0,     0,    48,
      40,     0,     0,     0,    33,    34,     0,     0,     0,    36,
       0,     0,     0,    31,    32,     0,    13,     0,     0,     0,
       0,    17,     0,     0,    49,    41,    30,     0,    37,    14
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -31,   -31,   -31,   -31,   129,   -31,   -31,   -10,   -15,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,    27,    28,    29,    45,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    53
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      41,    38,    39,     1,    54,    55,    56,    57,    49,    50,
      30,    34,    31,    67,    68,    69,    70,    63,    32,    44,
      64,    47,    66,    41,    41,     2,    33,    36,    37,    90,
      51,    35,    41,    81,    71,    82,    52,    84,    85,    86,
      87,    88,    89,    67,    68,    69,    70,    94,    95,    91,
      67,    68,    69,    70,    67,    68,    69,    70,    48,   108,
     100,   101,   109,    60,    71,    72,    69,    70,    61,    79,
      73,    71,    72,    65,    77,    71,    72,    75,   117,    78,
     118,    76,   102,   103,    80,    71,    92,    41,    41,   125,
      67,    68,    69,    70,    67,    68,    69,    70,    67,    68,
      69,    70,   120,    93,    96,    41,    67,    68,    69,    70,
     107,    71,    72,    97,   115,    71,    72,    83,   119,    71,
      72,   104,    24,    25,    26,   105,   106,    71,    72,   116,
     127,    74,    67,    68,    69,    70,   110,    67,    68,    69,
      70,   121,    67,    68,    69,    70,   122,    67,    68,    69,
      70,   128,   129,    71,    72,     0,    43,    98,    71,    72,
       0,     0,    99,    71,    72,     0,     0,   111,    71,    72,
       0,     0,   123,    67,    68,    69,    70,     0,    67,    68,
      69,    70,    42,    25,    26,     0,     0,     5,     6,     7,
       8,     0,     0,     0,    71,    72,     0,     9,   124,    71,
      72,    10,    11,     0,    12,     0,    13,    14,    40,     6,
       7,     8,     0,     0,     0,     0,     0,     0,     9,     0,
       0,     0,    10,    11,     0,    12,     0,    13,    14,    46,
       6,     7,     8,     0,     0,     0,     0,     0,     0,     9,
       0,     0,     0,    10,    11,     0,    12,     0,    13,    14,
      62,     6,     7,     8,     0,     0,     0,     0,     0,     0,
       9,     0,     0,     0,    10,    11,     0,    12,     0,    13,
      14,     6,     7,     8,     0,     0,     0,     0,     0,     0,
       9,     0,   112,   113,    10,    11,     0,    12,     0,    13,
      14,     6,     7,     8,     0,     0,     0,     0,     0,     0,
       9,     0,     0,     0,    10,    11,     0,    12,    59,    13,
      14,     6,     7,     8,     0,     0,     0,     0,     0,     0,
       9,     0,     0,     0,    10,    11,   114,    12,     0,    13,
      14,     6,     7,     8,     0,     0,     0,     0,     0,     0,
       9,     0,     0,   126,    10,    11,     0,    12,     0,    13,
      14,     6,     7,     8,     0,     0,     0,     0,     0,     0,
       9,     0,     0,     0,    10,    11,     0,    12,     0,    13,
      14,     6,     7,     8,     0,     0,     0,     0,     0,     0,
       9,     0,     0,     0,    58,    11,     0,    12,     0,    13,
      14
};

static const yytype_int8 yycheck[] =
{
      15,    11,    12,     3,    34,    35,    36,    37,     7,     8,
       0,    13,     3,     9,    10,    11,    12,    33,    35,     7,
      36,    31,    52,    38,    39,    25,    35,    35,    35,    13,
      29,    33,    47,    63,    30,    65,    35,    67,    68,    69,
      70,    71,    72,     9,    10,    11,    12,    77,    78,    33,
       9,    10,    11,    12,     9,    10,    11,    12,     7,    33,
      90,    91,    36,    33,    30,    31,    11,    12,    32,     8,
      36,    30,    31,    33,    35,    30,    31,    36,   108,    35,
     110,    36,    92,    93,     7,    30,    15,   102,   103,   119,
       9,    10,    11,    12,     9,    10,    11,    12,     9,    10,
      11,    12,   112,    19,    34,   120,     9,    10,    11,    12,
       8,    30,    31,    33,     8,    30,    31,    36,    13,    30,
      31,    36,    26,    27,    28,    36,    33,    30,    31,    34,
       8,    34,     9,    10,    11,    12,    33,     9,    10,    11,
      12,    34,     9,    10,    11,    12,    33,     9,    10,    11,
      12,    36,    34,    30,    31,    -1,    27,    34,    30,    31,
      -1,    -1,    34,    30,    31,    -1,    -1,    34,    30,    31,
      -1,    -1,    34,     9,    10,    11,    12,    -1,     9,    10,
      11,    12,    26,    27,    28,    -1,    -1,     4,     5,     6,
       7,    -1,    -1,    -1,    30,    31,    -1,    14,    34,    30,
      31,    18,    19,    -1,    21,    -1,    23,    24,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    18,    19,    -1,    21,    -1,    23,    24,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    18,    19,    -1,    21,    -1,    23,    24,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    18,    19,    -1,    21,    -1,    23,
      24,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    16,    17,    18,    19,    -1,    21,    -1,    23,
      24,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    18,    19,    -1,    21,    22,    23,
      24,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    23,
      24,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    19,    -1,    21,    -1,    23,
      24,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    18,    19,    -1,    21,    -1,    23,
      24,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    18,    19,    -1,    21,    -1,    23,
      24
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    25,    38,    39,     4,     5,     6,     7,    14,
      18,    19,    21,    23,    24,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    26,    27,    28,    40,    41,    42,
       0,     3,    35,    35,    13,    33,    35,    35,    44,    44,
       4,    45,    26,    41,     7,    43,     4,    44,     7,     7,
       8,    29,    35,    53,    53,    53,    53,    53,    18,    22,
      33,    32,     4,    33,    36,    33,    53,     9,    10,    11,
      12,    30,    31,    36,    34,    36,    36,    35,    35,     8,
       7,    53,    53,    36,    53,    53,    53,    53,    53,    53,
      13,    33,    15,    19,    53,    53,    34,    33,    34,    34,
      53,    53,    44,    44,    36,    36,    33,     8,    33,    36,
      33,    34,    16,    17,    20,     8,    34,    53,    53,    13,
      44,    34,    33,    34,    34,    53,    17,     8,    36,    34
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    38,    38,    38,    39,    39,    40,    40,
      41,    42,    42,    43,    43,    43,    43,    43,    43,    44,
      44,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      46,    46,    47,    48,    49,    50,    50,    50,    51,    52,
      52,    52,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     4,     3,     2,     3,     2,     2,     1,
       2,     1,     1,     6,     9,     3,     4,     7,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       9,     7,     7,     6,     6,     4,     7,    10,     4,     3,
       6,     9,     3,     3,     3,     3,     3,     3,     4,     7,
       1,     1,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* Program: BEG Slist END  */
#line 39 "ast.y"
                        {
                          (yyval.no)=(yyvsp[-1].no);

                        //printtree($<no>2);
                        printsymboltable();

                        FILE *fptr=fopen("ast.o","w");
				        fprintf(fptr, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\nBRKP\n",0,2056,0,0,0,0,0,0);
                        
                        //MOVES SP TO THE LAST USED SPACE
                        fprintf(fptr,"MOV SP,%d\n",4096+used_space);

                        int resreg_no= codeGen((yyvsp[-1].no),fptr);
                        //printf("Reg%d\n",resreg_no);
                        fprintf(fptr,"INT 10");
                        exit(1);
                       }
#line 1387 "y.tab.c"
    break;

  case 3: /* Program: Declarations BEG Slist END  */
#line 56 "ast.y"
                                         {
                                            (yyval.no)=(yyvsp[-1].no);
                                            
                                            //printtree($<no>2);
                                            printsymboltable();

                                            FILE *fptr=fopen("ast.o","w");
                                            fprintf(fptr, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\nBRKP\n",0,2056,0,0,0,0,0,0);
                                            
                                            //MOVES SP TO THE LAST USED SPACE
                                            fprintf(fptr,"MOV SP,%d\n",4096+used_space);

                                            int resreg_no= codeGen((yyvsp[-1].no),fptr);
                                            //printf("Reg%d\n",resreg_no);
                                            fprintf(fptr,"INT 10");
                                            exit(1);
                                        }
#line 1409 "y.tab.c"
    break;

  case 4: /* Program: Declarations BEG END  */
#line 73 "ast.y"
                                 {exit(1);}
#line 1415 "y.tab.c"
    break;

  case 5: /* Program: BEG END  */
#line 74 "ast.y"
                    {exit(1);}
#line 1421 "y.tab.c"
    break;

  case 10: /* Decl: Type VarList  */
#line 80 "ast.y"
                    {addtype((yyvsp[-1].i));}
#line 1427 "y.tab.c"
    break;

  case 11: /* Type: INT  */
#line 82 "ast.y"
              {(yyval.i)=Integer;}
#line 1433 "y.tab.c"
    break;

  case 12: /* Type: STR  */
#line 83 "ast.y"
              {(yyval.i)=String;}
#line 1439 "y.tab.c"
    break;

  case 13: /* VarList: VarList ',' ID '[' NUM ']'  */
#line 85 "ast.y"
                                        { Install((yyvsp[-3].c),-1,(yyvsp[-1].i),-1,-1);}
#line 1445 "y.tab.c"
    break;

  case 14: /* VarList: VarList ',' ID '[' NUM ']' '[' NUM ']'  */
#line 86 "ast.y"
                                                    { Install((yyvsp[-6].c),-1,(yyvsp[-4].i)*(yyvsp[-1].i),(yyvsp[-4].i),(yyvsp[-1].i));}
#line 1451 "y.tab.c"
    break;

  case 15: /* VarList: VarList ',' ID  */
#line 87 "ast.y"
                                        {Install((yyvsp[0].c),-1,1,-1,-1);}
#line 1457 "y.tab.c"
    break;

  case 16: /* VarList: ID '[' NUM ']'  */
#line 88 "ast.y"
                                        { Install((yyvsp[-3].c),-1,(yyvsp[-1].i),-1,-1);}
#line 1463 "y.tab.c"
    break;

  case 17: /* VarList: ID '[' NUM ']' '[' NUM ']'  */
#line 89 "ast.y"
                                         { Install((yyvsp[-6].c),-1,(yyvsp[-4].i)*(yyvsp[-1].i),(yyvsp[-4].i),(yyvsp[-1].i));}
#line 1469 "y.tab.c"
    break;

  case 18: /* VarList: ID  */
#line 90 "ast.y"
                                        {Install((yyvsp[0].c),-1,1,-1,-1);}
#line 1475 "y.tab.c"
    break;

  case 19: /* Slist: Slist Stmt  */
#line 92 "ast.y"
                   {(yyval.no)=makeConnectorNode('.',(yyvsp[-1].no),(yyvsp[0].no));}
#line 1481 "y.tab.c"
    break;

  case 20: /* Slist: Stmt  */
#line 93 "ast.y"
                   {(yyval.no)=(yyvsp[0].no);}
#line 1487 "y.tab.c"
    break;

  case 21: /* Stmt: InputStmt  */
#line 95 "ast.y"
                  {(yyval.no)=(yyvsp[0].no);}
#line 1493 "y.tab.c"
    break;

  case 22: /* Stmt: OutputStmt  */
#line 96 "ast.y"
                    {(yyval.no)=(yyvsp[0].no);}
#line 1499 "y.tab.c"
    break;

  case 23: /* Stmt: AsgStmt  */
#line 97 "ast.y"
                   {(yyval.no)=(yyvsp[0].no);}
#line 1505 "y.tab.c"
    break;

  case 24: /* Stmt: Ifstmt  */
#line 98 "ast.y"
                  {(yyval.no)=(yyvsp[0].no);}
#line 1511 "y.tab.c"
    break;

  case 25: /* Stmt: Whilestmt  */
#line 99 "ast.y"
                     {(yyval.no)=(yyvsp[0].no);}
#line 1517 "y.tab.c"
    break;

  case 26: /* Stmt: Dowhilestmt  */
#line 100 "ast.y"
                     {(yyval.no)=(yyvsp[0].no);}
#line 1523 "y.tab.c"
    break;

  case 27: /* Stmt: Repeatuntil  */
#line 101 "ast.y"
                     {(yyval.no)=(yyvsp[0].no);}
#line 1529 "y.tab.c"
    break;

  case 28: /* Stmt: BREAK  */
#line 102 "ast.y"
                    {
                        char c[6]="break";
                        (yyval.no)=makeBreak_ContinueNode(c);
                    }
#line 1538 "y.tab.c"
    break;

  case 29: /* Stmt: CONTINUE  */
#line 107 "ast.y"
                    {
                        char c[9]="continue";
                        (yyval.no)=makeBreak_ContinueNode(c);
                    }
#line 1547 "y.tab.c"
    break;

  case 30: /* Ifstmt: IF '(' E ')' Then Slist Else Slist ENDIF  */
#line 113 "ast.y"
                                                   {
                                                        struct tnode* else_node;
                                                        struct tnode* connector_node;
                                                        
                                                        else_node=makeBranchingNode("Else",(yyvsp[-1].no),NULL);
                                                        connector_node=makeConnectorNode('.',(yyvsp[-3].no),else_node);
                                                        (yyval.no)=makeBranchingNode("If",(yyvsp[-6].no),connector_node);              
                                                   }
#line 1560 "y.tab.c"
    break;

  case 31: /* Ifstmt: IF '(' E ')' Then Slist ENDIF  */
#line 121 "ast.y"
                                              {(yyval.no)=makeBranchingNode("If",(yyvsp[-4].no),(yyvsp[-1].no));}
#line 1566 "y.tab.c"
    break;

  case 32: /* Whilestmt: WHILE '(' E ')' DO Slist ENDWHILE  */
#line 124 "ast.y"
                                                 {(yyval.no)=makeBranchingNode("While",(yyvsp[-4].no),(yyvsp[-1].no));}
#line 1572 "y.tab.c"
    break;

  case 33: /* Dowhilestmt: DO Slist WHILE '(' E ')'  */
#line 126 "ast.y"
                                                {(yyval.no)=makeBranchingNode("Do",(yyvsp[-4].no),(yyvsp[-1].no));}
#line 1578 "y.tab.c"
    break;

  case 34: /* Repeatuntil: REPEAT Slist UNTIL '(' E ')'  */
#line 128 "ast.y"
                                                {(yyval.no)=makeBranchingNode("Repeat",(yyvsp[-4].no),(yyvsp[-1].no));}
#line 1584 "y.tab.c"
    break;

  case 35: /* InputStmt: READ '(' ID ')'  */
#line 130 "ast.y"
                             {
                                struct tnode* var=makeVariableNode((yyvsp[-1].c));
                                (yyval.no)=makereadnode(var);}
#line 1592 "y.tab.c"
    break;

  case 36: /* InputStmt: READ '(' ID '[' E ']' ')'  */
#line 135 "ast.y"
                            {
                                struct tnode* var=makeVariableNode((yyvsp[-4].c));
                                indextypecheck((yyvsp[-2].no)->type);
                                var->left=(yyvsp[-2].no);
                           
                                (yyval.no)=makereadnode(var);
                            }
#line 1604 "y.tab.c"
    break;

  case 37: /* InputStmt: READ '(' ID '[' E ']' '[' E ']' ')'  */
#line 144 "ast.y"
                            {
                                struct tnode* var=makeVariableNode((yyvsp[-7].c));
                                indextypecheck((yyvsp[-5].no)->type);
                                indextypecheck((yyvsp[-2].no)->type);
                                var->left=(yyvsp[-5].no);    //Row
                                var->right=(yyvsp[-2].no);  //Column
                                
                                (yyval.no)=makereadnode(var);
                            }
#line 1618 "y.tab.c"
    break;

  case 38: /* OutputStmt: WRITE '(' E ')'  */
#line 154 "ast.y"
                             {(yyval.no)=makewritenode((yyvsp[-1].no));}
#line 1624 "y.tab.c"
    break;

  case 39: /* AsgStmt: ID EQUAL E  */
#line 156 "ast.y"
                    {   
                        struct tnode* var=makeVariableNode((yyvsp[-2].c));
                        (yyval.no) = makeOperatorNode('=',var,(yyvsp[0].no));
                    }
#line 1633 "y.tab.c"
    break;

  case 40: /* AsgStmt: ID '[' E ']' EQUAL E  */
#line 162 "ast.y"
                               {
                                    struct tnode* var=makeVariableNode((yyvsp[-5].c));
                                    indextypecheck((yyvsp[-3].no)->type);
                                    var->left=(yyvsp[-3].no);
                                    (yyval.no) = makeOperatorNode('=',var,(yyvsp[0].no));
                               }
#line 1644 "y.tab.c"
    break;

  case 41: /* AsgStmt: ID '[' E ']' '[' E ']' EQUAL E  */
#line 170 "ast.y"
                                        { 
                                            struct tnode* var=makeVariableNode((yyvsp[-8].c));
                                            indextypecheck((yyvsp[-6].no)->type);
                                            indextypecheck((yyvsp[-3].no)->type);
                                            var->left=(yyvsp[-6].no);    //Row
                                            var->right=(yyvsp[-3].no);  //Column
                                            (yyval.no)=makeOperatorNode('=',var,(yyvsp[0].no));
                                        }
#line 1657 "y.tab.c"
    break;

  case 42: /* E: E PLUS E  */
#line 179 "ast.y"
                        {(yyval.no) = makeOperatorNode('+',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1663 "y.tab.c"
    break;

  case 43: /* E: E MINUS E  */
#line 181 "ast.y"
                        {(yyval.no) = makeOperatorNode('-',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1669 "y.tab.c"
    break;

  case 44: /* E: E MUL E  */
#line 183 "ast.y"
                        {(yyval.no) = makeOperatorNode('*',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1675 "y.tab.c"
    break;

  case 45: /* E: E DIV E  */
#line 185 "ast.y"
                        {(yyval.no) = makeOperatorNode('/',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1681 "y.tab.c"
    break;

  case 46: /* E: E MOD E  */
#line 187 "ast.y"
                        {(yyval.no) = makeOperatorNode('%',(yyvsp[-2].no),(yyvsp[0].no));}
#line 1687 "y.tab.c"
    break;

  case 47: /* E: '(' E ')'  */
#line 189 "ast.y"
                                {(yyval.no) = (yyvsp[-1].no);}
#line 1693 "y.tab.c"
    break;

  case 48: /* E: ID '[' E ']'  */
#line 193 "ast.y"
                    { 
                        struct tnode* var=makeVariableNode((yyvsp[-3].c));
                        indextypecheck((yyvsp[-1].no)->type);
                        var->left=(yyvsp[-1].no);
                        (yyval.no)=var;
                    }
#line 1704 "y.tab.c"
    break;

  case 49: /* E: ID '[' E ']' '[' E ']'  */
#line 201 "ast.y"
                                { 
                                   struct tnode* var=makeVariableNode((yyvsp[-6].c));
                                   indextypecheck((yyvsp[-4].no)->type);
                                   indextypecheck((yyvsp[-1].no)->type);
                                   var->left=(yyvsp[-4].no);    //Row
                                   var->right=(yyvsp[-1].no);  //Column
                                    
                                   (yyval.no)=var;
                                }
#line 1718 "y.tab.c"
    break;

  case 50: /* E: NUM  */
#line 210 "ast.y"
                                {(yyval.no) = makeConstantNode((yyvsp[0].i),NULL);}
#line 1724 "y.tab.c"
    break;

  case 51: /* E: ID  */
#line 211 "ast.y"
                    {(yyval.no)=makeVariableNode((yyvsp[0].c));}
#line 1730 "y.tab.c"
    break;

  case 52: /* E: STRING  */
#line 213 "ast.y"
                    {(yyval.no)= makeConstantNode(-1,(yyvsp[0].c));}
#line 1736 "y.tab.c"
    break;

  case 53: /* E: E COMP E  */
#line 216 "ast.y"
                    {(yyval.no) = makeComparisonNode((yyvsp[-1].c),(yyvsp[-2].no),(yyvsp[0].no));}
#line 1742 "y.tab.c"
    break;


#line 1746 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 219 "ast.y"


int yyerror(char const *s)
{
    printf("yyerror %s",s);
    return 0;
}

void indextypecheck(int type)
{
    if(type!=Integer)
    {
        printf("Invalid 2D array index\n");
        exit(1);
    }
}

int main(void) 
{
    yyin=fopen("ast.txt","r");
	yyparse();
	
	return 0;
}
                                                
                                                

