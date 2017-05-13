
%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"

int lineCount = 1;
int lineIndex = 0;
char lineBuffer[50000];
int srcOn = 1;
int tokenOn = 1;
typedef enum {
	KEY,ID,OP,PUNC,INTEGER,DOUBLE,CHARACTER,SCI,STRING
}type;

void PrintEOFSrc();
void PutToBuffer(char* token);
void ClearBuffer();
void PrintSrc();
void PrintToken(type t,char* text);
void PrintEOFSrc();
void Error();

%}

VID   [a-zA-Z0-9_]
chl   [a-z]
chu   [A-Z]
alpha [a-zA-Z]
digit [0-9]
ad	  [a-zA-Z0-9]
BLANK		(([\ \t])|("/*".*"*/"))

CMT 	"/*".*"*/"
LCMT	"//"[^\n]*\n
CH 		(\\\')|(\\\")|(\\\?)|(\\\\)|(\\t)|(\\n)|[^\'\\\n]
STRCH	(\\\')|(\\\")|(\\\?)|(\\\\)|(\\t)|(\\n)|[^\"\\\n]


SEP		((\ )| (\t) | (\n) | ("+") | ("-") | ("*") | ("/") | ("%") | ("++") | ("--") | ("<") |(">")|("<=")|(">=")|("==")|("=")|("!=")|("!")|("&&")|("||")|("&")|(":")|(";")|(",")|("[")|("]")|("(")|(")")|("{")|("}"))

FSUFIX	[fFlL]
ISUFIX	[uUlL]|(ll)|(LL)

%x	LINECOMMENT
%x	COMMENT



%%

<LINECOMMENT>[^\n]	{PutToBuffer(yytext);}
<LINECOMMENT>\n		{PutToBuffer(yytext);PrintSrc();ClearBuffer();lineCount++;BEGIN 0;}
<COMMENT>\*\/		{PutToBuffer(yytext);BEGIN 0;}
<COMMENT>\n		{PutToBuffer(yytext);PrintSrc();ClearBuffer();lineCount++;}
<COMMENT>.		{PutToBuffer(yytext);}
\/\/	{BEGIN LINECOMMENT;PutToBuffer(yytext);}
\/\*	{BEGIN COMMENT; PutToBuffer(yytext);}

^{BLANK}*#{BLANK}*pragma{BLANK}+source{BLANK}+on{BLANK}*("//")?	{srcOn = 1;PutToBuffer(yytext);BEGIN LINECOMMENT;}
^{BLANK}*#{BLANK}*pragma{BLANK}+source{BLANK}+on{BLANK}*("/*")?	{srcOn = 1;PutToBuffer(yytext);BEGIN COMMENT;}
^{BLANK}*#{BLANK}*pragma{BLANK}+source{BLANK}+off{BLANK}*("//")? 		{srcOn = 0;PutToBuffer(yytext);BEGIN LINECOMMENT;}
^{BLANK}*#{BLANK}*pragma{BLANK}+source{BLANK}+off{BLANK}*("/*")? 		{srcOn = 0;PutToBuffer(yytext);BEGIN COMMENT;}
^{BLANK}*#{BLANK}*pragma{BLANK}+token{BLANK}+on{BLANK}*("//")?				{tokenOn = 1;PutToBuffer(yytext);BEGIN LINECOMMENT;}
^{BLANK}*#{BLANK}*pragma{BLANK}+token{BLANK}+on{BLANK}*("/*")?				{tokenOn = 1;PutToBuffer(yytext);BEGIN COMMENT;}
^{BLANK}*#{BLANK}*pragma{BLANK}+token{BLANK}+off{BLANK}*("//")?				{tokenOn = 0;PutToBuffer(yytext);BEGIN LINECOMMENT;}
^{BLANK}*#{BLANK}*pragma{BLANK}+token{BLANK}+off{BLANK}*("/*")?				{tokenOn = 0;PutToBuffer(yytext);BEGIN COMMENT;}
^{BLANK}*#(_|{ad}|{BLANK})*		{Error();}




"void"		{PutToBuffer(yytext);PrintToken(KEY,yytext); return VOID;}
"int"		{PutToBuffer(yytext);PrintToken(KEY,yytext); return INT;}
"double"		{PutToBuffer(yytext);PrintToken(KEY,yytext); return DOUBLE;}
"bool"		{PutToBuffer(yytext);PrintToken(KEY,yytext); return BOOL;}
"char"		{PutToBuffer(yytext);PrintToken(KEY,yytext); return CHAR;}
"null"		{PutToBuffer(yytext);PrintToken(KEY,yytext); return IDEN;}
"for"		{PutToBuffer(yytext);PrintToken(KEY,yytext); return NULL;}
"while"		{PutToBuffer(yytext);PrintToken(KEY,yytext); return WHILE;}
"do"		{PutToBuffer(yytext);PrintToken(KEY,yytext); return DO;}
"if"		{PutToBuffer(yytext);PrintToken(KEY,yytext); return IF;}
"else"		{PutToBuffer(yytext);PrintToken(KEY,yytext); return ELSE;}
"switch"		{PutToBuffer(yytext);PrintToken(KEY,yytext);  return SWITCH;}
"return"		{PutToBuffer(yytext);PrintToken(KEY,yytext);  return RETURN;}
"break"		{PutToBuffer(yytext);PrintToken(KEY,yytext); return break;}
"continue"		{PutToBuffer(yytext);PrintToken(KEY,yytext); return CONTINUE;}
"const"		{PutToBuffer(yytext);PrintToken(KEY,yytext); return CONST;}
"true"		{PutToBuffer(yytext);PrintToken(KEY,yytext); return TRUE;}
"false"		{PutToBuffer(yytext);PrintToken(KEY,yytext); return FALSE;}
"struct"		{PutToBuffer(yytext);PrintToken(KEY,yytext);  return STRUCT;}
"case"		{PutToBuffer(yytext);PrintToken(KEY,yytext); return CASEL}
"default"		{PutToBuffer(yytext);PrintToken(KEY,yytext); return DEFAULT;}

"clearerr"	{PutToBuffer(yytext);PrintToken(KEY,yytext); yylval.sval = copys(yytext); return IDEN;}
"fclose"	{PutToBuffer(yytext);PrintToken(KEY,yytext); yylval.sval = copys(yytext);return IDEN;}
"fdopen"	{PutToBuffer(yytext);PrintToken(KEY,yytext); yylval.sval = copys(yytext);return IDEN;}
"feof"	{PutToBuffer(yytext);PrintToken(KEY,yytext); yylval.sval = copys(yytext);return IDEN;}
"ferror"	{PutToBuffer(yytext);PrintToken(KEY,yytext); yylval.sval = copys(yytext);return IDEN;}
"fflush"	{PutToBuffer(yytext);PrintToken(KEY,yytext); yylval.sval = copys(yytext); return IDEN;}
"fgetc"	{PutToBuffer(yytext);PrintToken(KEY,yytext); yylval.sval = copys(yytext); return IDEN;}
"fgetpos"	{PutToBuffer(yytext);PrintToken(KEY,yytext); yylval.sval = copys(yytext); return IDEN;}
"fgets"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);  return IDEN;}
"fileno"	{PutToBuffer(yytext);PrintToken(KEY,yytext);  yylval.sval = copys(yytext); return IDEN;}
"fopen"	{PutToBuffer(yytext);PrintToken(KEY,yytext); yylval.sval = copys(yytext); return IDEN;}
"fprintf"	{PutToBuffer(yytext);PrintToken(KEY,yytext); yylval.sval = copys(yytext); return IDEN;}
"fpurge"	{PutToBuffer(yytext);PrintToken(KEY,yytext); yylval.sval = copys(yytext); return IDEN;}
"fputc"	{PutToBuffer(yytext);PrintToken(KEY,yytext); yylval.sval = copys(yytext); return IDEN;}
"fputs"	{PutToBuffer(yytext);PrintToken(KEY,yytext); yylval.sval = copys(yytext);  return IDEN;}
"fread"	{PutToBuffer(yytext);PrintToken(KEY,yytext); yylval.sval = copys(yytext);  return IDEN;}
"freopen"	{PutToBuffer(yytext);PrintToken(KEY,yytext); yylval.sval = copys(yytext); return IDEN;}
"fscanf"	{PutToBuffer(yytext);PrintToken(KEY,yytext); yylval.sval = copys(yytext);  return IDEN;}
"fseek"	{PutToBuffer(yytext);PrintToken(KEY,yytext); yylval.sval = copys(yytext); return IDEN;}
"fsetpos"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"ftell"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"fwrite"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"getc"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"getchar"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"gets"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"getw"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"mktemp"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"perror"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"printf"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"putc"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"putchar"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"puts"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"putw"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"remove"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"rewind"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"scanf"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"setbuf"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"setbuffer"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"setlinebuf"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"setvbuf"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"sprintf"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"sscanf"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"strerror"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"sys_errlist"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"sys_nerr"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"tempnam"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"tmpfile"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"tmpnam"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"ungetc"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"vfprintf"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"vfscanf"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"vprintf"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"vscanf"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"vsprintf"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}
"vsscanf"	{PutToBuffer(yytext);PrintToken(KEY,yytext);yylval.sval = copys(yytext);return IDEN;}






0{digit}+{ISUFIX}?				{/*printf("invalid integer!\n");*/Error();}
[1-9]{digit}*{ISUFIX}?		{PutToBuffer(yytext);PrintToken(INTEGER,yytext); yylval.lit.type = 0;  yylval.lt_type.ival = atoi(yytext); return INT_LIT;}
0{ISUFIX}?					{PutToBuffer(yytext);PrintToken(INTEGER,yytext); yylval.lit.type = 0;  yylval.lt_type.ival = atoi(yytext); return INT_LIT;}


{digit}+({alpha}|_)+		{Error();}
({alpha}|_){VID}*		{PutToBuffer(yytext);PrintToken(ID,yytext);  yylval.sval = copys(yytext); return IDEN;}


{digit}+\.{digit}*[eE][+-]?{digit}+{FSUFIX}?	{PutToBuffer(yytext);PrintToken(SCI,yytext); yylval.lit.type = 1;yylval.lit.dval = atof(yytext); return DOUBLE_LIT;}
{digit}+\.{digit}*[eE][+-]?{digit}+{FSUFIX}?(\.|_|{ad})+	{/*printf("SCI Error\n");*/Error(); }
\.{digit}+[eE][+-]?{digit}+{FSUFIX}?		{PutToBuffer(yytext);PrintToken(SCI,yytext);yylval.lit.type = 1;yylval.lit.dval = atof(yytext); return DOUBLE_LIT;}
\.{digit}+[eE][+-]?{digit}+{FSUFIX}?(\.|_|{ad})+		{/*printf("SCI Error\n");*/Error();}
{digit}+[eE][+-]?{digit}+{FSUFIX}?			{PutToBuffer(yytext);PrintToken(SCI,yytext);yylval.lit.type = 1;yylval.lit.dval = atof(yytext); return DOUBLE_LIT;}
{digit}+[eE][+-]?{digit}+{FSUFIX}?(\.|_|{ad})+		{/*printf("SCI Error\n");*/Error();}

{digit}+\.{digit}*{FSUFIX}?		{PutToBuffer(yytext);PrintToken(DOUBLE,yytext);yylval.lit.type = 1;yylval.lit.dval = atof(yytext); return DOUBLE_LIT;}
{digit}+\.{digit}*{FSUFIX}?(\.|_|{ad})+		{/*printf("double Error\n");*/Error();}
\.{digit}+{FSUFIX}?			{PutToBuffer(yytext);PrintToken(DOUBLE,yytext);yylval.lit.type = 1;yylval.lit.dval = atof(yytext); return DOUBLE_LIT;}
\.{digit}+{FSUFIX}?(\.|_|{ad})+		{/*printf("double Error\n");*/Error();}



\'{CH}\'           {	PutToBuffer(yytext);PrintToken(CHARACTER,yytext);yylval.lit.type = 2;yylval.lit.cval = yytext[1]; return CHAR_LIT;}
L?\"{STRCH}*\"		{
						PutToBuffer(yytext);
						char* temp;
						if(yytext[0]=='L'){
							temp = (char*)malloc(sizeof(char)*(strlen(yytext))); 
							int i=0;
							for(i=0;i<strlen(yytext)-3;i++)
								temp[i] = yytext[i+2];
						}
						else{
							temp = (char*)malloc(sizeof(char)*(strlen(yytext))); 
							int i=0;
							for(i=0;i<strlen(yytext)-2;i++)
								temp[i] = yytext[i+1];
						}
						PrintToken(STRING,temp);
						yylval.lit.type = 3;
						yylval.lit.sval = copys(yytext);
						return STRING_LIT;
					}  
L?\"/{STRCH}*		{/*printf("only one double-quote!\n");*/Error();}

"+"		{PutToBuffer(yytext);PrintToken(OP,yytext); return '+';}
"-"		{PutToBuffer(yytext);PrintToken(OP,yytext); return '-';}
"*"		{PutToBuffer(yytext);PrintToken(OP,yytext); return '*';}
"/"		{PutToBuffer(yytext);PrintToken(OP,yytext); return '/';}
"%"		{PutToBuffer(yytext);PrintToken(OP,yytext); return '%';}
"++"		{PutToBuffer(yytext);PrintToken(OP,yytext); return PLUSPLUS;}
"--"		{PutToBuffer(yytext);PrintToken(OP,yytext); return MINUSMINUS;}
"<"		{PutToBuffer(yytext);PrintToken(OP,yytext);  return '<';}
"<="		{PutToBuffer(yytext);PrintToken(OP,yytext); return LE;}
">"		{PutToBuffer(yytext);PrintToken(OP,yytext);  return '>';}
">="		{PutToBuffer(yytext);PrintToken(OP,yytext); return GE;}
"=="		{PutToBuffer(yytext);PrintToken(OP,yytext); return EQUAL;}
"!="		{PutToBuffer(yytext);PrintToken(OP,yytext); return NOTEQUAL;}
"="		{PutToBuffer(yytext);PrintToken(OP,yytext);  return '=';}
"&&"		{PutToBuffer(yytext);PrintToken(OP,yytext);  return ANDAND;}
"||"		{PutToBuffer(yytext);PrintToken(OP,yytext); return OROR;}
"!"		{PutToBuffer(yytext);PrintToken(OP,yytext); return NOT;}
"&"		{PutToBuffer(yytext);PrintToken(OP,yytext); return '&';}

":"		{PutToBuffer(yytext);PrintToken(PUNC,yytext); return ':';}
"("		{PutToBuffer(yytext);PrintToken(PUNC,yytext); return '(';}
")"		{PutToBuffer(yytext);PrintToken(PUNC,yytext); return ')'}
"["		{PutToBuffer(yytext);PrintToken(PUNC,yytext); return '[';}
"]"		{PutToBuffer(yytext);PrintToken(PUNC,yytext); return ']';}
"{"		{PutToBuffer(yytext);PrintToken(PUNC,yytext);  return '{';}
"}"		{PutToBuffer(yytext);PrintToken(PUNC,yytext);  return '}';}
"."		{PutToBuffer(yytext);PrintToken(PUNC,yytext);  return '.';}
","		{PutToBuffer(yytext);PrintToken(PUNC,yytext);  return ',';} 
";"		{PutToBuffer(yytext);PrintToken(PUNC,yytext);  return ';';}

\n		{PutToBuffer(yytext); PrintSrc();ClearBuffer();lineCount++;}
		

(" ")|(\t)	{PutToBuffer(yytext);}
\0		{PrintEOFSrc();}

.		{Error();}

%%


/*
int main(int argc , char* argv[]){

	yylex();


	return 0;
}
*/


void PutToBuffer(char* token){
	strcat(lineBuffer,token);
}

void ClearBuffer(){
	memset(lineBuffer,0,50000);
}

void PrintToken(type t,char* text){
	
	if(tokenOn==1){
		switch(t){
			case KEY:
				printf("#key:%s\n",text);
				break;
			case ID:
				printf("#id:%s\n",text);
				break;
			case OP:
				printf("#op:%s\n",text);
				break;
			case PUNC:
				printf("#punc:%s\n",text);
				break;
			case INTEGER:
				printf("#integer:%s\n",text);
				break;
			case DOUBLE:
				printf("#double:%s\n",text);
				break;
			case CHARACTER:
				printf("#char:%s\n",text);
				break;
			case SCI:
				printf("#sci:%s\n",text);
				break;
			case STRING:
				printf("#string:%s\n",text);
				break;
			default:
				Error();
		}
	}
	
}

void PrintSrc(){
	if(srcOn==1){
		printf("%d:%s",lineCount,lineBuffer);
	}
}

void PrintEOFSrc(){
	if(srcOn==1&&strlen(lineBuffer)>0){
		printf("%d:%s",lineCount,lineBuffer);
		printf("\n");
	}
}

void Error(){
	fprintf(stderr,"Error at line %d: %s\n",lineCount,yytext);exit(1);
}


char   *
copyn(n, s)
	register int n;
	register char *s;
{
	register char *p, *q;
	//char   *calloc();

	p = q = calloc(1,n);
	while (--n >= 0)
		*q++ = *s++;
	return (p);
}


/*
 * copys -- makes a copy of a string
 *
 * input:
 *	  s - string to be copied
 *
 * output:
 *	  pointer to the new string
 */
char   *
copys(s)
	char   *s;
{
	return (copyn(strlen(s) + 1, s));
}


