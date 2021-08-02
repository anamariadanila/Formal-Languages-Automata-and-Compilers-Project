#include <string.h>

typedef struct variabila{
    char nume[100];
    char tip[100];
int val;
int isDeclared;
int scope; // 0 - global, 1 - local (in function)
} Variabila;

typedef struct functie{
    char nume[100];
    int nr_para;
} Functie;

int l=0;
int contor=1;
Functie functions[100];
Variabila variables[100];


void declaraVariabila(char *x, char *y, int scope)
{	
	strcpy(variables[contor].nume,x);
    	strcpy(variables[contor].tip,y);
	variables[contor].isDeclared=1;
    variables[contor].val=0;
    variables[contor++].scope = scope;

    // for(int i=0; i<contor;i++){
    //     printf("\n%s %s %d\n", variables[i].nume, variables[i].tip, variables[i].val);
    // }
}

int isAvailable(char *x, int scope)
{
    for(int i=1;i<=contor;i++)
        if(strcmp(x,variables[i].nume)==0 && variables[i].scope == scope)
            return 0;
    return 1;
}


int isArrayAvailable(char *x, int scope)
{
    char nume[100]="";
    int i=0;
    while(x[i]!='[')
        i++;

    nume[i]='\0';
    strncpy(nume,x,i);
    int j;

    for(i=1;i<=contor;i++)
        if(strcmp(nume,variables[i].nume)==0 && variables[i].scope == scope)
            return 0;
    return 1;
}



void declaraArray(char x[], char y[], int scope)
{
    int i=0;
    while(x[i]!='[')
        i++;
    strncpy(variables[contor].nume,x,i);
    variables[contor].val=0;
    variables[contor].isDeclared=1;
    strcpy(variables[contor].tip,y);
    variables[contor].scope = scope;
    contor++;
}


int isStruct(char *x)
{
    int i;
    for(i=1;i<=contor;i++)
        if(strcmp(x,variables[i].nume)==0)
            if(strcmp(variables[i].tip,"struct")==0)
                return 1;
    return 0;

}

int isStructAvailable(char *x){
        for(int i=1;i<=contor;i++)
        if(strcmp(x,variables[i].nume)==0)
            return 0;
    return 1;
}

void declaraStruct(char *x)
{	
	strcpy(variables[contor].nume,x);
    	strcpy(variables[contor].tip, "struct");

	variables[contor++].isDeclared=1;

}



void declare_func(char x[])
{
    strcpy(functions[l].nume,x);
    l++;
    functions[l].nr_para=0;
}


void declare_obiect(char x[])
{
    strcpy(variables[contor].nume,x);
    variables[contor].isDeclared=1;
    variables[contor].val=0;
    strcpy(variables[contor].tip,"obiect");
    contor++;
}




int return_func(char x[])
{
    int i;
    for(i=0;i<=l;i++)
        if(strcmp(x,functions[i].nume)==0)
            return i;
    return 0;
}



int is_declared(char x[])
{
    int i;
    for(i=1;i<=contor;i++)
        if(strcmp(x,variables[i].nume)==0) 
        	if(variables[i].isDeclared==0)
        		return 0;
        	else
                return 1;
    return 0;

}

int getPoz(char *x)
{
    int i;
    for(i=1;i<=contor;i++)
        if(strcmp(x,variables[i].nume)==0)
            return i;
    return 0;
}


int asignareInt(char x[], int v)
{
    int i;
    for(i=1;i<=contor;i++)
        if(strcmp(x,variables[i].nume)==0)
        {
            variables[i].val=v;
            variables[i].isDeclared=1;
        }
}


int asignareFloat(char x[], float v)
{
    int i;
    for(i=1;i<=contor;i++)
        if(strcmp(x,variables[i].nume)==0)
        {
            variables[i].val=v;
            variables[i].isDeclared=1;
        }
}


int same_type(char x[], char y[])
{
    int i=0;
    while(strcmp(x,variables[i].nume)!=0)
        i++;
    int j=0;
    while(strcmp(y,variables[j].nume)!=0)
        j++;
    if(strcmp(variables[i].tip,variables[j].tip)==0)
        return 1;
    return 0;
}


int complementare(int x){

int a[100]={0};
int uc, i=0, n;

while(x!=0){
    uc = x%2;
    a[i++] = uc;
    x = x/2;
}


n=i;


for(int i=0; i< n;i++){
a[i]= 1 - a[i];
}

int nouNumar=0;;

for(i=n-1; i>=0; i--){
    nouNumar = nouNumar*2 + a[i];
}

return nouNumar;


}


void show_symbol_table(){

    FILE *fp = NULL;
    fp = fopen("symbol_table.txt", "w");

for(int i=1; i<contor; i++){

    fprintf(fp, "Nume: %s | Tip: %s | Valoare: %d | Scope: %s\n", variables[i].nume, variables[i].tip, variables[i].val, (variables[i].scope == 0 ? "global":"local"));
}
    
    fclose(fp);



}

