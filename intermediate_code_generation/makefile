all:
	flex TinyC3_22CS30004_22CS30061.l
	yacc -d -Wcounterexamples TinyC3_22CS30004_22CS30061.y
	g++ TinyC3_22CS30004_22CS30061_translator.cpp

run: all
	./a.out < input.c > output 2> errors

clean:
	rm -f lex.yy.c y.tab.c y.tab.h a.out output errors