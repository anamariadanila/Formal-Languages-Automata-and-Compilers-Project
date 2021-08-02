all: 
	lex proiect.l
	yacc -d proiect.y
	gcc lex.yy.c y.tab.c -ly -ll  -o program 
	./program date.txt

