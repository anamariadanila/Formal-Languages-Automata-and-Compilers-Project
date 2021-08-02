%{
#include <stdio.h>
#include "proiect.h"
#include <stdlib.h>

int erori=0;
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
int yylex();
int yyerror();


%}

%token LIB IDENT PLUS MINUS AFIS ATRIBUIRE MUL DIV CALL BGNFUNC ENDFUNC 
%token BGNMAIN ENDMAIN TIPDATA STPRG ENPRG AND OR DACA ALTFEL PENTRU 
%token CATTIMP MAIMIC MAIMARE EGAL MMICEGAL MMAREEGAL INTREG FLOTANT 
%token CARACTER SIR_CHAR BOOLEAN VECTOR MATRICE INT RATIONAL BGBLOCK CLOSEBLOCK BITAND BITOR BITNOT BITXOR
%token STRCOPY STRLENGTH STRCATS STRSTRING
%token ATUNCI
%token PRIVATE
%token PUBLIC
%token ENDCLASS
%token BGCLASS
%token NOT
%token STRUCT ENDSTRUCT
%token PARANTEZADESC PARANTEZAINC


%union {
char *tip;
char *nume; 
int val;
}


%type<nume> IDENT VECTOR MATRICE 
%type<tip> TIPDATA
%type<val> INT expresie




%start limbaj

%left PLUS MINUS
%left MUL DIV
%left OR
%left AND
%left BITOR
%left BITXOR
%left BITAND
%left BITNOT 
%%


limbaj: STPRG cod {if(erori==0)printf("Program corect sintactic!\n"); else printf("Au fost gasite erori!\n");} ENPRG
 ;


clase: clasa
     | clasa clase
     ;

clasa: BGCLASS IDENT continut_clasa ENDCLASS



continut_clasa: PRIVATE operatiuni PUBLIC operatiuni
              | PRIVATE operatiuni
              | PUBLIC operatiuni
              ;

cod:	 librarii declaratii_globale clase functii main
       | librarii declaratii_globale functii main
       | librarii declaratii_globale clase main
       | librarii declaratii_globale main
       | librarii declaratii_globale structuri clase functii main
       | librarii declaratii_globale structuri functii main
       | librarii declaratii_globale structuri clase main
       | librarii declaratii_globale structuri main
       ;


librarii: LIB librarii
          | LIB
          ;


declaratii_globale: 	variabila ';' 
                  | variabila ';' declaratii_globale
                  ;


variabila: TIPDATA IDENT  {if(isAvailable($2, 0)==1) declaraVariabila($2,$1, 0);
				else {yyerror(); printf("%d:Numele variabilei a fost folosit deja!!!\n",yylineno);}}

          | TIPDATA VECTOR  {if(isArrayAvailable($2, 0)==1) declaraArray($2,$1, 0);
			else {yyerror(); printf("%d:Numele variabilei a fost folosit deja!!!\n",yylineno);}}
          | TIPDATA MATRICE {if(isArrayAvailable($2, 0)==1) declaraArray($2,$1, 0);
			else {yyerror(); printf("%d:Numele variabilei a fost folosit deja!!!\n",yylineno);}}
		  ;


variabila_functie: TIPDATA IDENT  {if(isAvailable($2, 1)==1) declaraVariabila($2,$1, 1);
				else {yyerror(); printf("%d:Numele variabilei a fost folosit deja!!!\n",yylineno);}}

          | TIPDATA VECTOR  {if(isArrayAvailable($2, 1)==1) declaraArray($2,$1, 1);
			else {yyerror(); printf("%d:Numele variabilei a fost folosit deja!!!\n",yylineno);}}
          | TIPDATA MATRICE {if(isArrayAvailable($2, 1)==1) declaraArray($2,$1, 1);
			else {yyerror(); printf("%d:Numele variabilei a fost folosit deja!!!\n",yylineno);}}
		  ;

		  
		  

operatiuni: operatiune
            | operatiune operatiuni
            ;

operatiune: atribuie ';'
            | apel ';'
            | afisare ';'
            | variabila_functie ';'
            | functie
            | blocCod           
            ;   

			
			

atribuie: IDENT ATRIBUIRE expresie {if(isAvailable($1, 0)==0 || isAvailable($1, 1)==0)
					if(strcmp(variables[getPoz($1)].tip,"int")==0)
						asignareInt($1,$3);
					else {yyerror(); printf("%d:Variabila nu e de tipul int\n",yylineno);}
				else {yyerror(); printf("%d:Variabila nu e initializata!\n",yylineno);}}
        ;


expresie: expresie PLUS expresie {$$=$1+$3;}
		| expresie MINUS expresie {$$=$1-$3;}
		| expresie MUL expresie {$$=$1*$3;}
	   	| expresie DIV expresie {$$=$1/$3;}
              | expresie BITAND expresie {$$ = $1 & $3;}
              | expresie BITOR expresie {$$ = $1 | $3;}
              | BITNOT expresie {$$ = complementare($2);}
              | expresie BITXOR expresie {$$ = $1 ^ $3;}	
              | INT {$$=$1;}
              | IDENT {if(isAvailable($1, 0)==0 && isAvailable($1, 1)==0){yyerror();printf("%d:Variabila nu a fost declarata\n",yylineno);}
			if(strcmp(variables[getPoz($1)].tip,"int"))
{yyerror();printf("%d:Variabila nu e de tipul int\n",yylineno);} $$=variables[getPoz($1)].val;}
              | apel {$$=0;}
              | RATIONAL {$$=0;}
              | accesare {$$=0;}
              ;



accesare: IDENT '.' IDENT {if(isStruct($1)==0){yyerror(); printf("%d:Eroare accesare struct!\n",yylineno);}}
        ;




apel: CALL IDENT PARANTEZADESC parametriiApel PARANTEZAINC 
    ;


tipDeVariabila: IDENT {if(isAvailable($1, 0)==0 && isAvailable($1, 1)==0){yyerror(); printf("%d:Variabila nu e initializata\n",yylineno);} }
   | VECTOR {if(isArrayAvailable($1, 0)==0 && isArrayAvailable($1, 1)==0){yyerror(); printf("%d:Variabila nu e initializata\n",yylineno);}}
   | MATRICE {if(isArrayAvailable($1, 0)==0 && isArrayAvailable($1, 1)==0){yyerror(); printf("%d:Variabila nu e initializata\n",yylineno);}}
   ;




parametriiApel: tipDeVariabila '|' parametriiApel
          | tipDeVariabila
          | INT '|' parametriiApel
          | INT
          | apel '|' parametriiApel
          | apel
          | RATIONAL '|' parametriiApel
          | RATIONAL
          | accesare '|' parametriiApel
          | accesare    
          ;




functii: functie
       | functie functii
       ;


functie:  BGNFUNC TIPDATA IDENT PARANTEZADESC paramFormali PARANTEZAINC content ENDFUNC
       ;

content: operatiuni 
       ;



paramFormali: TIPDATA IDENT 
               | TIPDATA IDENT ',' paramFormali
               ;


structura: STRUCT IDENT declaratii_globale ENDSTRUCT 
         | STRUCT IDENT declaratii_globale ENDSTRUCT idents
       ;

idents: IDENT ';' {if (isStructAvailable($1)) {declaraStruct($1);}
                                                               else {yyerror(); printf("Variablila e luata!\n");}}
      | IDENT ',' idents
      ;

structuri: structura structuri
       | structura
       ;


main: BGNMAIN instructiuniMain ENDMAIN
    ;


instructiuniMain: operatiune instructiuniMain
    | operatiune
    ;



afisare: AFIS  expresie   {

       if(erori==0) printf("EVAL = %d la linia %d\n",$2,yylineno);}
       ;


dacaCond: DACA PARANTEZADESC conditie PARANTEZAINC ATUNCI dacaop altfelcond
	;

altfelcond:
       ALTFEL dacaop
       ;


dacaop:
       operatiune
       | BGBLOCK operatiuni CLOSEBLOCK
       ;




blocCod: CATTIMP PARANTEZADESC conditie PARANTEZAINC BGBLOCK operatiuni CLOSEBLOCK
     | PENTRU PARANTEZADESC atribuie ';' conditie ';' atribuie PARANTEZAINC BGBLOCK operatiuni CLOSEBLOCK
     | dacaCond
     ;

comparator:
	MAIMARE
	|MAIMIC
	|EGAL
	|MMICEGAL
	|MMAREEGAL
	;

conditie : tipDeVariabila comparator tipDeVariabila
          | tipDeVariabila comparator INT
          | INT comparator tipDeVariabila
          | INT comparator INT
          | tipDeVariabila comparator apel
          | PARANTEZADESC conditie PARANTEZAINC
          | conditie AND conditie
          | conditie OR conditie
          ;



%%

int yyerror(char * s)
{
erori++;
}

int main(int argc, char** argv)
{
yyin=fopen(argv[1],"r");
yyparse();

show_symbol_table();
exit(0);
}



