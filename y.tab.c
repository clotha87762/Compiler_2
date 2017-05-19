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
#include <string.h>
#include "SymbolTable.h"
#include "lit_type.h"

extern char* yytext;
extern int lineCount;
extern char lineBuffer[50000];
char   *install_symbol();
void mstrcpy(char * s1, char* s2);

#line 22 "hw2.y"
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
#line 48 "y.tab.c"

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
    2,    2,    4,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    2,    3,    3,    2,    3,    1,
    1,    2,    2,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    2,    3,    3,    2,    3,    0,
    1,    2,    1,    4,    1,    1,    1,    1,    5,    3,
    2,    2,    7,    5,    5,    7,    9,    8,    2,    1,
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
    0,    0,   60,    0,    0,    0,    0,   19,  126,    0,
    0,    0,    0,   23,    0,    0,   30,    0,    0,    0,
    0,  130,    0,   78,    0,   62,   63,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  128,    0,   14,    0,    0,   10,    0,  106,  122,   21,
    0,    0,    9,  105,    0,    0,    0,    0,   39,    0,
    0,  129,   79,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   66,   67,   68,    0,    0,    0,   15,
    0,    0,    0,    0,   34,   27,  108,   26,  107,    0,
    0,   58,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  131,   41,   42,  119,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   83,   85,   86,   87,
   88,   33,    0,    0,    0,   59,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   46,   47,   48,    0,
    0,   35,    0,    0,    0,    0,    0,    0,    0,   92,
   91,    0,  109,   82,   43,    0,   36,    0,    0,    0,
    0,    0,    0,    0,   90,    0,    0,    0,    0,    0,
    0,    0,    0,   84,   89,    0,    0,    0,   95,    0,
    0,    0,  100,    0,    0,    0,    0,    0,    0,    0,
   99,   93,    0,   96,    0,    0,    0,   98,    0,  102,
  101,  104,   97,
};
static const short yydgoto[] = {                          7,
  119,  231,  121,    8,   16,    9,   81,   10,   41,   42,
   23,   26,   36,   37,   68,   46,   18,   19,  143,  144,
  145,  232,  194,   65,  185,  186,  187,  188,  189,  190,
  191,  108,  252,  260,  253,  195,  138,  139,   43,   44,
   38,   82,
};
static const short yysindex[] = {                       103,
    0,    0,    0,    0, -220,   73,    0,  429,  103,    0,
 -194,   46, -192, -150,   73,  429, -144,    0,    0,  429,
    0,  119,   37,   73,  100,   59,  109, -192,    0,  213,
   80,  429,   73,   54, -139,    0,  -23,    0,    0, -124,
 -103,  144,  164,    0,  -25,    0,    0,  -82,   73,   94,
   73,    0,  179,  139,    0,    0,    0,   54,    0,    0,
   54,   54,    0,   93,  155,  146,  114,    0,    0,   53,
  153,  -33,   73,    0,  100,  191,    0,  223,   14,   82,
  139,    0,  228,    0,   42,    0,    0,   54,   54,   54,
   54,   54,   54,   54,   54,   54,   54,   54,   54,   54,
    0,   54,    0,  -23,  153,    0,  492,    0,    0,    0,
   50,   72,    0,    0,  -38,   82,   82,   82,    0,   63,
  118,    0,    0,  228,  169,  599,  599,  599,  599,  599,
  599,  260,  260,    0,    0,    0,  155,  147,  255,    0,
   73,   32,  131,  492,    0,    0,    0,    0,    0,   82,
  263,    0,   74,   82,   82,   82,   82,   82,   82,   82,
   82,   82,   82,   82,   82,   82,    0,    0,    0,    0,
   54, -192,   53,  107,  -19,  269,  284,  292,  316,  180,
   82,  298,  310,  317,  246,  131,    0,    0,    0,    0,
    0,    0,  162,  356,  359,    0,  263,  176,  637,  637,
  637,  637,  637,  637,  296,  296,    0,    0,    0,  155,
  181,    0,   82,  160,   82,   82,   82,  136,   98,    0,
    0,   82,    0,    0,    0,   82,    0,  383,  390,  105,
  162,  373,  127,  395,    0,  134,  162,  374,  313,  180,
   82,  180,   82,    0,    0,  185,  166,  386,    0,  141,
 -232,   -1,    0,  180,   82,  400,  408,  409,  410,  345,
    0,    0,  433,    0,  131,  131,  131,    0,  180,    0,
    0,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,  476,    0,    0,
    0,    0,    0,    0,    0,  480,    0,    0,    0,  482,
    0,  182,    0,  450,    0,    0,    0,    0,    0,  182,
    0,  495,  450,    0,    0,    0,  183,    0,    0,    0,
    0,    0,  456,    0,    0,    0,    0,    0,  450,    0,
  450,    0,    0,  -28,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    7,  184,    0,    0,    0,    0,  218,
   -8,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -37,    0,  552,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  378,    0,  219,   20,    0,  702,    0,    0,    0,
    0,    0,    0,    0,   -2,    0,    0,    0,    0,    0,
   33,    0,    0,  613,  465,  448,  460,  477,  484,  501,
  515,  336,  428,    0,    0,    0,  -43,    0,  380,    0,
    0,    0,  387,  724,    0,    0,    0,    0,    0,  470,
  513,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  182,    0,  452,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -107,    0,    0,    0,    0,
    0,    0,  235,    0,  191,    0,  588,  393,  521,  535,
  545,  557,  571,  593,  434,  440,    0,    0,    0,  -24,
    0,    0,  470,    0,    0,  464,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -12,    0,    0,    0,    0,    0,  257,    0,    0,    0,
  464,    0,    0,    0,    0,    0,  659,    0,    0,    0,
    0,  401,    0,    0,  488,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -79,  -79,  387,    0,    0,    0,
    0,    0,    0,
};
static const short yygindex[] = {                         0,
  959,  745,  609,  523,  514,    0,    0,  526, 1003,  -21,
  -14,  -17,  468,  245,  436,  466,   39,    0,    0,    0,
  403, -143,  335,  975,   88,    0,  369,    0,    0,    0,
    0,  419,    0,    0,  306,    0,    0,    0,    0,  491,
   25,  485,
};
#define YYTABLESIZE 1147
static const short yytable[] = {                          5,
  117,  150,   31,    5,    5,    5,    5,    5,    6,    5,
   50,   53,    6,    6,    6,    6,    6,   81,    6,  116,
  213,    5,    5,    5,    5,  106,  257,   76,   38,   78,
    6,    6,  125,    6,    6,  125,   12,   67,    6,    6,
    6,    6,    6,   61,    6,   80,   38,   61,   61,   61,
   61,   61,   80,   61,   29,    5,    6,    6,  258,    6,
  124,   69,   22,  124,   25,   61,   61,   35,   61,   40,
   29,   80,  113,   40,   40,   40,   40,   40,  100,   40,
   40,  117,  123,   98,   96,   24,   97,    5,   99,  107,
    6,   40,   40,   62,   40,   39,    6,  248,   61,  166,
  116,   95,   48,   94,  164,  162,   27,  163,  146,  165,
  166,  263,   30,   34,  196,  164,  162,   47,  163,   66,
  165,  118,  161,   40,  160,   40,  117,  174,   69,   69,
  148,   61,   70,  161,  166,  160,  107,   48,   52,  164,
  162,  166,  163,   35,  165,  240,  164,  162,   49,  163,
   40,  165,   77,   71,  211,  167,  235,  161,   33,  160,
   45,   81,   81,  166,  161,  212,  160,  242,  164,  162,
  166,  163,  107,  165,   75,  164,  162,  166,  163,   34,
  165,  256,  164,  162,   72,  163,  161,  165,  160,   80,
   80,  100,  244,  161,  107,  160,   98,   96,  166,   97,
  161,   99,  160,  164,  162,  100,  163,   73,  165,   35,
   98,   96,  166,   97,   95,   99,   94,  164,  162,   79,
  163,  161,  165,  160,   48,   18,   20,  118,   95,   80,
   94,  111,   55,   56,   57,  161,  102,  160,  101,  227,
   18,   20,  118,   35,    5,    5,    5,    5,    5,    5,
    5,    5,   51,    6,    6,    6,    6,    6,    6,    6,
    6,   13,   16,  112,  100,   59,   60,  251,  259,   98,
   96,  170,   97,   34,   99,  113,   13,   16,  113,    6,
    6,    6,    6,    6,    6,    6,    6,   95,  173,   94,
   61,   61,   61,   61,   61,   61,  100,  112,  171,  166,
  112,   98,  107,   35,  164,  162,   99,  163,  214,  165,
   54,   55,   56,   57,  104,  105,   40,   40,   40,   40,
   40,   40,  161,  215,  160,   88,   89,   90,   91,   92,
   93,  216,  166,    1,    2,    3,    4,  164,  115,   55,
   56,   57,  165,   58,   59,   60,  154,  155,  156,  157,
  158,  159,  270,  271,  272,  217,  220,  154,  155,  156,
  157,  158,  159,    1,    2,    3,    4,    5,  221,    6,
  223,  116,   59,   60,   86,   87,   64,  222,   64,   64,
   64,  154,  155,  156,  157,  158,  159,  175,  154,  155,
  156,  157,  158,  159,   64,   64,  225,   64,  176,  168,
  169,  177,  226,  178,  179,  180,  181,  182,  183,  234,
  154,  155,  156,  157,  158,  159,  229,  154,  155,  156,
  157,  158,  159,  238,  154,  155,  156,  157,  158,  159,
  239,  241,  245,   57,  243,  246,   57,  254,   88,   89,
   90,   91,   92,   93,  255,  154,  155,  156,  157,  158,
  159,   57,   88,  251,   90,   91,   92,   93,  264,  154,
   64,  156,  157,  158,  159,  265,  266,  267,   65,  268,
   65,   65,   65,  269,   44,    3,   44,   44,   44,    1,
   45,    4,   45,   45,   45,   57,   65,   65,   71,   65,
  120,   71,   44,   44,    2,   44,  121,  114,   45,   45,
   72,   45,  114,   72,  115,   77,   71,   71,   77,   71,
  110,   80,    6,   90,   91,   92,   93,   73,   72,   72,
   73,   72,   37,   77,   74,  103,   44,   74,   37,  147,
  149,   20,   45,   32,   21,   73,   73,  103,   73,  140,
  110,   69,   74,   74,   69,   74,  192,  228,  156,  157,
  158,  159,   65,   55,  224,   70,   55,  261,   70,   69,
   69,   51,   69,  109,   51,  122,    0,    0,    0,    0,
    0,   55,   71,   70,   70,   52,   70,    0,   52,   51,
   51,    0,   51,    0,   72,   53,    0,    0,   53,   77,
    0,    0,   75,   52,   52,   75,   52,   54,  218,    0,
   54,   73,    0,   53,   53,   55,   53,    0,   74,    0,
   75,   49,    0,   51,   49,   54,   54,    0,   54,   64,
   64,   64,   64,   64,   64,   69,    0,   52,   56,   49,
   49,   56,   49,   50,    0,  100,   50,   53,    0,   70,
   98,   96,   64,   97,    0,   99,   56,    0,    0,   54,
    0,   50,   50,   76,   50,    0,   76,    0,  247,    0,
  249,    0,    0,   49,    0,    0,   64,    0,    0,   64,
   64,   76,  262,  166,    0,    0,   75,   57,  164,  162,
   56,  163,    0,  165,    0,   50,    0,  273,    0,    1,
    2,    3,    4,   14,    0,   15,   64,   64,   64,   64,
   64,   64,   64,   64,   64,   64,   64,   64,   64,    0,
   64,   65,   65,   65,   65,   65,   65,   44,   44,   44,
   44,   44,   44,   45,   45,   45,   45,   45,   45,    0,
    0,   71,   71,   71,   71,   71,   71,   76,    0,    0,
    0,    0,    0,   72,   72,   72,   72,   72,   72,   77,
    0,  184,    1,    2,    3,    4,    0,    0,  141,    0,
   73,   73,   73,   73,   73,   73,    0,   74,   74,   74,
   74,   74,   74,    0,    0,    0,    0,    0,    0,   64,
    0,    0,    0,   94,   69,   69,   69,   69,   69,   69,
    0,    0,    0,    0,  184,    0,   55,   55,   70,   70,
   70,   70,   70,   70,   51,   51,   51,   51,   51,   51,
    0,    0,    0,    0,    0,    0,    0,    0,   52,   52,
   52,   52,   52,   52,  120,    0,   31,    0,   53,   53,
   53,   53,   53,   53,    0,   75,   75,    0,    0,    0,
   54,   54,   54,   54,   54,   54,    0,    0,   32,    0,
    0,    0,    0,    0,   49,   49,   49,   49,   49,   49,
  151,  152,  153,    0,    0,    0,    0,    0,    0,    0,
    0,   56,   56,  184,  184,  184,   50,   50,   50,   50,
   50,   50,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  193,    0,   76,   76,  197,  198,
  199,  200,  201,  202,  203,  204,  205,  206,  207,  208,
  209,    0,    0,    0,    0,   94,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  219,   94,   94,   94,   94,
    0,   94,   94,   94,   94,   94,   94,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  193,   31,  230,
    0,  233,    0,    0,    0,    0,  236,    0,    0,   31,
  237,    0,   31,    0,   31,   31,   31,   31,   31,   31,
   32,    0,    0,    0,    0,    0,    0,  250,    0,    0,
    0,   32,   63,    0,   32,    0,   32,   32,   32,   32,
   32,   32,   11,   74,    0,    0,    0,    0,   13,    0,
   17,   11,    0,    0,    0,    0,   63,   28,   17,   63,
   63,    0,   17,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   83,    0,   17,   84,   85,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   63,   63,   63,   63,
   63,   63,   63,   63,   63,   63,   63,   63,   63,    0,
   63,    0,  124,  125,  126,  127,  128,  129,  130,  131,
  132,  133,  134,  135,  136,    0,  137,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  142,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   63,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  172,    0,  210,  142,
};
static const short yycheck[] = {                         37,
   44,   40,   17,   41,   42,   43,   44,   45,   37,   47,
   28,   33,   41,   42,   43,   44,   45,  125,   47,   44,
   40,   59,   60,   61,   62,   59,  259,   49,   41,   51,
   59,   60,   41,   62,   37,   44,  257,   61,   41,   42,
   43,   44,   45,   37,   47,  125,   59,   41,   42,   43,
   44,   45,   91,   47,   16,   93,   59,   60,  291,   62,
   41,   37,  257,   44,  257,   59,   60,   91,   62,   37,
   32,   91,   59,   41,   42,   43,   44,   45,   37,   47,
   44,  125,   41,   42,   43,   40,   45,  125,   47,  123,
   93,   59,   60,   40,   62,   59,  125,  241,   45,   37,
  125,   60,   44,   62,   42,   43,  257,   45,   59,   47,
   37,  255,  257,   61,   41,   42,   43,   59,   45,  259,
   47,   40,   60,   44,   62,   93,   45,  142,  104,  105,
   59,  125,  257,   60,   37,   62,  123,   44,   59,   42,
   43,   37,   45,   91,   47,   41,   42,   43,   40,   45,
   44,   47,   59,  257,  172,   93,   59,   60,   40,   62,
   61,  269,  270,   37,   60,   59,   62,   41,   42,   43,
   37,   45,  123,   47,  257,   42,   43,   37,   45,   61,
   47,   41,   42,   43,   41,   45,   60,   47,   62,  269,
  270,   37,   59,   60,  123,   62,   42,   43,   37,   45,
   60,   47,   62,   42,   43,   37,   45,   44,   47,   91,
   42,   43,   37,   45,   60,   47,   62,   42,   43,   41,
   45,   60,   47,   62,   44,   44,   44,   44,   60,   91,
   62,   41,  258,  259,  260,   60,  123,   62,   93,   59,
   59,   59,   59,   91,  282,  283,  284,  285,  286,  287,
  288,  289,   40,  282,  283,  284,  285,  286,  287,  288,
  289,   44,   44,   41,   37,  291,  292,  269,  270,   42,
   43,  125,   45,   61,   47,   41,   59,   59,   44,  282,
  283,  284,  285,  286,  287,  288,  289,   60,  257,   62,
  284,  285,  286,  287,  288,  289,   37,   41,   44,   37,
   44,   42,  123,   91,   42,   43,   47,   45,   40,   47,
  257,  258,  259,  260,   70,   71,  284,  285,  286,  287,
  288,  289,   60,   40,   62,  284,  285,  286,  287,  288,
  289,   40,   37,  261,  262,  263,  264,   42,  257,  258,
  259,  260,   47,  290,  291,  292,  284,  285,  286,  287,
  288,  289,  265,  266,  267,   40,   59,  284,  285,  286,
  287,  288,  289,  261,  262,  263,  264,  265,   59,  267,
  125,  290,  291,  292,  282,  283,   41,   61,   43,   44,
   45,  284,  285,  286,  287,  288,  289,  257,  284,  285,
  286,  287,  288,  289,   59,   60,   41,   62,  268,  282,
  283,  271,   44,  273,  274,  275,  276,  277,  278,  274,
  284,  285,  286,  287,  288,  289,  257,  284,  285,  286,
  287,  288,  289,   41,  284,  285,  286,  287,  288,  289,
   41,   59,   59,   41,   40,  123,   44,  272,  284,  285,
  286,  287,  288,  289,   59,  284,  285,  286,  287,  288,
  289,   59,  284,  269,  286,  287,  288,  289,   59,  284,
  125,  286,  287,  288,  289,   58,   58,   58,   41,  125,
   43,   44,   45,   41,   41,    0,   43,   44,   45,    0,
   41,    0,   43,   44,   45,   93,   59,   60,   41,   62,
   41,   44,   59,   60,    0,   62,   41,   79,   59,   60,
   41,   62,  125,   44,  125,   41,   59,   60,   44,   62,
   41,  125,   61,  286,  287,  288,  289,   41,   59,   60,
   44,   62,   59,   59,   41,  125,   93,   44,   41,  111,
  112,    9,   93,   20,    9,   59,   60,   70,   62,  104,
   75,   41,   59,   60,   44,   62,  144,  213,  286,  287,
  288,  289,  125,   41,  186,   41,   44,  252,   44,   59,
   60,   41,   62,   73,   44,   81,   -1,   -1,   -1,   -1,
   -1,   59,  125,   59,   60,   41,   62,   -1,   44,   59,
   60,   -1,   62,   -1,  125,   41,   -1,   -1,   44,  125,
   -1,   -1,   41,   59,   60,   44,   62,   41,  180,   -1,
   44,  125,   -1,   59,   60,   93,   62,   -1,  125,   -1,
   59,   41,   -1,   93,   44,   59,   60,   -1,   62,  284,
  285,  286,  287,  288,  289,  125,   -1,   93,   41,   59,
   60,   44,   62,   41,   -1,   37,   44,   93,   -1,  125,
   42,   43,   34,   45,   -1,   47,   59,   -1,   -1,   93,
   -1,   59,   60,   41,   62,   -1,   44,   -1,  240,   -1,
  242,   -1,   -1,   93,   -1,   -1,   58,   -1,   -1,   61,
   62,   59,  254,   37,   -1,   -1,  125,  285,   42,   43,
   93,   45,   -1,   47,   -1,   93,   -1,  269,   -1,  261,
  262,  263,  264,  265,   -1,  267,   88,   89,   90,   91,
   92,   93,   94,   95,   96,   97,   98,   99,  100,   -1,
  102,  284,  285,  286,  287,  288,  289,  284,  285,  286,
  287,  288,  289,  284,  285,  286,  287,  288,  289,   -1,
   -1,  284,  285,  286,  287,  288,  289,  125,   -1,   -1,
   -1,   -1,   -1,  284,  285,  286,  287,  288,  289,  285,
   -1,  143,  261,  262,  263,  264,   -1,   -1,  267,   -1,
  284,  285,  286,  287,  288,  289,   -1,  284,  285,  286,
  287,  288,  289,   -1,   -1,   -1,   -1,   -1,   -1,  171,
   -1,   -1,   -1,  125,  284,  285,  286,  287,  288,  289,
   -1,   -1,   -1,   -1,  186,   -1,  284,  285,  284,  285,
  286,  287,  288,  289,  284,  285,  286,  287,  288,  289,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  284,  285,
  286,  287,  288,  289,   80,   -1,  125,   -1,  284,  285,
  286,  287,  288,  289,   -1,  284,  285,   -1,   -1,   -1,
  284,  285,  286,  287,  288,  289,   -1,   -1,  125,   -1,
   -1,   -1,   -1,   -1,  284,  285,  286,  287,  288,  289,
  116,  117,  118,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  284,  285,  265,  266,  267,  284,  285,  286,  287,
  288,  289,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  150,   -1,  284,  285,  154,  155,
  156,  157,  158,  159,  160,  161,  162,  163,  164,  165,
  166,   -1,   -1,   -1,   -1,  257,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  181,  268,  269,  270,  271,
   -1,  273,  274,  275,  276,  277,  278,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  213,  257,  215,
   -1,  217,   -1,   -1,   -1,   -1,  222,   -1,   -1,  268,
  226,   -1,  271,   -1,  273,  274,  275,  276,  277,  278,
  257,   -1,   -1,   -1,   -1,   -1,   -1,  243,   -1,   -1,
   -1,  268,   34,   -1,  271,   -1,  273,  274,  275,  276,
  277,  278,    0,   45,   -1,   -1,   -1,   -1,    6,   -1,
    8,    9,   -1,   -1,   -1,   -1,   58,   15,   16,   61,
   62,   -1,   20,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   58,   -1,   32,   61,   62,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   88,   89,   90,   91,
   92,   93,   94,   95,   96,   97,   98,   99,  100,   -1,
  102,   -1,   88,   89,   90,   91,   92,   93,   94,   95,
   96,   97,   98,   99,  100,   -1,  102,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  107,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  171,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  141,   -1,  171,  144,
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
"stmt : IDEN '(' exprs_comma_x ')' ';'",
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
#line 339 "hw2.y"

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


#line 711 "y.tab.c"

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
#line 64 "hw2.y"
	{printf("No syntax error!\n");}
break;
case 2:
#line 65 "hw2.y"
	{printf("No syntax error!\n");}
break;
case 3:
#line 66 "hw2.y"
	{printf("No syntax error!\n");}
break;
case 4:
#line 67 "hw2.y"
	{printf("No syntax error!\n");}
break;
case 5:
#line 71 "hw2.y"
	{}
break;
case 6:
#line 72 "hw2.y"
	{}
break;
case 7:
#line 79 "hw2.y"
	{}
break;
case 8:
#line 80 "hw2.y"
	{}
break;
case 9:
#line 83 "hw2.y"
	{}
break;
case 10:
#line 84 "hw2.y"
	{}
break;
case 11:
#line 85 "hw2.y"
	{}
break;
case 12:
#line 86 "hw2.y"
	{}
break;
case 13:
#line 89 "hw2.y"
	{}
break;
case 14:
#line 90 "hw2.y"
	{}
break;
case 15:
#line 91 "hw2.y"
	{}
break;
case 16:
#line 92 "hw2.y"
	{}
break;
case 17:
#line 93 "hw2.y"
	{}
break;
case 18:
#line 94 "hw2.y"
	{}
break;
case 19:
#line 95 "hw2.y"
	{}
break;
case 20:
#line 96 "hw2.y"
	{}
break;
case 21:
#line 99 "hw2.y"
	{}
break;
case 22:
#line 100 "hw2.y"
	{}
break;
case 23:
#line 103 "hw2.y"
	{}
break;
case 24:
#line 111 "hw2.y"
	{}
break;
case 25:
#line 112 "hw2.y"
	{}
break;
case 26:
#line 116 "hw2.y"
	{}
break;
case 27:
#line 117 "hw2.y"
	{}
break;
case 28:
#line 118 "hw2.y"
	{}
break;
case 29:
#line 119 "hw2.y"
	{}
break;
case 30:
#line 120 "hw2.y"
	{}
break;
case 31:
#line 123 "hw2.y"
	{}
break;
case 32:
#line 124 "hw2.y"
	{}
break;
case 33:
#line 128 "hw2.y"
	{}
break;
case 34:
#line 129 "hw2.y"
	{}
break;
case 35:
#line 132 "hw2.y"
	{}
break;
case 36:
#line 133 "hw2.y"
	{}
break;
case 37:
#line 136 "hw2.y"
	{}
break;
case 38:
#line 137 "hw2.y"
	{}
break;
case 39:
#line 140 "hw2.y"
	{}
break;
case 40:
#line 141 "hw2.y"
	{}
break;
case 41:
#line 142 "hw2.y"
	{}
break;
case 42:
#line 143 "hw2.y"
	{}
break;
case 43:
#line 145 "hw2.y"
	{}
break;
case 44:
#line 147 "hw2.y"
	{}
break;
case 45:
#line 148 "hw2.y"
	{}
break;
case 46:
#line 149 "hw2.y"
	{}
break;
case 47:
#line 150 "hw2.y"
	{}
break;
case 48:
#line 151 "hw2.y"
	{}
break;
case 49:
#line 152 "hw2.y"
	{}
break;
case 50:
#line 153 "hw2.y"
	{}
break;
case 51:
#line 154 "hw2.y"
	{}
break;
case 52:
#line 155 "hw2.y"
	{}
break;
case 53:
#line 156 "hw2.y"
	{}
break;
case 54:
#line 157 "hw2.y"
	{}
break;
case 55:
#line 158 "hw2.y"
	{}
break;
case 56:
#line 159 "hw2.y"
	{}
break;
case 57:
#line 160 "hw2.y"
	{}
break;
case 58:
#line 161 "hw2.y"
	{}
break;
case 59:
#line 162 "hw2.y"
	{}
break;
case 60:
#line 169 "hw2.y"
	{}
break;
case 61:
#line 170 "hw2.y"
	{}
break;
case 62:
#line 171 "hw2.y"
	{}
break;
case 63:
#line 172 "hw2.y"
	{}
break;
case 64:
#line 173 "hw2.y"
	{}
break;
case 65:
#line 174 "hw2.y"
	{}
break;
case 66:
#line 175 "hw2.y"
	{}
break;
case 67:
#line 176 "hw2.y"
	{}
break;
case 68:
#line 177 "hw2.y"
	{}
break;
case 69:
#line 178 "hw2.y"
	{}
break;
case 70:
#line 179 "hw2.y"
	{}
break;
case 71:
#line 180 "hw2.y"
	{}
break;
case 72:
#line 181 "hw2.y"
	{}
break;
case 73:
#line 182 "hw2.y"
	{}
break;
case 74:
#line 183 "hw2.y"
	{}
break;
case 75:
#line 184 "hw2.y"
	{}
break;
case 76:
#line 185 "hw2.y"
	{}
break;
case 77:
#line 186 "hw2.y"
	{}
break;
case 78:
#line 187 "hw2.y"
	{}
break;
case 79:
#line 188 "hw2.y"
	{}
break;
case 80:
#line 195 "hw2.y"
	{}
break;
case 81:
#line 196 "hw2.y"
	{}
break;
case 82:
#line 199 "hw2.y"
	{}
break;
case 83:
#line 200 "hw2.y"
	{}
break;
case 84:
#line 203 "hw2.y"
	{}
break;
case 85:
#line 204 "hw2.y"
	{}
break;
case 86:
#line 205 "hw2.y"
	{}
break;
case 87:
#line 206 "hw2.y"
	{}
break;
case 88:
#line 207 "hw2.y"
	{}
break;
case 90:
#line 211 "hw2.y"
	{}
break;
case 91:
#line 212 "hw2.y"
	{}
break;
case 92:
#line 213 "hw2.y"
	{}
break;
case 93:
#line 217 "hw2.y"
	{}
break;
case 94:
#line 218 "hw2.y"
	{}
break;
case 95:
#line 222 "hw2.y"
	{}
break;
case 96:
#line 223 "hw2.y"
	{}
break;
case 97:
#line 226 "hw2.y"
	{}
break;
case 98:
#line 228 "hw2.y"
	{}
break;
case 99:
#line 230 "hw2.y"
	{}
break;
case 100:
#line 231 "hw2.y"
	{}
break;
case 101:
#line 234 "hw2.y"
	{}
break;
case 102:
#line 235 "hw2.y"
	{}
break;
case 103:
#line 238 "hw2.y"
	{}
break;
case 104:
#line 239 "hw2.y"
	{}
break;
case 105:
#line 250 "hw2.y"
	{}
break;
case 106:
#line 251 "hw2.y"
	{}
break;
case 107:
#line 253 "hw2.y"
	{}
break;
case 108:
#line 254 "hw2.y"
	{}
break;
case 109:
#line 256 "hw2.y"
	{}
break;
case 110:
#line 260 "hw2.y"
	{}
break;
case 111:
#line 261 "hw2.y"
	{}
break;
case 112:
#line 264 "hw2.y"
	{}
break;
case 113:
#line 265 "hw2.y"
	{}
break;
case 114:
#line 268 "hw2.y"
	{}
break;
case 115:
#line 269 "hw2.y"
	{}
break;
case 116:
#line 272 "hw2.y"
	{}
break;
case 117:
#line 273 "hw2.y"
	{}
break;
case 118:
#line 277 "hw2.y"
	{}
break;
case 119:
#line 280 "hw2.y"
	{}
break;
case 120:
#line 283 "hw2.y"
	{}
break;
case 121:
#line 284 "hw2.y"
	{}
break;
case 122:
#line 287 "hw2.y"
	{}
break;
case 123:
#line 288 "hw2.y"
	{}
break;
case 124:
#line 291 "hw2.y"
	{}
break;
case 126:
#line 299 "hw2.y"
	{}
break;
case 127:
#line 300 "hw2.y"
	{}
break;
case 128:
#line 303 "hw2.y"
	{}
break;
case 129:
#line 309 "hw2.y"
	{}
break;
case 130:
#line 310 "hw2.y"
	{}
break;
case 131:
#line 313 "hw2.y"
	{}
break;
case 132:
#line 317 "hw2.y"
	{}
break;
case 133:
#line 318 "hw2.y"
	{}
break;
case 134:
#line 319 "hw2.y"
	{}
break;
case 135:
#line 320 "hw2.y"
	{}
break;
case 136:
#line 324 "hw2.y"
	{}
break;
case 137:
#line 325 "hw2.y"
	{yyval.lit.ival = yystack.l_mark[0].ival; printf("ival:%d\n",yyval.lit.ival);}
break;
case 138:
#line 326 "hw2.y"
	{}
break;
case 139:
#line 327 "hw2.y"
	{}
break;
case 140:
#line 328 "hw2.y"
	{ }
break;
#line 1465 "y.tab.c"
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
