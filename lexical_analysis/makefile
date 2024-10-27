# MAKEFILE
# ASSIGNMENT 3
# Abhinav Akarsh (22CS30004)
# Pranav Jha (22CS30061)

flex_file = ass3_22CS30004_22CS30061.l
token_file = ass3_22CS30004_22CS30061.c
test_file = ass3_22CS30004_22CS30061_test.c

all: lex.yy.c a.out run

lex.yy.c: $(flex_file)
	flex $(flex_file)
	touch $(token_file)

a.out: $(token_file)
	gcc $(token_file)

run:
	./a.out < $(test_file) > output

clean:
	rm -f a.out
	rm -f lex.yy.c
	rm -f output

	
