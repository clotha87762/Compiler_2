
/* This is a simpled gcc grammar */
/* Copyright (C) 1987 Free Software Foundation, Inc. */
/* BISON parser for a simplied C by Jenq-kuen Lee  Sep 20, 1993    */

%{
#include <stdio.h>
#include "SymbolTable.h"
extern char* yytext;
char   *install_symbol();

struct literal_type{
  int type; // 0 -> int ; 1-> double ; 2-> char  ; 3-> char*  4-> bool
  int ival;
  char cval;
  double dval;
  char* sval;
  int bval;
}lit_type;

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
%token <ival> CONST SWITCH CASE DEFAULT IF ELSE FOR WHILE DO RETURN CONTINUE BREAK NULL
%token <ival> PLUSPLUS MINUSMINUS ANDAND OROR GE LE EQUAL NOTEQUAL NOT
%token <cval> CHAR_LIT 
%token <dval> DOUBLE_LIT

%type <lit_type> literal expr
%type <sval> var

%left <ival> OROR
%left <ival> ANDAND
%left <ival> NOT
%left <ival> '>' '<' EQUAL NOTEQUAL GE LE
%left <ival> '+' '-'
%left <ival> '*' '/' '%'
%right <ival> UMINUS
%left <ival> PLUSPLUS MINUSMINUS

%empty epsilon

%{
/* external function is defined here */
void error();
int TRACEON = 100;
%}     




%%






program : extdefs_no_func_x  first_func_def  extdefs_x    {printf("No syntax error!\n");}
    ;


var : IDEN indexs_x       {printf("1\n");}
  ;

extdefs_no_func_x: epsilon         {printf("2\n");}
        |  extdefs_no_func          {printf("3\n");}
        ;

extdefs_no_func : extdefs_no_func  extdef_no_func        {printf("4\n");}
        | extdef_no_func            {printf("5\n");}
        ; 

extdef_no_func: type_void  IDEN '('  para_in ')' ';'    {printf("6\n");}   // function declaration
  | type iden_list_init  ';'    {printf("7\n");}
  | CONST type const_iden_list ';'      {printf("8\n");}
  ;

iden_list_init: iden_list_init ','  IDEN init_x           {printf("9\n");}
        | iden_list_init ','  IDEN indexs_dec_x array_init_x       {printf("10\n");}
        | IDEN init_x               {printf("11\n");}
        | IDEN indexs_dec_x array_init_x        {printf("12\n");}
        ;

const_iden_list : const_iden_list ','  IDEN const_init     {printf("13\n");}
        | IDEN const_init            {printf("14\n");}
        ;

const_init : '=' literal        {printf("15\n");}
      ;


extdefs_x: epsilon        {printf("16\n");}
    |  extdefs           {printf("17\n");}
    ;

extdefs: extdefs extdef    {printf("18\n");}
    | extdef               {printf("19\n");}
    ; 


extdef: type_void  IDEN '('  para_in ')' ';'     {printf("20\n");}  // function declaration
  | func_def                 {printf("21\n");}
  | type iden_list_init  ';'       {printf("22\n");}
  | CONST type const_iden_list ';'        {printf("23\n");}
  ;

decs_x : epsilon          {printf("24\n");}
     | decs               {printf("25\n");}
     ;


decs :  decs  dec        {printf("26\n");}
   |  dec               {printf("27\n");}
   ;

dec:   type iden_list_init  ';'       {printf("28\n");}
     | CONST type const_iden_list ';'     {printf("29\n");}
     ;

expr_x : epsilon           {printf("30\n");}
    | expr                 {printf("31\n");}
    ;

expr: literal
  | var                     {printf("32\n");}
  | var PLUSPLUS            {printf("33\n");}
  | var MINUSMINUS          {printf("34\n");}
  | func_invoke            {printf("35\n");}
  | expr '+' expr          {printf("36\n");}
  |  expr '-' expr         {printf("37\n");}
  |  expr '*' expr         {printf("38\n");}
  |  expr '/' expr         {printf("39\n");}
  |  expr '%' expr          {printf("40\n");}
  |  expr '>' expr          {printf("41\n");}
  |  expr '<' expr          {printf("42\n");}
  |  expr GE expr           {printf("43\n");}
  |  expr LE expr          {printf("44\n");}
  |  expr EQUAL expr       {printf("45\n");}
  |  expr NOTEQUAL expr    {printf("46\n");}
  |  NOT expr             {printf("47\n");}
  |  expr ANDAND expr     {printf("48\n");}
  |  expr OROR expr         {printf("49\n");}
  |  '-' expr %prec UMINUS   {printf("50\n");}
  | '(' expr ')'            {printf("51\n");}
  | '(' var ')' PLUSPLUS    {printf("52\n");}
  | '(' var ')' MINUSMINUS  {printf("53\n");}
  ; 

expr_no_invoke:: literal   {printf("54\n");}
      | var               {printf("55\n");}
      | var PLUSPLUS       {printf("56\n");}
      | var MINUSMINUS     {printf("57\n");}
      | expr '+' expr      {printf("58\n");}
      |  expr '-' expr     {printf("59\n");}
      |  expr '*' expr     {printf("60\n");}
      |  expr '/' expr     {printf("61\n");}
      |  expr '%' expr    {printf("62\n");}
      |  expr '>' expr    {printf("63\n");}
      |  expr '<' expr    {printf("64\n");}
      |  expr GE expr     {printf("65\n");}
      |  expr LE expr     {printf("66\n");}
      |  expr EQUAL expr     {printf("67\n");}
      |  expr NOTEQUAL expr    {printf("68\n");}
      |  NOT expr    {printf("69\n");}
      |  expr ANDAND expr   {printf("70\n");}
      |  expr OROR expr    {printf("71\n");}
      |  '-' expr %prec UMINUS   {printf("72\n");}
      | '(' expr ')'    {printf("73\n");}
      | '(' var ')' PLUSPLUS    {printf("74\n");}
      | '(' var ')' MINUSMINUS  {printf("75\n");}
      ;


stmts_x : epsilon    {printf("76\n");}
    | stmts   {printf("77\n");}
    ;

stmts:  stmts  stmt   {printf("78\n");}
    | stmt     {printf("79\n");}
    ;

stmt: var '=' expr    {printf("80\n");}
  |  if_stmt        {printf("81\n");}
  |  while_stmt     {printf("82\n");}
  |  switch_stmt    {printf("83\n");}
  |  for_stmt      {printf("84\n");}
  | func_invoke     {printf("85\n");}
  | RETURN expr ';'   {printf("86\n");}
  | BREAK ';'       {printf("87\n");}
  | CONTINUE ';'    {printf("88\n");}
  ;

if_stmt: IF '(' expr ')' compound             {printf("89\n");}
    | IF '(' expr ')' compound ELSE compound   {printf("90\n");}
    ;

while_stmt: WHILE '( expr ')' compound      {printf("91\n");}
      | DO compound WHILE '(' expr ')' ';'  {printf("92\n");}
      ;
 
for_stmt : FOR '(' expr_x ';' expr_x ';' expr_x  ')' compound   {printf("93\n");}

switch_stmt : SWITCH '(' IDEN ')' '{' cases default_x '}'   {printf("94\n");}

cases: cases case  {printf("95\n");}
   | case         {printf("96\n");}
   ;

cases: CASE CHAR_LIT ':' stmts_x   {printf("97\n");}
   | CASE INT_LIT ':' stmts_x     {printf("98\n");}
   ;  

default_x: epsilon    {printf("99\n");}
     |  DEFAULT ':' stmts_x   {printf("100\n");}
     ;

func_invoke: IDEN '('  exprs_comma_x ')' ';'     {printf("101\n");}
       | var '='' IDEN '(' exprs_comma_x ')' ';'     {printf("102\n");}          //  這邊我把 IDEN -> VAR
       ;


first_func_def : type_void IDEN '(' para_in ')' compound  {printf("103\n");}

func_def: type_void IDEN '(' para_in ')' compound   {printf("104\n");}

compound: '{'  decs_x  stmts_x '}'    {printf("105\n");}



exprs_comma_x: epsilon     {printf("106\n");}
    | exprs_comma     {printf("107\n");}
    ;

exprs_comma: exprs_comma ',' expr     {printf("108\n");}
  | expr    {printf("109\n");}
  ;

exprs_comma_no_invoke_x : epsilon    {printf("110\n");}
              | exprs_comma_no_invoke   {printf("111\n");}
              ;

exprs_comma_no_invoke : exprs_comma_no_invoke ',' expr_no_invoke   {printf("112\n");}
            | expr_no_invoke   {printf("113\n");}
            ; 


init_x : epsilon   {printf("114\n");}
    | '=' expr_no_invoke  {printf("115\n");}
    ;

array_init_x: epsilon  {printf("116\n");}
      | '=' '{' exprs_comma_no_invoke_x '}'  {printf("117\n");}
      ;

para_in :  epsilon  {printf("118\n");}
    |  paras   {printf("119\n");}
    ;

paras:  paras ',' para  {printf("120\n");}
   |  para  {printf("121\n");}
   ;

para: type IDEN indexs_dec_x  {printf("122\n");}
   ;

indexs_dec_x: epsilon  {printf("123\n");}
     |  indexs_dec  {printf("124\n");}
     ;

indexs_dec: indexs_dec  index_dec  {printf("125\n");}
    | index_dec  {printf("126\n");}
    ;

index_dec: '[' INT_LIT ']'  {printf("127\n");}

indexs_x : epsilon   {printf("128\n");}
    | indexs   {printf("129\n");}
    ;

indexs: indexs index  {printf("130\n");}
    | index   {printf("131\n");}
    ;

index: '[' expr ']' {printf("132\n");}
   ;


type : INT    {printf("133\n");}
    | DOUBLE   {printf("134\n");}
    | CHAR    {printf("135\n");}
    | BOOL    {printf("136\n");}
    ;

type_void : INT  {printf("137\n");}
      | DOUBLE  {printf("138\n");}
      | CHAR  {printf("139\n");}
      | BOOL {printf("140\n");}
      | VOID {printf("141\n");}
      ;

literal: CHAR_LIT {printf("142\n");}
     | INT_LIT    {printf("143\n");}
     | DOUBLE_LIT  {printf("144\n");}
     | BOOL_LIT    {printf("145\n");}
     | STRING_LIT  {printf("146\n");}
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
   fprintf( stderr, "*** Error at line %d: %s\n", linenum, buff );
   printf( stderr, "\n" );
   fprintf( stderr, "Unmatched token: %s\n", yytext );
   fprintf( stderr, "*** syntax error\n"); 
   exit(-1); 
}

