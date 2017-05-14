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
#include "SymbolTable.h"
extern char* yytext;
extern int lineCount;
extern char lineBuffer[50000];
char   *install_symbol();

struct literal_type{
  int type; /* 0 -> int ; 1-> double ; 2-> char  ; 3-> char*  4-> bool*/
  int ival;
  char cval;
  double dval;
  char* sval;
  int bval;
};

typedef struct literal_type lit_type;

#line 28 "hw2.y"
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
#line 60 "hw2.y"
/* external function is defined here */
void error();
int TRACEON = 100;
#line 58 "y.tab.c"

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
    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
   24,   24,   24,   24,   24,   24,   24,   24,   24,   24,
   24,   24,   24,   24,   24,   24,   24,   24,   24,   24,
   25,   25,   26,   26,   27,   27,   27,   27,   27,   27,
   27,   27,   27,   28,   28,   29,   29,   31,   30,   33,
   33,   35,   35,   34,   34,    4,    4,   18,   18,   32,
   23,   23,   36,   36,   37,   37,   38,   38,   13,   15,
   10,   10,   39,   39,   40,   40,   14,   14,   41,    7,
    7,   42,    9,    9,    9,    9,    1,    1,    1,    1,
    1,
};
static const short yylen[] = {                            2,
    2,    3,    1,    2,    2,    1,    2,    1,    6,    6,
    3,    4,    3,    4,    5,    4,    2,    1,    3,    2,
    4,    2,    2,    2,    1,    6,    6,    1,    3,    4,
    0,    1,    2,    1,    3,    4,    0,    1,    1,    1,
    2,    2,    5,    7,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    2,    3,    3,    2,    3,
    1,    1,    2,    2,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    2,    3,    3,    2,    3,
    0,    1,    2,    1,    3,    1,    1,    1,    1,    5,
    3,    2,    2,    5,    7,    5,    7,    9,    8,    2,
    1,    4,    4,    0,    3,    6,    6,    6,    6,    4,
    0,    1,    3,    1,    0,    1,    3,    1,    2,    4,
    0,    1,    3,    1,    3,    2,    2,    1,    3,    2,
    1,    3,    1,    1,    1,    1,    1,    1,    1,    1,
    1,
};
static const short yydefred[] = {                         0,
  133,  134,  136,  135,    0,    0,    0,    0,    0,    8,
    0,    0,    0,    0,    0,    0,    0,   25,   28,    0,
    7,    0,    0,    0,    0,    0,    0,    0,   24,    0,
    0,    0,    0,    0,    0,   17,    0,  128,   11,    0,
    0,    0,    0,  124,    0,   22,   12,    0,    0,    0,
    0,   29,    0,    0,  141,  138,  140,    0,  137,  139,
    0,    0,    0,    0,    0,  119,    0,    0,   19,  127,
    0,    0,    0,    0,   23,    0,    0,   30,    0,    0,
    0,    0,    0,  131,    0,    0,    0,   39,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  129,    0,
   14,    0,    0,   10,    0,  107,  123,   21,    0,    0,
    9,  106,    0,    0,    0,    0,  130,    0,   59,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   41,   42,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  118,    0,    0,   15,    0,    0,    0,    0,   34,   27,
  109,   26,  108,    0,    0,  132,   60,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   47,   48,   49,
    0,  120,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   84,   86,
   87,   88,   89,   33,   43,    0,    0,  117,    0,   35,
    0,    0,    0,    0,    0,    0,    0,   93,   92,    0,
  110,   83,    0,   36,    0,    0,    0,    0,    0,    0,
    0,   91,    0,   44,    0,    0,    0,    0,    0,    0,
   90,    0,    0,    0,   96,    0,    0,    0,  101,    0,
    0,    0,    0,    0,    0,    0,  100,   95,    0,   97,
    0,    0,    0,   99,    0,  103,  102,  105,   98,
};
static const short yydgoto[] = {                          7,
   88,   64,   90,    8,   16,    9,   83,   10,   41,   42,
   23,   26,   36,   37,   69,   46,   18,   19,  167,  168,
  169,  239,  124,   66,  207,  208,  209,  210,  211,  212,
  213,  116,  258,  266,  259,  125,  162,  163,   43,   44,
   38,   84,
};
static const short yysindex[] = {                       279,
    0,    0,    0,    0, -254,  156,    0,  369,  279,    0,
 -245,  -10, -220, -176,  156,  369, -158,    0,    0,  369,
    0,  126,    4,  156,   46,  112,   78, -220,    0,  133,
  154,  369,  156,   89, -128,    0,   74,    0,    0, -115,
 -106,  170,  141,    0,  124,    0,    0,  -48,  156,  157,
  156,    0,  178,  -29,    0,    0,    0,  143,    0,    0,
  143,  143,    0,  441,  -40,    0,  128,  105,    0,    0,
  153,  138,  -41,  156,    0,   46,  224,    0,  236,  -23,
  143,  143,  198,    0,  143,  143,  143,    0,  462,   55,
    0,  298,  143,  143,  143,  143,  143,  143,  143,  143,
  143,  143,  143,  143,  143,    0,    0,   48,    0,   89,
    0,   74,  138,    0,  144,    0,    0,    0,   -6,    2,
    0,    0,  448,  284,  290,  367,    0,  462,    0,  331,
  143,  143,  143,  143,  143,  143,  143,  143,  143,  143,
  143,  143,  143,    0,    0,    0,  462,  455,  469,  469,
  469,  469,  469,  469,  476,  476,    0,    0,    0,  304,
    0,  207,  306,    0,  156,   94,  322,  144,    0,    0,
    0,    0,    0,  300,  143,    0,    0,  462,  455,  469,
  469,  469,  469,  469,  469,  476,  476,    0,    0,    0,
  143,    0,   89, -220,  153,  159,  -20,  327,  329,  330,
  337,  248,  143,  333,  379,  381,  303,  322,    0,    0,
    0,    0,    0,    0,    0,  448,  399,    0,  168,    0,
  143,  186,  143,  143,  143,  172,  394,    0,    0,  143,
    0,    0,  385,    0,  404,  414,  420,  448,  400,  427,
  426,    0,  448,    0,  460,  397,  248,  143,  248,  143,
    0,  252,  253,  467,    0,  434, -195, -197,    0,  248,
  143,  468,  470,  472,  477,  409,    0,    0,  498,    0,
  322,  322,  322,    0,  248,    0,    0,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,  549,    0,    0,
    0,    0,    0,    0,    0,  552,    0,    0,    0,  560,
    0,  171,    0,  526,    0,    0,    0,    0,    0,  171,
    0,  568,  526,    0,    0,    0,  219,    0,    0,    0,
    0,    0,  530,    0,    0,    0,    0,    0,  526,    0,
  526,    0,    0,  -37,    0,    0,    0,    0,    0,    0,
    0,    0,  -28,    0,    7,    0,    0,    0,    0,    0,
  220,  118,    0,    0,    0,    0,    0,    0,    0,    0,
  533,    0,   -2,    0,    0,    0,    0,    0,  -31,   33,
   42,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   68,   77,    0,    0,  450,
    0,  254,  151,    0,  832,    0,    0,    0,    0,    0,
    0,    0,  256,    0,  536,    0,    0,  940,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  101,   39,  145,  709,  858,
  881,  888,  894,  900,  627,  864,  110,  137,  163,    0,
    0,    0,  453,    0,    0,    0,  463,  986,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  971, 1009,  532,
  567,  606,  771,  806,  844,  488,  510,    0,    0,    0,
  533,    0,    0,    0,  171,    0,  519,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -92,    0,    0,
    0,    0,    0,    0,    0,  292,    0,    0,    0,    0,
  533,    0,    0,  542,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -12,    0,    0,
    0,    0,  288,    0,    0,    0,    0,  542,    0,    0,
    0,    0, 1097,    0,    0,    0,    0,  464,    0,    0,
  561,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -79,  -79,  463,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
   -7, 1210,  265,  595,  585,    0,    0,  597,  958,   57,
  -16,  -26,  538,  104,  495,  534,  117,    0,    0,    0,
  444, -193,  121,  -84,   43,    0,  406,    0,    0,    0,
    0,  952,    0,    0,  363,    0,    0,    0,    0,  548,
   28,  540,
};
#define YYTABLESIZE 1471
static const short yytable[] = {                          6,
   31,   50,   12,    6,    6,    6,    6,    6,   39,    6,
   81,   22,   76,   39,   39,   61,   39,  114,   39,  221,
  108,    6,    6,    6,    6,  161,   63,   76,   38,   24,
   61,   39,   82,   39,    5,  121,   25,   75,    5,    5,
    5,    5,    5,   40,    5,   81,   38,   40,   40,   40,
   62,   40,  170,   40,  254,    6,    5,    5,    5,    5,
  172,   82,   39,  263,   70,   62,   40,  269,   40,   40,
   82,  257,  265,   40,   40,   40,   40,   40,   59,   40,
   27,  115,   77,   59,   59,   79,   59,    6,   59,   53,
    5,   40,   40,   76,   40,  264,   61,   77,   30,  115,
   79,   59,   63,   59,   41,   77,   45,   79,  218,   41,
   41,   63,   41,   42,   41,  108,  115,   49,   42,   42,
   64,   42,    5,   42,  115,   40,   63,   41,   62,   41,
   67,   62,   29,   61,   68,   64,   42,   60,   42,   70,
   70,   71,   60,   60,   80,   60,   47,   60,   29,  196,
   72,   47,   47,   67,   47,   48,   47,   40,  126,   80,
   60,  126,   60,   77,   35,   33,   79,  219,   67,   47,
   47,   47,   51,   48,  112,  113,   82,   82,   48,   48,
   68,   48,   87,   48,   74,   63,   34,   86,   78,   81,
   81,  125,   63,   34,  125,   68,   48,   40,   48,   49,
   48,   64,   40,   78,   49,   49,   69,   49,   76,   49,
   73,   48,   52,   34,   18,   78,   35,  220,   80,    6,
  109,   69,   49,   35,   49,   80,  234,  110,   35,   18,
    6,    6,    6,    6,   67,    6,    6,    6,    6,    6,
    6,  106,  107,   35,    6,    6,    6,    6,    6,    6,
    6,    6,   56,   56,    5,   39,   39,   39,   39,   39,
   39,   68,   20,   13,  119,    5,    5,    5,    5,   78,
    5,    5,    5,    5,    5,    5,  120,   20,   13,    5,
    5,    5,    5,    5,    5,    5,    5,   69,   82,   40,
   40,   40,   40,   40,   40,   40,  114,   16,   65,  114,
   40,   40,   40,   40,  160,   40,   40,   40,   40,   40,
   40,  217,   16,  276,  277,  278,   40,   40,   40,   40,
   40,   40,   57,   57,  174,   59,   59,   59,   59,   59,
   59,  192,  113,  175,  143,  113,  144,  145,  146,  141,
  139,  235,  140,  191,  142,   54,   55,   56,   57,  193,
  195,   41,   41,   41,   41,   41,   41,  138,  215,  137,
   42,   42,   42,   42,   42,   42,  222,  143,  223,  224,
  115,  177,  141,  139,   65,  140,  225,  142,   58,   59,
   60,   55,   56,   57,   60,   60,   60,   60,   60,   60,
  138,  228,  137,   47,   47,   47,   47,   47,   47,   54,
   55,   56,   57,  143,    1,    2,    3,    4,  141,  139,
  165,  140,   85,  142,   59,   60,    1,    2,    3,    4,
   48,   48,   48,   48,   48,   48,  138,  231,  137,   58,
  143,  206,   85,   59,   60,  141,  139,  229,  140,  233,
  142,  230,  236,  244,  245,  241,   49,   49,   49,   49,
   49,   49,  242,  138,  246,  137,  143,   65,  248,  176,
  247,  141,  139,  143,  140,  250,  142,  249,  141,  139,
  143,  140,  206,  142,  262,  141,  139,  105,  140,  138,
  142,  137,  103,  101,  143,  102,  138,  104,  137,  141,
  139,  143,  140,  138,  142,  137,  141,  139,  143,  140,
  100,  142,   99,  141,  139,  143,  140,  138,  142,  137,
  141,  139,  143,  140,  138,  142,  137,  141,  251,  252,
  257,  138,  142,  137,  260,  261,  270,  271,   45,  272,
   45,   45,   45,  274,  273,  206,  206,  206,  275,    1,
    2,    3,    4,    5,   85,    6,   45,   45,    3,   45,
   46,    1,   46,   46,   46,   85,   85,   85,   85,    4,
   85,   85,   85,   85,   85,   85,  121,    2,   46,   46,
  122,   46,   52,  111,  115,   52,  112,  116,  197,    6,
   45,  131,  132,  133,  134,  135,  136,   81,  104,  198,
   52,   52,  199,   52,  200,  201,  202,  203,  204,  205,
   37,   37,   46,   20,   32,   21,  164,   53,  111,  118,
   53,  214,   45,  232,  131,  132,  133,  134,  135,  136,
  267,  117,  127,    0,   52,   53,   53,    0,   53,    1,
    2,    3,    4,   14,   46,   15,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   54,    0,    0,   54,
  131,  132,  133,  134,  135,  136,   52,    0,    0,   53,
    0,    0,    0,    0,   54,   54,    0,   54,    0,   45,
   65,   45,    0,    0,    0,    0,    0,  131,  132,  133,
  134,  135,  136,    0,    0,   65,   45,    0,   45,    0,
    0,   53,    0,    0,    0,    0,    0,    0,   54,    0,
    0,    0,    0,  131,  132,  133,  134,  135,  136,    0,
  131,  132,  133,  134,  135,  136,    0,  131,  132,  133,
  134,  135,  136,    0,   93,   94,   95,   96,   97,   98,
   54,  131,  132,  133,  134,  135,  136,    0,  131,    0,
  133,  134,  135,  136,   45,    0,    0,  133,  134,  135,
  136,   65,   72,    0,    0,   45,   45,   45,   45,    0,
   45,   45,   45,   45,   45,   45,   46,   72,   52,    0,
   52,   45,   45,   45,   45,   45,   45,   46,   46,   46,
   46,    0,   46,   46,   46,   46,   46,   46,   52,    0,
    0,    0,    0,   46,   46,   46,   46,   46,   46,   52,
   52,   52,   52,    0,   52,   52,   52,   52,   52,   52,
    0,   55,    0,    0,   55,   52,   52,   52,   52,   52,
   52,    0,    0,   53,    0,    0,    0,    0,    0,   55,
   55,    0,   55,   72,   53,   53,   53,   53,    0,   53,
   53,   53,   53,   53,   53,    0,   50,    0,    0,   50,
   53,   53,   53,   53,   53,   53,    0,    0,    0,    0,
    0,    0,   54,   55,   50,   50,    0,   50,    0,    0,
    0,    0,    0,   54,   54,   54,   54,    0,   54,   54,
   54,   54,   54,   54,   51,    0,    0,   51,    0,   54,
   54,   54,   54,   54,   54,   55,    0,    0,   50,    0,
    0,   73,   51,   51,    0,   51,   46,   66,   46,    0,
   45,   45,   45,   45,   45,   45,   73,   53,    0,   53,
    0,    0,   66,   46,   74,   46,    0,    0,    0,    0,
   50,   75,    0,    0,    0,    0,   51,   70,    0,   74,
   54,    0,   54,   71,    0,    0,   75,   55,    0,   55,
    0,    0,   70,   50,    0,   50,   31,   11,   71,   51,
    0,   51,    0,   13,    0,   17,   11,    0,   51,    0,
    0,    0,   28,   17,    0,    0,    0,   17,    0,    0,
   56,    0,   73,   56,    0,    0,    0,    0,   66,   17,
    0,    0,   52,   52,   52,   52,   52,   52,   56,    0,
    0,    0,    0,    0,    0,   74,    0,    0,    0,    0,
    0,   57,   75,    0,   57,    0,    0,    0,   70,    0,
    0,    0,    0,    0,   71,    0,    0,   55,    0,   57,
    0,  122,   56,    0,    0,    0,    0,    0,   55,   55,
   55,   55,    0,   55,   55,   55,   55,   55,   55,   58,
    0,    0,   58,    0,   55,   55,   55,   55,   55,   55,
    0,    0,   50,   57,   56,    0,    0,   58,    0,    0,
  171,  173,  166,   50,   50,   50,   50,    0,   50,   50,
   50,   50,   50,   50,    0,    0,    0,    0,   31,   50,
   50,   50,   50,   50,   50,   57,    0,    0,    0,   31,
   51,   58,   31,    0,   31,   31,   31,   31,   31,   31,
   32,   51,   51,   51,   51,    0,   51,   51,   51,   51,
   51,   51,  194,    0,    0,  166,    0,   51,   51,   51,
   51,   51,   51,   58,    0,    0,    0,    0,    0,    0,
    0,   53,   53,   53,   53,   53,   53,   46,   46,   46,
   46,   46,   46,  226,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   54,   54,   54,   54,   54,   54,
    0,   55,   55,   55,   55,   55,   55,   50,   50,   50,
   50,   50,   50,   51,   51,   51,   51,   51,   51,    0,
    0,    0,    0,    0,    0,    0,   56,    0,  253,    0,
  255,    0,    0,    0,    0,    0,    0,   56,   56,   56,
   56,  268,   56,   56,   56,   56,   56,   56,    0,    0,
    0,   94,    0,   56,   56,    0,  279,   57,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   57,   57,
   57,   57,   32,   57,   57,   57,   57,   57,   57,    0,
    0,    0,    0,   32,   57,   57,   32,    0,   32,   32,
   32,   32,   32,   32,    0,   58,    0,   89,    0,    0,
   91,   92,    0,    0,    0,    0,   58,   58,   58,   58,
    0,   58,   58,   58,   58,   58,   58,    0,    0,    0,
  123,  126,    0,   58,  128,  129,  130,    0,    0,    0,
    0,    0,  147,  148,  149,  150,  151,  152,  153,  154,
  155,  156,  157,  158,  159,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  178,  179,  180,  181,  182,  183,  184,  185,  186,  187,
  188,  189,  190,   94,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   94,   94,   94,   94,    0,   94,
   94,   94,   94,   94,   94,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  216,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  123,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  227,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  123,    0,  237,  238,  240,    0,    0,    0,    0,  243,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  238,    0,  256,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  238,
};
static const short yycheck[] = {                         37,
   17,   28,  257,   41,   42,   43,   44,   45,   37,   47,
   40,  257,   44,   42,   43,   44,   45,   59,   47,   40,
   61,   59,   60,   61,   62,  110,   34,   59,   41,   40,
   59,   60,  125,   62,   37,   59,  257,   45,   41,   42,
   43,   44,   45,   37,   47,  125,   59,   44,   42,   43,
   44,   45,   59,   47,  248,   93,   59,   60,   61,   62,
   59,   91,   59,  259,   37,   59,   60,  261,   62,   37,
   91,  269,  270,   41,   42,   43,   44,   45,   37,   47,
  257,  123,   44,   42,   43,   44,   45,  125,   47,   33,
   93,   59,   60,  125,   62,  291,  125,   59,  257,  123,
   59,   60,  110,   62,   37,   49,   61,   51,  193,   42,
   43,   44,   45,   37,   47,   61,  123,   40,   42,   43,
   44,   45,  125,   47,  123,   93,   59,   60,   40,   62,
  259,  125,   16,   45,   61,   59,   60,   37,   62,  112,
  113,  257,   42,   43,   44,   45,   37,   47,   32,  166,
  257,   42,   43,   44,   45,   44,   47,  125,   41,   59,
   60,   44,   62,  125,   91,   40,  125,  194,   59,   60,
   59,   62,   40,   37,   71,   72,  269,  270,   42,   43,
   44,   45,   40,   47,   44,  193,   61,   45,   44,  269,
  270,   41,  125,   61,   44,   59,   60,   44,   62,   37,
   44,  125,   44,   59,   42,   43,   44,   45,  257,   47,
   41,   44,   59,   61,   44,   59,   91,   59,   41,  257,
   93,   59,   60,   91,   62,  125,   59,  123,   91,   59,
  268,  269,  270,  271,  125,  273,  274,  275,  276,  277,
  278,  282,  283,   91,  282,  283,  284,  285,  286,  287,
  288,  289,  284,  285,  257,  284,  285,  286,  287,  288,
  289,  125,   44,   44,   41,  268,  269,  270,  271,  125,
  273,  274,  275,  276,  277,  278,   41,   59,   59,  282,
  283,  284,  285,  286,  287,  288,  289,  125,   91,  257,
  284,  285,  286,  287,  288,  289,   41,   44,   34,   44,
  268,  269,  270,  271,  257,  273,  274,  275,  276,  277,
  278,  191,   59,  271,  272,  273,  284,  285,  286,  287,
  288,  289,  284,  285,   41,  284,  285,  286,  287,  288,
  289,  125,   41,   44,   37,   44,  282,  283,   41,   42,
   43,  221,   45,   40,   47,  257,  258,  259,  260,   44,
  257,  284,  285,  286,  287,  288,  289,   60,   59,   62,
  284,  285,  286,  287,  288,  289,   40,   37,   40,   40,
  123,   41,   42,   43,  110,   45,   40,   47,  290,  291,
  292,  258,  259,  260,  284,  285,  286,  287,  288,  289,
   60,   59,   62,  284,  285,  286,  287,  288,  289,  257,
  258,  259,  260,   37,  261,  262,  263,  264,   42,   43,
  267,   45,  125,   47,  291,  292,  261,  262,  263,  264,
  284,  285,  286,  287,  288,  289,   60,  125,   62,  285,
   37,  167,  290,  291,  292,   42,   43,   59,   45,   41,
   47,   61,  257,   59,   41,  274,  284,  285,  286,  287,
  288,  289,   59,   60,   41,   62,   37,  193,   59,   93,
   41,   42,   43,   37,   45,   40,   47,   41,   42,   43,
   37,   45,  208,   47,   41,   42,   43,   37,   45,   60,
   47,   62,   42,   43,   37,   45,   60,   47,   62,   42,
   43,   37,   45,   60,   47,   62,   42,   43,   37,   45,
   60,   47,   62,   42,   43,   37,   45,   60,   47,   62,
   42,   43,   37,   45,   60,   47,   62,   42,   59,  123,
  269,   60,   47,   62,  272,   59,   59,   58,   41,   58,
   43,   44,   45,  125,   58,  271,  272,  273,   41,  261,
  262,  263,  264,  265,  257,  267,   59,   60,    0,   62,
   41,    0,   43,   44,   45,  268,  269,  270,  271,    0,
  273,  274,  275,  276,  277,  278,   41,    0,   59,   60,
   41,   62,   41,   41,  125,   44,   41,  125,  257,   61,
   93,  284,  285,  286,  287,  288,  289,  125,  125,  268,
   59,   60,  271,   62,  273,  274,  275,  276,  277,  278,
   59,   41,   93,    9,   20,    9,  112,   41,   71,   76,
   44,  168,  125,  208,  284,  285,  286,  287,  288,  289,
  258,   74,   83,   -1,   93,   59,   60,   -1,   62,  261,
  262,  263,  264,  265,  125,  267,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   41,   -1,   -1,   44,
  284,  285,  286,  287,  288,  289,  125,   -1,   -1,   93,
   -1,   -1,   -1,   -1,   59,   60,   -1,   62,   -1,   43,
   44,   45,   -1,   -1,   -1,   -1,   -1,  284,  285,  286,
  287,  288,  289,   -1,   -1,   59,   60,   -1,   62,   -1,
   -1,  125,   -1,   -1,   -1,   -1,   -1,   -1,   93,   -1,
   -1,   -1,   -1,  284,  285,  286,  287,  288,  289,   -1,
  284,  285,  286,  287,  288,  289,   -1,  284,  285,  286,
  287,  288,  289,   -1,  284,  285,  286,  287,  288,  289,
  125,  284,  285,  286,  287,  288,  289,   -1,  284,   -1,
  286,  287,  288,  289,  257,   -1,   -1,  286,  287,  288,
  289,  125,   44,   -1,   -1,  268,  269,  270,  271,   -1,
  273,  274,  275,  276,  277,  278,  257,   59,   60,   -1,
   62,  284,  285,  286,  287,  288,  289,  268,  269,  270,
  271,   -1,  273,  274,  275,  276,  277,  278,  257,   -1,
   -1,   -1,   -1,  284,  285,  286,  287,  288,  289,  268,
  269,  270,  271,   -1,  273,  274,  275,  276,  277,  278,
   -1,   41,   -1,   -1,   44,  284,  285,  286,  287,  288,
  289,   -1,   -1,  257,   -1,   -1,   -1,   -1,   -1,   59,
   60,   -1,   62,  125,  268,  269,  270,  271,   -1,  273,
  274,  275,  276,  277,  278,   -1,   41,   -1,   -1,   44,
  284,  285,  286,  287,  288,  289,   -1,   -1,   -1,   -1,
   -1,   -1,  257,   93,   59,   60,   -1,   62,   -1,   -1,
   -1,   -1,   -1,  268,  269,  270,  271,   -1,  273,  274,
  275,  276,  277,  278,   41,   -1,   -1,   44,   -1,  284,
  285,  286,  287,  288,  289,  125,   -1,   -1,   93,   -1,
   -1,   44,   59,   60,   -1,   62,   43,   44,   45,   -1,
  284,  285,  286,  287,  288,  289,   59,   60,   -1,   62,
   -1,   -1,   59,   60,   44,   62,   -1,   -1,   -1,   -1,
  125,   44,   -1,   -1,   -1,   -1,   93,   44,   -1,   59,
   60,   -1,   62,   44,   -1,   -1,   59,   60,   -1,   62,
   -1,   -1,   59,   60,   -1,   62,  125,    0,   59,   60,
   -1,   62,   -1,    6,   -1,    8,    9,   -1,  125,   -1,
   -1,   -1,   15,   16,   -1,   -1,   -1,   20,   -1,   -1,
   41,   -1,  125,   44,   -1,   -1,   -1,   -1,  125,   32,
   -1,   -1,  284,  285,  286,  287,  288,  289,   59,   -1,
   -1,   -1,   -1,   -1,   -1,  125,   -1,   -1,   -1,   -1,
   -1,   41,  125,   -1,   44,   -1,   -1,   -1,  125,   -1,
   -1,   -1,   -1,   -1,  125,   -1,   -1,  257,   -1,   59,
   -1,   80,   93,   -1,   -1,   -1,   -1,   -1,  268,  269,
  270,  271,   -1,  273,  274,  275,  276,  277,  278,   41,
   -1,   -1,   44,   -1,  284,  285,  286,  287,  288,  289,
   -1,   -1,  257,   93,  125,   -1,   -1,   59,   -1,   -1,
  119,  120,  115,  268,  269,  270,  271,   -1,  273,  274,
  275,  276,  277,  278,   -1,   -1,   -1,   -1,  257,  284,
  285,  286,  287,  288,  289,  125,   -1,   -1,   -1,  268,
  257,   93,  271,   -1,  273,  274,  275,  276,  277,  278,
  125,  268,  269,  270,  271,   -1,  273,  274,  275,  276,
  277,  278,  165,   -1,   -1,  168,   -1,  284,  285,  286,
  287,  288,  289,  125,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  284,  285,  286,  287,  288,  289,  284,  285,  286,
  287,  288,  289,  202,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  284,  285,  286,  287,  288,  289,
   -1,  284,  285,  286,  287,  288,  289,  284,  285,  286,
  287,  288,  289,  284,  285,  286,  287,  288,  289,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  257,   -1,  247,   -1,
  249,   -1,   -1,   -1,   -1,   -1,   -1,  268,  269,  270,
  271,  260,  273,  274,  275,  276,  277,  278,   -1,   -1,
   -1,  125,   -1,  284,  285,   -1,  275,  257,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  268,  269,
  270,  271,  257,  273,  274,  275,  276,  277,  278,   -1,
   -1,   -1,   -1,  268,  284,  285,  271,   -1,  273,  274,
  275,  276,  277,  278,   -1,  257,   -1,   58,   -1,   -1,
   61,   62,   -1,   -1,   -1,   -1,  268,  269,  270,  271,
   -1,  273,  274,  275,  276,  277,  278,   -1,   -1,   -1,
   81,   82,   -1,  285,   85,   86,   87,   -1,   -1,   -1,
   -1,   -1,   93,   94,   95,   96,   97,   98,   99,  100,
  101,  102,  103,  104,  105,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  131,  132,  133,  134,  135,  136,  137,  138,  139,  140,
  141,  142,  143,  257,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  268,  269,  270,  271,   -1,  273,
  274,  275,  276,  277,  278,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  175,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  191,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  203,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  221,   -1,  223,  224,  225,   -1,   -1,   -1,   -1,  230,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  248,   -1,  250,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  261,
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
"expr : IDEN '(' exprs_comma_x ')' ';'",
"expr : var '=' IDEN '(' exprs_comma_x ')' ';'",
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
"expr_no_invoke : expr '+' expr",
"expr_no_invoke : expr '-' expr",
"expr_no_invoke : expr '*' expr",
"expr_no_invoke : expr '/' expr",
"expr_no_invoke : expr '%' expr",
"expr_no_invoke : expr '>' expr",
"expr_no_invoke : expr '<' expr",
"expr_no_invoke : expr GE expr",
"expr_no_invoke : expr LE expr",
"expr_no_invoke : expr EQUAL expr",
"expr_no_invoke : expr NOTEQUAL expr",
"expr_no_invoke : NOT expr",
"expr_no_invoke : expr ANDAND expr",
"expr_no_invoke : expr OROR expr",
"expr_no_invoke : '-' expr",
"expr_no_invoke : '(' expr ')'",
"stmts_x :",
"stmts_x : stmts",
"stmts : stmts stmt",
"stmts : stmt",
"stmt : var '=' expr",
"stmt : if_stmt",
"stmt : while_stmt",
"stmt : switch_stmt",
"stmt : for_stmt",
"stmt : IDEN '(' exprs_comma_x ')' ';'",
"stmt : RETURN expr ';'",
"stmt : BREAK ';'",
"stmt : CONTINUE ';'",
"if_stmt : IF '(' expr ')' compound",
"if_stmt : IF '(' expr ')' compound ELSE compound",
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
#line 349 "hw2.y"

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
   fprintf( stderr, "*** Error at line %d: %s\n", linenum, lineBuffer );
   fprintf( stderr, "\n" );
   fprintf( stderr, "Unmatched token: %s\n", yytext );
   fprintf( stderr, "*** syntax error\n"); 
   exit(-1); 
}

#line 789 "y.tab.c"

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
#line 75 "hw2.y"
	{printf("No syntax error!\n");}
break;
case 2:
#line 76 "hw2.y"
	{}
break;
case 5:
#line 82 "hw2.y"
	{printf("1\n");}
break;
case 7:
#line 90 "hw2.y"
	{printf("4\n");}
break;
case 8:
#line 91 "hw2.y"
	{printf("5\n");}
break;
case 9:
#line 94 "hw2.y"
	{printf("6\n");}
break;
case 10:
#line 95 "hw2.y"
	{printf("6\n");}
break;
case 11:
#line 96 "hw2.y"
	{printf("7\n");}
break;
case 12:
#line 97 "hw2.y"
	{printf("8\n");}
break;
case 13:
#line 100 "hw2.y"
	{printf("9\n");}
break;
case 15:
#line 102 "hw2.y"
	{printf("10\n");}
break;
case 17:
#line 104 "hw2.y"
	{printf("11\n");}
break;
case 19:
#line 106 "hw2.y"
	{printf("12\n");}
break;
case 21:
#line 110 "hw2.y"
	{printf("13\n");}
break;
case 22:
#line 111 "hw2.y"
	{printf("14\n");}
break;
case 23:
#line 114 "hw2.y"
	{printf("15\n");}
break;
case 24:
#line 122 "hw2.y"
	{printf("18\n");}
break;
case 25:
#line 123 "hw2.y"
	{printf("19\n");}
break;
case 26:
#line 127 "hw2.y"
	{printf("20\n");}
break;
case 27:
#line 128 "hw2.y"
	{printf("20\n");}
break;
case 28:
#line 129 "hw2.y"
	{printf("21\n");}
break;
case 29:
#line 130 "hw2.y"
	{printf("22\n");}
break;
case 30:
#line 131 "hw2.y"
	{printf("23\n");}
break;
case 31:
#line 134 "hw2.y"
	{printf("24\n");}
break;
case 32:
#line 135 "hw2.y"
	{printf("25\n");}
break;
case 33:
#line 139 "hw2.y"
	{printf("26\n");}
break;
case 34:
#line 140 "hw2.y"
	{printf("27\n");}
break;
case 35:
#line 143 "hw2.y"
	{printf("28\n");}
break;
case 36:
#line 144 "hw2.y"
	{printf("29\n");}
break;
case 37:
#line 147 "hw2.y"
	{printf("30\n");}
break;
case 38:
#line 148 "hw2.y"
	{printf("31\n");}
break;
case 39:
#line 151 "hw2.y"
	{}
break;
case 40:
#line 152 "hw2.y"
	{printf("32\n");}
break;
case 41:
#line 153 "hw2.y"
	{printf("33\n");}
break;
case 42:
#line 154 "hw2.y"
	{printf("34\n");}
break;
case 43:
#line 156 "hw2.y"
	{}
break;
case 44:
#line 157 "hw2.y"
	{printf("qq\n");}
break;
case 45:
#line 158 "hw2.y"
	{printf("36\n");}
break;
case 46:
#line 159 "hw2.y"
	{printf("37\n");}
break;
case 47:
#line 160 "hw2.y"
	{printf("38\n");}
break;
case 48:
#line 161 "hw2.y"
	{printf("39\n");}
break;
case 49:
#line 162 "hw2.y"
	{printf("40\n");}
break;
case 50:
#line 163 "hw2.y"
	{printf("41\n");}
break;
case 51:
#line 164 "hw2.y"
	{printf("42\n");}
break;
case 52:
#line 165 "hw2.y"
	{printf("43\n");}
break;
case 53:
#line 166 "hw2.y"
	{printf("44\n");}
break;
case 54:
#line 167 "hw2.y"
	{printf("45\n");}
break;
case 55:
#line 168 "hw2.y"
	{printf("46\n");}
break;
case 56:
#line 169 "hw2.y"
	{printf("47\n");}
break;
case 57:
#line 170 "hw2.y"
	{printf("48\n");}
break;
case 58:
#line 171 "hw2.y"
	{printf("49\n");}
break;
case 59:
#line 172 "hw2.y"
	{printf("50\n");}
break;
case 60:
#line 173 "hw2.y"
	{printf("51\n");}
break;
case 61:
#line 180 "hw2.y"
	{}
break;
case 62:
#line 181 "hw2.y"
	{printf("32\n");}
break;
case 63:
#line 182 "hw2.y"
	{printf("33\n");}
break;
case 64:
#line 183 "hw2.y"
	{printf("34\n");}
break;
case 65:
#line 184 "hw2.y"
	{printf("36\n");}
break;
case 66:
#line 185 "hw2.y"
	{printf("37\n");}
break;
case 67:
#line 186 "hw2.y"
	{printf("38\n");}
break;
case 68:
#line 187 "hw2.y"
	{printf("39\n");}
break;
case 69:
#line 188 "hw2.y"
	{printf("40\n");}
break;
case 70:
#line 189 "hw2.y"
	{printf("41\n");}
break;
case 71:
#line 190 "hw2.y"
	{printf("42\n");}
break;
case 72:
#line 191 "hw2.y"
	{printf("43\n");}
break;
case 73:
#line 192 "hw2.y"
	{printf("44\n");}
break;
case 74:
#line 193 "hw2.y"
	{printf("45\n");}
break;
case 75:
#line 194 "hw2.y"
	{printf("46\n");}
break;
case 76:
#line 195 "hw2.y"
	{printf("47\n");}
break;
case 77:
#line 196 "hw2.y"
	{printf("48\n");}
break;
case 78:
#line 197 "hw2.y"
	{printf("49\n");}
break;
case 79:
#line 198 "hw2.y"
	{printf("50\n");}
break;
case 80:
#line 199 "hw2.y"
	{printf("51\n");}
break;
case 81:
#line 206 "hw2.y"
	{printf("76\n");}
break;
case 82:
#line 207 "hw2.y"
	{printf("77\n");}
break;
case 83:
#line 210 "hw2.y"
	{printf("78\n");}
break;
case 84:
#line 211 "hw2.y"
	{printf("79\n");}
break;
case 85:
#line 214 "hw2.y"
	{printf("80\n");}
break;
case 86:
#line 215 "hw2.y"
	{printf("81\n");}
break;
case 87:
#line 216 "hw2.y"
	{printf("82\n");}
break;
case 88:
#line 217 "hw2.y"
	{printf("83\n");}
break;
case 89:
#line 218 "hw2.y"
	{printf("84\n");}
break;
case 91:
#line 222 "hw2.y"
	{printf("86\n");}
break;
case 92:
#line 223 "hw2.y"
	{printf("87\n");}
break;
case 93:
#line 224 "hw2.y"
	{printf("88\n");}
break;
case 94:
#line 227 "hw2.y"
	{printf("89\n");}
break;
case 95:
#line 228 "hw2.y"
	{printf("90\n");}
break;
case 96:
#line 232 "hw2.y"
	{printf("91\n");}
break;
case 97:
#line 233 "hw2.y"
	{printf("92\n");}
break;
case 98:
#line 236 "hw2.y"
	{printf("93\n");}
break;
case 99:
#line 238 "hw2.y"
	{printf("94\n");}
break;
case 100:
#line 240 "hw2.y"
	{printf("95\n");}
break;
case 101:
#line 241 "hw2.y"
	{printf("96\n");}
break;
case 102:
#line 244 "hw2.y"
	{printf("97\n");}
break;
case 103:
#line 245 "hw2.y"
	{printf("98\n");}
break;
case 104:
#line 248 "hw2.y"
	{printf("99\n");}
break;
case 105:
#line 249 "hw2.y"
	{printf("100\n");}
break;
case 106:
#line 260 "hw2.y"
	{printf("103\n");}
break;
case 108:
#line 263 "hw2.y"
	{printf("104\n");}
break;
case 110:
#line 266 "hw2.y"
	{printf("105\n");}
break;
case 111:
#line 270 "hw2.y"
	{printf("106\n");}
break;
case 112:
#line 271 "hw2.y"
	{printf("107\n");}
break;
case 113:
#line 274 "hw2.y"
	{printf("108\n");}
break;
case 114:
#line 275 "hw2.y"
	{printf("109\n");}
break;
case 115:
#line 278 "hw2.y"
	{printf("110\n");}
break;
case 116:
#line 279 "hw2.y"
	{printf("111\n");}
break;
case 117:
#line 282 "hw2.y"
	{printf("112\n");}
break;
case 118:
#line 283 "hw2.y"
	{printf("113\n");}
break;
case 119:
#line 287 "hw2.y"
	{printf("115\n");}
break;
case 120:
#line 290 "hw2.y"
	{printf("117\n");}
break;
case 121:
#line 293 "hw2.y"
	{printf("118\n");}
break;
case 122:
#line 294 "hw2.y"
	{printf("119\n");}
break;
case 123:
#line 297 "hw2.y"
	{printf("120\n");}
break;
case 124:
#line 298 "hw2.y"
	{printf("121\n");}
break;
case 125:
#line 301 "hw2.y"
	{printf("122\n");}
break;
case 127:
#line 309 "hw2.y"
	{printf("125\n");}
break;
case 128:
#line 310 "hw2.y"
	{printf("126\n");}
break;
case 129:
#line 313 "hw2.y"
	{printf("127\n");}
break;
case 130:
#line 319 "hw2.y"
	{printf("130\n");}
break;
case 131:
#line 320 "hw2.y"
	{printf("131\n");}
break;
case 132:
#line 323 "hw2.y"
	{printf("132\n");}
break;
case 133:
#line 327 "hw2.y"
	{printf("133\n");}
break;
case 134:
#line 328 "hw2.y"
	{printf("134\n");}
break;
case 135:
#line 329 "hw2.y"
	{printf("135\n");}
break;
case 136:
#line 330 "hw2.y"
	{printf("136\n");}
break;
case 137:
#line 334 "hw2.y"
	{printf("142\n");}
break;
case 138:
#line 335 "hw2.y"
	{printf("143\n");}
break;
case 139:
#line 336 "hw2.y"
	{printf("144\n");}
break;
case 140:
#line 337 "hw2.y"
	{printf("145\n");}
break;
case 141:
#line 338 "hw2.y"
	{printf("146\n");}
break;
#line 1511 "y.tab.c"
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
