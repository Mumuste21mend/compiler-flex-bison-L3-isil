flex lexical.l
bison -d syntaxe.y 
gcc lex.yy.c syntaxe.tab.c -lfl -ly  -o compIsil2020.exe

compIsil2020.exe < test.txt
