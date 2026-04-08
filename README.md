# LogicScript Compiler

This project is a mini programming language interpreter built using Flex and Bison.

## Features
- Variable declaration
- Arithmetic operations
- Conditional statements
- Boolean logic
- Colored output

## How to Run
bison -d logicscript.y
flex logicscript.l
gcc lex.yy.c logicscript.tab.c main.c -o logic.exe
./logic.exe
