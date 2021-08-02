%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
%}
%option noyywrap

ident [_a-zA-Z]+[_a-zA-Z0-9]*
sir_caractere "[.]*"
cifra [0-9]
numar (0|[1-9][0-9]*)

nwln   \n

%%

"getlib <"{ident}".h>" return LIB;
"getlib \""{ident}".h\">" return LIB;

{sir_caractere} return SIR_CHAR;


"beginclasa" 	return BGCLASS;
"end_clasa"	  	return ENDCLASS;
"public:"    	return PUBLIC;
"privat:"	 	return PRIVATE;


"startprog" 	return STPRG;
"endprog"   	return ENPRG;


"and"			return AND;
"or"			return OR;
"!"    			return NOT;


"bitand"        return BITAND;
"bitor"         return BITOR;
"bitnot"        return BITNOT;
"bitxor"        return BITXOR;

"+" 			return PLUS;
"-" 			return MINUS;
"*" 			return MUL;
"/" 			return DIV;

"("				return PARANTEZADESC;
")"				return PARANTEZAINC;


"apeleaza"		return CALL;
"beginfunctie"  return BGNFUNC;
"endfunctie"	return ENDFUNC;

"beginblock" 	            return BGBLOCK;
"endblock"	             return CLOSEBLOCK;


"beginmain" 	return BGNMAIN;
"endmain" 		return ENDMAIN;


"daca" 			return DACA;
"atunci"		return ATUNCI;
"altfel" 		return ALTFEL;
"pentru" 		return PENTRU;
"cattimp" 		return CATTIMP;

"<" 			return MAIMIC;
">"  			return MAIMARE;
"=="			return EGAL;
"maim=" 		return MMICEGAL;
"maimare=" 		return MMAREEGAL;

 
"int" 			{yylval.tip =strdup(yytext); return TIPDATA;}
"float" 		{yylval.tip =strdup(yytext); return TIPDATA;}
"caracter" 		{yylval.tip =strdup(yytext); return TIPDATA;}
"sircaractere" 	{yylval.tip =strdup(yytext); return TIPDATA;}
"boolean" 		{yylval.tip =strdup(yytext); return TIPDATA;}

"strlength"        return STRLENGTH;
"strcopy"        return STRCOPY;
"strcats"        return STRCATS;
"strstring"        return STRSTRING;

"struct"        {yylval.tip =strdup(yytext); return STRUCT;}
"endstruct"		{yylval.tip =strdup(yytext); return ENDSTRUCT;}


{ident}\[[1-9][0-9]*\]  {yylval.nume=strdup(yytext); return VECTOR;}
{ident}\[[1-9][0-9]*\]\[[1-9][0-9]*\]  {yylval.nume=strdup(yytext); return MATRICE;}

"-"?{numar}             {yylval.val=atoi(yytext);return INT;}
"-"?{numar}","[0-9]* 	{yylval.val=atof(yytext);return RATIONAL;}



"<-" 					return ATRIBUIRE;
"Eval" 					return AFIS;

{ident}	 	{yylval.nume=strdup(yytext);return IDENT;}



[ \t] 		;
{nwln}					 yylineno++;
.   					return yytext[0];
%%


