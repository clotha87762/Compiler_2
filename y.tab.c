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
char   *install_symbol();

struct literal_type{
  int type; /* 0 -> int ; 1-> double ; 2-> char  ; 3-> char*  4-> bool*/
  int ival;
  char cval;
  double dval;
  char* sval;
  int bval;
}lit_type;

#line 24 "hw2.y"
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
#line 56 "hw2.y"
/* external function is defined here */
void error();
int TRACEON = 100;
#line 54 "y.tab.c"

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
#define PLUSPLUS 280
#define MINUSMINUS 281
#define ANDAND 282
#define OROR 283
#define GE 284
#define LE 285
#define EQUAL 286
#define NOTEQUAL 287
#define NOT 288
#define CHAR_LIT 289
#define DOUBLE_LIT 290
#define UMINUS 291
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
   27,   27,   28,   28,   29,   29,   31,   30,   33,   33,
   35,   35,   34,   34,    4,    4,   18,   18,   32,   23,
   23,   36,   36,   37,   37,   38,   38,   13,   15,   10,
   10,   39,   39,   40,   40,   14,   14,   41,    7,    7,
   42,    9,    9,    9,    9,    1,    1,    1,    1,    1,
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
    0,    1,    2,    1,    3,    1,    1,    1,    1,    1,
    2,    2,    5,    7,    5,    7,    9,    8,    2,    1,
    4,    4,    0,    3,    6,    6,    6,    6,    4,    0,
    1,    3,    1,    0,    1,    3,    1,    2,    4,    0,
    1,    3,    1,    3,    2,    2,    1,    3,    2,    1,
    3,    1,    1,    1,    1,    1,    1,    1,    1,    1,
};
static const short yydefred[] = {                         0,
  132,  133,  135,  134,    0,    0,    0,    0,    0,    8,
    0,    0,    0,    0,    0,    0,    0,   25,   28,    0,
    7,    0,    0,    0,    0,    0,    0,    0,   24,    0,
    0,    0,    0,    0,    0,   17,    0,  127,   11,    0,
    0,    0,    0,  123,    0,   22,   12,    0,    0,    0,
    0,   29,    0,    0,  140,  137,  139,    0,  136,  138,
    0,    0,    0,    0,    0,  118,    0,    0,   19,  126,
    0,    0,    0,    0,   23,    0,    0,   30,    0,    0,
    0,    0,    0,  130,    0,    0,    0,   39,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  128,    0,
   14,    0,    0,   10,    0,  106,  122,   21,    0,    0,
    9,  105,    0,    0,    0,    0,  129,    0,   59,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   41,   42,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  117,    0,    0,   15,    0,    0,    0,    0,   34,   27,
  108,   26,  107,    0,    0,  131,   60,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   47,   48,   49,
    0,  119,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   84,   86,   87,
   88,   89,   33,   43,    0,    0,  116,    0,   35,    0,
    0,    0,    0,    0,   92,   91,    0,  109,   83,    0,
   36,    0,    0,    0,    0,    0,    0,    0,   44,    0,
    0,    0,    0,    0,    0,    0,    0,   95,    0,    0,
    0,  100,    0,    0,    0,    0,    0,    0,    0,   99,
   94,    0,   96,    0,    0,    0,   98,    0,  102,  101,
  104,   97,
};
static const short yydgoto[] = {                          7,
   88,   64,   90,    8,   16,    9,   83,   10,   41,   42,
   23,   26,   36,   37,   69,   46,   18,   19,  167,  168,
  169,  235,  124,   66,  206,  207,  208,  209,  210,  211,
  212,  116,  251,  259,  252,  125,  162,  163,   43,   44,
   38,   84,
};
static const short yysindex[] = {                       378,
    0,    0,    0,    0, -254,  143,    0,  419,  378,    0,
 -228,   50, -184, -149,  143,  419, -148,    0,    0,  419,
    0,    7,    4,  143,   70,   73,  100, -184,    0,  122,
  129,  419,  143,   89, -117,    0,  -10,    0,    0, -108,
 -107,  125,  124,    0,   76,    0,    0,  -70,  143,  180,
  143,    0,  151,  -38,    0,    0,    0,  111,    0,    0,
  111,  111,    0,  435,  -52,    0,  118,   71,    0,    0,
   80,  126,  -58,  143,    0,   70,  189,    0,  224,   -5,
  111,  111,  130,    0,  111,  111,  111,    0,  463,  -17,
    0,  252,  111,  111,  111,  111,  111,  111,  111,  111,
  111,  111,  111,  111,  111,    0,    0,   17,    0,   89,
    0,  -10,  126,    0,  371,    0,    0,    0,    2,   12,
    0,    0,  442,  229,  242,  296,    0,  463,    0,  392,
  111,  111,  111,  111,  111,  111,  111,  111,  111,  111,
  111,  111,  111,    0,    0,    0,  463,  456,  484,  484,
  484,  484,  484,  484,  148,  148,    0,    0,    0,  247,
    0,  171,  256,    0,  143,   48,  344,  371,    0,    0,
    0,    0,    0,  250,  111,    0,    0,  463,  456,  484,
  484,  484,  484,  484,  484,  148,  148,    0,    0,    0,
  111,    0,   89, -184,   80,  183,  130,  281,  283,  291,
  292,  217,  285,  315,  319,  251,  344,    0,    0,    0,
    0,    0,    0,    0,  442,  301,    0,  233,    0,  133,
  111,  111,  111,  107,    0,    0,  111,    0,    0,  332,
    0,  357,  414,  442,  343,  421,  372,  442,    0,  293,
  217,  111,  217,  111,  158,  164,  381,    0,  428, -100,
 -220,    0,  217,  111,  382,  384,  385,  386,  328,    0,
    0,  426,    0,  344,  344,  344,    0,  217,    0,    0,
    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,  460,    0,    0,
    0,    0,    0,    0,    0,  486,    0,    0,    0,  492,
    0,  254,    0,  224,    0,    0,    0,    0,    0,  254,
    0,  494,  224,    0,    0,    0,  278,    0,    0,    0,
    0,    0,  455,    0,    0,    0,    0,    0,  224,    0,
  224,    0,    0,  -37,    0,    0,    0,    0,    0,    0,
    0,    0,  -26,    0,   42,    0,    0,    0,    0,    0,
  286,   28,    0,    0,    0,    0,    0,    0,    0,    0,
  466,    0,   -2,    0,    0,    0,    0,    0,  -31,   33,
   68,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   77,  101,    0,    0,  388,
    0,  323,  160,    0,  -59,    0,    0,    0,    0,    0,
    0,    0,  373,    0,  468,    0,    0,  957,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  110,  -29,    8,  313,  896,
  903,  909,  915,  922,  505,  512,  137,  163,  366,    0,
    0,    0,  390,    0,    0,    0,  394,  640,    0,    0,
    0,    0,    0,    0,    0,    0,    0, 1125, 1178,  566,
  801,  823,  845,  868,  890,  499,  543,    0,    0,    0,
  466,    0,    0,    0,  254,    0,  749,    0,    0,    0,
    0,    0,    0,    0,  387,    0, -105,    0,    0,    0,
    0,    0,    0,    0,  374,    0,    0,    0,    0,    0,
    0,  452,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   -4,    0,    0,    0,  734,    0,    0,
    0,  452,    0,    0,    0,  768,    0,    0,    0,    0,
  395,    0,    0,  476,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -93,  -93,  394,    0,    0,    0,    0,
    0,    0,
};
static const short yygindex[] = {                         0,
   -7, 1183,  480,  513,  504,    0,    0,  519, 1327,   13,
    9,  -16,  459,   11,  420,  457,   84,    0,    0,    0,
  377,  -51,  350,  -96,  166,    0,  339,    0,    0,    0,
    0,  613,    0,    0,  300,    0,    0,    0,    0,  473,
   -6,  469,
};
#define YYTABLESIZE 1495
static const short yytable[] = {                          6,
  114,   81,   12,    6,    6,    6,    6,    6,  108,    6,
   39,   50,   76,  161,   77,   39,   39,   61,   39,   82,
   39,    6,    6,    6,    6,   31,   63,   76,   22,   77,
   70,   81,   61,   39,    5,   39,   38,   75,    5,    5,
    5,    5,    5,  108,    5,   53,   33,   40,  250,  258,
   68,   78,   82,  121,   38,    6,    5,    5,    5,    5,
  170,   77,   39,   79,  115,   31,   78,   34,  125,   40,
  172,  125,   25,   40,   40,   40,   40,   40,   40,   40,
   35,  112,  113,   40,   40,   62,   40,    6,   40,   24,
    5,   40,   40,   76,   40,   77,  217,   35,   61,   29,
   62,   40,   63,   40,   59,   70,   70,   27,   30,   59,
   59,   79,   59,   41,   59,   29,   48,  115,   41,   41,
   63,   41,    5,   41,  115,   40,   79,   59,   62,   59,
   45,   47,   78,   61,  115,   63,   41,   42,   41,   49,
   34,   67,   42,   42,   64,   42,   60,   42,   71,   72,
   87,   60,   60,   80,   60,   86,   60,   40,  256,   64,
   42,   51,   42,   82,   82,   73,   62,   74,   80,   60,
   35,   60,   40,   47,  196,   81,   81,  218,   47,   47,
   67,   47,   34,   47,  143,   63,   76,   52,  257,  141,
  247,   80,   79,  110,  142,   67,   47,   31,   47,   48,
  124,   63,  262,  124,   48,   48,   68,   48,   31,   48,
  109,   31,   35,   31,   31,   31,   35,   31,   31,    6,
   82,   68,   48,   48,   48,   64,   40,  106,  107,  119,
    6,    6,    6,    6,   80,    6,    6,    6,   78,    6,
    6,  219,    6,    6,    6,    6,    6,    6,    6,    6,
   56,   56,   57,   57,    5,   39,   39,   39,   39,   39,
   39,   67,  144,  145,  120,    5,    5,    5,    5,  174,
    5,    5,    5,  160,    5,    5,   48,    5,    5,    5,
    5,    5,    5,    5,    5,  175,  191,   68,  143,   40,
   58,  231,  146,  141,  139,  192,  140,   18,  142,  193,
   40,   40,   40,   40,  195,   40,   40,   40,  214,   40,
   40,  138,   18,  137,   40,   40,   40,   40,   40,   40,
  220,   20,  221,   40,   40,   40,   40,   40,   40,   13,
  222,  223,  143,   55,   56,   57,   20,  141,  139,  115,
  140,  230,  142,  225,   13,   54,   55,   56,   57,   59,
   59,   59,   59,   59,   59,  138,   72,  137,   41,   41,
   41,   41,   41,   41,   59,   60,   16,   54,   55,   56,
   57,   72,   52,  226,   52,  228,   58,   59,   60,  227,
  237,   16,   42,   42,   42,   42,   42,   42,  176,  232,
  239,   60,   60,   60,   60,   60,   60,  240,   85,   59,
   60,  242,   49,    1,    2,    3,    4,   49,   49,   69,
   49,  244,   49,  113,  112,  245,  113,  112,   47,   47,
   47,   47,   47,   47,   69,   49,  250,   49,  143,  269,
  270,  271,  177,  141,  139,  253,  140,   72,  142,  254,
  263,  264,  265,  266,   48,   48,   48,   48,   48,   48,
  143,  138,  267,  137,  241,  141,  139,  143,  140,    3,
  142,  243,  141,  139,  143,  140,  268,  142,  255,  141,
  139,  105,  140,  138,  142,  137,  103,  101,  143,  102,
  138,  104,  137,  141,  139,    1,  140,  138,  142,  137,
   69,    4,  143,    2,  100,  121,   99,  141,  139,  143,
  140,  138,  142,  137,  141,  139,  110,  140,  111,  142,
   37,   90,  114,   65,  115,  138,   37,  137,   81,  103,
  143,   20,  138,   32,  137,  141,  139,   21,  140,  111,
  142,  164,  118,  131,  132,  133,  134,  135,  136,   45,
  216,   45,   45,   45,  213,  229,  117,   45,   65,   45,
  260,  127,    0,    0,   46,   66,   46,   45,   45,    0,
   45,    0,    0,   65,   45,    0,   45,    0,    0,    0,
   66,   46,    0,   46,    0,    0,    0,  131,  132,  133,
  134,  135,  136,   46,    0,   46,   46,   46,    0,   65,
    0,   45,    0,    0,   52,   52,   52,   52,   52,   52,
  197,   46,   46,    0,   46,    0,   52,    0,    0,   52,
    0,  198,    0,    0,  199,    0,  200,  201,  202,    0,
  203,  204,    0,   45,   52,   52,    0,   52,    0,   65,
    0,    1,    2,    3,    4,   46,   66,  165,    1,    2,
    3,    4,    5,   90,    6,    0,  205,   49,   49,   49,
   49,   49,   49,    0,   90,   90,   90,   90,   52,   90,
   90,   90,    0,   90,   90,    0,    0,   46,    0,    0,
    0,    0,   65,  131,  132,  133,  134,  135,  136,    1,
    2,    3,    4,   14,    0,   15,  205,    0,    0,    0,
   52,    0,  122,    0,    0,  131,  132,  133,  134,  135,
  136,    0,  131,  132,  133,  134,  135,  136,    0,  131,
  132,  133,  134,  135,  136,    0,   93,   94,   95,   96,
   97,   98,    0,  131,  132,  133,  134,  135,  136,    0,
    0,  171,  173,    0,    0,    0,    0,  131,    0,  133,
  134,  135,  136,  205,  205,  205,  133,  134,  135,  136,
    0,    0,    0,    0,    0,   45,    0,    0,    0,    0,
    0,    0,    0,    0,   32,    0,   45,   45,   45,   45,
    0,   45,   45,   45,    0,   45,   45,    0,    0,    0,
   45,   45,   45,   45,   45,   45,   45,   45,   45,   45,
   45,   45,    0,   46,   46,   46,   46,   46,   46,   46,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    6,
   46,   46,   46,   46,  224,   46,   46,   46,    0,   46,
   46,    0,   52,    0,   46,   46,   46,   46,   46,   46,
    0,    0,    0,   52,   52,   52,   52,    0,   52,   52,
   52,   53,   52,   52,   53,    0,    0,   52,   52,   52,
   52,   52,   52,  246,    0,  248,    0,    0,   85,   53,
   53,    0,   53,   54,    0,  261,   54,    0,    0,    0,
    0,    0,    0,    6,    0,    0,    0,    0,    0,    0,
  272,   54,   54,    0,   54,   55,    0,    0,   55,    0,
    0,    0,   93,   53,    0,    0,   32,    0,    0,    0,
    0,    0,    0,   55,   55,    0,   55,   32,   50,    0,
   32,   50,   32,   32,   32,   54,   32,   32,    0,    0,
    0,    0,    0,    0,    0,   53,   50,   50,    0,   50,
   51,    0,    0,   51,    0,    0,    0,   55,    0,   73,
    0,    0,    0,    0,    0,    0,   74,   54,   51,   51,
    0,   51,   75,    0,   73,   53,    0,   53,   70,    0,
   50,   74,   54,    0,   54,   71,    0,   75,   55,   55,
   55,    0,    0,   70,   50,    0,   50,    0,    0,    0,
   71,   51,   51,   51,    0,    0,    0,    0,    0,    0,
   85,    0,   50,    0,    0,    0,    0,   56,    0,    0,
   56,   85,   85,   85,   85,    6,   85,   85,   85,    0,
   85,   85,    0,    0,   51,   56,    6,    6,    6,    6,
   73,    6,    6,    6,   93,    6,    6,   74,    0,    0,
    0,    0,    0,   75,    0,   93,   93,   93,   93,   70,
   93,   93,   93,    0,   93,   93,   71,    0,    0,   56,
    0,    0,    0,    0,    0,    0,    0,   53,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   53,   53,
   53,   53,    0,   53,   53,   53,    0,   53,   53,   54,
    0,   56,   53,   53,   53,   53,   53,   53,    0,    0,
   54,   54,   54,   54,    0,   54,   54,   54,    0,   54,
   54,   55,    0,    0,   54,   54,   54,   54,   54,   54,
    0,    0,   55,   55,   55,   55,    0,   55,   55,   55,
    0,   55,   55,    0,   50,    0,   55,   55,   55,   55,
   55,   55,    0,    0,    0,   50,   50,   50,   50,    0,
   50,   50,   50,    0,   50,   50,   51,    0,    0,   50,
   50,   50,   50,   50,   50,    0,    0,   51,   51,   51,
   51,    0,   51,   51,   51,   57,   51,   51,   57,    0,
    0,   51,   51,   51,   51,   51,   51,   53,   53,   53,
   53,   53,   53,   57,   54,   54,   54,   54,   54,   54,
   55,   55,   55,   55,   55,   55,   50,   50,   50,   50,
   50,   50,    0,   51,   51,   51,   51,   51,   51,    0,
    0,    0,    0,   56,    0,    0,    0,   57,   58,    0,
    0,   58,    0,    0,   56,   56,   56,   56,    0,   56,
   56,   56,    0,   56,   56,    0,   58,    0,   56,   56,
   89,    0,    0,   91,   92,    0,    0,    0,    0,   57,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  123,  126,    0,    0,  128,  129,  130,
   58,    0,    0,    0,    0,  147,  148,  149,  150,  151,
  152,  153,  154,  155,  156,  157,  158,  159,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   58,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  178,  179,  180,  181,  182,  183,  184,
  185,  186,  187,  188,  189,  190,   11,    0,    0,    0,
    0,    0,   13,    0,   17,   11,    0,    0,    0,    0,
    0,   28,   17,    0,    0,    0,   17,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  215,   17,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  123,    0,    0,    0,    0,    0,    0,
    0,   57,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   57,   57,   57,   57,    0,   57,   57,   57,
    0,   57,   57,  233,  234,  236,   57,   57,    0,  238,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  234,    0,  249,    0,    0,    0,
    0,    0,    0,    0,   58,    0,  234,    0,    0,    0,
    0,  166,    0,    0,    0,   58,   58,   58,   58,    0,
   58,   58,   58,    0,   58,   58,    0,    0,    0,    0,
   58,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  194,    0,    0,  166,
};
static const short yycheck[] = {                         37,
   59,   40,  257,   41,   42,   43,   44,   45,   61,   47,
   37,   28,   44,  110,   44,   42,   43,   44,   45,  125,
   47,   59,   60,   61,   62,   17,   34,   59,  257,   59,
   37,  125,   59,   60,   37,   62,   41,   45,   41,   42,
   43,   44,   45,   61,   47,   33,   40,   44,  269,  270,
   61,   44,   91,   59,   59,   93,   59,   60,   61,   62,
   59,   49,   59,   51,  123,  125,   59,   61,   41,   37,
   59,   44,  257,   41,   42,   43,   44,   45,   37,   47,
   91,   71,   72,   42,   43,   44,   45,  125,   47,   40,
   93,   59,   60,  125,   62,  125,  193,   91,  125,   16,
   59,   60,  110,   62,   37,  112,  113,  257,  257,   42,
   43,   44,   45,   37,   47,   32,   44,  123,   42,   43,
   44,   45,  125,   47,  123,   93,   59,   60,   40,   62,
   61,   59,  125,   45,  123,   59,   60,   37,   62,   40,
   61,  259,   42,   43,   44,   45,   37,   47,  257,  257,
   40,   42,   43,   44,   45,   45,   47,  125,  259,   59,
   60,   40,   62,  269,  270,   41,  125,   44,   59,   60,
   91,   62,   44,   37,  166,  269,  270,  194,   42,   43,
   44,   45,   61,   47,   37,  193,  257,   59,  289,   42,
  242,   41,  125,  123,   47,   59,   60,  257,   62,   37,
   41,  125,  254,   44,   42,   43,   44,   45,  268,   47,
   93,  271,   91,  273,  274,  275,   91,  277,  278,  257,
   91,   59,   60,   44,   62,  125,   44,  280,  281,   41,
  268,  269,  270,  271,  125,  273,  274,  275,   59,  277,
  278,   59,  280,  281,  282,  283,  284,  285,  286,  287,
  282,  283,  282,  283,  257,  282,  283,  284,  285,  286,
  287,  125,  280,  281,   41,  268,  269,  270,  271,   41,
  273,  274,  275,  257,  277,  278,   44,  280,  281,  282,
  283,  284,  285,  286,  287,   44,   40,  125,   37,  257,
  283,   59,   41,   42,   43,  125,   45,   44,   47,   44,
  268,  269,  270,  271,  257,  273,  274,  275,   59,  277,
  278,   60,   59,   62,  282,  283,  284,  285,  286,  287,
   40,   44,   40,  282,  283,  284,  285,  286,  287,   44,
   40,   40,   37,  258,  259,  260,   59,   42,   43,  123,
   45,   41,   47,   59,   59,  257,  258,  259,  260,  282,
  283,  284,  285,  286,  287,   60,   44,   62,  282,  283,
  284,  285,  286,  287,  289,  290,   44,  257,  258,  259,
  260,   59,   60,   59,   62,  125,  288,  289,  290,   61,
  274,   59,  282,  283,  284,  285,  286,  287,   93,  257,
   59,  282,  283,  284,  285,  286,  287,   41,  288,  289,
  290,   59,   37,  261,  262,  263,  264,   42,   43,   44,
   45,   40,   47,   41,   41,  123,   44,   44,  282,  283,
  284,  285,  286,  287,   59,   60,  269,   62,   37,  264,
  265,  266,   41,   42,   43,  272,   45,  125,   47,   59,
   59,   58,   58,   58,  282,  283,  284,  285,  286,  287,
   37,   60,  125,   62,   41,   42,   43,   37,   45,    0,
   47,   41,   42,   43,   37,   45,   41,   47,   41,   42,
   43,   37,   45,   60,   47,   62,   42,   43,   37,   45,
   60,   47,   62,   42,   43,    0,   45,   60,   47,   62,
  125,    0,   37,    0,   60,   41,   62,   42,   43,   37,
   45,   60,   47,   62,   42,   43,   41,   45,   41,   47,
   59,  125,  125,   34,  125,   60,   41,   62,  125,  125,
   37,    9,   60,   20,   62,   42,   43,    9,   45,   71,
   47,  112,   76,  282,  283,  284,  285,  286,  287,   41,
  191,   43,   44,   45,  168,  207,   74,   43,   44,   45,
  251,   83,   -1,   -1,   43,   44,   45,   59,   60,   -1,
   62,   -1,   -1,   59,   60,   -1,   62,   -1,   -1,   -1,
   59,   60,   -1,   62,   -1,   -1,   -1,  282,  283,  284,
  285,  286,  287,   41,   -1,   43,   44,   45,   -1,  110,
   -1,   93,   -1,   -1,  282,  283,  284,  285,  286,  287,
  257,   59,   60,   -1,   62,   -1,   41,   -1,   -1,   44,
   -1,  268,   -1,   -1,  271,   -1,  273,  274,  275,   -1,
  277,  278,   -1,  125,   59,   60,   -1,   62,   -1,  125,
   -1,  261,  262,  263,  264,   93,  125,  267,  261,  262,
  263,  264,  265,  257,  267,   -1,  167,  282,  283,  284,
  285,  286,  287,   -1,  268,  269,  270,  271,   93,  273,
  274,  275,   -1,  277,  278,   -1,   -1,  125,   -1,   -1,
   -1,   -1,  193,  282,  283,  284,  285,  286,  287,  261,
  262,  263,  264,  265,   -1,  267,  207,   -1,   -1,   -1,
  125,   -1,   80,   -1,   -1,  282,  283,  284,  285,  286,
  287,   -1,  282,  283,  284,  285,  286,  287,   -1,  282,
  283,  284,  285,  286,  287,   -1,  282,  283,  284,  285,
  286,  287,   -1,  282,  283,  284,  285,  286,  287,   -1,
   -1,  119,  120,   -1,   -1,   -1,   -1,  282,   -1,  284,
  285,  286,  287,  264,  265,  266,  284,  285,  286,  287,
   -1,   -1,   -1,   -1,   -1,  257,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  125,   -1,  268,  269,  270,  271,
   -1,  273,  274,  275,   -1,  277,  278,   -1,   -1,   -1,
  282,  283,  284,  285,  286,  287,  282,  283,  284,  285,
  286,  287,   -1,  282,  283,  284,  285,  286,  287,  257,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   61,
  268,  269,  270,  271,  202,  273,  274,  275,   -1,  277,
  278,   -1,  257,   -1,  282,  283,  284,  285,  286,  287,
   -1,   -1,   -1,  268,  269,  270,  271,   -1,  273,  274,
  275,   41,  277,  278,   44,   -1,   -1,  282,  283,  284,
  285,  286,  287,  241,   -1,  243,   -1,   -1,  125,   59,
   60,   -1,   62,   41,   -1,  253,   44,   -1,   -1,   -1,
   -1,   -1,   -1,  125,   -1,   -1,   -1,   -1,   -1,   -1,
  268,   59,   60,   -1,   62,   41,   -1,   -1,   44,   -1,
   -1,   -1,  125,   93,   -1,   -1,  257,   -1,   -1,   -1,
   -1,   -1,   -1,   59,   60,   -1,   62,  268,   41,   -1,
  271,   44,  273,  274,  275,   93,  277,  278,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  125,   59,   60,   -1,   62,
   41,   -1,   -1,   44,   -1,   -1,   -1,   93,   -1,   44,
   -1,   -1,   -1,   -1,   -1,   -1,   44,  125,   59,   60,
   -1,   62,   44,   -1,   59,   60,   -1,   62,   44,   -1,
   93,   59,   60,   -1,   62,   44,   -1,   59,   60,  125,
   62,   -1,   -1,   59,   60,   -1,   62,   -1,   -1,   -1,
   59,   60,   93,   62,   -1,   -1,   -1,   -1,   -1,   -1,
  257,   -1,  125,   -1,   -1,   -1,   -1,   41,   -1,   -1,
   44,  268,  269,  270,  271,  257,  273,  274,  275,   -1,
  277,  278,   -1,   -1,  125,   59,  268,  269,  270,  271,
  125,  273,  274,  275,  257,  277,  278,  125,   -1,   -1,
   -1,   -1,   -1,  125,   -1,  268,  269,  270,  271,  125,
  273,  274,  275,   -1,  277,  278,  125,   -1,   -1,   93,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  268,  269,
  270,  271,   -1,  273,  274,  275,   -1,  277,  278,  257,
   -1,  125,  282,  283,  284,  285,  286,  287,   -1,   -1,
  268,  269,  270,  271,   -1,  273,  274,  275,   -1,  277,
  278,  257,   -1,   -1,  282,  283,  284,  285,  286,  287,
   -1,   -1,  268,  269,  270,  271,   -1,  273,  274,  275,
   -1,  277,  278,   -1,  257,   -1,  282,  283,  284,  285,
  286,  287,   -1,   -1,   -1,  268,  269,  270,  271,   -1,
  273,  274,  275,   -1,  277,  278,  257,   -1,   -1,  282,
  283,  284,  285,  286,  287,   -1,   -1,  268,  269,  270,
  271,   -1,  273,  274,  275,   41,  277,  278,   44,   -1,
   -1,  282,  283,  284,  285,  286,  287,  282,  283,  284,
  285,  286,  287,   59,  282,  283,  284,  285,  286,  287,
  282,  283,  284,  285,  286,  287,  282,  283,  284,  285,
  286,  287,   -1,  282,  283,  284,  285,  286,  287,   -1,
   -1,   -1,   -1,  257,   -1,   -1,   -1,   93,   41,   -1,
   -1,   44,   -1,   -1,  268,  269,  270,  271,   -1,  273,
  274,  275,   -1,  277,  278,   -1,   59,   -1,  282,  283,
   58,   -1,   -1,   61,   62,   -1,   -1,   -1,   -1,  125,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   81,   82,   -1,   -1,   85,   86,   87,
   93,   -1,   -1,   -1,   -1,   93,   94,   95,   96,   97,
   98,   99,  100,  101,  102,  103,  104,  105,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  125,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  131,  132,  133,  134,  135,  136,  137,
  138,  139,  140,  141,  142,  143,    0,   -1,   -1,   -1,
   -1,   -1,    6,   -1,    8,    9,   -1,   -1,   -1,   -1,
   -1,   15,   16,   -1,   -1,   -1,   20,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  175,   32,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  191,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  257,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  268,  269,  270,  271,   -1,  273,  274,  275,
   -1,  277,  278,  221,  222,  223,  282,  283,   -1,  227,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  242,   -1,  244,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  257,   -1,  254,   -1,   -1,   -1,
   -1,  115,   -1,   -1,   -1,  268,  269,  270,  271,   -1,
  273,  274,  275,   -1,  277,  278,   -1,   -1,   -1,   -1,
  283,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  165,   -1,   -1,  168,
};
#define YYFINAL 7
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 291
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
"IF","ELSE","FOR","WHILE","DO","RETURN","CONTINUE","BREAK","NUL","PLUSPLUS",
"MINUSMINUS","ANDAND","OROR","GE","LE","EQUAL","NOTEQUAL","NOT","CHAR_LIT",
"DOUBLE_LIT","UMINUS","illegal-symbol",
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
"stmt : var",
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
#line 340 "hw2.y"

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
   fprintf( stderr, "*** Error at line %d: %s\n", linenum, buff );
   printf( stderr, "\n" );
   fprintf( stderr, "Unmatched token: %s\n", yytext );
   fprintf( stderr, "*** syntax error\n"); 
   exit(-1); 
}

#line 784 "y.tab.c"

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
#line 71 "hw2.y"
	{printf("No syntax error!\n");}
break;
case 2:
#line 72 "hw2.y"
	{}
break;
case 5:
#line 78 "hw2.y"
	{printf("1\n");}
break;
case 7:
#line 86 "hw2.y"
	{printf("4\n");}
break;
case 8:
#line 87 "hw2.y"
	{printf("5\n");}
break;
case 9:
#line 90 "hw2.y"
	{printf("6\n");}
break;
case 10:
#line 91 "hw2.y"
	{printf("6\n");}
break;
case 11:
#line 92 "hw2.y"
	{printf("7\n");}
break;
case 12:
#line 93 "hw2.y"
	{printf("8\n");}
break;
case 13:
#line 96 "hw2.y"
	{printf("9\n");}
break;
case 15:
#line 98 "hw2.y"
	{printf("10\n");}
break;
case 17:
#line 100 "hw2.y"
	{printf("11\n");}
break;
case 19:
#line 102 "hw2.y"
	{printf("12\n");}
break;
case 21:
#line 106 "hw2.y"
	{printf("13\n");}
break;
case 22:
#line 107 "hw2.y"
	{printf("14\n");}
break;
case 23:
#line 110 "hw2.y"
	{printf("15\n");}
break;
case 24:
#line 118 "hw2.y"
	{printf("18\n");}
break;
case 25:
#line 119 "hw2.y"
	{printf("19\n");}
break;
case 26:
#line 123 "hw2.y"
	{printf("20\n");}
break;
case 27:
#line 124 "hw2.y"
	{printf("20\n");}
break;
case 28:
#line 125 "hw2.y"
	{printf("21\n");}
break;
case 29:
#line 126 "hw2.y"
	{printf("22\n");}
break;
case 30:
#line 127 "hw2.y"
	{printf("23\n");}
break;
case 31:
#line 130 "hw2.y"
	{printf("24\n");}
break;
case 32:
#line 131 "hw2.y"
	{printf("25\n");}
break;
case 33:
#line 135 "hw2.y"
	{printf("26\n");}
break;
case 34:
#line 136 "hw2.y"
	{printf("27\n");}
break;
case 35:
#line 139 "hw2.y"
	{printf("28\n");}
break;
case 36:
#line 140 "hw2.y"
	{printf("29\n");}
break;
case 37:
#line 143 "hw2.y"
	{printf("30\n");}
break;
case 38:
#line 144 "hw2.y"
	{printf("31\n");}
break;
case 39:
#line 147 "hw2.y"
	{}
break;
case 40:
#line 148 "hw2.y"
	{printf("32\n");}
break;
case 41:
#line 149 "hw2.y"
	{printf("33\n");}
break;
case 42:
#line 150 "hw2.y"
	{printf("34\n");}
break;
case 43:
#line 152 "hw2.y"
	{}
break;
case 44:
#line 153 "hw2.y"
	{printf("qq\n");}
break;
case 45:
#line 154 "hw2.y"
	{printf("36\n");}
break;
case 46:
#line 155 "hw2.y"
	{printf("37\n");}
break;
case 47:
#line 156 "hw2.y"
	{printf("38\n");}
break;
case 48:
#line 157 "hw2.y"
	{printf("39\n");}
break;
case 49:
#line 158 "hw2.y"
	{printf("40\n");}
break;
case 50:
#line 159 "hw2.y"
	{printf("41\n");}
break;
case 51:
#line 160 "hw2.y"
	{printf("42\n");}
break;
case 52:
#line 161 "hw2.y"
	{printf("43\n");}
break;
case 53:
#line 162 "hw2.y"
	{printf("44\n");}
break;
case 54:
#line 163 "hw2.y"
	{printf("45\n");}
break;
case 55:
#line 164 "hw2.y"
	{printf("46\n");}
break;
case 56:
#line 165 "hw2.y"
	{printf("47\n");}
break;
case 57:
#line 166 "hw2.y"
	{printf("48\n");}
break;
case 58:
#line 167 "hw2.y"
	{printf("49\n");}
break;
case 59:
#line 168 "hw2.y"
	{printf("50\n");}
break;
case 60:
#line 169 "hw2.y"
	{printf("51\n");}
break;
case 61:
#line 174 "hw2.y"
	{}
break;
case 62:
#line 175 "hw2.y"
	{printf("32\n");}
break;
case 63:
#line 176 "hw2.y"
	{printf("33\n");}
break;
case 64:
#line 177 "hw2.y"
	{printf("34\n");}
break;
case 65:
#line 178 "hw2.y"
	{printf("36\n");}
break;
case 66:
#line 179 "hw2.y"
	{printf("37\n");}
break;
case 67:
#line 180 "hw2.y"
	{printf("38\n");}
break;
case 68:
#line 181 "hw2.y"
	{printf("39\n");}
break;
case 69:
#line 182 "hw2.y"
	{printf("40\n");}
break;
case 70:
#line 183 "hw2.y"
	{printf("41\n");}
break;
case 71:
#line 184 "hw2.y"
	{printf("42\n");}
break;
case 72:
#line 185 "hw2.y"
	{printf("43\n");}
break;
case 73:
#line 186 "hw2.y"
	{printf("44\n");}
break;
case 74:
#line 187 "hw2.y"
	{printf("45\n");}
break;
case 75:
#line 188 "hw2.y"
	{printf("46\n");}
break;
case 76:
#line 189 "hw2.y"
	{printf("47\n");}
break;
case 77:
#line 190 "hw2.y"
	{printf("48\n");}
break;
case 78:
#line 191 "hw2.y"
	{printf("49\n");}
break;
case 79:
#line 192 "hw2.y"
	{printf("50\n");}
break;
case 80:
#line 193 "hw2.y"
	{printf("51\n");}
break;
case 81:
#line 201 "hw2.y"
	{printf("76\n");}
break;
case 82:
#line 202 "hw2.y"
	{printf("77\n");}
break;
case 83:
#line 205 "hw2.y"
	{printf("78\n");}
break;
case 84:
#line 206 "hw2.y"
	{printf("79\n");}
break;
case 85:
#line 209 "hw2.y"
	{printf("80\n");}
break;
case 86:
#line 210 "hw2.y"
	{printf("81\n");}
break;
case 87:
#line 211 "hw2.y"
	{printf("82\n");}
break;
case 88:
#line 212 "hw2.y"
	{printf("83\n");}
break;
case 89:
#line 213 "hw2.y"
	{printf("84\n");}
break;
case 90:
#line 215 "hw2.y"
 IDEN '(' exprs_comma_x ')' ';'
  | IDEN '(' exprs_comma_x ')' ';'
  | RETURN expr ';'   {printf("86\n");}
break;
case 91:
#line 218 "hw2.y"
	{printf("87\n");}
break;
case 92:
#line 219 "hw2.y"
	{printf("88\n");}
break;
case 93:
#line 222 "hw2.y"
	{printf("89\n");}
break;
case 94:
#line 223 "hw2.y"
	{printf("90\n");}
break;
case 95:
#line 226 "hw2.y"
	{printf("91\n");}
break;
case 96:
#line 227 "hw2.y"
	{printf("92\n");}
break;
case 97:
#line 230 "hw2.y"
	{printf("93\n");}
break;
case 98:
#line 232 "hw2.y"
	{printf("94\n");}
break;
case 99:
#line 234 "hw2.y"
	{printf("95\n");}
break;
case 100:
#line 235 "hw2.y"
	{printf("96\n");}
break;
case 101:
#line 238 "hw2.y"
	{printf("97\n");}
break;
case 102:
#line 239 "hw2.y"
	{printf("98\n");}
break;
case 103:
#line 242 "hw2.y"
	{printf("99\n");}
break;
case 104:
#line 243 "hw2.y"
	{printf("100\n");}
break;
case 105:
#line 251 "hw2.y"
	{printf("103\n");}
break;
case 107:
#line 254 "hw2.y"
	{printf("104\n");}
break;
case 109:
#line 257 "hw2.y"
	{printf("105\n");}
break;
case 110:
#line 261 "hw2.y"
	{printf("106\n");}
break;
case 111:
#line 262 "hw2.y"
	{printf("107\n");}
break;
case 112:
#line 265 "hw2.y"
	{printf("108\n");}
break;
case 113:
#line 266 "hw2.y"
	{printf("109\n");}
break;
case 114:
#line 269 "hw2.y"
	{printf("110\n");}
break;
case 115:
#line 270 "hw2.y"
	{printf("111\n");}
break;
case 116:
#line 273 "hw2.y"
	{printf("112\n");}
break;
case 117:
#line 274 "hw2.y"
	{printf("113\n");}
break;
case 118:
#line 278 "hw2.y"
	{printf("115\n");}
break;
case 119:
#line 281 "hw2.y"
	{printf("117\n");}
break;
case 120:
#line 284 "hw2.y"
	{printf("118\n");}
break;
case 121:
#line 285 "hw2.y"
	{printf("119\n");}
break;
case 122:
#line 288 "hw2.y"
	{printf("120\n");}
break;
case 123:
#line 289 "hw2.y"
	{printf("121\n");}
break;
case 124:
#line 292 "hw2.y"
	{printf("122\n");}
break;
case 126:
#line 300 "hw2.y"
	{printf("125\n");}
break;
case 127:
#line 301 "hw2.y"
	{printf("126\n");}
break;
case 128:
#line 304 "hw2.y"
	{printf("127\n");}
break;
case 129:
#line 310 "hw2.y"
	{printf("130\n");}
break;
case 130:
#line 311 "hw2.y"
	{printf("131\n");}
break;
case 131:
#line 314 "hw2.y"
	{printf("132\n");}
break;
case 132:
#line 318 "hw2.y"
	{printf("133\n");}
break;
case 133:
#line 319 "hw2.y"
	{printf("134\n");}
break;
case 134:
#line 320 "hw2.y"
	{printf("135\n");}
break;
case 135:
#line 321 "hw2.y"
	{printf("136\n");}
break;
case 136:
#line 325 "hw2.y"
	{printf("142\n");}
break;
case 137:
#line 326 "hw2.y"
	{printf("143\n");}
break;
case 138:
#line 327 "hw2.y"
	{printf("144\n");}
break;
case 139:
#line 328 "hw2.y"
	{printf("145\n");}
break;
case 140:
#line 329 "hw2.y"
	{printf("146\n");}
break;
#line 1508 "y.tab.c"
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
