#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 7 "hw2.y"
#include <stdio.h>
#include <stdlib.h>
#include "SymbolTable.h"
#include "lit_type.h"

extern char* yytext;
extern int lineCount;
extern char lineBuffer[50000];
char   *install_symbol();
#line 19 "hw2.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union { 
         int       ival ;
         char      cval ;
         char      * sval;
         double     dval;
         lit_type   lit;
     
       } YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 51 "hw2.y"
/* external function is defined here */
void error();
int TRACEON = 100;
#line 49 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define IDEN 257
#define STRING_LIT 258
#define INT_LIT 259
#define BOOL_LIT 260
#define INT 261
#define DOUBLE 262
#define BOOL 263
#define CHAR 264
#define VOID 265
#define STRUCT 266
#define CONST 267
#define SWITCH 268
#define CASE 269
#define DEFAULT 270
#define IF 271
#define ELSE 272
#define FOR 273
#define WHILE 274
#define DO 275
#define RETURN 276
#define CONTINUE 277
#define BREAK 278
#define NUL 279
#define TRUE 280
#define FALSE 281
#define PLUSPLUS 282
#define MINUSMINUS 283
#define ANDAND 284
#define OROR 285
#define GE 286
#define LE 287
#define EQUAL 288
#define NOTEQUAL 289
#define NOT 290
#define CHAR_LIT 291
#define DOUBLE_LIT 292
#define UMINUS 293
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    0,    0,    3,    3,    6,    6,    8,    8,
    8,    8,   11,   11,   11,   11,   11,   11,   11,   11,
   12,   12,   16,    5,    5,   17,   17,   17,   17,   17,
   19,   19,   20,   20,   21,   21,   22,   22,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    2,    2,   24,
   24,   24,   24,   24,   24,   24,   24,   24,   24,   24,
   24,   24,   24,   24,   24,   24,   24,   24,   24,   25,
   25,   26,   26,   27,   27,   27,   27,   27,   27,   27,
   27,   28,   28,   29,   29,   31,   30,   33,   33,   35,
   35,   34,   34,    4,    4,   18,   18,   32,   23,   23,
   36,   36,   37,   37,   38,   38,   13,   15,   10,   10,
   39,   39,   40,   40,   14,   14,   41,    7,    7,   42,
    9,    9,    9,    9,    1,    1,    1,    1,    1,
};
static const short yylen[] = {                            2,
    2,    3,    1,    2,    2,    1,    2,    1,    6,    6,
    3,    4,    3,    4,    5,    4,    2,    1,    3,    2,
    4,    2,    2,    2,    1,    6,    6,    1,    3,    4,
    0,    1,    2,    1,    3,    4,    0,    1,    1,    1,
    2,    2,    4,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    2,    3,    3,    2,    3,    1,
    1,    2,    2,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    2,    3,    3,    2,    3,    0,
    1,    2,    1,    4,    1,    1,    1,    1,    3,    2,
    2,    7,    5,    5,    7,    9,    8,    2,    1,    4,
    4,    0,    3,    6,    6,    6,    6,    4,    0,    1,
    3,    1,    0,    1,    3,    1,    2,    4,    0,    1,
    3,    1,    3,    2,    2,    1,    3,    2,    1,    3,
    1,    1,    1,    1,    1,    1,    1,    1,    1,
};
static const short yydefred[] = {                         0,
  131,  132,  134,  133,    0,    0,    0,    0,    0,    8,
    0,    0,    0,    0,    0,    0,    0,   25,   28,    0,
    7,    0,    0,    0,    0,    0,    0,    0,   24,    0,
    0,    0,    0,    0,    0,   17,    0,  126,   11,    0,
    0,    0,    0,  122,    0,   22,   12,    0,    0,    0,
    0,   29,    0,    0,  139,  136,  138,    0,  135,  137,
    0,    0,   60,    0,    0,    0,    0,   19,  125,    0,
    0,    0,    0,   23,    0,    0,   30,    0,    0,    0,
    0,  129,    0,   78,    0,   62,   63,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  127,    0,   14,    0,    0,   10,    0,  105,  121,   21,
    0,    0,    9,  104,    0,    0,    0,    0,   39,    0,
    0,  128,   79,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   66,   67,   68,    0,    0,    0,   15,
    0,    0,    0,    0,   34,   27,  107,   26,  106,    0,
    0,   58,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  130,   41,   42,  118,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   83,   85,   86,   87,   88,
   33,    0,    0,    0,   59,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   46,   47,   48,    0,    0,
   35,    0,    0,    0,    0,    0,    0,   91,   90,    0,
  108,   82,   43,    0,   36,    0,    0,    0,    0,    0,
    0,   89,    0,    0,    0,    0,    0,    0,    0,   84,
    0,    0,    0,   94,    0,    0,    0,   99,    0,    0,
    0,    0,    0,    0,    0,   98,   92,    0,   95,    0,
    0,    0,   97,    0,  101,  100,  103,   96,
};
static const short yydgoto[] = {                          7,
  119,  228,  121,    8,   16,    9,   81,   10,   41,   42,
   23,   26,   36,   37,   68,   46,   18,   19,  143,  144,
  145,  229,  193,   65,  184,  185,  186,  187,  188,  189,
  190,  108,  247,  255,  248,  194,  138,  139,   43,   44,
   38,   82,
};
static const short yysindex[] = {                       103,
    0,    0,    0,    0, -221,   73,    0,  398,  103,    0,
 -202,   23, -192, -185,   73,  398, -159,    0,    0,  398,
    0,  119,   27,   73,   88,   37,   93, -192,    0,  213,
   59,  398,   73,   54, -105,    0,  -23,    0,    0,  -96,
  -82,  144,  164,    0,  -25,    0,    0,  -27,   73,   80,
   73,    0,  179,  146,    0,    0,    0,   54,    0,    0,
   54,   54,    0, -170,  155,  139,  116,    0,    0,   53,
  153,  -33,   73,    0,   88,  231,    0,  237,   14,   82,
  146,    0,  228,    0,   42,    0,    0,   54,   54,   54,
   54,   54,   54,   54,   54,   54,   54,   54,   54,   54,
    0,   54,    0,  -23,  153,    0,  268,    0,    0,    0,
   50,   72,    0,    0,  -38,   82,   82,   82,    0,   63,
  -19,    0,    0,  228,  169,  847,  847,  847,  847,  847,
  847,  260,  260,    0,    0,    0,  155,  174,  259,    0,
   73,   32,  131,  268,    0,    0,    0,    0,    0,   82,
  263,    0,   74,   82,   82,   82,   82,   82,   82,   82,
   82,   82,   82,   82,   82,   82,    0,    0,    0,    0,
   54, -192,   53,   94,  269,  284,  292,  314,  232,   82,
  298,  310,  315,  246,  131,    0,    0,    0,    0,    0,
    0,  162,  334,  353,    0,  263,  176,  875,  875,  875,
  875,  875,  875,  296,  296,    0,    0,    0,  155,  107,
    0,  121,   82,   82,   82,  126,   98,    0,    0,   82,
    0,    0,    0,   82,    0,  360,  105,  162,  344,  127,
  370,    0,  134,  162,  294,  232,   82,  232,   82,    0,
  166,  152,  377,    0,  141, -232,   -1,    0,  232,   82,
  379,  387,  396,  401,  341,    0,    0,  426,    0,  131,
  131,  131,    0,  232,    0,    0,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,  468,    0,    0,
    0,    0,    0,    0,    0,  470,    0,    0,    0,  474,
    0,  181,    0,  435,    0,    0,    0,    0,    0,  181,
    0,  480,  435,    0,    0,    0,  182,    0,    0,    0,
    0,    0,  441,    0,    0,    0,    0,    0,  435,    0,
  435,    0,    0,  -28,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    7,  183,    0,    0,    0,    0,  184,
   20,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -37,    0,  552,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  366,    0,  218,  235,    0,  416,    0,    0,    0,
    0,    0,    0,    0,   -2,    0,    0,    0,    0,    0,
   33,    0,    0,  613,  465,  448,  460,  477,  484,  501,
  515,  336,  428,    0,    0,    0,  -43,    0,  372,    0,
    0,    0,  373,  702,    0,    0,    0,    0,    0,  454,
  513,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  181,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -107,    0,    0,    0,    0,    0,
    0,  257,    0,  462,    0,  588,  393,  521,  535,  545,
  557,  571,  593,  434,  440,    0,    0,    0,  -24,    0,
    0,    0,    0,  446,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -12,    0,    0,
    0,    0,    0,  312,    0,    0,  446,    0,    0,    0,
    0,  659,    0,    0,    0,    0,  386,    0,    0,  471,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -79,
  -79,  373,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  937,  745,  608,  504,  503,    0,    0,  517,  981,  -21,
  -14,  -17,  464,  245,  436,  463,    5,    0,    0,    0,
  403, -130,    0,  953,  171,    0,  363,    0,    0,    0,
    0,  704,    0,    0,  308,    0,    0,    0,    0,  485,
   25,  483,
};
#define YYTABLESIZE 1125
static const short yytable[] = {                          5,
  116,  150,   31,    5,    5,    5,    5,    5,    6,    5,
   50,   53,    6,    6,    6,    6,    6,   81,    6,  115,
   29,    5,    5,    5,    5,  106,  252,   76,   38,   78,
    6,    6,    6,    6,    6,   12,   29,   67,    6,    6,
    6,    6,    6,   61,    6,   80,   38,   61,   61,   61,
   61,   61,   80,   61,   22,    5,    6,    6,  253,    6,
  124,   69,   24,  124,   25,   61,   61,   35,   61,   40,
   40,   27,  113,   40,   40,   40,   40,   40,  100,   40,
   48,  116,  123,   98,   96,   39,   97,    5,   99,  107,
    6,   40,   40,   62,   40,   47,    6,   30,   61,  166,
  115,   95,   40,   94,  164,  162,  243,  163,  146,  165,
  166,   86,   87,   34,  195,  164,  162,   52,  163,  258,
  165,  118,  161,   48,  160,   40,  117,  174,   69,   69,
  148,   61,   49,  161,  166,  160,  107,   40,   77,  164,
  162,  166,  163,   35,  165,  236,  164,  162,   45,  163,
   48,  165,  211,   66,  210,  167,  232,  161,   33,  160,
   70,   81,   81,  166,  161,  225,  160,  238,  164,  162,
  166,  163,  107,  165,   71,  164,  162,  166,  163,   34,
  165,  251,  164,  162,   72,  163,  161,  165,  160,   80,
   80,  100,  240,  161,  107,  160,   98,   96,  166,   97,
  161,   99,  160,  164,  162,  100,  163,   73,  165,   35,
   98,   96,  166,   97,   95,   99,   94,  164,  162,   79,
  163,  161,  165,  160,   18,   20,  117,   13,   95,   75,
   94,  101,   55,   56,   57,  161,   80,  160,  102,   18,
   20,  117,   13,   35,    5,    5,    5,    5,    5,    5,
    5,    5,   51,    6,    6,    6,    6,    6,    6,    6,
    6,   16,  168,  169,  100,   59,   60,  246,  254,   98,
   96,  111,   97,   34,   99,  123,   16,  112,  123,    6,
    6,    6,    6,    6,    6,    6,    6,   95,  173,   94,
   61,   61,   61,   61,   61,   61,  100,  112,  170,  166,
  112,   98,  171,   35,  164,  162,   99,  163,  212,  165,
   54,   55,   56,   57,  104,  105,   40,   40,   40,   40,
   40,   40,  161,  213,  160,   88,   89,   90,   91,   92,
   93,  214,  166,    1,    2,    3,    4,  164,  115,   55,
   56,   57,  165,   58,   59,   60,  154,  155,  156,  157,
  158,  159,  111,  215,  107,  111,  218,  154,  155,  156,
  157,  158,  159,    1,    2,    3,    4,    5,  219,    6,
  221,  116,   59,   60,  223,  220,   64,  226,   64,   64,
   64,  154,  155,  156,  157,  158,  159,   54,  154,  155,
  156,  157,  158,  159,   64,   64,  224,   64,  175,  231,
  235,  176,  237,  177,  178,  179,  180,  181,  182,  239,
  154,  155,  156,  157,  158,  159,  241,  154,  155,  156,
  157,  158,  159,  249,  154,  155,  156,  157,  158,  159,
  265,  266,  267,   57,  246,  250,   57,  259,   88,   89,
   90,   91,   92,   93,  260,  154,  155,  156,  157,  158,
  159,   57,   88,  261,   90,   91,   92,   93,  262,  154,
   64,  156,  157,  158,  159,  263,  264,    3,   65,    1,
   65,   65,   65,    4,   44,  119,   44,   44,   44,    2,
   45,  120,   45,   45,   45,   57,   65,   65,   71,   65,
  113,   71,   44,   44,  109,   44,  114,   80,   45,   45,
   72,   45,  110,   72,   37,   77,   71,   71,   77,   71,
  102,   37,   20,   90,   91,   92,   93,   73,   72,   72,
   73,   72,   32,   77,   74,   21,   44,   74,    1,    2,
    3,    4,   45,  103,  141,   73,   73,  110,   73,  140,
   31,   69,   74,   74,   69,   74,  191,  222,  156,  157,
  158,  159,   65,   55,  256,   70,   55,  109,   70,   69,
   69,   51,   69,  122,   51,    0,    0,    0,    0,    0,
    0,   55,   71,   70,   70,   52,   70,    0,   52,   51,
   51,    0,   51,    0,   72,   53,    0,    0,   53,   77,
    0,    0,   75,   52,   52,   75,   52,   54,    0,    0,
   54,   73,    0,   53,   53,   55,   53,    0,   74,    0,
   75,   49,    0,   51,   49,   54,   54,    0,   54,   64,
   64,   64,   64,   64,   64,   69,    0,   52,   56,   49,
   49,   56,   49,   50,    0,    0,   50,   53,    0,   70,
    0,   64,    0,    0,    0,    0,   56,    0,    0,   54,
    0,   50,   50,   76,   50,    0,   76,    0,    1,    2,
    3,    4,   14,   49,   15,   64,    0,    0,   64,   64,
    0,   76,   31,    0,    0,    0,   75,   57,    0,    0,
   56,    0,    0,   31,    0,   50,   31,    0,   31,   31,
   31,   31,   31,   31,    0,   64,   64,   64,   64,   64,
   64,   64,   64,   64,   64,   64,   64,   64,    0,   64,
    0,   65,   65,   65,   65,   65,   65,   44,   44,   44,
   44,   44,   44,   45,   45,   45,   45,   45,   45,    0,
    0,   71,   71,   71,   71,   71,   71,   76,    0,    0,
    0,    0,    0,   72,   72,   72,   72,   72,   72,   77,
  183,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   73,   73,   73,   73,   73,   73,    0,   74,   74,   74,
   74,   74,   74,    0,    0,    0,    0,    0,   64,    0,
    0,    0,  114,   93,   69,   69,   69,   69,   69,   69,
    0,    0,  183,    0,    0,    0,   55,   55,   70,   70,
   70,   70,   70,   70,   51,   51,   51,   51,   51,   51,
    0,    0,    0,    0,  147,  149,    0,    0,   52,   52,
   52,   52,   52,   52,  120,    0,   32,    0,   53,   53,
   53,   53,   53,   53,    0,   75,   75,    0,    0,    0,
   54,   54,   54,   54,   54,   54,    0,    0,    0,    0,
    0,    0,    0,    0,   49,   49,   49,   49,   49,   49,
  151,  152,  153,    0,    0,    0,    0,  183,  183,  183,
    0,   56,   56,    0,    0,    0,   50,   50,   50,   50,
   50,   50,  216,  100,    0,    0,    0,    0,   98,   96,
    0,   97,    0,   99,  192,    0,   76,   76,  196,  197,
  198,  199,  200,  201,  202,  203,  204,  205,  206,  207,
  208,  166,    0,    0,    0,   93,  164,  162,    0,  163,
    0,  165,    0,    0,  217,    0,   93,   93,   93,   93,
    0,   93,   93,   93,   93,   93,   93,    0,    0,  242,
    0,  244,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  257,    0,    0,    0,    0,  227,   32,  230,
    0,    0,    0,    0,  233,    0,    0,  268,  234,   32,
   63,    0,   32,    0,   32,   32,   32,   32,   32,   32,
   11,   74,    0,  245,    0,    0,   13,    0,   17,   11,
    0,    0,    0,    0,   63,   28,   17,   63,   63,    0,
   17,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   83,    0,   17,   84,   85,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   63,   63,   63,   63,   63,   63,
   63,   63,   63,   63,   63,   63,   63,    0,   63,    0,
  124,  125,  126,  127,  128,  129,  130,  131,  132,  133,
  134,  135,  136,    0,  137,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  142,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   63,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  172,    0,  209,  142,
};
static const short yycheck[] = {                         37,
   44,   40,   17,   41,   42,   43,   44,   45,   37,   47,
   28,   33,   41,   42,   43,   44,   45,  125,   47,   44,
   16,   59,   60,   61,   62,   59,  259,   49,   41,   51,
   59,   60,   61,   62,   37,  257,   32,   61,   41,   42,
   43,   44,   45,   37,   47,  125,   59,   41,   42,   43,
   44,   45,   91,   47,  257,   93,   59,   60,  291,   62,
   41,   37,   40,   44,  257,   59,   60,   91,   62,   37,
   44,  257,   59,   41,   42,   43,   44,   45,   37,   47,
   44,  125,   41,   42,   43,   59,   45,  125,   47,  123,
   93,   59,   60,   40,   62,   59,  125,  257,   45,   37,
  125,   60,   44,   62,   42,   43,  237,   45,   59,   47,
   37,  282,  283,   61,   41,   42,   43,   59,   45,  250,
   47,   40,   60,   44,   62,   93,   45,  142,  104,  105,
   59,  125,   40,   60,   37,   62,  123,   44,   59,   42,
   43,   37,   45,   91,   47,   41,   42,   43,   61,   45,
   44,   47,   59,  259,  172,   93,   59,   60,   40,   62,
  257,  269,  270,   37,   60,   59,   62,   41,   42,   43,
   37,   45,  123,   47,  257,   42,   43,   37,   45,   61,
   47,   41,   42,   43,   41,   45,   60,   47,   62,  269,
  270,   37,   59,   60,  123,   62,   42,   43,   37,   45,
   60,   47,   62,   42,   43,   37,   45,   44,   47,   91,
   42,   43,   37,   45,   60,   47,   62,   42,   43,   41,
   45,   60,   47,   62,   44,   44,   44,   44,   60,  257,
   62,   93,  258,  259,  260,   60,   91,   62,  123,   59,
   59,   59,   59,   91,  282,  283,  284,  285,  286,  287,
  288,  289,   40,  282,  283,  284,  285,  286,  287,  288,
  289,   44,  282,  283,   37,  291,  292,  269,  270,   42,
   43,   41,   45,   61,   47,   41,   59,   41,   44,  282,
  283,  284,  285,  286,  287,  288,  289,   60,  257,   62,
  284,  285,  286,  287,  288,  289,   37,   41,  125,   37,
   44,   42,   44,   91,   42,   43,   47,   45,   40,   47,
  257,  258,  259,  260,   70,   71,  284,  285,  286,  287,
  288,  289,   60,   40,   62,  284,  285,  286,  287,  288,
  289,   40,   37,  261,  262,  263,  264,   42,  257,  258,
  259,  260,   47,  290,  291,  292,  284,  285,  286,  287,
  288,  289,   41,   40,  123,   44,   59,  284,  285,  286,
  287,  288,  289,  261,  262,  263,  264,  265,   59,  267,
  125,  290,  291,  292,   41,   61,   41,  257,   43,   44,
   45,  284,  285,  286,  287,  288,  289,  257,  284,  285,
  286,  287,  288,  289,   59,   60,   44,   62,  268,  274,
   41,  271,   59,  273,  274,  275,  276,  277,  278,   40,
  284,  285,  286,  287,  288,  289,  123,  284,  285,  286,
  287,  288,  289,  272,  284,  285,  286,  287,  288,  289,
  260,  261,  262,   41,  269,   59,   44,   59,  284,  285,
  286,  287,  288,  289,   58,  284,  285,  286,  287,  288,
  289,   59,  284,   58,  286,  287,  288,  289,   58,  284,
  125,  286,  287,  288,  289,  125,   41,    0,   41,    0,
   43,   44,   45,    0,   41,   41,   43,   44,   45,    0,
   41,   41,   43,   44,   45,   93,   59,   60,   41,   62,
  125,   44,   59,   60,   41,   62,  125,  125,   59,   60,
   41,   62,   41,   44,   59,   41,   59,   60,   44,   62,
  125,   41,    9,  286,  287,  288,  289,   41,   59,   60,
   44,   62,   20,   59,   41,    9,   93,   44,  261,  262,
  263,  264,   93,   70,  267,   59,   60,   75,   62,  104,
  125,   41,   59,   60,   44,   62,  144,  185,  286,  287,
  288,  289,  125,   41,  247,   41,   44,   73,   44,   59,
   60,   41,   62,   81,   44,   -1,   -1,   -1,   -1,   -1,
   -1,   59,  125,   59,   60,   41,   62,   -1,   44,   59,
   60,   -1,   62,   -1,  125,   41,   -1,   -1,   44,  125,
   -1,   -1,   41,   59,   60,   44,   62,   41,   -1,   -1,
   44,  125,   -1,   59,   60,   93,   62,   -1,  125,   -1,
   59,   41,   -1,   93,   44,   59,   60,   -1,   62,  284,
  285,  286,  287,  288,  289,  125,   -1,   93,   41,   59,
   60,   44,   62,   41,   -1,   -1,   44,   93,   -1,  125,
   -1,   34,   -1,   -1,   -1,   -1,   59,   -1,   -1,   93,
   -1,   59,   60,   41,   62,   -1,   44,   -1,  261,  262,
  263,  264,  265,   93,  267,   58,   -1,   -1,   61,   62,
   -1,   59,  257,   -1,   -1,   -1,  125,  285,   -1,   -1,
   93,   -1,   -1,  268,   -1,   93,  271,   -1,  273,  274,
  275,  276,  277,  278,   -1,   88,   89,   90,   91,   92,
   93,   94,   95,   96,   97,   98,   99,  100,   -1,  102,
   -1,  284,  285,  286,  287,  288,  289,  284,  285,  286,
  287,  288,  289,  284,  285,  286,  287,  288,  289,   -1,
   -1,  284,  285,  286,  287,  288,  289,  125,   -1,   -1,
   -1,   -1,   -1,  284,  285,  286,  287,  288,  289,  285,
  143,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  284,  285,  286,  287,  288,  289,   -1,  284,  285,  286,
  287,  288,  289,   -1,   -1,   -1,   -1,   -1,  171,   -1,
   -1,   -1,   79,  125,  284,  285,  286,  287,  288,  289,
   -1,   -1,  185,   -1,   -1,   -1,  284,  285,  284,  285,
  286,  287,  288,  289,  284,  285,  286,  287,  288,  289,
   -1,   -1,   -1,   -1,  111,  112,   -1,   -1,  284,  285,
  286,  287,  288,  289,   80,   -1,  125,   -1,  284,  285,
  286,  287,  288,  289,   -1,  284,  285,   -1,   -1,   -1,
  284,  285,  286,  287,  288,  289,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  284,  285,  286,  287,  288,  289,
  116,  117,  118,   -1,   -1,   -1,   -1,  260,  261,  262,
   -1,  284,  285,   -1,   -1,   -1,  284,  285,  286,  287,
  288,  289,  179,   37,   -1,   -1,   -1,   -1,   42,   43,
   -1,   45,   -1,   47,  150,   -1,  284,  285,  154,  155,
  156,  157,  158,  159,  160,  161,  162,  163,  164,  165,
  166,   37,   -1,   -1,   -1,  257,   42,   43,   -1,   45,
   -1,   47,   -1,   -1,  180,   -1,  268,  269,  270,  271,
   -1,  273,  274,  275,  276,  277,  278,   -1,   -1,  236,
   -1,  238,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  249,   -1,   -1,   -1,   -1,  213,  257,  215,
   -1,   -1,   -1,   -1,  220,   -1,   -1,  264,  224,  268,
   34,   -1,  271,   -1,  273,  274,  275,  276,  277,  278,
    0,   45,   -1,  239,   -1,   -1,    6,   -1,    8,    9,
   -1,   -1,   -1,   -1,   58,   15,   16,   61,   62,   -1,
   20,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   58,   -1,   32,   61,   62,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   88,   89,   90,   91,   92,   93,
   94,   95,   96,   97,   98,   99,  100,   -1,  102,   -1,
   88,   89,   90,   91,   92,   93,   94,   95,   96,   97,
   98,   99,  100,   -1,  102,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  107,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  171,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  141,   -1,  171,  144,
};
#define YYFINAL 7
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 293
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,"'%'",0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,
"':'","';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"IDEN","STRING_LIT","INT_LIT","BOOL_LIT",
"INT","DOUBLE","BOOL","CHAR","VOID","STRUCT","CONST","SWITCH","CASE","DEFAULT",
"IF","ELSE","FOR","WHILE","DO","RETURN","CONTINUE","BREAK","NUL","TRUE","FALSE",
"PLUSPLUS","MINUSMINUS","ANDAND","OROR","GE","LE","EQUAL","NOTEQUAL","NOT",
"CHAR_LIT","DOUBLE_LIT","UMINUS","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : program",
"program : first_func_def extdefs",
"program : extdefs_no_func first_func_def extdefs",
"program : first_func_def",
"program : extdefs_no_func first_func_def",
"var : IDEN indexs",
"var : IDEN",
"extdefs_no_func : extdefs_no_func extdef_no_func",
"extdefs_no_func : extdef_no_func",
"extdef_no_func : type IDEN '(' para_in ')' ';'",
"extdef_no_func : VOID IDEN '(' para_in ')' ';'",
"extdef_no_func : type iden_list_init ';'",
"extdef_no_func : CONST type const_iden_list ';'",
"iden_list_init : iden_list_init ',' IDEN",
"iden_list_init : iden_list_init ',' IDEN init",
"iden_list_init : iden_list_init ',' IDEN indexs_dec array_init",
"iden_list_init : iden_list_init ',' IDEN indexs_dec",
"iden_list_init : IDEN init",
"iden_list_init : IDEN",
"iden_list_init : IDEN indexs_dec array_init",
"iden_list_init : IDEN indexs_dec",
"const_iden_list : const_iden_list ',' IDEN const_init",
"const_iden_list : IDEN const_init",
"const_init : '=' literal",
"extdefs : extdefs extdef",
"extdefs : extdef",
"extdef : type IDEN '(' para_in ')' ';'",
"extdef : VOID IDEN '(' para_in ')' ';'",
"extdef : func_def",
"extdef : type iden_list_init ';'",
"extdef : CONST type const_iden_list ';'",
"decs_x :",
"decs_x : decs",
"decs : decs dec",
"decs : dec",
"dec : type iden_list_init ';'",
"dec : CONST type const_iden_list ';'",
"expr_x :",
"expr_x : expr",
"expr : literal",
"expr : var",
"expr : var PLUSPLUS",
"expr : var MINUSMINUS",
"expr : IDEN '(' exprs_comma_x ')'",
"expr : expr '+' expr",
"expr : expr '-' expr",
"expr : expr '*' expr",
"expr : expr '/' expr",
"expr : expr '%' expr",
"expr : expr '>' expr",
"expr : expr '<' expr",
"expr : expr GE expr",
"expr : expr LE expr",
"expr : expr EQUAL expr",
"expr : expr NOTEQUAL expr",
"expr : NOT expr",
"expr : expr ANDAND expr",
"expr : expr OROR expr",
"expr : '-' expr",
"expr : '(' expr ')'",
"expr_no_invoke : literal",
"expr_no_invoke : var",
"expr_no_invoke : var PLUSPLUS",
"expr_no_invoke : var MINUSMINUS",
"expr_no_invoke : expr_no_invoke '+' expr_no_invoke",
"expr_no_invoke : expr_no_invoke '-' expr_no_invoke",
"expr_no_invoke : expr_no_invoke '*' expr_no_invoke",
"expr_no_invoke : expr_no_invoke '/' expr_no_invoke",
"expr_no_invoke : expr_no_invoke '%' expr_no_invoke",
"expr_no_invoke : expr_no_invoke '>' expr_no_invoke",
"expr_no_invoke : expr_no_invoke '<' expr_no_invoke",
"expr_no_invoke : expr_no_invoke GE expr_no_invoke",
"expr_no_invoke : expr_no_invoke LE expr_no_invoke",
"expr_no_invoke : expr_no_invoke EQUAL expr_no_invoke",
"expr_no_invoke : expr_no_invoke NOTEQUAL expr_no_invoke",
"expr_no_invoke : NOT expr_no_invoke",
"expr_no_invoke : expr_no_invoke ANDAND expr_no_invoke",
"expr_no_invoke : expr_no_invoke OROR expr_no_invoke",
"expr_no_invoke : '-' expr_no_invoke",
"expr_no_invoke : '(' expr_no_invoke ')'",
"stmts_x :",
"stmts_x : stmts",
"stmts : stmts stmt",
"stmts : stmt",
"stmt : var '=' expr ';'",
"stmt : if_stmt",
"stmt : while_stmt",
"stmt : switch_stmt",
"stmt : for_stmt",
"stmt : RETURN expr ';'",
"stmt : BREAK ';'",
"stmt : CONTINUE ';'",
"if_stmt : IF '(' expr ')' compound ELSE compound",
"if_stmt : IF '(' expr ')' compound",
"while_stmt : WHILE '(' expr ')' compound",
"while_stmt : DO compound WHILE '(' expr ')' ';'",
"for_stmt : FOR '(' expr_x ';' expr_x ';' expr_x ')' compound",
"switch_stmt : SWITCH '(' IDEN ')' '{' cases default_x '}'",
"cases : cases case",
"cases : case",
"case : CASE CHAR_LIT ':' stmts_x",
"case : CASE INT_LIT ':' stmts_x",
"default_x :",
"default_x : DEFAULT ':' stmts_x",
"first_func_def : type IDEN '(' para_in ')' compound",
"first_func_def : VOID IDEN '(' para_in ')' compound",
"func_def : type IDEN '(' para_in ')' compound",
"func_def : VOID IDEN '(' para_in ')' compound",
"compound : '{' decs_x stmts_x '}'",
"exprs_comma_x :",
"exprs_comma_x : exprs_comma",
"exprs_comma : exprs_comma ',' expr",
"exprs_comma : expr",
"exprs_comma_no_invoke_x :",
"exprs_comma_no_invoke_x : exprs_comma_no_invoke",
"exprs_comma_no_invoke : exprs_comma_no_invoke ',' expr_no_invoke",
"exprs_comma_no_invoke : expr_no_invoke",
"init : '=' expr_no_invoke",
"array_init : '=' '{' exprs_comma_no_invoke_x '}'",
"para_in :",
"para_in : paras",
"paras : paras ',' para",
"paras : para",
"para : type IDEN indexs_dec",
"para : type IDEN",
"indexs_dec : indexs_dec index_dec",
"indexs_dec : index_dec",
"index_dec : '[' INT_LIT ']'",
"indexs : indexs index",
"indexs : index",
"index : '[' expr ']'",
"type : INT",
"type : DOUBLE",
"type : CHAR",
"type : BOOL",
"literal : CHAR_LIT",
"literal : INT_LIT",
"literal : DOUBLE_LIT",
"literal : BOOL_LIT",
"literal : STRING_LIT",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 341 "hw2.y"

int main(void)
{
    yyparse();
    return 0;
}

/*
 *	  s - the error message to be printed
 */
void  yyerror(char* msg)
{
   fprintf( stderr, "*** Error at line %d: %s\n", lineCount, lineBuffer );
   fprintf( stderr, "\n" );
   fprintf( stderr, "Unmatched token: %s\n", yytext );
   fprintf( stderr, "*** syntax error\n"); 
   exit(-1); 
}

#line 703 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 66 "hw2.y"
	{printf("No syntax error!\n");}
break;
case 2:
#line 67 "hw2.y"
	{printf("No syntax error!\n");}
break;
case 3:
#line 68 "hw2.y"
	{printf("No syntax error!\n");}
break;
case 4:
#line 69 "hw2.y"
	{printf("No syntax error!\n");}
break;
case 5:
#line 73 "hw2.y"
	{printf("1\n");}
break;
case 7:
#line 81 "hw2.y"
	{printf("4\n");}
break;
case 8:
#line 82 "hw2.y"
	{printf("5\n");}
break;
case 9:
#line 85 "hw2.y"
	{printf("6\n");}
break;
case 10:
#line 86 "hw2.y"
	{printf("6\n");}
break;
case 11:
#line 87 "hw2.y"
	{printf("7\n");}
break;
case 12:
#line 88 "hw2.y"
	{printf("8\n");}
break;
case 13:
#line 91 "hw2.y"
	{printf("9\n");}
break;
case 15:
#line 93 "hw2.y"
	{printf("10\n");}
break;
case 17:
#line 95 "hw2.y"
	{printf("11\n");}
break;
case 19:
#line 97 "hw2.y"
	{printf("12\n");}
break;
case 21:
#line 101 "hw2.y"
	{printf("13\n");}
break;
case 22:
#line 102 "hw2.y"
	{printf("14\n");}
break;
case 23:
#line 105 "hw2.y"
	{printf("15\n");}
break;
case 24:
#line 113 "hw2.y"
	{printf("18\n");}
break;
case 25:
#line 114 "hw2.y"
	{printf("19\n");}
break;
case 26:
#line 118 "hw2.y"
	{printf("20\n");}
break;
case 27:
#line 119 "hw2.y"
	{printf("20\n");}
break;
case 28:
#line 120 "hw2.y"
	{printf("21\n");}
break;
case 29:
#line 121 "hw2.y"
	{printf("22\n");}
break;
case 30:
#line 122 "hw2.y"
	{printf("23\n");}
break;
case 31:
#line 125 "hw2.y"
	{printf("24\n");}
break;
case 32:
#line 126 "hw2.y"
	{printf("25\n");}
break;
case 33:
#line 130 "hw2.y"
	{printf("26\n");}
break;
case 34:
#line 131 "hw2.y"
	{printf("27\n");}
break;
case 35:
#line 134 "hw2.y"
	{printf("28\n");}
break;
case 36:
#line 135 "hw2.y"
	{printf("29\n");}
break;
case 37:
#line 138 "hw2.y"
	{printf("30\n");}
break;
case 38:
#line 139 "hw2.y"
	{printf("31\n");}
break;
case 39:
#line 142 "hw2.y"
	{}
break;
case 40:
#line 143 "hw2.y"
	{printf("32\n");}
break;
case 41:
#line 144 "hw2.y"
	{printf("33\n");}
break;
case 42:
#line 145 "hw2.y"
	{printf("34\n");}
break;
case 43:
#line 147 "hw2.y"
	{}
break;
case 44:
#line 149 "hw2.y"
	{printf("36\n");}
break;
case 45:
#line 150 "hw2.y"
	{printf("37\n");}
break;
case 46:
#line 151 "hw2.y"
	{printf("38\n");}
break;
case 47:
#line 152 "hw2.y"
	{printf("39\n");}
break;
case 48:
#line 153 "hw2.y"
	{printf("40\n");}
break;
case 49:
#line 154 "hw2.y"
	{printf("41\n");}
break;
case 50:
#line 155 "hw2.y"
	{printf("42\n");}
break;
case 51:
#line 156 "hw2.y"
	{printf("43\n");}
break;
case 52:
#line 157 "hw2.y"
	{printf("44\n");}
break;
case 53:
#line 158 "hw2.y"
	{printf("45\n");}
break;
case 54:
#line 159 "hw2.y"
	{printf("46\n");}
break;
case 55:
#line 160 "hw2.y"
	{printf("47\n");}
break;
case 56:
#line 161 "hw2.y"
	{printf("48\n");}
break;
case 57:
#line 162 "hw2.y"
	{printf("49\n");}
break;
case 58:
#line 163 "hw2.y"
	{printf("50\n");}
break;
case 59:
#line 164 "hw2.y"
	{printf("51\n");}
break;
case 60:
#line 171 "hw2.y"
	{}
break;
case 61:
#line 172 "hw2.y"
	{printf("32\n");}
break;
case 62:
#line 173 "hw2.y"
	{printf("33\n");}
break;
case 63:
#line 174 "hw2.y"
	{printf("34\n");}
break;
case 64:
#line 175 "hw2.y"
	{printf("36\n");}
break;
case 65:
#line 176 "hw2.y"
	{printf("37\n");}
break;
case 66:
#line 177 "hw2.y"
	{printf("38\n");}
break;
case 67:
#line 178 "hw2.y"
	{printf("39\n");}
break;
case 68:
#line 179 "hw2.y"
	{printf("40\n");}
break;
case 69:
#line 180 "hw2.y"
	{printf("41\n");}
break;
case 70:
#line 181 "hw2.y"
	{printf("42\n");}
break;
case 71:
#line 182 "hw2.y"
	{printf("43\n");}
break;
case 72:
#line 183 "hw2.y"
	{printf("44\n");}
break;
case 73:
#line 184 "hw2.y"
	{printf("45\n");}
break;
case 74:
#line 185 "hw2.y"
	{printf("46\n");}
break;
case 75:
#line 186 "hw2.y"
	{printf("47\n");}
break;
case 76:
#line 187 "hw2.y"
	{printf("48\n");}
break;
case 77:
#line 188 "hw2.y"
	{printf("49\n");}
break;
case 78:
#line 189 "hw2.y"
	{printf("50\n");}
break;
case 79:
#line 190 "hw2.y"
	{printf("51\n");}
break;
case 80:
#line 197 "hw2.y"
	{printf("76\n");}
break;
case 81:
#line 198 "hw2.y"
	{printf("77\n");}
break;
case 82:
#line 201 "hw2.y"
	{printf("78\n");}
break;
case 83:
#line 202 "hw2.y"
	{printf("79\n");}
break;
case 84:
#line 205 "hw2.y"
	{printf("80\n");}
break;
case 85:
#line 206 "hw2.y"
	{printf("81\n");}
break;
case 86:
#line 207 "hw2.y"
	{printf("82\n");}
break;
case 87:
#line 208 "hw2.y"
	{printf("83\n");}
break;
case 88:
#line 209 "hw2.y"
	{printf("84\n");}
break;
case 89:
#line 213 "hw2.y"
	{printf("86\n");}
break;
case 90:
#line 214 "hw2.y"
	{printf("87\n");}
break;
case 91:
#line 215 "hw2.y"
	{printf("88\n");}
break;
case 92:
#line 219 "hw2.y"
	{printf("90\n");}
break;
case 93:
#line 220 "hw2.y"
	{}
break;
case 94:
#line 224 "hw2.y"
	{printf("91\n");}
break;
case 95:
#line 225 "hw2.y"
	{printf("92\n");}
break;
case 96:
#line 228 "hw2.y"
	{printf("93\n");}
break;
case 97:
#line 230 "hw2.y"
	{printf("94\n");}
break;
case 98:
#line 232 "hw2.y"
	{printf("95\n");}
break;
case 99:
#line 233 "hw2.y"
	{printf("96\n");}
break;
case 100:
#line 236 "hw2.y"
	{printf("97\n");}
break;
case 101:
#line 237 "hw2.y"
	{printf("98\n");}
break;
case 102:
#line 240 "hw2.y"
	{printf("99\n");}
break;
case 103:
#line 241 "hw2.y"
	{printf("100\n");}
break;
case 104:
#line 252 "hw2.y"
	{printf("103\n");}
break;
case 106:
#line 255 "hw2.y"
	{printf("104\n");}
break;
case 108:
#line 258 "hw2.y"
	{printf("105\n");}
break;
case 109:
#line 262 "hw2.y"
	{printf("106\n");}
break;
case 110:
#line 263 "hw2.y"
	{printf("107\n");}
break;
case 111:
#line 266 "hw2.y"
	{printf("108\n");}
break;
case 112:
#line 267 "hw2.y"
	{printf("109\n");}
break;
case 113:
#line 270 "hw2.y"
	{printf("110\n");}
break;
case 114:
#line 271 "hw2.y"
	{printf("111\n");}
break;
case 115:
#line 274 "hw2.y"
	{printf("112\n");}
break;
case 116:
#line 275 "hw2.y"
	{printf("113\n");}
break;
case 117:
#line 279 "hw2.y"
	{printf("115\n");}
break;
case 118:
#line 282 "hw2.y"
	{printf("117\n");}
break;
case 119:
#line 285 "hw2.y"
	{printf("118\n");}
break;
case 120:
#line 286 "hw2.y"
	{printf("119\n");}
break;
case 121:
#line 289 "hw2.y"
	{printf("120\n");}
break;
case 122:
#line 290 "hw2.y"
	{printf("121\n");}
break;
case 123:
#line 293 "hw2.y"
	{printf("122\n");}
break;
case 125:
#line 301 "hw2.y"
	{printf("125\n");}
break;
case 126:
#line 302 "hw2.y"
	{printf("126\n");}
break;
case 127:
#line 305 "hw2.y"
	{printf("127\n");}
break;
case 128:
#line 311 "hw2.y"
	{printf("130\n");}
break;
case 129:
#line 312 "hw2.y"
	{printf("131\n");}
break;
case 130:
#line 315 "hw2.y"
	{printf("132\n");}
break;
case 131:
#line 319 "hw2.y"
	{printf("133\n");}
break;
case 132:
#line 320 "hw2.y"
	{printf("134\n");}
break;
case 133:
#line 321 "hw2.y"
	{printf("135\n");}
break;
case 134:
#line 322 "hw2.y"
	{printf("136\n");}
break;
case 135:
#line 326 "hw2.y"
	{printf("142\n");}
break;
case 136:
#line 327 "hw2.y"
	{printf("143\n");}
break;
case 137:
#line 328 "hw2.y"
	{printf("144\n");}
break;
case 138:
#line 329 "hw2.y"
	{printf("145\n");}
break;
case 139:
#line 330 "hw2.y"
	{printf("146\n");}
break;
#line 1429 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
