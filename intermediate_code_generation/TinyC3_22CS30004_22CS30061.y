/**
 * TinyC Intermediate Code Generation
 * YACC file Parsing
 * Pranav Jha (22CS30061)
 * Abhinav Akarsh (22CS30004)
 */

%{
#include <iostream>
#include <string>
using namespace std;
#include "TinyC3_22CS30004_22CS30061_translator.h"
extern int yylineno;
int yylex();
void yyerror(string s);
%}

%union {
    Expression *expr;
    ArrayExpression *arrexpr;
    Statement *stmt;
    Symbol *symbolptr;
    int inst;
	int cnt;
	int op;
}
%start PROGRAM
%token LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET LEFT_ROUND_BRACKET RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET
%token DOT ARROW INCREMENT DECREMENT AMPERSAND COMMA HASH
%token ASTERISK PLUS MINUS TILDE EXCLAMATION FORWARD_SLASH PERCENT
%token LEFT_SHIFT RIGHT_SHIFT LESS_THAN GREATER_THAN LESS_THAN_EQUAL GREATER_THAN_EQUAL EQUAL NOT_EQUAL
%token CARET PIPE LOGICAL_AND LOGICAL_OR QUESTION_MARK COLON SEMICOLON ELLIPSIS
%token ASSIGNMENT MULTIPLY_ASSIGNMENT DIVIDE_ASSIGNMENT MOD_ASSIGNMENT ADD_ASSIGNMENT SUBTRACT_ASSIGNMENT LEFT_SHIFT_ASSIGNMENT RIGHT_SHIFT_ASSIGNMENT BITWISE_AND_ASSIGNMENT BITWISE_XOR_ASSIGNMENT BITWISE_OR_ASSIGNMENT
%token <symbolptr> IDENTIFIER INTEGER_CONSTANT FLOATING_CONSTANT CHARACTER_CONSTANT STRING_LITERAL
%token ERROR

%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE
%token ENUM EXTERN FLOAT FOR GOTO IF INLINE INT LONG REGISTER
%token RESTRICT RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION
%token UNSIGNED VOID VOLATILE WHILE BOOL COMPLEX IMAGINARY

// 1. Expressions
%type <expr> primary_expression multiplicative_expression additive_expression shift_expression relational_expression equality_expression AND_expression exclusive_OR_expression inclusive_OR_expression logical_AND_expression logical_OR_expression conditional_expression assignment_expression assignment_expression_opt assignment_operator expression expression_opt constant_expression postfix_expression unary_expression cast_expression
%type <op> unary_operator
%type <cnt> argument_expression_list argument_expression_list_opt

// 2. Declarations
%type <symbolptr> declaration declaration_specifiers declaration_specifiers_opt init_declarator_list init_declarator_list_opt init_declarator storage_class_specifier type_specifier specifier_qualifier_list specifier_qualifier_list_opt type_qualifier function_specifier declarator direct_declarator pointer pointer_opt type_qualifier_list type_qualifier_list_opt parameter_type_list parameter_list parameter_declaration identifier_list identifier_list_opt type_name initializer initializer_list designation designation_opt designator_list designator

// 3. Statements
%type <stmt> statement labeled_statement compound_statement block_item_list block_item_list_opt block_item expression_statement selection_statement iteration_statement jump_statement 

// 4. External definitions
%type translation_unit external_declaration function_definition declaration_list declaration_list_opt

//5. Marker Non Terminals
%type <inst> M CB 
%type <stmt> N
%type CT FN CTF

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%%
/* Start */
PROGRAM : translation_unit
        {
            cerr << "PROGRAM -> translation_unit" << endl;
        }
        ;

/* 1. Expressions */
primary_expression : IDENTIFIER
        {
            cerr << "primary_expression -> IDENTIFIER" << endl;
            $$ = new Expression();
            $$ -> entry = $1;
            $$ -> type = INT;                                            //TODO: fill this
            // $$ -> entry -> type = new SymbolType(IDENTIFIER);            //TODO: check if this is correct
            currExpr = $$;
        }
        | INTEGER_CONSTANT 						                        /* CONSTANT split into INTEGER, FLOATING, CHARACTER */
		{
            cerr << "primary_expression -> INTEGER_CONSTANT" << endl;
			$$ = new Expression();
			$$ -> entry = $1;
            $$ -> type = INT;                                            //TODO: fill this
            $$ -> entry -> type = new SymbolType(INT, SIZE_OF_INT);
            emit("=", $1 -> value, "", $$ -> entry -> name);
            currExpr = $$;
		}
		| FLOATING_CONSTANT
		{
            cerr << "primary_expression -> FLOATING_CONSTANT" << endl;
			$$ = new Expression();
			$$ -> entry = $1;
            $$ -> type = INT;                                            //TODO: fill this
			$$ -> entry -> type = new SymbolType(FLOAT, SIZE_OF_FLOAT);  
            emit("=", $1 -> value, "", $$ -> entry -> name);
            currExpr = $$;
        }
		| CHARACTER_CONSTANT
		{
            cerr << "primary_expression -> CHARACTER_CONSTANT" << endl;
			$$ = new Expression();
			$$ -> entry = $1;
            $$ -> type = INT;                                            //TODO: fill this
			$$ -> entry -> type = new SymbolType(CHAR, SIZE_OF_CHAR);    
            emit("=", $1 -> value, "", $$ -> entry -> name);
            currExpr = $$;
		}
        | STRING_LITERAL
        {
            cerr << "primary_expression -> STRING_LITERAL" << endl;
            $$ = new Expression();
            $$ -> entry = $1;
            $$ -> type = INT;                                            //TODO: fill this
            $$ -> entry = $1;
            currExpr = $$;
        }
        | LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET
        {
            cerr << "primary_expression -> LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET" << endl;
            $$ = $2;
            currExpr = $$;
        }
        ;
postfix_expression : primary_expression
        {
            cerr << "postfix_expression -> primary_expression" << endl;
            // $$ = new ArrayExpression();
			$$ = new Expression();
			$$ -> arr = new ArrayExpression();
			$$ -> entry = $1 -> entry;
            if($1 -> entry == NULL) yyerror("Hey there! something is wrong brother postfix1\n");
			$$ -> arr -> elementType = $1 -> entry -> type;
			$$ -> arr -> addr = $$ -> entry;
            $$ -> type = $1 -> type;
            $$ -> truelist = $1 -> truelist;
            $$ -> falselist = $1 -> falselist;
            $$ -> nextlist = $1 -> nextlist;
            currExpr = $$;
        }
        | postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET    
        {
            cerr << "postfix_expression -> postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET" << endl;
            // $$ = new ArrayExpression();
            if($1 -> entry == NULL) yyerror("Hey there! something is wrong brother postfix0\n");
			$$ = new Expression();
			$$ -> arr = new ArrayExpression();
			$$ -> entry = $1 -> entry;
			$$ -> arr -> elementType = $1 -> arr -> elementType -> elementType;
			$$ -> arr -> addr = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));	//creating temp to calculate index in arr
			$$ -> arr -> type = ARRAY;

			if($1 -> arr -> type == ARRAY)
			{
				Symbol *temp = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));
				//sizeOfType recusively calculates the size of the arr
				emit("*", $3 -> entry -> name, to_string(sizeOfType($$ -> arr -> elementType)), temp -> name);	
				emit("+", $1 -> arr -> addr -> name, temp -> name, $$ -> arr -> addr -> name);
			}
			else	//TODO: verify this
			{
                emit("*", $3 -> entry -> name, to_string(sizeOfType($$ -> arr -> elementType)), $$ -> arr -> addr -> name);
				// emit("*", $$ -> addr -> name);
			}
            currExpr = $$;
        }
        | postfix_expression LEFT_ROUND_BRACKET argument_expression_list_opt RIGHT_ROUND_BRACKET
        {
            cerr << "postfix_expression -> postfix_expression LEFT_ROUND_BRACKET argument_expression_list_opt RIGHT_ROUND_BRACKET" << endl;
            /* do it not now */
            $$ = new Expression();
			$$ -> arr = new ArrayExpression();
			$$ -> entry = SymbolTable::gentemp($1 -> arr -> elementType);
            emit("call", $1 -> entry -> name, to_string($3), $$ -> entry -> name);
            currExpr = $$;
        }
        | postfix_expression DOT IDENTIFIER                                                                                 {/* skip */ cerr << "postfix_expression -> postfix_expression DOT IDENTIFIER" << endl;}
        | postfix_expression ARROW IDENTIFIER                                                                               {/* skip */ cerr << "postfix_expression -> postfix_expression ARROW IDENTIFIER" << endl;}
        | postfix_expression INCREMENT
		{
            cerr << "postfix_expression -> postfix_expression INCREMENT" << endl;
			$$ = new Expression();
			$$ -> arr = new ArrayExpression();
			$$ -> entry = SymbolTable::gentemp($1 -> entry -> type);
			emit("=", $1 -> entry -> name, "", $$ -> entry -> name);
			emit("+", $1 -> entry -> name, "1", $1 -> entry -> name);
            currExpr = $$;
		}
        | postfix_expression DECREMENT
		{
            cerr << "postfix_expression -> postfix_expression DECREMENT" << endl;
			$$ = new Expression();
			$$ -> arr = new ArrayExpression();
			$$ -> entry = SymbolTable::gentemp($1 -> entry -> type);
			emit("=", $1 -> entry -> name, "", $$ -> entry -> name);
			emit("-", $1 -> entry -> name, "1", $1 -> entry -> name);
            currExpr = $$;
		}
        | LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET          {/* doubt_skip */ cerr << "postfix_expression -> LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET" << endl; yyerror("Hey there! something is wrong brother postfix2\n");}
        | LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET    {/* doubt skip */ cerr << "postfix_expression -> LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET" << endl; yyerror("Hey there! something is wrong brother postfix3\n");}
        ;
argument_expression_list : assignment_expression
		{
            cerr << "argument_expression_list -> assignment_expression" << endl;
			$$ = 1;
			emit("param", $1 -> entry -> name, "", "");
		}
        | argument_expression_list COMMA assignment_expression
		{
            cerr << "argument_expression_list -> argument_expression_list COMMA assignment_expression" << endl;
			$$ = $1 + 1;
			emit("param", $3 -> entry -> name, "", "");
		}
        ;
argument_expression_list_opt : /* epsilon */
		{
            cerr << "argument_expression_list_opt -> epsilon" << endl;
			$$ = 0;
		}
        | argument_expression_list
		{
            cerr << "argument_expression_list_opt -> argument_expression_list" << endl;
			$$ = $1;
		}
        ;
unary_expression : postfix_expression
		{
            cerr << "unary_expression -> postfix_expression" << endl;
			$$ = $1;
            currExpr = $$;
		}
        | INCREMENT unary_expression
		{
            cerr << "unary_expression -> INCREMENT unary_expression" << endl;
			emit("+", $2 -> entry -> name, "1", $2 -> entry -> name);
			$$ = $2;
            currExpr = $$;
		}
        | DECREMENT unary_expression
		{
            cerr << "unary_expression -> DECREMENT unary_expression" << endl;
			emit("-", $2 -> entry -> name, "1", $2 -> entry -> name);
			$$ = $2;
            currExpr = $$;
		}
        | unary_operator cast_expression
		{
            cerr << "unary_expression -> unary_operator cast_expression" << endl;
			$$ = new Expression();
            $$ -> truelist = $2 -> truelist;
            $$ -> falselist = $2 -> falselist;
            $$ -> nextlist = $2 -> nextlist;
			$$ -> arr = new ArrayExpression();
			if($1 == AMPERSAND)
			{
				$$ -> entry = SymbolTable::gentemp(new SymbolType(POINTER, SIZE_OF_POINTER));
				$$ -> entry -> type -> elementType = $2 -> entry -> type;
				emit("u&", $2 -> entry -> name, "", $$ -> entry -> name);
			}
			else if($1 == ASTERISK)
			{
				$$ -> arr -> type = POINTER;
				$$ -> arr -> addr = SymbolTable::gentemp($2 -> entry -> type);
				$$ -> entry = $2 -> entry;
				emit("u*",$2 -> entry -> name, "", $$ -> arr -> addr -> name);
			}
			else if($1 == PLUS)
			{
                $$ = $2;
			}
			else if($1 == MINUS)
			{
				$$ -> entry = SymbolTable::gentemp($2 -> entry -> type);
				emit("u-", $2 -> entry -> name, "", $$ -> entry -> name);
			}
			else if($1 == TILDE)
			{
				$$ -> entry = SymbolTable::gentemp($2 -> entry -> type);
				emit("u~", $2 -> entry -> name, "", $$ -> entry -> name);
			}
			else if($1 == EXCLAMATION)
			{
                $$ -> entry = SymbolTable::gentemp($2 -> entry -> type);
				swap($2 -> truelist, $2 -> falselist);
                $$ -> truelist = $2 -> truelist;
                $$ -> falselist = $2 -> falselist;
                $$ -> nextlist = $2 -> nextlist;
                $$ -> type = $2 -> type;
				if($2 -> type != BOOL) emit("u!", $2 -> entry -> name, "", $$ -> entry -> name);
			}
            currExpr = $$;
		}		
        | SIZEOF unary_expression                                                       {/* skip */ cerr << "unary_expression -> SIZEOF unary_expression" << endl;}
        | SIZEOF LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET                       {/* skip */ cerr << "unary_expression -> SIZEOF LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET" << endl;}
        ;
unary_operator : AMPERSAND
		{
            cerr << "unary_operator -> AMPERSAND" << endl;
			$$ = AMPERSAND;
		}
		| ASTERISK
		{
            cerr << "unary_operator -> ASTERISK" << endl;
			$$ = ASTERISK;
		}
		| PLUS
		{
            cerr << "unary_operator -> PLUS" << endl;
			$$ = PLUS;
		}
		| MINUS
		{
            cerr << "unary_operator -> MINUS" << endl;
			$$ = MINUS;
		}
		| TILDE
		{
            cerr << "unary_operator -> TILDE" << endl;
			$$ = TILDE;
		}
		| EXCLAMATION
		{
            cerr << "unary_operator -> EXCLAMATION" << endl;
			$$ = EXCLAMATION;
		}
		;
cast_expression : unary_expression

		{
            cerr << "cast_expression -> unary_expression" << endl;
			$$ = $1;
            currExpr = $$;
		}
        | LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET cast_expression              {/* doubt skip */ cerr << "cast_expression -> LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET cast_expression" << endl; yyerror("Hey there! something is wrong brother cast1\n");}
        ;
multiplicative_expression : cast_expression
		{
            cerr << "multiplicative_expression -> cast_expression" << endl;
			$$ = new Expression();
            $$ -> truelist = $1 -> truelist;
            $$ -> falselist = $1 -> falselist;
            $$ -> nextlist = $1 -> nextlist;
            $$ -> type = $1 -> type;
			if($1 -> arr -> type == ARRAY)
			{
                SymbolType *temp = $1 -> entry -> type;
                while(temp -> type == ARRAY) temp = temp -> elementType;
				$$ -> entry = SymbolTable::gentemp(temp);
                emit("=[]", $1 -> entry -> name, $1 -> arr -> addr -> name, $$ -> entry -> name);
			}
            else if($1 -> arr -> type == POINTER) $$ -> entry = $1 -> arr -> addr;
            else $$ -> entry = $1 -> entry;
            currExpr = $$;
		}
        | multiplicative_expression ASTERISK cast_expression //TODO: verify all this
        {
            cerr << "multiplicative_expression -> multiplicative_expression ASTERISK cast_expression" << endl;
            if(typeCheck($1 -> entry -> type, $3 -> arr -> elementType) == 0) yyerror("Hey there! something is wrong brother multiplicative1\n");
            $$ = new Expression();
            $$ -> entry = SymbolTable::gentemp($1 -> entry -> type);
            emit("*", $1 -> entry -> name, $3 -> entry -> name, $$ -> entry -> name);
            currExpr = $$;
        }
        | multiplicative_expression FORWARD_SLASH cast_expression
        {
            cerr << "multiplicative_expression -> multiplicative_expression FORWARD_SLASH cast_expression" << endl;
            if(typeCheck($1 -> entry -> type, $3 -> arr -> elementType) == 0) yyerror("Hey there! something is wrong brother multiplicative2\n");
            $$ = new Expression();
            $$ -> entry = SymbolTable::gentemp($1 -> entry -> type);
            emit("/", $1 -> entry -> name, $3 -> entry -> name, $$ -> entry -> name);
            currExpr = $$;
        }
        | multiplicative_expression PERCENT cast_expression
        {
            cerr << "multiplicative_expression -> multiplicative_expression PERCENT cast_expression" << endl;
            if(typeCheck($1 -> entry -> type, $3 -> arr -> elementType) == 0) yyerror("Hey there! something is wrong brother multiplicative3\n");
            $$ = new Expression();
            $$ -> entry = SymbolTable::gentemp($1 -> entry -> type);
            emit("%", $1 -> entry -> name, $3 -> entry -> name, $$ -> entry -> name);
            currExpr = $$;
        }
        ;
additive_expression : multiplicative_expression
		{
            cerr << "additive_expression -> multiplicative_expression" << endl;
			$$ = $1;
            currExpr = $$;
		}
        | additive_expression PLUS multiplicative_expression
		{
            cerr << "additive_expression -> additive_expression PLUS multiplicative_expression" << endl;
			if(typeCheck($1 -> entry -> type, $3 -> entry -> type) == 0) yyerror("Hey there! something is wrong brother additive1\n");
			$$ = new Expression();
			$$ -> type = INT;
			$$ -> entry = SymbolTable::gentemp($1 -> entry -> type);	//TODO: check this
			emit("+", $1 -> entry -> name, $3 -> entry -> name, $$ -> entry -> name);
            currExpr = $$;
		}
        | additive_expression MINUS multiplicative_expression
		{
            cerr << "additive_expression -> additive_expression MINUS multiplicative_expression" << endl;
			if(typeCheck($1 -> entry -> type, $3 -> entry -> type) == 0) yyerror("Hey there! something is wrong brother additive2\n");
			$$ = new Expression();
			$$ -> type = INT;
			$$ -> entry = SymbolTable::gentemp($1 -> entry -> type);	//TODO: check this
			emit("-", $1 -> entry -> name, $3 -> entry -> name, $$ -> entry -> name);
            currExpr = $$;
		}
        ;
shift_expression : additive_expression
		{
            cerr << "shift_expression -> additive_expression" << endl;
			$$ = $1;
            currExpr = $$;
		}
        | shift_expression LEFT_SHIFT additive_expression
		{
            cerr << "shift_expression -> shift_expression LEFT_SHIFT additive_expression" << endl;
			if($3 -> entry -> type -> type != INT) yyerror("Hey there! something is wrong brother shift1\n");
			$$ = new Expression();
			$$ -> type = INT;
			$$ -> entry = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));		//TODO: check this
			emit("<<", $1 -> entry -> name, $3 -> entry -> name, $$ -> entry -> name);
            currExpr = $$;
		}
        | shift_expression RIGHT_SHIFT additive_expression
		{
            cerr << "shift_expression -> shift_expression RIGHT_SHIFT additive_expression" << endl;
			if($3 -> entry -> type -> type != INT) yyerror("Hey there! something is wrong brother shift2\n");
			$$ = new Expression();
			$$ -> type = INT;
			$$ -> entry = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));		//TODO: check this
			emit(">>", $1 -> entry -> name, $3 -> entry -> name, $$ -> entry -> name);
            currExpr = $$;
		}
        ;
relational_expression : shift_expression
		{
            cerr << "relational_expression -> shift_expression" << endl;
			$$ = $1;
            currExpr = $$;
		}
        | relational_expression LESS_THAN shift_expression
		{
            cerr << "relational_expression -> relational_expression LESS_THAN shift_expression" << endl;
			if(typeCheck($1 -> entry -> type, $3 -> entry -> type) == 0) yyerror("Hey there! something is wrong brother relational1\n");
			$$ = new Expression();
            // $$ -> entry = $1 -> entry;
			$$ -> type = BOOL;
            $$ -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			$$ -> truelist = makelist(nextinstr());
			$$ -> falselist = makelist(nextinstr() + 1);
			emit("if <", $1 -> entry -> name, $3 -> entry -> name, "__");
			emit("goto", "", "", "__");
            currExpr = $$;
		}
        | relational_expression GREATER_THAN shift_expression
		{
            cerr << "relational_expression -> relational_expression GREATER_THAN shift_expression" << endl;
			if(typeCheck($1 -> entry -> type, $3 -> entry -> type) == 0) yyerror("Hey there! something is wrong brother relational2\n");
			$$ = new Expression();
			$$ -> type = BOOL;
            $$ -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			$$ -> truelist = makelist(nextinstr());
			$$ -> falselist = makelist(nextinstr() + 1);
			emit("if >", $1 -> entry -> name, $3 -> entry -> name, "__");
			emit("goto", "", "", "__");
            currExpr = $$;
		}
        | relational_expression LESS_THAN_EQUAL shift_expression
		{
            cerr << "relational_expression -> relational_expression LESS_THAN_EQUAL shift_expression" << endl;
			if(typeCheck($1 -> entry -> type, $3 -> entry -> type) == 0) yyerror("Hey there! something is wrong brother relational3\n");
			$$ = new Expression();
			$$ -> type = BOOL;
            $$ -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			$$ -> truelist = makelist(nextinstr());
			$$ -> falselist = makelist(nextinstr() + 1);
			emit("if <=", $1 -> entry -> name, $3 -> entry -> name, "__");
			emit("goto", "", "", "__");
            currExpr = $$;
		}
        | relational_expression GREATER_THAN_EQUAL shift_expression
		{
            cerr << "relational_expression -> relational_expression GREATER_THAN_EQUAL shift_expression" << endl;
			if(typeCheck($1 -> entry -> type, $3 -> entry -> type) == 0) yyerror("Hey there! something is wrong brother relational4\n");
			$$ = new Expression();
			$$ -> type = BOOL;
            $$ -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			$$ -> truelist = makelist(nextinstr());
			$$ -> falselist = makelist(nextinstr() + 1);
			emit("if >=", $1 -> entry -> name, $3 -> entry -> name, "__");
			emit("goto", "", "", "__");
            currExpr = $$;
		}
        ;
equality_expression : relational_expression
		{
            cerr << "equality_expression -> relational_expression" << endl;
			$$ = $1;
            currExpr = $$;
		}
        | equality_expression EQUAL relational_expression
		{
            cerr << "equality_expression -> equality_expression EQUAL relational_expression" << endl;
			if(typeCheck($1 -> entry -> type, $3 -> entry -> type) == 0) yyerror("Hey there! something is wrong brother equality1\n");
			$$ = new Expression();
			$$ -> type = BOOL;
            $$ -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			$$ -> truelist = makelist(nextinstr());
			$$ -> falselist = makelist(nextinstr() + 1);
			emit("if ==", $1 -> entry -> name, $3 -> entry -> name, "__");
			emit("goto", "", "", "__");
            currExpr = $$;
		}
        | equality_expression NOT_EQUAL relational_expression
		{
            cerr << "equality_expression -> equality_expression NOT_EQUAL relational_expression" << endl;
			if(typeCheck($1 -> entry -> type, $3 -> entry -> type) == 0) yyerror("Hey there! something is wrong brother equality2\n");
			$$ = new Expression();
			$$ -> type = BOOL;
            $$ -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			$$ -> truelist = makelist(nextinstr());
			$$ -> falselist = makelist(nextinstr() + 1);
			emit("if !=", $1 -> entry -> name, $3 -> entry -> name, "__");
			emit("goto", "", "", "__");
            currExpr = $$;
		}
        ;
AND_expression : equality_expression
		{
            cerr << "AND_expression -> equality_expression" << endl;
			$$ = $1;
            currExpr = $$;
		}
        | AND_expression AMPERSAND equality_expression
		{
            cerr << "AND_expression -> AND_expression AMPERSAND equality_expression" << endl;
			if($1 -> entry -> type -> type != INT || $3 -> entry -> type -> type != INT) yyerror("Hey there! something is wrong brother AND1\n");
			$$ = new Expression();
			$$ -> type = INT;
			$$ -> entry = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));		//TODO: check this
			emit("&", $1 -> entry -> name, $3 -> entry -> name, $$ -> entry -> name);
            currExpr = $$;
		}
        ;
exclusive_OR_expression : AND_expression
		{
            cerr << "exclusive_OR_expression -> AND_expression" << endl;
			$$ = $1;
            currExpr = $$;
		}
        | exclusive_OR_expression CARET AND_expression
		{
            cerr << "exclusive_OR_expression -> exclusive_OR_expression CARET AND_expression" << endl;
			if($1 -> entry -> type -> type != INT || $3 -> entry -> type -> type != INT) yyerror("Hey there! something is wrong brother exclusive_OR1\n");
			$$ = new Expression();
			$$ -> type = INT;
			$$ -> entry = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));		//TODO: check this
			emit("^", $1 -> entry -> name, $3 -> entry -> name, $$ -> entry -> name);
            currExpr = $$;
		}
        ;
inclusive_OR_expression : exclusive_OR_expression
		{
            cerr << "inclusive_OR_expression -> exclusive_OR_expression" << endl;
			$$ = $1;
            currExpr = $$;
		}
        | inclusive_OR_expression PIPE exclusive_OR_expression
		{
            cerr << "inclusive_OR_expression -> inclusive_OR_expression PIPE exclusive_OR_expression" << endl;
			if($1 -> entry -> type -> type != INT || $3 -> entry -> type -> type != INT) yyerror("Hey there! something is wrong brother inclusive_OR1\n");
			$$ = new Expression();
			$$ -> type = INT;
			$$ -> entry = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));		//TODO: check this
			emit("|", $1 -> entry -> name, $3 -> entry -> name, $$ -> entry -> name);
            currExpr = $$;
		}
        ;
logical_AND_expression : inclusive_OR_expression
		{
            cerr << "logical_AND_expression -> inclusive_OR_expression" << endl;
			$$ = $1;
            currExpr = $$;
		}
        | logical_AND_expression LOGICAL_AND CB M inclusive_OR_expression
		{
            cerr << "logical_AND_expression -> logical_AND_expression LOGICAL_AND M inclusive_OR_expression" << endl;
            convertToBool($1);
			convertToBool($5);
			backpatch($1 -> truelist, $4);
			$$ = new Expression();
            $$ -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			$$ -> type = BOOL;
			$$ -> truelist = $5 -> truelist;
			$$ -> falselist = merge($1 -> falselist, $5 -> falselist);
            currExpr = $$;
		}
        ;
logical_OR_expression : logical_AND_expression
		{
            cerr << "logical_OR_expression -> logical_AND_expression" << endl;
			$$ = $1;
            currExpr = $$;
		}
        | logical_OR_expression LOGICAL_OR CB M logical_AND_expression       
		{
            cerr << "logical_OR_expression -> logical_OR_expression LOGICAL_OR M logical_AND_expression" << endl;
			convertToBool($1);
			convertToBool($5);
			backpatch($1 -> falselist, $4);
			$$ = new Expression();
            $$ -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			$$ -> type = BOOL;
			$$ -> truelist = merge($1 -> truelist, $5 -> truelist);
			$$ -> falselist = $5 -> falselist;
            currExpr = $$;
		}
        ;
conditional_expression : logical_OR_expression
		{
            cerr << "conditional_expression -> logical_OR_expression" << endl;
			$$ = $1;
            currExpr = $$;
		}
        | logical_OR_expression QUESTION_MARK expression COLON conditional_expression       {/* skip */ cerr << "conditional_expression -> logical_OR_expression QUESTION_MARK expression COLON conditional_expression" << endl;}
        ;
assignment_expression : conditional_expression
		{
            cerr << "assignment_expression -> conditional_expression" << endl;
			$$ = $1;
            currExpr = $$;
		}
        | unary_expression assignment_operator assignment_expression //TODO: verify this may need type checking
		{
            cerr << "assignment_expression -> unary_expression assignment_operator assignment_expression" << endl;
			//TODO: check this
            if($1 -> arr -> type == ARRAY) emit("[]=",  $1 -> arr -> addr -> name, $3 -> entry -> name, $1 -> entry -> name);
            else if($1 -> arr -> type == POINTER) emit("*=", $3 -> entry -> name, "", $1 -> entry -> name);
            else emit("=",$3 -> entry -> name, "",$1 -> entry -> name);
            currExpr = $$;
        }
        ;
assignment_expression_opt : /* epsilon */
		{
            cerr << "assignment_expression_opt -> epsilon" << endl;
			$$ = new Expression();
            currExpr = $$;
		}
        | assignment_expression
		{
            cerr << "assignment_expression_opt -> assignment_expression" << endl;
			$$ = $1;
            currExpr = $$;
		}
        ;
assignment_operator : ASSIGNMENT
		{
            cerr << "assignment_operator -> ASSIGNMENT" << endl;
			//do nothing
		}
        | MULTIPLY_ASSIGNMENT                           {/* skip */ cerr << "assignment_operator -> MULTIPLY_ASSIGNMENT" << endl;}
        | DIVIDE_ASSIGNMENT                             {/* skip */ cerr << "assignment_operator -> DIVIDE_ASSIGNMENT" << endl;}
        | MOD_ASSIGNMENT                                {/* skip */ cerr << "assignment_operator -> MOD_ASSIGNMENT" << endl;}
        | ADD_ASSIGNMENT                                {/* skip */ cerr << "assignment_operator -> ADD_ASSIGNMENT" << endl;}
        | SUBTRACT_ASSIGNMENT                           {/* skip */ cerr << "assignment_operator -> SUBTRACT_ASSIGNMENT" << endl;}
        | LEFT_SHIFT_ASSIGNMENT                         {/* skip */ cerr << "assignment_operator -> LEFT_SHIFT_ASSIGNMENT" << endl;}
        | RIGHT_SHIFT_ASSIGNMENT                        {/* skip */ cerr << "assignment_operator -> RIGHT_SHIFT_ASSIGNMENT" << endl;}
        | BITWISE_AND_ASSIGNMENT                        {/* skip */ cerr << "assignment_operator -> BITWISE_AND_ASSIGNMENT" << endl;}
        | BITWISE_XOR_ASSIGNMENT                        {/* skip */ cerr << "assignment_operator -> BITWISE_XOR_ASSIGNMENT" << endl;}
        | BITWISE_OR_ASSIGNMENT                         {/* skip */ cerr << "assignment_operator -> BITWISE_OR_ASSIGNMENT" << endl;}
        ;
expression : assignment_expression
		{
            cerr << "expression -> assignment_expression" << endl;
			$$ = $1;
            currExpr = $$;
		}
        | expression COMMA assignment_expression        {/* skip */ cerr << "expression -> expression COMMA assignment_expression" << endl;}
        ;
expression_opt : /* epsilon */
        {
            cerr << "expression_opt -> epsilon" << endl;
            $$ = NULL;				//verify this
            currExpr = $$;
        }
        | expression
        {
            cerr << "expression_opt -> expression" << endl;
            $$ = $1;
            currExpr = $$;
        }
        ;
constant_expression : conditional_expression            {/* skip due to parent*/ cerr << "constant_expression -> conditional_expression" << endl;}
        ;

/* 2. Declarations */
declaration : declaration_specifiers init_declarator_list_opt SEMICOLON
        {
            cerr << "declaration -> declaration_specifiers init_declarator_list_opt SEMICOLON" << endl;
            // do nothing
        }
        ;
declaration_specifiers : storage_class_specifier declaration_specifiers_opt     {/* skip */ cerr << "declaration_specifiers -> storage_class_specifier declaration_specifiers_opt" << endl;}
        | type_specifier declaration_specifiers_opt
        {
            cerr << "declaration_specifiers -> type_specifier declaration_specifiers_opt" << endl;
            // do nothing
        }
        | type_qualifier declaration_specifiers_opt                             {/* skip */ cerr << "declaration_specifiers -> type_qualifier declaration_specifiers_opt" << endl;}
        | function_specifier declaration_specifiers_opt                         {/* skip */ cerr << "declaration_specifiers -> function_specifier declaration_specifiers_opt" << endl;}
        ;
declaration_specifiers_opt : /* epsilon */              {/* skip */ cerr << "declaration_specifiers_opt -> epsilon" << endl;}
        | declaration_specifiers                        {/* skip */ cerr << "declaration_specifiers_opt -> declaration_specifiers" << endl;}
        ;
init_declarator_list_opt : /* epsilon */                {/* skip */ cerr << "init_declarator_list_opt -> epsilon" << endl;}
        | init_declarator_list                          {/* skip */ cerr << "init_declarator_list_opt -> init_declarator_list" << endl;}
        ;
init_declarator_list : init_declarator
        {
            $$ = $1;
            cerr << "init_declarator_list -> init_declarator" << endl;
        }
        | init_declarator_list COMMA init_declarator
        {
            cerr << "init_declarator_list -> init_declarator_list COMMA init_declarator" << endl;
            //do nothing, type already stored in global variable
        }
        ;
init_declarator : declarator
        {
            cerr << "init_declarator -> declarator" << endl;
            $$ = $1;
        }
        | declarator ASSIGNMENT initializer
        {
            cerr << "init_declarator -> declarator ASSIGNMENT initializer" << endl;
            // if($3 ->  value == "") yyerror("Hey there! something is wrong brother init_declarator1\n");
            $1 -> value = $3 -> value;
            emit("=", $3 -> name, "", $1 -> name);
        }
        ;
storage_class_specifier : EXTERN        {/* skip */ cerr << "storage_class_specifier -> EXTERN" << endl;}
        | STATIC                        {/* skip */ cerr << "storage_class_specifier -> STATIC" << endl;}
        | AUTO                          {/* skip */ cerr << "storage_class_specifier -> AUTO" << endl;}
        | REGISTER                      {/* skip */ cerr << "storage_class_specifier -> REGISTER" << endl;}
        ;
type_specifier : VOID
        {
            cerr << "type_specifier -> VOID" << endl;
            currType = VOID;
        }
        | CHAR
        {
            cerr << "type_specifier -> CHAR" << endl;
            currType = CHAR;
        }
        | SHORT                         {/* skip */ cerr << "type_specifier -> SHORT" << endl;}
        | INT
        {
            cerr << "type_specifier -> INT" << endl;
            currType = INT;
        }
        | LONG                          {/* skip */ cerr << "type_specifier -> LONG" << endl;}
        | FLOAT
        {
            cerr << "type_specifier -> FLOAT" << endl;
            currType = FLOAT;
        }
        | DOUBLE                        {/* skip */ cerr << "type_specifier -> DOUBLE" << endl;}
        | SIGNED                        {/* skip */ cerr << "type_specifier -> SIGNED" << endl;}
        | UNSIGNED                      {/* skip */ cerr << "type_specifier -> UNSIGNED" << endl;}
        | BOOL
        {
            cerr << "type_specifier -> BOOL" << endl;
            currType = BOOL;
        }
        | COMPLEX                       {/* skip */ cerr << "type_specifier -> COMPLEX" << endl;}
        | IMAGINARY                     {/* skip */ cerr << "type_specifier -> IMAGINARY" << endl;}
        ;
specifier_qualifier_list : type_specifier specifier_qualifier_list_opt
        {
            cerr << "specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt" << endl;
            // do nothing, specifier qualifier should be epsilon
        }
        | type_qualifier specifier_qualifier_list_opt                           {/* skip : something is wrong with grammar */ cerr << "specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt" << endl;}
        ;
specifier_qualifier_list_opt : /* epsilon */
        {
            cerr << "specifier_qualifier_list_opt -> epsilon" << endl;
            // do nothing
        }
        | specifier_qualifier_list              {/* skip */ cerr << "specifier_qualifier_list_opt -> specifier_qualifier_list" << endl;}
        ;
type_qualifier : CONST                          {/* skip */ cerr << "type_qualifier -> CONST" << endl;}
        | RESTRICT                              {/* skip */ cerr << "type_qualifier -> RESTRICT" << endl;}
        | VOLATILE                              {/* skip */ cerr << "type_qualifier -> VOLATILE" << endl;}
        ;
function_specifier : INLINE                     {/* skip */ cerr << "function_specifier -> INLINE" << endl;}
        ;
declarator : pointer_opt direct_declarator
        {
            cerr << "declarator -> pointer_opt direct_declarator" << endl;
            if($1 != NULL)
            {
                SymbolType *temp = $1 -> type;
                while(temp -> elementType != NULL) temp = temp -> elementType;
                temp -> elementType = $2 -> type;
                $2 -> update($1 -> type);
            }
            $$ = $2;
        }
        ;
direct_declarator : IDENTIFIER
        {
            cerr << "direct_declarator -> IDENTIFIER" << endl;
            $1 -> update(new SymbolType(currType));
            $$ = $1;
        }
        | LEFT_ROUND_BRACKET declarator RIGHT_ROUND_BRACKET
        {
            cerr << "direct_declarator -> LEFT_ROUND_BRACKET declarator RIGHT_ROUND_BRACKET" << endl;
            $$ = $2;
        }
        | direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt assignment_expression_opt RIGHT_SQUARE_BRACKET
        {
            cerr << "direct_declarator -> direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt assignment_expression_opt RIGHT_SQUARE_BRACKET" << endl;
            // type_qualifier_list_opt should always terminate at epsilon
            // assignment_expression_opt must have a value that is not epsilon
            if($4 -> entry -> value == "") yyerror("Hey there! something is wrong brother direct_declarator1\n");
            convertToInt($4);

            SymbolType *newType = new SymbolType(ARRAY, stoi($4 -> entry -> value), new SymbolType(currType));
            if($1 -> type -> type == ARRAY)
            {
                SymbolType *temp = $1 -> type;
                while(temp -> elementType -> type == ARRAY) temp = temp -> elementType;
                delete (temp -> elementType);
                temp -> elementType = newType;
            }
            else $1 -> update(newType);
            $$ = $1;
            
        }
        | direct_declarator LEFT_SQUARE_BRACKET STATIC type_qualifier_list_opt assignment_expression RIGHT_SQUARE_BRACKET           {/* skip */ cerr << "direct_declarator -> direct_declarator LEFT_SQUARE_BRACKET STATIC type_qualifier_list_opt assignment_expression RIGHT_SQUARE_BRACKET" << endl; yyerror("Hey there! something is wrong brother direct_declarator2\n");}
        | direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list STATIC assignment_expression RIGHT_CURLY_BRACKET                {/* skip */ cerr << "direct_declarator -> direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list STATIC assignment_expression RIGHT_CURLY_BRACKET" << endl; yyerror("Hey there! something is wrong brother direct_declarator2\n");}
        | direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt ASTERISK RIGHT_SQUARE_BRACKET                               {/* doubt skip */ cerr << "direct_declarator -> direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt ASTERISK RIGHT_SQUARE_BRACKET" << endl; yyerror("Hey there! something is wrong brother direct_declarator2\n");}
        | direct_declarator LEFT_ROUND_BRACKET CT parameter_type_list RIGHT_ROUND_BRACKET
        {
            cerr << "direct_declarator -> direct_declarator LEFT_ROUND_BRACKET CT parameter_type_list RIGHT_ROUND_BRACKET" << endl;
            SymbolTable *funcTable = currST;
            switchTable(currST -> parent);
            currST -> table.pop_back();
            funcTable -> name = "$function_" + $1 -> name;
            $1 -> nestedTable = funcTable;
            // funcTable -> print();           //TODO: free the lost table
            $1 -> update(new SymbolType(FUNCTION));
            currSymbol = $1;
            $$ = $1;
        }
        | direct_declarator LEFT_ROUND_BRACKET CT identifier_list_opt RIGHT_ROUND_BRACKET
        {
            cerr << "direct_declarator -> direct_declarator LEFT_ROUND_BRACKET CT identifier_list_opt RIGHT_ROUND_BRACKET" << endl;
            if($4 != NULL) yyerror("Hey there! something is wrong brother direct_declarator2\n");
            SymbolTable *funcTable = currST;
            switchTable(currST -> parent);
            currST -> table.pop_back();
            funcTable -> name = "$function_" + $1 -> name;
            $1 -> nestedTable = funcTable;
            $1 -> update(new SymbolType(FUNCTION));
            currSymbol = $1;
            $$ = $1;
        }
        ;
pointer : ASTERISK type_qualifier_list_opt
        {
            cerr << "pointer -> ASTERISK type_qualifier_list_opt" << endl;
            /* type_qualifier_list_opt should always terminate at epsilon */
            if($2 != NULL) yyerror("Hey there! something is wrong brother pointer1\n");
            $$ = new Symbol();
            $$ -> type = new SymbolType(POINTER, SIZE_OF_POINTER);
        }
        | ASTERISK type_qualifier_list_opt pointer
        {
            cerr << "pointer -> ASTERISK type_qualifier_list_opt pointer" << endl;
            /* type_qualifier_list_opt should always terminate at epsilon */
            if($2 != NULL) yyerror("Hey there! something is wrong brother pointer2\n");
            $$ = new Symbol();
            $$ -> type = new SymbolType(POINTER, SIZE_OF_POINTER, $3 -> type);
        }
        ;
pointer_opt : /* epsilon */
        {
            cerr << "pointer_opt -> epsilon" << endl;
            $$ = NULL;
        }
        | pointer
        {
            cerr << "pointer_opt -> pointer" << endl;
            $$ = $1;
        }
        ;
type_qualifier_list : type_qualifier                            {/* skip */ cerr << "type_qualifier_list -> type_qualifier" << endl;}
        | type_qualifier_list type_qualifier                    {/* skip */ cerr << "type_qualifier_list -> type_qualifier_list type_qualifier" << endl;}
        ;
type_qualifier_list_opt : /* epsilon */                         
        {
            cerr << "type_qualifier_list_opt -> epsilon" << endl;
            $$ = NULL;
        }
        | type_qualifier_list                                   {/* skip */ cerr << "type_qualifier_list_opt -> type_qualifier_list" << endl;}
        ;
parameter_type_list : parameter_list
        {
            cerr << "parameter_type_list -> parameter_list" << endl;
            // do nothing
            $$ = $1;
        }
        | parameter_list COMMA ELLIPSIS                         {/* skip */ cerr << "parameter_type_list -> parameter_list COMMA ELLIPSIS" << endl;}
        ;
parameter_list : parameter_declaration
        {
            cerr << "parameter_list -> parameter_declaration" << endl;
            // do nothing
        }
        | parameter_list COMMA parameter_declaration
        {
            cerr << "parameter_list -> parameter_list COMMA parameter_declaration" << endl;
            // do nothing
        }
        ;
parameter_declaration : declaration_specifiers declarator
        {
            cerr << "parameter_declaration -> declaration_specifiers declarator" << endl;
            // do nothing
        }
        | declaration_specifiers
        {
            cerr << "parameter_declaration -> declaration_specifiers" << endl;
            // do nothing
        }
        ;
identifier_list : IDENTIFIER                                    {/* skip */ cerr << "identifier_list -> IDENTIFIER" << endl;}
        | identifier_list COMMA IDENTIFIER                      {/* skip */ cerr << "identifier_list -> identifier_list COMMA IDENTIFIER" << endl;}
        ;
identifier_list_opt : /* epsilon */
        {
            cerr << "identifier_list_opt -> epsilon" << endl;
            // do nothing, always terminates to epsilon
            $$ = NULL;
        }
        | identifier_list                       {/* skip */ cerr << "identifier_list_opt -> identifier_list" << endl;}
        ;
type_name : specifier_qualifier_list            {/* doubt skip */ cerr << "type_name -> specifier_qualifier_list" << endl;}
        ;   
initializer : assignment_expression
        {
            cerr << "initializer -> assignment_expression" << endl;
            $$ = $1 -> entry;
        }
        | LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET               {/* skip */ cerr << "initializer -> LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET" << endl;}
        | LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET         {/* skip */ cerr << "initializer -> LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET" << endl;}
        ;
initializer_list : designation_opt initializer                                  {/* skip */ cerr << "initializer_list -> designation_opt initializer" << endl;}
        | initializer_list COMMA designation_opt initializer                    {/* skip */ cerr << "initializer_list -> initializer_list COMMA designation_opt initializer" << endl;}
        ;
designation : designator_list ASSIGNMENT        {/* skip */ cerr << "designation -> designator_list ASSIGNMENT" << endl;}
        ;
designation_opt : /* epsilon */                 {/* skip */ cerr << "designation_opt -> epsilon" << endl;}
        | designation                           {/* skip */ cerr << "designation_opt -> designation" << endl;}
        ;
designator_list : designator                    {/* skip */ cerr << "designator_list -> designator" << endl;}
        | designator_list designator            {/* skip */ cerr << "designator_list -> designator_list designator" << endl;}
        ;
designator : LEFT_SQUARE_BRACKET constant_expression RIGHT_SQUARE_BRACKET       {/* skip */ cerr << "designator -> LEFT_SQUARE_BRACKET constant_expression RIGHT_SQUARE_BRACKET" << endl;}
        | DOT IDENTIFIER                                                        {/* skip */ cerr << "designator -> DOT IDENTIFIER" << endl;}
        ;

/* 3. Statements */
statement : labeled_statement           {/* skip */ cerr << "statement -> labeled_statement" << endl;}
        | expression_statement
        {
            cerr << "statement -> expression_statement" << endl;
            $$ = $1;
        }
        | compound_statement
        {
            cerr << "statement -> compound_statement" << endl;
            $$ = $1;
        }
        | selection_statement
        {
            cerr << "statement -> selection_statement" << endl;
            $$ = $1;
        }
        | iteration_statement
        {
            cerr << "statement -> iteration_statement" << endl;
            $$ = $1;
        }
        | jump_statement
        {
            cerr << "statement -> jump_statement" << endl;
            $$ = $1;
        }
        ;
labeled_statement : IDENTIFIER COLON statement              {/* skip */ cerr << "labeled_statement -> IDENTIFIER COLON statement" << endl;}
        | CASE constant_expression COLON statement          {/* skip */ cerr << "labeled_statement -> CASE constant_expression COLON statement" << endl;}
        | DEFAULT COLON statement                           {/* skip */ cerr << "labeled_statement -> DEFAULT COLON statement" << endl;}
        ;
compound_statement : LEFT_CURLY_BRACKET CT block_item_list_opt RIGHT_CURLY_BRACKET
        {
            cerr << "compound_statement -> LEFT_CURLY_BRACKET CT block_item_list_opt RIGHT_CURLY_BRACKET" << endl;
            $$ = $3;
            switchTable(currST -> parent);
        }
        ;
block_item_list_opt : /* epsilon */
        {
            cerr << "block_item_list_opt -> epsilon" << endl;
            $$ = new Statement();
        }
        | block_item_list
        {
            cerr << "block_item_list_opt -> block_item_list" << endl;
            $$ = $1;
        }
        ;
block_item_list : block_item
        {
            cerr << "block_item_list -> block_item" << endl;
            $$ = $1;
        }
        | block_item_list M block_item
        {
            cerr << "block_item_list -> block_item_list M block_item" << endl;
            $$ = $3;
            backpatch($1 -> nextlist, $2);
        }
        ;
block_item : declaration
        {
            cerr << "block_item -> declaration" << endl;
            $$ = new Statement();
        }
        | statement
        {
            cerr << "block_item -> statement" << endl;
            $$ = $1;
        }                                               
        ;
expression_statement : expression_opt SEMICOLON
        {
            cerr << "expression_statement -> expression_opt SEMICOLON" << endl;
            $$ = new Statement();
            if($1) $$ -> nextlist = $1 -> nextlist; /* BEWARE : $1 may be null */
        }
        ;
selection_statement : IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET CB M statement %prec LOWER_THAN_ELSE    //TODO: verify this
        {
            cerr << "selection_statement -> IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET M statement" << endl;
            convertToBool($3);
            backpatch($3 -> truelist, $6);
            $$ = new Statement();
            $$ -> nextlist = merge($3 -> falselist, $7 -> nextlist);
        }
        | IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET CB M statement ELSE N M statement
        {
            cerr << "selection_statement -> IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET M statement ELSE N M statement" << endl;
            convertToBool($3);
            backpatch($3 -> truelist, $6);
            backpatch($3 -> falselist, $10);
            $$ = new Statement();
            $$ -> nextlist = merge(merge($7 -> nextlist, $9 -> nextlist), $11 -> nextlist);
        }
        | SWITCH LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement            {/* skip */ cerr << "selection_statement -> SWITCH LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement" << endl;}
        ;
iteration_statement : WHILE M LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET CB M statement
        {
            cerr << "iteration_statement -> WHILE M LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET M statement" << endl;
            convertToBool($4);
            backpatch($4 -> truelist, $7);
            backpatch($8 -> nextlist, $2);
            $$ = new Statement();
            $$ -> nextlist = $4 -> falselist;
            emit("goto", "", "", to_string($2));
        }
        | DO M statement M WHILE LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET SEMICOLON
        {
            cerr << "iteration_statement -> DO M statement M WHILE LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET SEMICOLON" << endl;
            convertToBool($7);
            backpatch($7 -> truelist, $2);
            backpatch($3 -> nextlist, $4);
            $$ = new Statement();
            $$ -> nextlist = $7 -> falselist;
        }
        | FOR LEFT_ROUND_BRACKET expression_opt SEMICOLON M expression_opt SEMICOLON FN CB M expression_opt N RIGHT_ROUND_BRACKET M statement
        {
            cerr << "iteration_statement -> FOR LEFT_ROUND_BRACKET expression_opt SEMICOLON M expression_opt SEMICOLON M expression_opt N RIGHT_ROUND_BRACKET M statement" << endl;
            if($6) convertToBool($6);
            if($6) backpatch($6 -> truelist, $14);
            if($12) backpatch($12 -> nextlist, $5);
            if($15) backpatch($15 -> nextlist, $10);
            $$ = new Statement();
            if($6) $$ -> nextlist = $6 -> falselist;
            else $$ -> nextlist = makelist();
            emit("goto", "", "", to_string($10));
        }
        | FOR LEFT_ROUND_BRACKET declaration expression_opt SEMICOLON expression_opt RIGHT_ROUND_BRACKET statement                      {/* skip */ cerr << "iteration_statement -> FOR LEFT_ROUND_BRACKET declaration expression_opt SEMICOLON expression_opt RIGHT_ROUND_BRACKET statement" << endl;}                   
        ;
jump_statement : GOTO IDENTIFIER SEMICOLON              {/* skip */ cerr << "jump_statement -> GOTO IDENTIFIER SEMICOLON" << endl;}
        | CONTINUE SEMICOLON                            {/* skip */ cerr << "jump_statement -> CONTINUE SEMICOLON" << endl;}
        | BREAK SEMICOLON                               {/* skip */ cerr << "jump_statement -> BREAK SEMICOLON" << endl;}
        | RETURN expression_opt SEMICOLON
        {
            cerr << "jump_statement -> RETURN expression_opt SEMICOLON" << endl;
            $$ = new Statement();
            if($2)
                emit("return", $2 -> entry -> name, "", "");
            else
                emit("return", "", "", "");
        }
        ;

/* 4. External definitions */
translation_unit : external_declaration                 {/* skip */ cerr << "translation_unit -> external_declaration" << endl;}
        | translation_unit external_declaration         {/* skip */ cerr << "translation_unit -> translation_unit external_declaration" << endl;}
        ;
external_declaration : function_definition              {/* skip */ cerr << "external_declaration -> function_definition" << endl;}
        | declaration                                   {/* skip */ cerr << "external_declaration -> declaration" << endl;}
        ;
function_definition : declaration_specifiers declarator declaration_list_opt CTF LEFT_CURLY_BRACKET block_item_list_opt RIGHT_CURLY_BRACKET
        {
            cerr << "function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement" << endl;
            if(quadTable -> arr.back() -> op != "return") emit("return", "", "", "");
            switchTable(globalST);
        }
        ;
declaration_list : declaration                                                                          {/* skip */ cerr << "declaration_list -> declaration" << endl;}
        | declaration_list declaration                                                                  {/* skip */ cerr << "declaration_list -> declaration_list declaration" << endl;}
        ;
declaration_list_opt : /* epsilon */                                                                    {/* skip */ cerr << "declaration_list_opt -> epsilon" << endl;}
        | declaration_list                                                                              {/* skip */ cerr << "declaration_list_opt -> declaration_list" << endl;}
        ;

/* 5. Marker Non Terminals */
M : /* epsilon */
        {
            $$ = nextinstr();
        }
        ;
N : /* epsilon */
        {
            if(currExprFor) {
                $$ = new Statement();
                $$ -> nextlist = makelist(nextinstr());
                emit("goto", "", "", "__");
            }
            else $$ = NULL;
        }
        ;
CT : /* epsilon */
        {
            addNestedTable(currST);
        }
        ;
CTF : /* epsilon */
        {
            emit("label", currSymbol -> name, "", "");
            currST = currSymbol -> nestedTable;
        }
CB : /* epsilon */
        {
            convertToBool(currExpr);
        }
        ;
FN : /* epsilon */
        {
            currExprFor = currExpr;
        }
        ;
%%

void yyerror(string s) {
    cerr << s << endl;
    cerr << "Error at line number: " << yylineno << " at token: " << yytext << endl;
    exit(1);
}   