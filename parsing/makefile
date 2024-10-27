# MAKEFILE
# ASSIGNMENT 5
# Abhinav Akarsh (22CS30004)
# Pranav Jha (22CS30061)

run: all
	./a.out < input_22CS30004_22CS30061.c > output_22CS30004_22CS30061.txt

all:
	yacc -d tinyC2_22CS30004_22CS30061.y
	flex tinyC2_22CS30004_22CS30061.l
	gcc tinyC2_22CS30004_22CS30061.c

clean:
	-rm -f a.out y.tab.h y.tab.c lex.yy.c
