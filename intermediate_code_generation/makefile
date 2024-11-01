all:
	flex TinyC3_22CS30004_22CS30061.l
	yacc -d -Wcounterexamples TinyC3_22CS30004_22CS30061.y
	g++ TinyC3_22CS30004_22CS30061_translator.cpp

run: all
	mkdir -p outputs
	mkdir -p debug
	./a.out < TinyC3_22CS30004_22CS30061_test_1.c > outputs/output_1 2> debug/debug_1
	./a.out < TinyC3_22CS30004_22CS30061_test_2.c > outputs/output_2 2> debug/debug_2
	./a.out < TinyC3_22CS30004_22CS30061_test_3.c > outputs/output_3 2> debug/debug_3
	./a.out < TinyC3_22CS30004_22CS30061_test_4.c > outputs/output_4 2> debug/debug_4
	./a.out < TinyC3_22CS30004_22CS30061_test_5.c > outputs/output_5 2> debug/debug_5

clean:
	rm -f lex.yy.c y.tab.c y.tab.h a.out output errors