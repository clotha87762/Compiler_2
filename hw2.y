
/* This is a simpled gcc grammar */
/* Copyright (C) 1987 Free Software Foundation, Inc. */
/* BISON parser for a simplied C by Jenq-kuen Lee  Sep 20, 1993    */

%{
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

%}

%start program
%union { 
         int       ival ;
         char      cval ;
         char      * sval;
         double     dval;
         lit_type   lit;
     
       }

%token <sval>  IDEN  STRING_LIT
%token <ival> INT_LIT BOOL_LIT 
%token <ival> INT DOUBLE BOOL CHAR VOID STRUCT
%token <ival> CONST SWITCH CASE DEFAULT IF ELSE FOR WHILE DO RETURN CONTINUE BREAK NUL TRUE FALSE
%token <ival> PLUSPLUS MINUSMINUS ANDAND OROR GE LE EQUAL NOTEQUAL NOT
%token <cval> CHAR_LIT 
%token <dval> DOUBLE_LIT

%type <lit> literal expr
%type <sval> var

%left <ival> OROR
%left <ival> ANDAND
%left <ival> NOT
%left <ival> '>' '<' EQUAL NOTEQUAL GE LE
%left <ival> '+' '-'
%left <ival> '*' '/' '%'
%right <ival> UMINUS
%left <ival> PLUSPLUS MINUSMINUS


 




%%






program :  first_func_def  extdefs    {printf("No syntax error!\n");}
    	|  extdefs_no_func  first_func_def extdefs	{printf("No syntax error!\n");}
	| first_func_def  {printf("No syntax error!\n");}
	|  extdefs_no_func first_func_def {printf("No syntax error!\n");}
	;


var : IDEN indexs       {}
   | IDEN               {}
   ;

//extdefs_no_func_x: /* empty */        {}
 //       |  extdefs_no_func          {}
//        ;

extdefs_no_func : extdefs_no_func  extdef_no_func        {}
        | extdef_no_func            {}
        ; 

extdef_no_func: type  IDEN '('  para_in ')' ';'    {}   // function declaration
  | VOID  IDEN '('  para_in ')' ';'    {}  
  | type iden_list_init  ';'    {}
  | CONST type const_iden_list ';'      {}
  ;

iden_list_init: iden_list_init ','  IDEN            {}
	| iden_list_init ',' IDEN init                   {}
	| iden_list_init ','  IDEN indexs_dec array_init       {}
        | iden_list_init ','  IDEN indexs_dec         {}
	| IDEN init               {}
        | IDEN              {}
	| IDEN indexs_dec array_init        {}
        | IDEN indexs_dec   {}
	;

const_iden_list : const_iden_list ','  IDEN const_init     {}
        | IDEN const_init            {}
        ;

const_init : '=' literal        {}
      ;


//extdefs_x: /* empty */      {}
//    |  extdefs           {}
//    ;

extdefs: extdefs extdef    {}
    | extdef               {}
    ; 


extdef: type  IDEN '('  para_in ')' ';'     {}  // function declaration
  | VOID  IDEN '('  para_in ')' ';'     {}  // function declaration
  | func_def                 {}
  | type iden_list_init  ';'       {}
  | CONST type const_iden_list ';'        {}
  ;

decs_x : /* empty */          {}
     | decs               {}
     ;


decs :  decs  dec        {}
   |  dec               {}
   ;

dec:   type iden_list_init  ';'       {}
     | CONST type const_iden_list ';'     {}
     ;

expr_x : /* empty */           {}
    | expr                 {}
    ;

expr: literal               {}
  | var                     {}
  | var PLUSPLUS           {}
  | var MINUSMINUS          {}
//  | func_invoke            {}
  | IDEN '(' exprs_comma_x ')'   {}
 // | var '=' IDEN '(' exprs_comma_x ')'  {} 
  | expr '+' expr          {}
  |  expr '-' expr         {}
  |  expr '*' expr         {}
  |  expr '/' expr         {}
  |  expr '%' expr          {}
  |  expr '>' expr          {}
  |  expr '<' expr          {}
  |  expr GE expr           {}
  |  expr LE expr          {}
  |  expr EQUAL expr       {}
  |  expr NOTEQUAL expr    {}
  |  NOT expr             {}
  |  expr ANDAND expr     {}
  |  expr OROR expr         {}
  |  '-' expr %prec UMINUS   {}
  | '(' expr ')'            {}
  //| '(' var ')' PLUSPLUS    {}
  //| '(' var ')' MINUSMINUS  {}
  ; 



expr_no_invoke: literal     {}
  | var                     {}
  | var PLUSPLUS            {}
  | var MINUSMINUS          {}
  | expr_no_invoke '+' expr_no_invoke          {}
  |  expr_no_invoke '-' expr_no_invoke         {}
  |  expr_no_invoke '*' expr_no_invoke         {}
  |  expr_no_invoke '/' expr_no_invoke         {}
  |  expr_no_invoke '%' expr_no_invoke          {}
  |  expr_no_invoke '>' expr_no_invoke          {}
  |  expr_no_invoke '<' expr_no_invoke          {}
  |  expr_no_invoke GE expr_no_invoke           {}
  |  expr_no_invoke LE expr_no_invoke          {}
  |  expr_no_invoke EQUAL expr_no_invoke       {}
  |  expr_no_invoke NOTEQUAL expr_no_invoke    {}
  |  NOT expr_no_invoke             {}
  |  expr_no_invoke ANDAND expr_no_invoke     {}
  |  expr_no_invoke OROR expr_no_invoke         {}
  |  '-' expr_no_invoke %prec UMINUS   {}
  | '(' expr_no_invoke ')'            {}
  //| '(' var ')' PLUSPLUS    {}
  //| '(' var ')' MINUSMINUS  {}
  ;



stmts_x : /* empty */    {}
    | stmts   {}
    ;

stmts:  stmts  stmt   {}
    | stmt     {}
    ;

stmt: var '=' expr ';'    {}
  |  if_stmt        {}
  |  while_stmt     {}
  |  switch_stmt    {}
  |  for_stmt      {}
  //| func_invoke     {}
  //| var  '=' IDEN '(' exprs_comma_x ')' ';'
  | IDEN '(' exprs_comma_x ')' ';'
  | RETURN expr ';'   {}
  | BREAK ';'       {}
  | CONTINUE ';'    {}
  ;


if_stmt: IF '(' expr ')' compound ELSE compound   {}
     	| IF '(' expr ')' compound {}
	;


while_stmt: WHILE '(' expr ')' compound      {}
      | DO compound WHILE '(' expr ')' ';'  {}
      ;
 
for_stmt : FOR '(' expr_x ';' expr_x ';' expr_x  ')' compound   {}
         ;
switch_stmt : SWITCH '(' IDEN ')' '{' cases default_x '}'   {}
	;
cases: cases case  {}
   | case         {}
   ;

case: CASE CHAR_LIT ':' stmts_x   {}
   | CASE INT_LIT ':' stmts_x     {}
   ;  

default_x: /* empty */    {}
     |  DEFAULT ':' stmts_x   {}
     ;




//func_invoke: IDEN '('  exprs_comma_x ')' ';'     {printf("101\n");}
//       | var '=' IDEN '(' exprs_comma_x ')' ';'     {printf("102\n");}          //  這邊我把 IDEN -> VAR
//          ;


first_func_def : type IDEN '(' para_in ')' compound  {}
	       |  VOID  IDEN '(' para_in ')' compound {}
		;
func_def: type IDEN '(' para_in ')' compound   {}
	| VOID  IDEN '(' para_in ')' compound {}
	;
compound: '{'  decs_x stmts_x  '}'    {}
	;


exprs_comma_x: /* empty */    {}
    | exprs_comma     {}
    ;

exprs_comma: exprs_comma ',' expr     {}
  | expr    {}
  ;

exprs_comma_no_invoke_x : /* empty */    {}
              | exprs_comma_no_invoke   {}
              ;

exprs_comma_no_invoke : exprs_comma_no_invoke ',' expr_no_invoke   {}
            | expr_no_invoke   {}
            ; 


init :  '=' expr_no_invoke  {}
    ;

array_init: '=' '{' exprs_comma_no_invoke_x '}'  {}
      ;

para_in : /* empty */  {}
    |  paras   {}
    ;

paras:  paras ',' para  {}
   |  para  {}
   ;

para: type IDEN indexs_dec  {}
   |  type IDEN
   ;

//indexs_dec_x: /* empty */ {printf("123\n");}
//     |  indexs_dec  {printf("124\n");}
//     ;

indexs_dec: indexs_dec  index_dec  {}
    | index_dec  {}
    ;

index_dec: '[' INT_LIT ']'  {}
	;
//indexs_x :/* empty */   {}
//    | indexs   {}
//    ;

indexs: indexs index  {}
    | index   {}
    ;

index: '[' expr ']' {}
   ;


type : INT    {}
    | DOUBLE   {}
    | CHAR    {}
    | BOOL    {}
    ; 
 

literal: CHAR_LIT {}
     | INT_LIT    {}
     | DOUBLE_LIT  {}
     | BOOL_LIT    {}
     | STRING_LIT  { }
     ;








%%

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


