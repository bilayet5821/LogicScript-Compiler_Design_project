all: logicscript

logicscript: logicscript.tab.c lex.yy.c main.c
	gcc -o logicscript logicscript.tab.c lex.yy.c main.c -lfl

logicscript.tab.c logicscript.tab.h: logicscript.y
	bison -d logicscript.y

lex.yy.c: logicscript.l logicscript.tab.h
	flex logicscript.l

clean:
	rm -f logicscript lex.yy.c logicscript.tab.c logicscript.tab.h