/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 8 "TinyC3_22CS30004_22CS30061.y"

#include <iostream>
#include <string>
using namespace std;
#include "TinyC3_22CS30004_22CS30061_translator.h"
extern int yylineno;
int yylex();
void yyerror(string s);

#line 81 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    LEFT_SQUARE_BRACKET = 258,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 259,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_ROUND_BRACKET = 260,      /* LEFT_ROUND_BRACKET  */
    RIGHT_ROUND_BRACKET = 261,     /* RIGHT_ROUND_BRACKET  */
    LEFT_CURLY_BRACKET = 262,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 263,     /* RIGHT_CURLY_BRACKET  */
    DOT = 264,                     /* DOT  */
    ARROW = 265,                   /* ARROW  */
    INCREMENT = 266,               /* INCREMENT  */
    DECREMENT = 267,               /* DECREMENT  */
    AMPERSAND = 268,               /* AMPERSAND  */
    COMMA = 269,                   /* COMMA  */
    HASH = 270,                    /* HASH  */
    ASTERISK = 271,                /* ASTERISK  */
    PLUS = 272,                    /* PLUS  */
    MINUS = 273,                   /* MINUS  */
    TILDE = 274,                   /* TILDE  */
    EXCLAMATION = 275,             /* EXCLAMATION  */
    FORWARD_SLASH = 276,           /* FORWARD_SLASH  */
    PERCENT = 277,                 /* PERCENT  */
    LEFT_SHIFT = 278,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 279,             /* RIGHT_SHIFT  */
    LESS_THAN = 280,               /* LESS_THAN  */
    GREATER_THAN = 281,            /* GREATER_THAN  */
    LESS_THAN_EQUAL = 282,         /* LESS_THAN_EQUAL  */
    GREATER_THAN_EQUAL = 283,      /* GREATER_THAN_EQUAL  */
    EQUAL = 284,                   /* EQUAL  */
    NOT_EQUAL = 285,               /* NOT_EQUAL  */
    CARET = 286,                   /* CARET  */
    PIPE = 287,                    /* PIPE  */
    LOGICAL_AND = 288,             /* LOGICAL_AND  */
    LOGICAL_OR = 289,              /* LOGICAL_OR  */
    QUESTION_MARK = 290,           /* QUESTION_MARK  */
    COLON = 291,                   /* COLON  */
    SEMICOLON = 292,               /* SEMICOLON  */
    ELLIPSIS = 293,                /* ELLIPSIS  */
    ASSIGNMENT = 294,              /* ASSIGNMENT  */
    MULTIPLY_ASSIGNMENT = 295,     /* MULTIPLY_ASSIGNMENT  */
    DIVIDE_ASSIGNMENT = 296,       /* DIVIDE_ASSIGNMENT  */
    MOD_ASSIGNMENT = 297,          /* MOD_ASSIGNMENT  */
    ADD_ASSIGNMENT = 298,          /* ADD_ASSIGNMENT  */
    SUBTRACT_ASSIGNMENT = 299,     /* SUBTRACT_ASSIGNMENT  */
    LEFT_SHIFT_ASSIGNMENT = 300,   /* LEFT_SHIFT_ASSIGNMENT  */
    RIGHT_SHIFT_ASSIGNMENT = 301,  /* RIGHT_SHIFT_ASSIGNMENT  */
    BITWISE_AND_ASSIGNMENT = 302,  /* BITWISE_AND_ASSIGNMENT  */
    BITWISE_XOR_ASSIGNMENT = 303,  /* BITWISE_XOR_ASSIGNMENT  */
    BITWISE_OR_ASSIGNMENT = 304,   /* BITWISE_OR_ASSIGNMENT  */
    IDENTIFIER = 305,              /* IDENTIFIER  */
    INTEGER_CONSTANT = 306,        /* INTEGER_CONSTANT  */
    FLOATING_CONSTANT = 307,       /* FLOATING_CONSTANT  */
    CHARACTER_CONSTANT = 308,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 309,          /* STRING_LITERAL  */
    ERROR = 310,                   /* ERROR  */
    AUTO = 311,                    /* AUTO  */
    BREAK = 312,                   /* BREAK  */
    CASE = 313,                    /* CASE  */
    CHAR = 314,                    /* CHAR  */
    CONST = 315,                   /* CONST  */
    CONTINUE = 316,                /* CONTINUE  */
    DEFAULT = 317,                 /* DEFAULT  */
    DO = 318,                      /* DO  */
    DOUBLE = 319,                  /* DOUBLE  */
    ELSE = 320,                    /* ELSE  */
    ENUM = 321,                    /* ENUM  */
    EXTERN = 322,                  /* EXTERN  */
    FLOAT = 323,                   /* FLOAT  */
    FOR = 324,                     /* FOR  */
    GOTO = 325,                    /* GOTO  */
    IF = 326,                      /* IF  */
    INLINE = 327,                  /* INLINE  */
    INT = 328,                     /* INT  */
    LONG = 329,                    /* LONG  */
    REGISTER = 330,                /* REGISTER  */
    RESTRICT = 331,                /* RESTRICT  */
    RETURN = 332,                  /* RETURN  */
    SHORT = 333,                   /* SHORT  */
    SIGNED = 334,                  /* SIGNED  */
    SIZEOF = 335,                  /* SIZEOF  */
    STATIC = 336,                  /* STATIC  */
    STRUCT = 337,                  /* STRUCT  */
    SWITCH = 338,                  /* SWITCH  */
    TYPEDEF = 339,                 /* TYPEDEF  */
    UNION = 340,                   /* UNION  */
    UNSIGNED = 341,                /* UNSIGNED  */
    VOID = 342,                    /* VOID  */
    VOLATILE = 343,                /* VOLATILE  */
    WHILE = 344,                   /* WHILE  */
    BOOL = 345,                    /* BOOL  */
    COMPLEX = 346,                 /* COMPLEX  */
    IMAGINARY = 347,               /* IMAGINARY  */
    LOWER_THAN_ELSE = 348          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define LEFT_SQUARE_BRACKET 258
#define RIGHT_SQUARE_BRACKET 259
#define LEFT_ROUND_BRACKET 260
#define RIGHT_ROUND_BRACKET 261
#define LEFT_CURLY_BRACKET 262
#define RIGHT_CURLY_BRACKET 263
#define DOT 264
#define ARROW 265
#define INCREMENT 266
#define DECREMENT 267
#define AMPERSAND 268
#define COMMA 269
#define HASH 270
#define ASTERISK 271
#define PLUS 272
#define MINUS 273
#define TILDE 274
#define EXCLAMATION 275
#define FORWARD_SLASH 276
#define PERCENT 277
#define LEFT_SHIFT 278
#define RIGHT_SHIFT 279
#define LESS_THAN 280
#define GREATER_THAN 281
#define LESS_THAN_EQUAL 282
#define GREATER_THAN_EQUAL 283
#define EQUAL 284
#define NOT_EQUAL 285
#define CARET 286
#define PIPE 287
#define LOGICAL_AND 288
#define LOGICAL_OR 289
#define QUESTION_MARK 290
#define COLON 291
#define SEMICOLON 292
#define ELLIPSIS 293
#define ASSIGNMENT 294
#define MULTIPLY_ASSIGNMENT 295
#define DIVIDE_ASSIGNMENT 296
#define MOD_ASSIGNMENT 297
#define ADD_ASSIGNMENT 298
#define SUBTRACT_ASSIGNMENT 299
#define LEFT_SHIFT_ASSIGNMENT 300
#define RIGHT_SHIFT_ASSIGNMENT 301
#define BITWISE_AND_ASSIGNMENT 302
#define BITWISE_XOR_ASSIGNMENT 303
#define BITWISE_OR_ASSIGNMENT 304
#define IDENTIFIER 305
#define INTEGER_CONSTANT 306
#define FLOATING_CONSTANT 307
#define CHARACTER_CONSTANT 308
#define STRING_LITERAL 309
#define ERROR 310
#define AUTO 311
#define BREAK 312
#define CASE 313
#define CHAR 314
#define CONST 315
#define CONTINUE 316
#define DEFAULT 317
#define DO 318
#define DOUBLE 319
#define ELSE 320
#define ENUM 321
#define EXTERN 322
#define FLOAT 323
#define FOR 324
#define GOTO 325
#define IF 326
#define INLINE 327
#define INT 328
#define LONG 329
#define REGISTER 330
#define RESTRICT 331
#define RETURN 332
#define SHORT 333
#define SIGNED 334
#define SIZEOF 335
#define STATIC 336
#define STRUCT 337
#define SWITCH 338
#define TYPEDEF 339
#define UNION 340
#define UNSIGNED 341
#define VOID 342
#define VOLATILE 343
#define WHILE 344
#define BOOL 345
#define COMPLEX 346
#define IMAGINARY 347
#define LOWER_THAN_ELSE 348

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "TinyC3_22CS30004_22CS30061.y"

    Expression *expr;
    ArrayExpression *arrexpr;
    Statement *stmt;
    Symbol *symbolptr;
    int inst;
	int cnt;
	int op;

#line 330 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 3,        /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 4,       /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_ROUND_BRACKET = 5,         /* LEFT_ROUND_BRACKET  */
  YYSYMBOL_RIGHT_ROUND_BRACKET = 6,        /* RIGHT_ROUND_BRACKET  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 7,         /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 8,        /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_DOT = 9,                        /* DOT  */
  YYSYMBOL_ARROW = 10,                     /* ARROW  */
  YYSYMBOL_INCREMENT = 11,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 12,                 /* DECREMENT  */
  YYSYMBOL_AMPERSAND = 13,                 /* AMPERSAND  */
  YYSYMBOL_COMMA = 14,                     /* COMMA  */
  YYSYMBOL_HASH = 15,                      /* HASH  */
  YYSYMBOL_ASTERISK = 16,                  /* ASTERISK  */
  YYSYMBOL_PLUS = 17,                      /* PLUS  */
  YYSYMBOL_MINUS = 18,                     /* MINUS  */
  YYSYMBOL_TILDE = 19,                     /* TILDE  */
  YYSYMBOL_EXCLAMATION = 20,               /* EXCLAMATION  */
  YYSYMBOL_FORWARD_SLASH = 21,             /* FORWARD_SLASH  */
  YYSYMBOL_PERCENT = 22,                   /* PERCENT  */
  YYSYMBOL_LEFT_SHIFT = 23,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 24,               /* RIGHT_SHIFT  */
  YYSYMBOL_LESS_THAN = 25,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 26,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_EQUAL = 27,           /* LESS_THAN_EQUAL  */
  YYSYMBOL_GREATER_THAN_EQUAL = 28,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_EQUAL = 29,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 30,                 /* NOT_EQUAL  */
  YYSYMBOL_CARET = 31,                     /* CARET  */
  YYSYMBOL_PIPE = 32,                      /* PIPE  */
  YYSYMBOL_LOGICAL_AND = 33,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 34,                /* LOGICAL_OR  */
  YYSYMBOL_QUESTION_MARK = 35,             /* QUESTION_MARK  */
  YYSYMBOL_COLON = 36,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 37,                 /* SEMICOLON  */
  YYSYMBOL_ELLIPSIS = 38,                  /* ELLIPSIS  */
  YYSYMBOL_ASSIGNMENT = 39,                /* ASSIGNMENT  */
  YYSYMBOL_MULTIPLY_ASSIGNMENT = 40,       /* MULTIPLY_ASSIGNMENT  */
  YYSYMBOL_DIVIDE_ASSIGNMENT = 41,         /* DIVIDE_ASSIGNMENT  */
  YYSYMBOL_MOD_ASSIGNMENT = 42,            /* MOD_ASSIGNMENT  */
  YYSYMBOL_ADD_ASSIGNMENT = 43,            /* ADD_ASSIGNMENT  */
  YYSYMBOL_SUBTRACT_ASSIGNMENT = 44,       /* SUBTRACT_ASSIGNMENT  */
  YYSYMBOL_LEFT_SHIFT_ASSIGNMENT = 45,     /* LEFT_SHIFT_ASSIGNMENT  */
  YYSYMBOL_RIGHT_SHIFT_ASSIGNMENT = 46,    /* RIGHT_SHIFT_ASSIGNMENT  */
  YYSYMBOL_BITWISE_AND_ASSIGNMENT = 47,    /* BITWISE_AND_ASSIGNMENT  */
  YYSYMBOL_BITWISE_XOR_ASSIGNMENT = 48,    /* BITWISE_XOR_ASSIGNMENT  */
  YYSYMBOL_BITWISE_OR_ASSIGNMENT = 49,     /* BITWISE_OR_ASSIGNMENT  */
  YYSYMBOL_IDENTIFIER = 50,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONSTANT = 51,          /* INTEGER_CONSTANT  */
  YYSYMBOL_FLOATING_CONSTANT = 52,         /* FLOATING_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 53,        /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 54,            /* STRING_LITERAL  */
  YYSYMBOL_ERROR = 55,                     /* ERROR  */
  YYSYMBOL_AUTO = 56,                      /* AUTO  */
  YYSYMBOL_BREAK = 57,                     /* BREAK  */
  YYSYMBOL_CASE = 58,                      /* CASE  */
  YYSYMBOL_CHAR = 59,                      /* CHAR  */
  YYSYMBOL_CONST = 60,                     /* CONST  */
  YYSYMBOL_CONTINUE = 61,                  /* CONTINUE  */
  YYSYMBOL_DEFAULT = 62,                   /* DEFAULT  */
  YYSYMBOL_DO = 63,                        /* DO  */
  YYSYMBOL_DOUBLE = 64,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 65,                      /* ELSE  */
  YYSYMBOL_ENUM = 66,                      /* ENUM  */
  YYSYMBOL_EXTERN = 67,                    /* EXTERN  */
  YYSYMBOL_FLOAT = 68,                     /* FLOAT  */
  YYSYMBOL_FOR = 69,                       /* FOR  */
  YYSYMBOL_GOTO = 70,                      /* GOTO  */
  YYSYMBOL_IF = 71,                        /* IF  */
  YYSYMBOL_INLINE = 72,                    /* INLINE  */
  YYSYMBOL_INT = 73,                       /* INT  */
  YYSYMBOL_LONG = 74,                      /* LONG  */
  YYSYMBOL_REGISTER = 75,                  /* REGISTER  */
  YYSYMBOL_RESTRICT = 76,                  /* RESTRICT  */
  YYSYMBOL_RETURN = 77,                    /* RETURN  */
  YYSYMBOL_SHORT = 78,                     /* SHORT  */
  YYSYMBOL_SIGNED = 79,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 80,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 81,                    /* STATIC  */
  YYSYMBOL_STRUCT = 82,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 83,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 84,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 85,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 86,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 87,                      /* VOID  */
  YYSYMBOL_VOLATILE = 88,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 89,                     /* WHILE  */
  YYSYMBOL_BOOL = 90,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 91,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 92,                 /* IMAGINARY  */
  YYSYMBOL_LOWER_THAN_ELSE = 93,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 94,                  /* $accept  */
  YYSYMBOL_PROGRAM = 95,                   /* PROGRAM  */
  YYSYMBOL_primary_expression = 96,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 97,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 98,  /* argument_expression_list  */
  YYSYMBOL_argument_expression_list_opt = 99, /* argument_expression_list_opt  */
  YYSYMBOL_unary_expression = 100,         /* unary_expression  */
  YYSYMBOL_unary_operator = 101,           /* unary_operator  */
  YYSYMBOL_cast_expression = 102,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 103, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 104,      /* additive_expression  */
  YYSYMBOL_shift_expression = 105,         /* shift_expression  */
  YYSYMBOL_relational_expression = 106,    /* relational_expression  */
  YYSYMBOL_equality_expression = 107,      /* equality_expression  */
  YYSYMBOL_AND_expression = 108,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 109,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 110,  /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 111,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 112,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 113,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 114,    /* assignment_expression  */
  YYSYMBOL_assignment_expression_opt = 115, /* assignment_expression_opt  */
  YYSYMBOL_assignment_operator = 116,      /* assignment_operator  */
  YYSYMBOL_expression = 117,               /* expression  */
  YYSYMBOL_expression_opt = 118,           /* expression_opt  */
  YYSYMBOL_constant_expression = 119,      /* constant_expression  */
  YYSYMBOL_declaration = 120,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 121,   /* declaration_specifiers  */
  YYSYMBOL_declaration_specifiers_opt = 122, /* declaration_specifiers_opt  */
  YYSYMBOL_init_declarator_list_opt = 123, /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 124,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 125,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 126,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 127,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 128, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 129, /* specifier_qualifier_list_opt  */
  YYSYMBOL_type_qualifier = 130,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 131,       /* function_specifier  */
  YYSYMBOL_declarator = 132,               /* declarator  */
  YYSYMBOL_direct_declarator = 133,        /* direct_declarator  */
  YYSYMBOL_pointer = 134,                  /* pointer  */
  YYSYMBOL_pointer_opt = 135,              /* pointer_opt  */
  YYSYMBOL_type_qualifier_list = 136,      /* type_qualifier_list  */
  YYSYMBOL_type_qualifier_list_opt = 137,  /* type_qualifier_list_opt  */
  YYSYMBOL_parameter_type_list = 138,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 139,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 140,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 141,          /* identifier_list  */
  YYSYMBOL_identifier_list_opt = 142,      /* identifier_list_opt  */
  YYSYMBOL_type_name = 143,                /* type_name  */
  YYSYMBOL_initializer = 144,              /* initializer  */
  YYSYMBOL_initializer_list = 145,         /* initializer_list  */
  YYSYMBOL_designation = 146,              /* designation  */
  YYSYMBOL_designation_opt = 147,          /* designation_opt  */
  YYSYMBOL_designator_list = 148,          /* designator_list  */
  YYSYMBOL_designator = 149,               /* designator  */
  YYSYMBOL_statement = 150,                /* statement  */
  YYSYMBOL_labeled_statement = 151,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 152,       /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 153,      /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 154,          /* block_item_list  */
  YYSYMBOL_block_item = 155,               /* block_item  */
  YYSYMBOL_expression_statement = 156,     /* expression_statement  */
  YYSYMBOL_selection_statement = 157,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 158,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 159,           /* jump_statement  */
  YYSYMBOL_translation_unit = 160,         /* translation_unit  */
  YYSYMBOL_external_declaration = 161,     /* external_declaration  */
  YYSYMBOL_function_definition = 162,      /* function_definition  */
  YYSYMBOL_declaration_list = 163,         /* declaration_list  */
  YYSYMBOL_declaration_list_opt = 164,     /* declaration_list_opt  */
  YYSYMBOL_M = 165,                        /* M  */
  YYSYMBOL_N = 166,                        /* N  */
  YYSYMBOL_CT = 167,                       /* CT  */
  YYSYMBOL_CTF = 168,                      /* CTF  */
  YYSYMBOL_CB = 169,                       /* CB  */
  YYSYMBOL_FN = 170                        /* FN  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1013

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  205
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  348

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   348


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    66,    66,    73,    82,    92,   102,   112,   121,   128,
     144,   170,   180,   181,   182,   192,   202,   203,   205,   211,
     219,   223,   229,   235,   242,   249,   296,   297,   299,   304,
     309,   314,   319,   324,   330,   337,   339,   358,   367,   376,
     386,   392,   402,   413,   419,   429,   440,   446,   460,   473,
     486,   500,   506,   519,   533,   539,   550,   556,   567,   573,
     584,   590,   604,   610,   624,   630,   632,   638,   649,   654,
     661,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   677,   683,   686,   691,   698,   702,   708,   709,   714,
     715,   717,   718,   720,   721,   723,   728,   734,   739,   747,
     748,   749,   750,   752,   757,   762,   763,   768,   769,   774,
     775,   776,   777,   782,   783,   785,   790,   793,   797,   799,
     800,   801,   803,   805,   818,   824,   829,   849,   850,   851,
     852,   865,   879,   887,   897,   901,   907,   908,   911,   915,
     917,   923,   925,   930,   936,   941,   947,   948,   951,   956,
     958,   960,   965,   966,   968,   969,   971,   973,   974,   976,
     977,   979,   980,   984,   985,   990,   995,  1000,  1005,  1011,
    1012,  1013,  1015,  1023,  1027,  1033,  1038,  1045,  1050,  1056,
    1063,  1071,  1080,  1082,  1092,  1101,  1113,  1115,  1116,  1117,
    1118,  1130,  1131,  1133,  1134,  1136,  1147,  1148,  1150,  1151,
    1156,  1161,  1171,  1176,  1181,  1186
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "LEFT_SQUARE_BRACKET",
  "RIGHT_SQUARE_BRACKET", "LEFT_ROUND_BRACKET", "RIGHT_ROUND_BRACKET",
  "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET", "DOT", "ARROW", "INCREMENT",
  "DECREMENT", "AMPERSAND", "COMMA", "HASH", "ASTERISK", "PLUS", "MINUS",
  "TILDE", "EXCLAMATION", "FORWARD_SLASH", "PERCENT", "LEFT_SHIFT",
  "RIGHT_SHIFT", "LESS_THAN", "GREATER_THAN", "LESS_THAN_EQUAL",
  "GREATER_THAN_EQUAL", "EQUAL", "NOT_EQUAL", "CARET", "PIPE",
  "LOGICAL_AND", "LOGICAL_OR", "QUESTION_MARK", "COLON", "SEMICOLON",
  "ELLIPSIS", "ASSIGNMENT", "MULTIPLY_ASSIGNMENT", "DIVIDE_ASSIGNMENT",
  "MOD_ASSIGNMENT", "ADD_ASSIGNMENT", "SUBTRACT_ASSIGNMENT",
  "LEFT_SHIFT_ASSIGNMENT", "RIGHT_SHIFT_ASSIGNMENT",
  "BITWISE_AND_ASSIGNMENT", "BITWISE_XOR_ASSIGNMENT",
  "BITWISE_OR_ASSIGNMENT", "IDENTIFIER", "INTEGER_CONSTANT",
  "FLOATING_CONSTANT", "CHARACTER_CONSTANT", "STRING_LITERAL", "ERROR",
  "AUTO", "BREAK", "CASE", "CHAR", "CONST", "CONTINUE", "DEFAULT", "DO",
  "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT", "FOR", "GOTO", "IF",
  "INLINE", "INT", "LONG", "REGISTER", "RESTRICT", "RETURN", "SHORT",
  "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION",
  "UNSIGNED", "VOID", "VOLATILE", "WHILE", "BOOL", "COMPLEX", "IMAGINARY",
  "LOWER_THAN_ELSE", "$accept", "PROGRAM", "primary_expression",
  "postfix_expression", "argument_expression_list",
  "argument_expression_list_opt", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression",
  "assignment_expression_opt", "assignment_operator", "expression",
  "expression_opt", "constant_expression", "declaration",
  "declaration_specifiers", "declaration_specifiers_opt",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "type_qualifier", "function_specifier",
  "declarator", "direct_declarator", "pointer", "pointer_opt",
  "type_qualifier_list", "type_qualifier_list_opt", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "identifier_list_opt", "type_name", "initializer", "initializer_list",
  "designation", "designation_opt", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", "declaration_list_opt", "M",
  "N", "CT", "CTF", "CB", "FN", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-238)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-199)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     896,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,
    -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,
    -238,    16,  -238,     1,   896,   896,   896,   896,   896,  -238,
    -238,  -238,    -3,    14,    23,  -238,   515,  -238,     2,  -238,
    -238,  -238,  -238,  -238,  -238,  -238,    -3,    46,  -238,    46,
     625,  -238,     1,   896,  -238,    46,  -238,    31,  -238,  -238,
    -238,    37,   477,    63,   695,   695,  -238,  -238,  -238,  -238,
    -238,  -238,  -238,  -238,  -238,  -238,  -238,   747,  -238,   144,
      67,   765,  -238,   154,   143,   145,   170,   142,    88,    87,
     107,    61,   146,  -238,  -238,  -238,  -238,   135,   151,   -27,
    -238,  -238,     8,   921,  -238,   921,   183,   765,   160,    69,
    -238,   625,     9,  -238,   477,  -238,  -238,   477,  -238,   765,
     765,   161,   162,  -238,  -238,  -238,  -238,  -238,  -238,  -238,
    -238,  -238,  -238,  -238,  -238,  -238,   765,  -238,  -238,   765,
     765,   765,   765,   765,   765,   765,   765,   765,   765,   765,
     765,   765,   765,   765,   765,  -238,  -238,   765,  -238,  -238,
    -238,    -3,   -21,   817,   859,  -238,   765,  -238,  -238,  -238,
     677,  -238,   212,  -238,  -238,   179,  -238,  -238,  -238,   211,
     213,    27,   206,   220,  -238,  -238,  -238,  -238,  -238,  -238,
    -238,   154,   154,   143,   143,   145,   145,   145,   145,   170,
     170,   142,    88,    87,  -238,  -238,    -6,   217,   765,   765,
     223,  -238,   227,  -238,    26,   226,   224,  -238,   225,   234,
    -238,    63,  -238,  -238,  -238,   625,   235,   235,  -238,   765,
    -238,   765,   765,   765,   205,   207,   765,   210,   214,  -238,
     238,   198,   244,   765,   246,  -238,   239,   215,  -238,  -238,
    -238,  -238,   247,   248,  -238,  -238,  -238,  -238,  -238,   253,
     250,  -238,  -238,  -238,  -238,   820,   209,  -238,    90,  -238,
    -238,   107,    61,  -238,   603,  -238,   228,  -238,   603,   603,
     393,   229,   765,   245,   765,   255,  -238,  -238,   305,  -238,
    -238,  -238,  -238,  -238,  -238,   182,  -238,   603,  -238,  -238,
     262,   765,  -238,    65,  -238,    81,   765,  -238,  -238,  -238,
     173,  -238,   264,  -238,   603,   137,   258,   765,   765,  -238,
    -238,  -238,   765,   265,   266,   603,  -238,   153,  -238,   603,
     218,   603,   274,  -238,  -238,  -238,  -238,  -238,  -238,  -238,
     765,   603,  -238,  -238,   307,  -238,   603,  -238
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   101,   104,   119,   109,    99,   108,   122,   106,   107,
     102,   120,   105,   110,   100,   111,   103,   121,   112,   113,
     114,     0,   194,   134,    91,    91,    91,    91,     2,   191,
     193,     1,   138,     0,    94,    95,    97,   135,     0,    92,
      87,    88,    89,    90,   192,   136,   139,   132,    86,   134,
       0,   196,   134,   199,   203,   134,   124,   123,   137,   133,
      96,    97,     0,   157,     0,     0,    28,    29,    30,    31,
      32,    33,     3,     4,     5,     6,     7,     0,     9,    22,
      34,     0,    36,    40,    43,    46,    51,    54,    56,    58,
      60,    62,    64,    66,   151,    98,   197,     0,     0,   138,
     202,    81,     0,   117,   150,   117,     0,     0,     0,     0,
     158,     0,     0,   159,     0,    23,    24,     0,    26,     0,
      20,     0,     0,    14,    15,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     0,    34,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   204,   204,     0,   202,   195,
     125,   138,   139,    68,   148,     8,     0,   118,   115,   116,
       0,    85,     0,   162,   152,   157,   154,   156,   160,     0,
       0,     0,    21,     0,    18,    12,    13,    67,    37,    38,
      39,    41,    42,    44,    45,    47,    48,    49,    50,    52,
      53,    55,    57,    59,   200,   200,     0,    83,     0,     0,
      29,    69,     0,   146,   134,     0,   140,   142,   149,     0,
      82,   157,    35,   161,   153,     0,     0,    27,    10,     0,
      11,     0,     0,     0,     3,     0,     0,     0,     0,   200,
       0,     0,     0,    83,     0,   200,    84,     0,   177,   178,
     163,   165,     0,   200,   175,   164,   166,   167,   168,     0,
       0,   129,   126,   144,   130,     0,     0,   131,     0,   155,
      19,    61,    63,    65,    83,   189,     0,   188,    83,    83,
      83,     0,     0,     0,     0,     0,   179,   172,    83,   127,
     128,   141,   143,   147,    16,   157,   169,    83,   171,   200,
       0,    83,   187,     0,   190,     0,     0,   176,    17,   170,
       0,   200,     0,   204,    83,     0,     0,    83,    83,   200,
     182,   204,     0,     0,     0,    83,   200,     0,   205,    83,
     180,    83,     0,   204,   186,   201,   183,   184,   200,   200,
      83,    83,   201,   181,     0,   200,    83,   185
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -238,  -238,  -238,  -238,  -238,  -238,   -18,  -238,   -71,    50,
      62,    53,    58,   163,   166,   172,    83,    95,  -238,   -96,
     -46,  -238,  -238,   -61,  -237,    84,   -34,     0,   178,  -238,
    -238,   279,  -238,   -12,    43,   230,   -17,  -238,   -20,  -238,
     282,  -238,   231,   -86,  -238,  -238,    66,  -238,  -238,   -94,
    -106,   111,  -238,  -154,  -238,   221,   321,  -238,   237,  -238,
    -238,    48,  -238,  -238,  -238,  -238,  -238,   309,  -238,  -238,
    -238,  -161,    -4,   181,  -238,  -147,  -238
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    21,    78,    79,   182,   183,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
     101,   212,   136,   246,   247,   172,    22,    52,    40,    33,
      34,    35,    24,    25,   104,   168,    26,    27,    61,    57,
      37,    38,    46,    47,   215,   216,   217,   218,   219,   106,
      95,   109,   110,   111,   112,   113,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,    28,    29,    30,    53,
      54,   231,   339,   164,    97,   204,   333
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   102,    51,    36,    94,   176,   283,    55,   166,   205,
     138,   171,   107,   163,   165,    45,    31,    32,   108,    96,
     179,   225,   166,   180,    39,    39,    39,    39,    23,    58,
     233,   228,  -145,     3,    99,    98,   100,    49,   -93,     3,
    -145,   166,    32,   300,   232,   105,   115,   116,   177,    11,
     103,    48,    56,   102,   161,    11,   102,     3,   181,   118,
     209,    17,    32,   137,   312,    94,   107,    17,   188,   189,
     190,   313,   108,    11,   184,   208,    50,   174,   279,   166,
     323,   324,    45,   175,   285,    17,   105,   314,   105,   137,
     187,   103,   288,   103,   155,   166,   206,   105,   294,   222,
     105,   152,   103,   342,   295,   103,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   211,   153,   269,
     220,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   273,   310,   154,
     171,   225,   158,   321,    45,    58,   167,   119,   167,   120,
     317,   166,   137,   121,   122,   123,   124,   160,   325,   332,
     142,   143,   259,   260,   214,   331,   319,   166,   144,   145,
     139,   150,   151,   248,   326,   140,   141,   340,   341,    94,
     156,   157,   107,   270,   346,   107,   338,   224,   108,   170,
     308,   108,   191,   192,   263,   146,   147,   148,   149,   195,
     196,   197,   198,    41,    42,    43,   193,   194,   199,   200,
     173,   185,   186,   137,   137,   137,   223,   226,   137,   227,
     229,   303,    62,   305,   158,  -173,   230,   261,    64,    65,
      66,   262,   264,    67,    68,    69,    70,    71,   265,   266,
     267,   274,   221,   280,   275,   315,   301,   277,   281,   282,
     278,   284,   286,   166,   248,   287,  -174,   289,   290,   293,
     306,   327,   316,   322,   297,   214,   302,   234,    73,    74,
      75,    76,   329,     1,   235,   236,     2,     3,   237,   238,
     239,     4,   304,   335,     5,     6,   240,   241,   242,     7,
       8,     9,    10,    11,   243,    12,    13,    77,    14,   311,
     244,   318,   328,    15,    16,    17,   245,    18,    19,    20,
      62,   337,   158,   345,   271,   201,    64,    65,    66,   202,
     276,    67,    68,    69,    70,    71,   203,   272,    60,    59,
     162,   292,   268,   178,   159,   169,   307,    44,   344,   207,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   234,    73,    74,    75,    76,
       0,     1,   235,   236,     2,     3,   237,   238,   239,     4,
       0,     0,     5,     6,   240,   241,   242,     7,     8,     9,
      10,    11,   243,    12,    13,    77,    14,     0,   244,     0,
       0,    15,    16,    17,   245,    18,    19,    20,    62,     0,
       0,     0,     0,     0,    64,    65,    66,     0,     0,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,     0,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     0,
       5,     6,     0,     0,     0,     7,     8,     9,    10,    11,
       0,    12,    13,    77,    14,     0,     0,     0,     0,    15,
      16,    17,    62,    18,    19,    20,     0,     0,    64,    65,
      66,     0,     0,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -198,     0,     0,     0,     0,    72,    73,    74,
      75,    76,     0,     0,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     0,     0,     6,     0,     0,     0,     0,
       8,     9,     0,    11,    50,    12,    13,    77,     0,     0,
       0,     0,     0,    15,    16,    17,     0,    18,    19,    20,
       0,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     0,     5,     6,     0,     0,     0,     7,     8,     9,
      10,    11,     0,    12,    13,   296,    14,     0,     0,   298,
     299,    15,    16,    17,     0,    18,    19,    20,    62,     0,
     158,     0,     0,     0,    64,    65,    66,     0,   309,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
      62,     0,    63,     0,     0,   320,    64,    65,    66,     0,
       0,    67,    68,    69,    70,    71,   330,     0,     0,     0,
     334,     0,   336,   234,    73,    74,    75,    76,     0,     0,
     235,   236,   343,     0,   237,   238,   239,   347,     0,     0,
       0,     0,   240,   241,   242,    72,    73,    74,    75,    76,
     243,     0,    62,    77,   221,     0,   244,     0,    64,    65,
      66,     0,   245,    67,    68,    69,    70,    71,     0,     0,
     114,     0,     0,     0,     0,    77,    64,    65,    66,     0,
       0,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
       0,     0,   117,     0,     0,     0,     0,    77,    64,    65,
      66,     0,     0,    67,    68,    69,    70,    71,     0,     0,
      62,     0,     0,     0,     0,    77,    64,    65,    66,     0,
       0,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
       0,     0,    62,     0,     0,     0,     0,    77,    64,    65,
      66,     0,     0,   210,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   291,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,     0,     0,     0,     0,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     0,     5,     6,     0,
       0,     0,     7,     8,     9,    10,    11,    77,    12,    13,
       0,    14,     0,     0,     0,     0,    15,    16,    17,   213,
      18,    19,    20,     0,     0,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     0,     5,     6,     0,     0,
       0,     7,     8,     9,    10,    11,     0,    12,    13,     0,
      14,     0,     0,     0,     0,    15,    16,    17,     0,    18,
      19,    20,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     0,     5,     6,     0,     0,     0,     7,     8,
       9,    10,    11,     0,    12,    13,     0,    14,     0,     0,
       2,     3,    15,    16,    17,     4,    18,    19,    20,     6,
       0,     0,     0,     0,     8,     9,     0,    11,     0,    12,
      13,     0,     0,     0,     0,     0,     0,    15,    16,    17,
       0,    18,    19,    20
};

static const yytype_int16 yycheck[] =
{
       0,    62,    36,    23,    50,   111,   243,     5,    14,   156,
      81,   107,     3,    99,     6,    32,     0,    16,     9,    53,
     114,   175,    14,   117,    24,    25,    26,    27,    28,    46,
      36,     4,     6,    60,     3,    55,     5,    14,    37,    60,
      14,    14,    16,   280,   205,    62,    64,    65,    39,    76,
      62,    37,    50,   114,    81,    76,   117,    60,   119,    77,
      81,    88,    16,    81,   301,   111,     3,    88,   139,   140,
     141,     6,     9,    76,   120,   161,    39,     8,   239,    14,
     317,   318,    99,    14,   245,    88,   103,     6,   105,   107,
     136,   103,   253,   105,    33,    14,   157,   114,     8,   170,
     117,    13,   114,   340,    14,   117,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,   163,    31,   225,
     166,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   233,   299,    32,
     236,   295,     7,     6,   161,   162,   103,     3,   105,     5,
     311,    14,   170,     9,    10,    11,    12,     6,   319,     6,
      17,    18,   208,   209,   164,   326,   313,    14,    23,    24,
      16,    29,    30,   207,   321,    21,    22,   338,   339,   225,
      34,    35,     3,   229,   345,     3,   333,     8,     9,     6,
       8,     9,   142,   143,   214,    25,    26,    27,    28,   146,
     147,   148,   149,    25,    26,    27,   144,   145,   150,   151,
      50,    50,    50,   231,   232,   233,     4,     6,   236,     6,
      14,   282,     5,   284,     7,     8,     6,     4,    11,    12,
      13,     4,     6,    16,    17,    18,    19,    20,    14,    14,
       6,    36,     7,     5,    37,   306,   280,    37,    50,     5,
      36,     5,    37,    14,   288,     8,     8,     4,     8,    50,
       5,   322,    89,     5,    36,   265,    37,    50,    51,    52,
      53,    54,     6,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    37,    65,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    37,
      83,    37,    37,    86,    87,    88,    89,    90,    91,    92,
       5,    37,     7,     6,   231,   152,    11,    12,    13,   153,
     236,    16,    17,    18,    19,    20,   154,   232,    49,    47,
      99,   265,   221,   112,    97,   105,   288,    28,   342,   158,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    -1,    83,    -1,
      -1,    86,    87,    88,    89,    90,    91,    92,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    -1,    56,
      -1,    -1,    59,    60,    -1,    -1,    -1,    64,    -1,    -1,
      67,    68,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      -1,    78,    79,    80,    81,    -1,    -1,    -1,    -1,    86,
      87,    88,     5,    90,    91,    92,    -1,    -1,    11,    12,
      13,    -1,    -1,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      73,    74,    -1,    76,    39,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    90,    91,    92,
      -1,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,
      -1,    -1,    67,    68,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    -1,    78,    79,   274,    81,    -1,    -1,   278,
     279,    86,    87,    88,    -1,    90,    91,    92,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,    13,    -1,   297,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,    -1,    -1,   314,    11,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,   325,    -1,    -1,    -1,
     329,    -1,   331,    50,    51,    52,    53,    54,    -1,    -1,
      57,    58,   341,    -1,    61,    62,    63,   346,    -1,    -1,
      -1,    -1,    69,    70,    71,    50,    51,    52,    53,    54,
      77,    -1,     5,    80,     7,    -1,    83,    -1,    11,    12,
      13,    -1,    89,    16,    17,    18,    19,    20,    -1,    -1,
       5,    -1,    -1,    -1,    -1,    80,    11,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      -1,    -1,     5,    -1,    -1,    -1,    -1,    80,    11,    12,
      13,    -1,    -1,    16,    17,    18,    19,    20,    -1,    -1,
       5,    -1,    -1,    -1,    -1,    80,    11,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      -1,    -1,     5,    -1,    -1,    -1,    -1,    80,    11,    12,
      13,    -1,    -1,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    56,    -1,    -1,    59,
      60,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    80,    78,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,    50,
      90,    91,    92,    -1,    -1,    56,    -1,    -1,    59,    60,
      -1,    -1,    -1,    64,    -1,    -1,    67,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    78,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    90,
      91,    92,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,
      64,    -1,    -1,    67,    68,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    -1,    78,    79,    -1,    81,    -1,    -1,
      59,    60,    86,    87,    88,    64,    90,    91,    92,    68,
      -1,    -1,    -1,    -1,    73,    74,    -1,    76,    -1,    78,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      -1,    90,    91,    92
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    56,    59,    60,    64,    67,    68,    72,    73,    74,
      75,    76,    78,    79,    81,    86,    87,    88,    90,    91,
      92,    95,   120,   121,   126,   127,   130,   131,   160,   161,
     162,     0,    16,   123,   124,   125,   132,   134,   135,   121,
     122,   122,   122,   122,   161,   130,   136,   137,    37,    14,
      39,   120,   121,   163,   164,     5,    50,   133,   130,   134,
     125,   132,     5,     7,    11,    12,    13,    16,    17,    18,
      19,    20,    50,    51,    52,    53,    54,    80,    96,    97,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   144,   120,   168,   132,     3,
       5,   114,   117,   127,   128,   130,   143,     3,     9,   145,
     146,   147,   148,   149,     5,   100,   100,     5,   100,     3,
       5,     9,    10,    11,    12,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,   116,   100,   102,    16,
      21,    22,    17,    18,    23,    24,    25,    26,    27,    28,
      29,    30,    13,    31,    32,    33,    34,    35,     7,   152,
       6,    81,   136,   137,   167,     6,    14,   128,   129,   129,
       6,   113,   119,    50,     8,    14,   144,    39,   149,   143,
     143,   117,    98,    99,   114,    50,    50,   114,   102,   102,
     102,   103,   103,   104,   104,   105,   105,   105,   105,   106,
     106,   107,   108,   109,   169,   169,   117,   167,   137,    81,
      16,   114,   115,    50,   121,   138,   139,   140,   141,   142,
     114,     7,   102,     4,     8,   147,     6,     6,     4,    14,
       6,   165,   165,    36,    50,    57,    58,    61,    62,    63,
      69,    70,    71,    77,    83,    89,   117,   118,   120,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   114,
     114,     4,     4,   132,     6,    14,    14,     6,   145,   144,
     114,   110,   111,   113,    36,    37,   119,    37,    36,   165,
       5,    50,     5,   118,     5,   165,    37,     8,   165,     4,
       8,    38,   140,    50,     8,    14,   150,    36,   150,   150,
     118,   120,    37,   117,    37,   117,     5,   155,     8,   150,
     165,    37,   118,     6,     6,   117,    89,   165,    37,   169,
     150,     6,     5,   118,   118,   165,   169,   117,    37,     6,
     150,   165,     6,   170,   150,    65,   150,    37,   169,   166,
     165,   165,   118,   150,   166,     6,   165,   150
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    96,    96,    96,    96,    96,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    98,    98,
      99,    99,   100,   100,   100,   100,   100,   100,   101,   101,
     101,   101,   101,   101,   102,   102,   103,   103,   103,   103,
     104,   104,   104,   105,   105,   105,   106,   106,   106,   106,
     106,   107,   107,   107,   108,   108,   109,   109,   110,   110,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   117,   117,   118,   118,   119,   120,   121,   121,   121,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   126,
     126,   126,   126,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   128,   128,   129,   129,   130,
     130,   130,   131,   132,   133,   133,   133,   133,   133,   133,
     133,   133,   134,   134,   135,   135,   136,   136,   137,   137,
     138,   138,   139,   139,   140,   140,   141,   141,   142,   142,
     143,   144,   144,   144,   145,   145,   146,   147,   147,   148,
     148,   149,   149,   150,   150,   150,   150,   150,   150,   151,
     151,   151,   152,   153,   153,   154,   154,   155,   155,   156,
     157,   157,   157,   158,   158,   158,   158,   159,   159,   159,
     159,   160,   160,   161,   161,   162,   163,   163,   164,   164,
     165,   166,   167,   168,   169,   170
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       0,     1,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     5,     1,     5,     1,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     1,     1,     3,     2,     2,     2,
       2,     0,     1,     0,     1,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     0,     1,     1,
       1,     1,     1,     2,     1,     3,     5,     6,     6,     5,
       5,     5,     2,     3,     0,     1,     1,     2,     0,     1,
       1,     3,     1,     3,     2,     1,     1,     3,     0,     1,
       1,     1,     3,     4,     2,     4,     2,     0,     1,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     4,     0,     1,     1,     3,     1,     1,     2,
       7,    11,     5,     8,     9,    15,     8,     3,     2,     2,
       3,     1,     2,     1,     1,     5,     1,     2,     0,     1,
       0,     0,     0,     0,     0,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* PROGRAM: translation_unit  */
#line 67 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "PROGRAM -> translation_unit" << endl;
        }
#line 1896 "y.tab.c"
    break;

  case 3: /* primary_expression: IDENTIFIER  */
#line 74 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "primary_expression -> IDENTIFIER" << endl;
            (yyval.expr) = new Expression();
            (yyval.expr) -> entry = (yyvsp[0].symbolptr);
            (yyval.expr) -> type = INT;                                            //TODO: fill this
            // $$ -> entry -> type = new SymbolType(IDENTIFIER);            //TODO: check if this is correct
            currExpr = (yyval.expr);
        }
#line 1909 "y.tab.c"
    break;

  case 4: /* primary_expression: INTEGER_CONSTANT  */
#line 83 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "primary_expression -> INTEGER_CONSTANT" << endl;
			(yyval.expr) = new Expression();
			(yyval.expr) -> entry = (yyvsp[0].symbolptr);
            (yyval.expr) -> type = INT;                                            //TODO: fill this
            (yyval.expr) -> entry -> type = new SymbolType(INT, SIZE_OF_INT);
            emit("=", (yyvsp[0].symbolptr) -> value, "", (yyval.expr) -> entry -> name);
            currExpr = (yyval.expr);
		}
#line 1923 "y.tab.c"
    break;

  case 5: /* primary_expression: FLOATING_CONSTANT  */
#line 93 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "primary_expression -> FLOATING_CONSTANT" << endl;
			(yyval.expr) = new Expression();
			(yyval.expr) -> entry = (yyvsp[0].symbolptr);
            (yyval.expr) -> type = INT;                                            //TODO: fill this
			(yyval.expr) -> entry -> type = new SymbolType(FLOAT, SIZE_OF_FLOAT);  
            emit("=", (yyvsp[0].symbolptr) -> value, "", (yyval.expr) -> entry -> name);
            currExpr = (yyval.expr);
        }
#line 1937 "y.tab.c"
    break;

  case 6: /* primary_expression: CHARACTER_CONSTANT  */
#line 103 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "primary_expression -> CHARACTER_CONSTANT" << endl;
			(yyval.expr) = new Expression();
			(yyval.expr) -> entry = (yyvsp[0].symbolptr);
            (yyval.expr) -> type = INT;                                            //TODO: fill this
			(yyval.expr) -> entry -> type = new SymbolType(CHAR, SIZE_OF_CHAR);    
            emit("=", (yyvsp[0].symbolptr) -> value, "", (yyval.expr) -> entry -> name);
            currExpr = (yyval.expr);
		}
#line 1951 "y.tab.c"
    break;

  case 7: /* primary_expression: STRING_LITERAL  */
#line 113 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "primary_expression -> STRING_LITERAL" << endl;
            (yyval.expr) = new Expression();
            (yyval.expr) -> entry = (yyvsp[0].symbolptr);
            (yyval.expr) -> type = INT;                                            //TODO: fill this
            (yyval.expr) -> entry = (yyvsp[0].symbolptr);
            currExpr = (yyval.expr);
        }
#line 1964 "y.tab.c"
    break;

  case 8: /* primary_expression: LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET  */
#line 122 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "primary_expression -> LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET" << endl;
            (yyval.expr) = (yyvsp[-1].expr);
            currExpr = (yyval.expr);
        }
#line 1974 "y.tab.c"
    break;

  case 9: /* postfix_expression: primary_expression  */
#line 129 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "postfix_expression -> primary_expression" << endl;
            // $$ = new ArrayExpression();
			(yyval.expr) = new Expression();
			(yyval.expr) -> arr = new ArrayExpression();
			(yyval.expr) -> entry = (yyvsp[0].expr) -> entry;
            if((yyvsp[0].expr) -> entry == NULL) yyerror("Hey there! something is wrong brother postfix1\n");
			(yyval.expr) -> arr -> elementType = (yyvsp[0].expr) -> entry -> type;
			(yyval.expr) -> arr -> addr = (yyval.expr) -> entry;
            (yyval.expr) -> type = (yyvsp[0].expr) -> type;
            (yyval.expr) -> truelist = (yyvsp[0].expr) -> truelist;
            (yyval.expr) -> falselist = (yyvsp[0].expr) -> falselist;
            (yyval.expr) -> nextlist = (yyvsp[0].expr) -> nextlist;
            currExpr = (yyval.expr);
        }
#line 1994 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 145 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "postfix_expression -> postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET" << endl;
            // $$ = new ArrayExpression();
            if((yyvsp[-3].expr) -> entry == NULL) yyerror("Hey there! something is wrong brother postfix0\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> arr = new ArrayExpression();
			(yyval.expr) -> entry = (yyvsp[-3].expr) -> entry;
			(yyval.expr) -> arr -> elementType = (yyvsp[-3].expr) -> arr -> elementType -> elementType;
			(yyval.expr) -> arr -> addr = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));	//creating temp to calculate index in arr
			(yyval.expr) -> arr -> type = ARRAY;

			if((yyvsp[-3].expr) -> arr -> type == ARRAY)
			{
				Symbol *temp = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));
				//sizeOfType recusively calculates the size of the arr
				emit("*", (yyvsp[-1].expr) -> entry -> name, to_string(sizeOfType((yyval.expr) -> arr -> elementType)), temp -> name);	
				emit("+", (yyvsp[-3].expr) -> arr -> addr -> name, temp -> name, (yyval.expr) -> arr -> addr -> name);
			}
			else	//TODO: verify this
			{
                emit("*", (yyvsp[-1].expr) -> entry -> name, to_string(sizeOfType((yyval.expr) -> arr -> elementType)), (yyval.expr) -> arr -> addr -> name);
				// emit("*", $$ -> addr -> name);
			}
            currExpr = (yyval.expr);
        }
#line 2024 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression LEFT_ROUND_BRACKET argument_expression_list_opt RIGHT_ROUND_BRACKET  */
#line 171 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "postfix_expression -> postfix_expression LEFT_ROUND_BRACKET argument_expression_list_opt RIGHT_ROUND_BRACKET" << endl;
            /* do it not now */
            (yyval.expr) = new Expression();
			(yyval.expr) -> arr = new ArrayExpression();
			(yyval.expr) -> entry = SymbolTable::gentemp((yyvsp[-3].expr) -> arr -> elementType);
            emit("call", (yyvsp[-3].expr) -> entry -> name, to_string((yyvsp[-1].cnt)), (yyval.expr) -> entry -> name);
            currExpr = (yyval.expr);
        }
#line 2038 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 180 "TinyC3_22CS30004_22CS30061.y"
                                                                                                                            {/* skip */ cerr << "postfix_expression -> postfix_expression DOT IDENTIFIER" << endl;}
#line 2044 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 181 "TinyC3_22CS30004_22CS30061.y"
                                                                                                                            {/* skip */ cerr << "postfix_expression -> postfix_expression ARROW IDENTIFIER" << endl;}
#line 2050 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression INCREMENT  */
#line 183 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "postfix_expression -> postfix_expression INCREMENT" << endl;
			(yyval.expr) = new Expression();
			(yyval.expr) -> arr = new ArrayExpression();
			(yyval.expr) -> entry = SymbolTable::gentemp((yyvsp[-1].expr) -> entry -> type);
			emit("=", (yyvsp[-1].expr) -> entry -> name, "", (yyval.expr) -> entry -> name);
			emit("+", (yyvsp[-1].expr) -> entry -> name, "1", (yyvsp[-1].expr) -> entry -> name);
            currExpr = (yyval.expr);
		}
#line 2064 "y.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression DECREMENT  */
#line 193 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "postfix_expression -> postfix_expression DECREMENT" << endl;
			(yyval.expr) = new Expression();
			(yyval.expr) -> arr = new ArrayExpression();
			(yyval.expr) -> entry = SymbolTable::gentemp((yyvsp[-1].expr) -> entry -> type);
			emit("=", (yyvsp[-1].expr) -> entry -> name, "", (yyval.expr) -> entry -> name);
			emit("-", (yyvsp[-1].expr) -> entry -> name, "1", (yyvsp[-1].expr) -> entry -> name);
            currExpr = (yyval.expr);
		}
#line 2078 "y.tab.c"
    break;

  case 16: /* postfix_expression: LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET  */
#line 202 "TinyC3_22CS30004_22CS30061.y"
                                                                                                                            {/* doubt_skip */ cerr << "postfix_expression -> LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET" << endl; yyerror("Hey there! something is wrong brother postfix2\n");}
#line 2084 "y.tab.c"
    break;

  case 17: /* postfix_expression: LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET  */
#line 203 "TinyC3_22CS30004_22CS30061.y"
                                                                                                                            {/* doubt skip */ cerr << "postfix_expression -> LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET" << endl; yyerror("Hey there! something is wrong brother postfix3\n");}
#line 2090 "y.tab.c"
    break;

  case 18: /* argument_expression_list: assignment_expression  */
#line 206 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "argument_expression_list -> assignment_expression" << endl;
			(yyval.cnt) = 1;
			emit("param", (yyvsp[0].expr) -> entry -> name, "", "");
		}
#line 2100 "y.tab.c"
    break;

  case 19: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 212 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "argument_expression_list -> argument_expression_list COMMA assignment_expression" << endl;
			(yyval.cnt) = (yyvsp[-2].cnt) + 1;
			emit("param", (yyvsp[0].expr) -> entry -> name, "", "");
		}
#line 2110 "y.tab.c"
    break;

  case 20: /* argument_expression_list_opt: %empty  */
#line 219 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "argument_expression_list_opt -> epsilon" << endl;
			(yyval.cnt) = 0;
		}
#line 2119 "y.tab.c"
    break;

  case 21: /* argument_expression_list_opt: argument_expression_list  */
#line 224 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "argument_expression_list_opt -> argument_expression_list" << endl;
			(yyval.cnt) = (yyvsp[0].cnt);
		}
#line 2128 "y.tab.c"
    break;

  case 22: /* unary_expression: postfix_expression  */
#line 230 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_expression -> postfix_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
            currExpr = (yyval.expr);
		}
#line 2138 "y.tab.c"
    break;

  case 23: /* unary_expression: INCREMENT unary_expression  */
#line 236 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_expression -> INCREMENT unary_expression" << endl;
			emit("+", (yyvsp[0].expr) -> entry -> name, "1", (yyvsp[0].expr) -> entry -> name);
			(yyval.expr) = (yyvsp[0].expr);
            currExpr = (yyval.expr);
		}
#line 2149 "y.tab.c"
    break;

  case 24: /* unary_expression: DECREMENT unary_expression  */
#line 243 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_expression -> DECREMENT unary_expression" << endl;
			emit("-", (yyvsp[0].expr) -> entry -> name, "1", (yyvsp[0].expr) -> entry -> name);
			(yyval.expr) = (yyvsp[0].expr);
            currExpr = (yyval.expr);
		}
#line 2160 "y.tab.c"
    break;

  case 25: /* unary_expression: unary_operator cast_expression  */
#line 250 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_expression -> unary_operator cast_expression" << endl;
			(yyval.expr) = new Expression();
            (yyval.expr) -> truelist = (yyvsp[0].expr) -> truelist;
            (yyval.expr) -> falselist = (yyvsp[0].expr) -> falselist;
            (yyval.expr) -> nextlist = (yyvsp[0].expr) -> nextlist;
			(yyval.expr) -> arr = new ArrayExpression();
			if((yyvsp[-1].op) == AMPERSAND)
			{
				(yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(POINTER, SIZE_OF_POINTER));
				(yyval.expr) -> entry -> type -> elementType = (yyvsp[0].expr) -> entry -> type;
				emit("u&", (yyvsp[0].expr) -> entry -> name, "", (yyval.expr) -> entry -> name);
			}
			else if((yyvsp[-1].op) == ASTERISK)
			{
				(yyval.expr) -> arr -> type = POINTER;
				(yyval.expr) -> arr -> addr = SymbolTable::gentemp((yyvsp[0].expr) -> entry -> type);
				(yyval.expr) -> entry = (yyvsp[0].expr) -> entry;
				emit("u*",(yyvsp[0].expr) -> entry -> name, "", (yyval.expr) -> arr -> addr -> name);
			}
			else if((yyvsp[-1].op) == PLUS)
			{
                (yyval.expr) = (yyvsp[0].expr);
			}
			else if((yyvsp[-1].op) == MINUS)
			{
				(yyval.expr) -> entry = SymbolTable::gentemp((yyvsp[0].expr) -> entry -> type);
				emit("u-", (yyvsp[0].expr) -> entry -> name, "", (yyval.expr) -> entry -> name);
			}
			else if((yyvsp[-1].op) == TILDE)
			{
				(yyval.expr) -> entry = SymbolTable::gentemp((yyvsp[0].expr) -> entry -> type);
				emit("u~", (yyvsp[0].expr) -> entry -> name, "", (yyval.expr) -> entry -> name);
			}
			else if((yyvsp[-1].op) == EXCLAMATION)
			{
                (yyval.expr) -> entry = SymbolTable::gentemp((yyvsp[0].expr) -> entry -> type);
				swap((yyvsp[0].expr) -> truelist, (yyvsp[0].expr) -> falselist);
                (yyval.expr) -> truelist = (yyvsp[0].expr) -> truelist;
                (yyval.expr) -> falselist = (yyvsp[0].expr) -> falselist;
                (yyval.expr) -> nextlist = (yyvsp[0].expr) -> nextlist;
                (yyval.expr) -> type = (yyvsp[0].expr) -> type;
				if((yyvsp[0].expr) -> type != BOOL) emit("u!", (yyvsp[0].expr) -> entry -> name, "", (yyval.expr) -> entry -> name);
			}
            currExpr = (yyval.expr);
		}
#line 2211 "y.tab.c"
    break;

  case 26: /* unary_expression: SIZEOF unary_expression  */
#line 296 "TinyC3_22CS30004_22CS30061.y"
                                                                                        {/* skip */ cerr << "unary_expression -> SIZEOF unary_expression" << endl;}
#line 2217 "y.tab.c"
    break;

  case 27: /* unary_expression: SIZEOF LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET  */
#line 297 "TinyC3_22CS30004_22CS30061.y"
                                                                                        {/* skip */ cerr << "unary_expression -> SIZEOF LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET" << endl;}
#line 2223 "y.tab.c"
    break;

  case 28: /* unary_operator: AMPERSAND  */
#line 300 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_operator -> AMPERSAND" << endl;
			(yyval.op) = AMPERSAND;
		}
#line 2232 "y.tab.c"
    break;

  case 29: /* unary_operator: ASTERISK  */
#line 305 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_operator -> ASTERISK" << endl;
			(yyval.op) = ASTERISK;
		}
#line 2241 "y.tab.c"
    break;

  case 30: /* unary_operator: PLUS  */
#line 310 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_operator -> PLUS" << endl;
			(yyval.op) = PLUS;
		}
#line 2250 "y.tab.c"
    break;

  case 31: /* unary_operator: MINUS  */
#line 315 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_operator -> MINUS" << endl;
			(yyval.op) = MINUS;
		}
#line 2259 "y.tab.c"
    break;

  case 32: /* unary_operator: TILDE  */
#line 320 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_operator -> TILDE" << endl;
			(yyval.op) = TILDE;
		}
#line 2268 "y.tab.c"
    break;

  case 33: /* unary_operator: EXCLAMATION  */
#line 325 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_operator -> EXCLAMATION" << endl;
			(yyval.op) = EXCLAMATION;
		}
#line 2277 "y.tab.c"
    break;

  case 34: /* cast_expression: unary_expression  */
#line 332 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "cast_expression -> unary_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
            currExpr = (yyval.expr);
		}
#line 2287 "y.tab.c"
    break;

  case 35: /* cast_expression: LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET cast_expression  */
#line 337 "TinyC3_22CS30004_22CS30061.y"
                                                                                        {/* doubt skip */ cerr << "cast_expression -> LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET cast_expression" << endl; yyerror("Hey there! something is wrong brother cast1\n");}
#line 2293 "y.tab.c"
    break;

  case 36: /* multiplicative_expression: cast_expression  */
#line 340 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "multiplicative_expression -> cast_expression" << endl;
			(yyval.expr) = new Expression();
            (yyval.expr) -> truelist = (yyvsp[0].expr) -> truelist;
            (yyval.expr) -> falselist = (yyvsp[0].expr) -> falselist;
            (yyval.expr) -> nextlist = (yyvsp[0].expr) -> nextlist;
            (yyval.expr) -> type = (yyvsp[0].expr) -> type;
			if((yyvsp[0].expr) -> arr -> type == ARRAY)
			{
                SymbolType *temp = (yyvsp[0].expr) -> entry -> type;
                while(temp -> type == ARRAY) temp = temp -> elementType;
				(yyval.expr) -> entry = SymbolTable::gentemp(temp);
                emit("=[]", (yyvsp[0].expr) -> entry -> name, (yyvsp[0].expr) -> arr -> addr -> name, (yyval.expr) -> entry -> name);
			}
            else if((yyvsp[0].expr) -> arr -> type == POINTER) (yyval.expr) -> entry = (yyvsp[0].expr) -> arr -> addr;
            else (yyval.expr) -> entry = (yyvsp[0].expr) -> entry;
            currExpr = (yyval.expr);
		}
#line 2316 "y.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression ASTERISK cast_expression  */
#line 359 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "multiplicative_expression -> multiplicative_expression ASTERISK cast_expression" << endl;
            if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> arr -> elementType) == 0) yyerror("Hey there! something is wrong brother multiplicative1\n");
            (yyval.expr) = new Expression();
            (yyval.expr) -> entry = SymbolTable::gentemp((yyvsp[-2].expr) -> entry -> type);
            emit("*", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, (yyval.expr) -> entry -> name);
            currExpr = (yyval.expr);
        }
#line 2329 "y.tab.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression FORWARD_SLASH cast_expression  */
#line 368 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "multiplicative_expression -> multiplicative_expression FORWARD_SLASH cast_expression" << endl;
            if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> arr -> elementType) == 0) yyerror("Hey there! something is wrong brother multiplicative2\n");
            (yyval.expr) = new Expression();
            (yyval.expr) -> entry = SymbolTable::gentemp((yyvsp[-2].expr) -> entry -> type);
            emit("/", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, (yyval.expr) -> entry -> name);
            currExpr = (yyval.expr);
        }
#line 2342 "y.tab.c"
    break;

  case 39: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 377 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "multiplicative_expression -> multiplicative_expression PERCENT cast_expression" << endl;
            if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> arr -> elementType) == 0) yyerror("Hey there! something is wrong brother multiplicative3\n");
            (yyval.expr) = new Expression();
            (yyval.expr) -> entry = SymbolTable::gentemp((yyvsp[-2].expr) -> entry -> type);
            emit("%", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, (yyval.expr) -> entry -> name);
            currExpr = (yyval.expr);
        }
#line 2355 "y.tab.c"
    break;

  case 40: /* additive_expression: multiplicative_expression  */
#line 387 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "additive_expression -> multiplicative_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
            currExpr = (yyval.expr);
		}
#line 2365 "y.tab.c"
    break;

  case 41: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 393 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "additive_expression -> additive_expression PLUS multiplicative_expression" << endl;
			if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> entry -> type) == 0) yyerror("Hey there! something is wrong brother additive1\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = INT;
			(yyval.expr) -> entry = SymbolTable::gentemp((yyvsp[-2].expr) -> entry -> type);	//TODO: check this
			emit("+", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, (yyval.expr) -> entry -> name);
            currExpr = (yyval.expr);
		}
#line 2379 "y.tab.c"
    break;

  case 42: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 403 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "additive_expression -> additive_expression MINUS multiplicative_expression" << endl;
			if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> entry -> type) == 0) yyerror("Hey there! something is wrong brother additive2\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = INT;
			(yyval.expr) -> entry = SymbolTable::gentemp((yyvsp[-2].expr) -> entry -> type);	//TODO: check this
			emit("-", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, (yyval.expr) -> entry -> name);
            currExpr = (yyval.expr);
		}
#line 2393 "y.tab.c"
    break;

  case 43: /* shift_expression: additive_expression  */
#line 414 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "shift_expression -> additive_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
            currExpr = (yyval.expr);
		}
#line 2403 "y.tab.c"
    break;

  case 44: /* shift_expression: shift_expression LEFT_SHIFT additive_expression  */
#line 420 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "shift_expression -> shift_expression LEFT_SHIFT additive_expression" << endl;
			if((yyvsp[0].expr) -> entry -> type -> type != INT) yyerror("Hey there! something is wrong brother shift1\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = INT;
			(yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));		//TODO: check this
			emit("<<", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, (yyval.expr) -> entry -> name);
            currExpr = (yyval.expr);
		}
#line 2417 "y.tab.c"
    break;

  case 45: /* shift_expression: shift_expression RIGHT_SHIFT additive_expression  */
#line 430 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "shift_expression -> shift_expression RIGHT_SHIFT additive_expression" << endl;
			if((yyvsp[0].expr) -> entry -> type -> type != INT) yyerror("Hey there! something is wrong brother shift2\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = INT;
			(yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));		//TODO: check this
			emit(">>", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, (yyval.expr) -> entry -> name);
            currExpr = (yyval.expr);
		}
#line 2431 "y.tab.c"
    break;

  case 46: /* relational_expression: shift_expression  */
#line 441 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "relational_expression -> shift_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
            currExpr = (yyval.expr);
		}
#line 2441 "y.tab.c"
    break;

  case 47: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 447 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "relational_expression -> relational_expression LESS_THAN shift_expression" << endl;
			if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> entry -> type) == 0) yyerror("Hey there! something is wrong brother relational1\n");
			(yyval.expr) = new Expression();
            // $$ -> entry = $1 -> entry;
			(yyval.expr) -> type = BOOL;
            (yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			(yyval.expr) -> truelist = makelist(nextinstr());
			(yyval.expr) -> falselist = makelist(nextinstr() + 1);
			emit("if <", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, "__");
			emit("goto", "", "", "__");
            currExpr = (yyval.expr);
		}
#line 2459 "y.tab.c"
    break;

  case 48: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 461 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "relational_expression -> relational_expression GREATER_THAN shift_expression" << endl;
			if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> entry -> type) == 0) yyerror("Hey there! something is wrong brother relational2\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = BOOL;
            (yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			(yyval.expr) -> truelist = makelist(nextinstr());
			(yyval.expr) -> falselist = makelist(nextinstr() + 1);
			emit("if >", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, "__");
			emit("goto", "", "", "__");
            currExpr = (yyval.expr);
		}
#line 2476 "y.tab.c"
    break;

  case 49: /* relational_expression: relational_expression LESS_THAN_EQUAL shift_expression  */
#line 474 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "relational_expression -> relational_expression LESS_THAN_EQUAL shift_expression" << endl;
			if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> entry -> type) == 0) yyerror("Hey there! something is wrong brother relational3\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = BOOL;
            (yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			(yyval.expr) -> truelist = makelist(nextinstr());
			(yyval.expr) -> falselist = makelist(nextinstr() + 1);
			emit("if <=", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, "__");
			emit("goto", "", "", "__");
            currExpr = (yyval.expr);
		}
#line 2493 "y.tab.c"
    break;

  case 50: /* relational_expression: relational_expression GREATER_THAN_EQUAL shift_expression  */
#line 487 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "relational_expression -> relational_expression GREATER_THAN_EQUAL shift_expression" << endl;
			if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> entry -> type) == 0) yyerror("Hey there! something is wrong brother relational4\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = BOOL;
            (yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			(yyval.expr) -> truelist = makelist(nextinstr());
			(yyval.expr) -> falselist = makelist(nextinstr() + 1);
			emit("if >=", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, "__");
			emit("goto", "", "", "__");
            currExpr = (yyval.expr);
		}
#line 2510 "y.tab.c"
    break;

  case 51: /* equality_expression: relational_expression  */
#line 501 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "equality_expression -> relational_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
            currExpr = (yyval.expr);
		}
#line 2520 "y.tab.c"
    break;

  case 52: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 507 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "equality_expression -> equality_expression EQUAL relational_expression" << endl;
			if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> entry -> type) == 0) yyerror("Hey there! something is wrong brother equality1\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = BOOL;
            (yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			(yyval.expr) -> truelist = makelist(nextinstr());
			(yyval.expr) -> falselist = makelist(nextinstr() + 1);
			emit("if ==", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, "__");
			emit("goto", "", "", "__");
            currExpr = (yyval.expr);
		}
#line 2537 "y.tab.c"
    break;

  case 53: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 520 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "equality_expression -> equality_expression NOT_EQUAL relational_expression" << endl;
			if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> entry -> type) == 0) yyerror("Hey there! something is wrong brother equality2\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = BOOL;
            (yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			(yyval.expr) -> truelist = makelist(nextinstr());
			(yyval.expr) -> falselist = makelist(nextinstr() + 1);
			emit("if !=", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, "__");
			emit("goto", "", "", "__");
            currExpr = (yyval.expr);
		}
#line 2554 "y.tab.c"
    break;

  case 54: /* AND_expression: equality_expression  */
#line 534 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "AND_expression -> equality_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
            currExpr = (yyval.expr);
		}
#line 2564 "y.tab.c"
    break;

  case 55: /* AND_expression: AND_expression AMPERSAND equality_expression  */
#line 540 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "AND_expression -> AND_expression AMPERSAND equality_expression" << endl;
			if((yyvsp[-2].expr) -> entry -> type -> type != INT || (yyvsp[0].expr) -> entry -> type -> type != INT) yyerror("Hey there! something is wrong brother AND1\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = INT;
			(yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));		//TODO: check this
			emit("&", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, (yyval.expr) -> entry -> name);
            currExpr = (yyval.expr);
		}
#line 2578 "y.tab.c"
    break;

  case 56: /* exclusive_OR_expression: AND_expression  */
#line 551 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "exclusive_OR_expression -> AND_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
            currExpr = (yyval.expr);
		}
#line 2588 "y.tab.c"
    break;

  case 57: /* exclusive_OR_expression: exclusive_OR_expression CARET AND_expression  */
#line 557 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "exclusive_OR_expression -> exclusive_OR_expression CARET AND_expression" << endl;
			if((yyvsp[-2].expr) -> entry -> type -> type != INT || (yyvsp[0].expr) -> entry -> type -> type != INT) yyerror("Hey there! something is wrong brother exclusive_OR1\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = INT;
			(yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));		//TODO: check this
			emit("^", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, (yyval.expr) -> entry -> name);
            currExpr = (yyval.expr);
		}
#line 2602 "y.tab.c"
    break;

  case 58: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 568 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "inclusive_OR_expression -> exclusive_OR_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
            currExpr = (yyval.expr);
		}
#line 2612 "y.tab.c"
    break;

  case 59: /* inclusive_OR_expression: inclusive_OR_expression PIPE exclusive_OR_expression  */
#line 574 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "inclusive_OR_expression -> inclusive_OR_expression PIPE exclusive_OR_expression" << endl;
			if((yyvsp[-2].expr) -> entry -> type -> type != INT || (yyvsp[0].expr) -> entry -> type -> type != INT) yyerror("Hey there! something is wrong brother inclusive_OR1\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = INT;
			(yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));		//TODO: check this
			emit("|", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, (yyval.expr) -> entry -> name);
            currExpr = (yyval.expr);
		}
#line 2626 "y.tab.c"
    break;

  case 60: /* logical_AND_expression: inclusive_OR_expression  */
#line 585 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "logical_AND_expression -> inclusive_OR_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
            currExpr = (yyval.expr);
		}
#line 2636 "y.tab.c"
    break;

  case 61: /* logical_AND_expression: logical_AND_expression LOGICAL_AND CB M inclusive_OR_expression  */
#line 591 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "logical_AND_expression -> logical_AND_expression LOGICAL_AND M inclusive_OR_expression" << endl;
            convertToBool((yyvsp[-4].expr));
			convertToBool((yyvsp[0].expr));
			backpatch((yyvsp[-4].expr) -> truelist, (yyvsp[-1].inst));
			(yyval.expr) = new Expression();
            (yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			(yyval.expr) -> type = BOOL;
			(yyval.expr) -> truelist = (yyvsp[0].expr) -> truelist;
			(yyval.expr) -> falselist = merge((yyvsp[-4].expr) -> falselist, (yyvsp[0].expr) -> falselist);
            currExpr = (yyval.expr);
		}
#line 2653 "y.tab.c"
    break;

  case 62: /* logical_OR_expression: logical_AND_expression  */
#line 605 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "logical_OR_expression -> logical_AND_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
            currExpr = (yyval.expr);
		}
#line 2663 "y.tab.c"
    break;

  case 63: /* logical_OR_expression: logical_OR_expression LOGICAL_OR CB M logical_AND_expression  */
#line 611 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "logical_OR_expression -> logical_OR_expression LOGICAL_OR M logical_AND_expression" << endl;
			convertToBool((yyvsp[-4].expr));
			convertToBool((yyvsp[0].expr));
			backpatch((yyvsp[-4].expr) -> falselist, (yyvsp[-1].inst));
			(yyval.expr) = new Expression();
            (yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			(yyval.expr) -> type = BOOL;
			(yyval.expr) -> truelist = merge((yyvsp[-4].expr) -> truelist, (yyvsp[0].expr) -> truelist);
			(yyval.expr) -> falselist = (yyvsp[0].expr) -> falselist;
            currExpr = (yyval.expr);
		}
#line 2680 "y.tab.c"
    break;

  case 64: /* conditional_expression: logical_OR_expression  */
#line 625 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "conditional_expression -> logical_OR_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
            currExpr = (yyval.expr);
		}
#line 2690 "y.tab.c"
    break;

  case 65: /* conditional_expression: logical_OR_expression QUESTION_MARK expression COLON conditional_expression  */
#line 630 "TinyC3_22CS30004_22CS30061.y"
                                                                                            {/* skip */ cerr << "conditional_expression -> logical_OR_expression QUESTION_MARK expression COLON conditional_expression" << endl;}
#line 2696 "y.tab.c"
    break;

  case 66: /* assignment_expression: conditional_expression  */
#line 633 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "assignment_expression -> conditional_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
            currExpr = (yyval.expr);
		}
#line 2706 "y.tab.c"
    break;

  case 67: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 639 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "assignment_expression -> unary_expression assignment_operator assignment_expression" << endl;
			//TODO: check this
            if((yyvsp[-2].expr) -> arr -> type == ARRAY) emit("[]=",  (yyvsp[-2].expr) -> arr -> addr -> name, (yyvsp[0].expr) -> entry -> name, (yyvsp[-2].expr) -> entry -> name);
            else if((yyvsp[-2].expr) -> arr -> type == POINTER) emit("*=", (yyvsp[0].expr) -> entry -> name, "", (yyvsp[-2].expr) -> entry -> name);
            else emit("=",(yyvsp[0].expr) -> entry -> name, "",(yyvsp[-2].expr) -> entry -> name);
            currExpr = (yyval.expr);
        }
#line 2719 "y.tab.c"
    break;

  case 68: /* assignment_expression_opt: %empty  */
#line 649 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "assignment_expression_opt -> epsilon" << endl;
			(yyval.expr) = new Expression();
            currExpr = (yyval.expr);
		}
#line 2729 "y.tab.c"
    break;

  case 69: /* assignment_expression_opt: assignment_expression  */
#line 655 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "assignment_expression_opt -> assignment_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
            currExpr = (yyval.expr);
		}
#line 2739 "y.tab.c"
    break;

  case 70: /* assignment_operator: ASSIGNMENT  */
#line 662 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "assignment_operator -> ASSIGNMENT" << endl;
			//do nothing
		}
#line 2748 "y.tab.c"
    break;

  case 71: /* assignment_operator: MULTIPLY_ASSIGNMENT  */
#line 666 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> MULTIPLY_ASSIGNMENT" << endl;}
#line 2754 "y.tab.c"
    break;

  case 72: /* assignment_operator: DIVIDE_ASSIGNMENT  */
#line 667 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> DIVIDE_ASSIGNMENT" << endl;}
#line 2760 "y.tab.c"
    break;

  case 73: /* assignment_operator: MOD_ASSIGNMENT  */
#line 668 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> MOD_ASSIGNMENT" << endl;}
#line 2766 "y.tab.c"
    break;

  case 74: /* assignment_operator: ADD_ASSIGNMENT  */
#line 669 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> ADD_ASSIGNMENT" << endl;}
#line 2772 "y.tab.c"
    break;

  case 75: /* assignment_operator: SUBTRACT_ASSIGNMENT  */
#line 670 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> SUBTRACT_ASSIGNMENT" << endl;}
#line 2778 "y.tab.c"
    break;

  case 76: /* assignment_operator: LEFT_SHIFT_ASSIGNMENT  */
#line 671 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> LEFT_SHIFT_ASSIGNMENT" << endl;}
#line 2784 "y.tab.c"
    break;

  case 77: /* assignment_operator: RIGHT_SHIFT_ASSIGNMENT  */
#line 672 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> RIGHT_SHIFT_ASSIGNMENT" << endl;}
#line 2790 "y.tab.c"
    break;

  case 78: /* assignment_operator: BITWISE_AND_ASSIGNMENT  */
#line 673 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> BITWISE_AND_ASSIGNMENT" << endl;}
#line 2796 "y.tab.c"
    break;

  case 79: /* assignment_operator: BITWISE_XOR_ASSIGNMENT  */
#line 674 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> BITWISE_XOR_ASSIGNMENT" << endl;}
#line 2802 "y.tab.c"
    break;

  case 80: /* assignment_operator: BITWISE_OR_ASSIGNMENT  */
#line 675 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> BITWISE_OR_ASSIGNMENT" << endl;}
#line 2808 "y.tab.c"
    break;

  case 81: /* expression: assignment_expression  */
#line 678 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "expression -> assignment_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
            currExpr = (yyval.expr);
		}
#line 2818 "y.tab.c"
    break;

  case 82: /* expression: expression COMMA assignment_expression  */
#line 683 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "expression -> expression COMMA assignment_expression" << endl;}
#line 2824 "y.tab.c"
    break;

  case 83: /* expression_opt: %empty  */
#line 686 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "expression_opt -> epsilon" << endl;
            (yyval.expr) = NULL;				//verify this
            currExpr = (yyval.expr);
        }
#line 2834 "y.tab.c"
    break;

  case 84: /* expression_opt: expression  */
#line 692 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "expression_opt -> expression" << endl;
            (yyval.expr) = (yyvsp[0].expr);
            currExpr = (yyval.expr);
        }
#line 2844 "y.tab.c"
    break;

  case 85: /* constant_expression: conditional_expression  */
#line 698 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip due to parent*/ cerr << "constant_expression -> conditional_expression" << endl;}
#line 2850 "y.tab.c"
    break;

  case 86: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 703 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "declaration -> declaration_specifiers init_declarator_list_opt SEMICOLON" << endl;
            // do nothing
        }
#line 2859 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: storage_class_specifier declaration_specifiers_opt  */
#line 708 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip */ cerr << "declaration_specifiers -> storage_class_specifier declaration_specifiers_opt" << endl;}
#line 2865 "y.tab.c"
    break;

  case 88: /* declaration_specifiers: type_specifier declaration_specifiers_opt  */
#line 710 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "declaration_specifiers -> type_specifier declaration_specifiers_opt" << endl;
            // do nothing
        }
#line 2874 "y.tab.c"
    break;

  case 89: /* declaration_specifiers: type_qualifier declaration_specifiers_opt  */
#line 714 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip */ cerr << "declaration_specifiers -> type_qualifier declaration_specifiers_opt" << endl;}
#line 2880 "y.tab.c"
    break;

  case 90: /* declaration_specifiers: function_specifier declaration_specifiers_opt  */
#line 715 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip */ cerr << "declaration_specifiers -> function_specifier declaration_specifiers_opt" << endl;}
#line 2886 "y.tab.c"
    break;

  case 91: /* declaration_specifiers_opt: %empty  */
#line 717 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "declaration_specifiers_opt -> epsilon" << endl;}
#line 2892 "y.tab.c"
    break;

  case 92: /* declaration_specifiers_opt: declaration_specifiers  */
#line 718 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "declaration_specifiers_opt -> declaration_specifiers" << endl;}
#line 2898 "y.tab.c"
    break;

  case 93: /* init_declarator_list_opt: %empty  */
#line 720 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "init_declarator_list_opt -> epsilon" << endl;}
#line 2904 "y.tab.c"
    break;

  case 94: /* init_declarator_list_opt: init_declarator_list  */
#line 721 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "init_declarator_list_opt -> init_declarator_list" << endl;}
#line 2910 "y.tab.c"
    break;

  case 95: /* init_declarator_list: init_declarator  */
#line 724 "TinyC3_22CS30004_22CS30061.y"
        {
            (yyval.symbolptr) = (yyvsp[0].symbolptr);
            cerr << "init_declarator_list -> init_declarator" << endl;
        }
#line 2919 "y.tab.c"
    break;

  case 96: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 729 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "init_declarator_list -> init_declarator_list COMMA init_declarator" << endl;
            //do nothing, type already stored in global variable
        }
#line 2928 "y.tab.c"
    break;

  case 97: /* init_declarator: declarator  */
#line 735 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "init_declarator -> declarator" << endl;
            (yyval.symbolptr) = (yyvsp[0].symbolptr);
        }
#line 2937 "y.tab.c"
    break;

  case 98: /* init_declarator: declarator ASSIGNMENT initializer  */
#line 740 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "init_declarator -> declarator ASSIGNMENT initializer" << endl;
            // if($3 ->  value == "") yyerror("Hey there! something is wrong brother init_declarator1\n");
            (yyvsp[-2].symbolptr) -> value = (yyvsp[0].symbolptr) -> value;
            emit("=", (yyvsp[0].symbolptr) -> name, "", (yyvsp[-2].symbolptr) -> name);
        }
#line 2948 "y.tab.c"
    break;

  case 99: /* storage_class_specifier: EXTERN  */
#line 747 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "storage_class_specifier -> EXTERN" << endl;}
#line 2954 "y.tab.c"
    break;

  case 100: /* storage_class_specifier: STATIC  */
#line 748 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "storage_class_specifier -> STATIC" << endl;}
#line 2960 "y.tab.c"
    break;

  case 101: /* storage_class_specifier: AUTO  */
#line 749 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "storage_class_specifier -> AUTO" << endl;}
#line 2966 "y.tab.c"
    break;

  case 102: /* storage_class_specifier: REGISTER  */
#line 750 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "storage_class_specifier -> REGISTER" << endl;}
#line 2972 "y.tab.c"
    break;

  case 103: /* type_specifier: VOID  */
#line 753 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "type_specifier -> VOID" << endl;
            currType = VOID;
        }
#line 2981 "y.tab.c"
    break;

  case 104: /* type_specifier: CHAR  */
#line 758 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "type_specifier -> CHAR" << endl;
            currType = CHAR;
        }
#line 2990 "y.tab.c"
    break;

  case 105: /* type_specifier: SHORT  */
#line 762 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "type_specifier -> SHORT" << endl;}
#line 2996 "y.tab.c"
    break;

  case 106: /* type_specifier: INT  */
#line 764 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "type_specifier -> INT" << endl;
            currType = INT;
        }
#line 3005 "y.tab.c"
    break;

  case 107: /* type_specifier: LONG  */
#line 768 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "type_specifier -> LONG" << endl;}
#line 3011 "y.tab.c"
    break;

  case 108: /* type_specifier: FLOAT  */
#line 770 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "type_specifier -> FLOAT" << endl;
            currType = FLOAT;
        }
#line 3020 "y.tab.c"
    break;

  case 109: /* type_specifier: DOUBLE  */
#line 774 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "type_specifier -> DOUBLE" << endl;}
#line 3026 "y.tab.c"
    break;

  case 110: /* type_specifier: SIGNED  */
#line 775 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "type_specifier -> SIGNED" << endl;}
#line 3032 "y.tab.c"
    break;

  case 111: /* type_specifier: UNSIGNED  */
#line 776 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "type_specifier -> UNSIGNED" << endl;}
#line 3038 "y.tab.c"
    break;

  case 112: /* type_specifier: BOOL  */
#line 778 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "type_specifier -> BOOL" << endl;
            currType = BOOL;
        }
#line 3047 "y.tab.c"
    break;

  case 113: /* type_specifier: COMPLEX  */
#line 782 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "type_specifier -> COMPLEX" << endl;}
#line 3053 "y.tab.c"
    break;

  case 114: /* type_specifier: IMAGINARY  */
#line 783 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "type_specifier -> IMAGINARY" << endl;}
#line 3059 "y.tab.c"
    break;

  case 115: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 786 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt" << endl;
            // do nothing, specifier qualifier should be epsilon
        }
#line 3068 "y.tab.c"
    break;

  case 116: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 790 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip : something is wrong with grammar */ cerr << "specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt" << endl;}
#line 3074 "y.tab.c"
    break;

  case 117: /* specifier_qualifier_list_opt: %empty  */
#line 793 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "specifier_qualifier_list_opt -> epsilon" << endl;
            // do nothing
        }
#line 3083 "y.tab.c"
    break;

  case 118: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 797 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "specifier_qualifier_list_opt -> specifier_qualifier_list" << endl;}
#line 3089 "y.tab.c"
    break;

  case 119: /* type_qualifier: CONST  */
#line 799 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "type_qualifier -> CONST" << endl;}
#line 3095 "y.tab.c"
    break;

  case 120: /* type_qualifier: RESTRICT  */
#line 800 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "type_qualifier -> RESTRICT" << endl;}
#line 3101 "y.tab.c"
    break;

  case 121: /* type_qualifier: VOLATILE  */
#line 801 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "type_qualifier -> VOLATILE" << endl;}
#line 3107 "y.tab.c"
    break;

  case 122: /* function_specifier: INLINE  */
#line 803 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "function_specifier -> INLINE" << endl;}
#line 3113 "y.tab.c"
    break;

  case 123: /* declarator: pointer_opt direct_declarator  */
#line 806 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "declarator -> pointer_opt direct_declarator" << endl;
            if((yyvsp[-1].symbolptr) != NULL)
            {
                SymbolType *temp = (yyvsp[-1].symbolptr) -> type;
                while(temp -> elementType != NULL) temp = temp -> elementType;
                temp -> elementType = (yyvsp[0].symbolptr) -> type;
                (yyvsp[0].symbolptr) -> update((yyvsp[-1].symbolptr) -> type);
            }
            (yyval.symbolptr) = (yyvsp[0].symbolptr);
        }
#line 3129 "y.tab.c"
    break;

  case 124: /* direct_declarator: IDENTIFIER  */
#line 819 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "direct_declarator -> IDENTIFIER" << endl;
            (yyvsp[0].symbolptr) -> update(new SymbolType(currType));
            (yyval.symbolptr) = (yyvsp[0].symbolptr);
        }
#line 3139 "y.tab.c"
    break;

  case 125: /* direct_declarator: LEFT_ROUND_BRACKET declarator RIGHT_ROUND_BRACKET  */
#line 825 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "direct_declarator -> LEFT_ROUND_BRACKET declarator RIGHT_ROUND_BRACKET" << endl;
            (yyval.symbolptr) = (yyvsp[-1].symbolptr);
        }
#line 3148 "y.tab.c"
    break;

  case 126: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt assignment_expression_opt RIGHT_SQUARE_BRACKET  */
#line 830 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "direct_declarator -> direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt assignment_expression_opt RIGHT_SQUARE_BRACKET" << endl;
            // type_qualifier_list_opt should always terminate at epsilon
            // assignment_expression_opt must have a value that is not epsilon
            if((yyvsp[-1].expr) -> entry -> value == "") yyerror("Hey there! something is wrong brother direct_declarator1\n");
            convertToInt((yyvsp[-1].expr));

            SymbolType *newType = new SymbolType(ARRAY, stoi((yyvsp[-1].expr) -> entry -> value), new SymbolType(currType));
            if((yyvsp[-4].symbolptr) -> type -> type == ARRAY)
            {
                SymbolType *temp = (yyvsp[-4].symbolptr) -> type;
                while(temp -> elementType -> type == ARRAY) temp = temp -> elementType;
                delete (temp -> elementType);
                temp -> elementType = newType;
            }
            else (yyvsp[-4].symbolptr) -> update(newType);
            (yyval.symbolptr) = (yyvsp[-4].symbolptr);
            
        }
#line 3172 "y.tab.c"
    break;

  case 127: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET STATIC type_qualifier_list_opt assignment_expression RIGHT_SQUARE_BRACKET  */
#line 849 "TinyC3_22CS30004_22CS30061.y"
                                                                                                                                    {/* skip */ cerr << "direct_declarator -> direct_declarator LEFT_SQUARE_BRACKET STATIC type_qualifier_list_opt assignment_expression RIGHT_SQUARE_BRACKET" << endl; yyerror("Hey there! something is wrong brother direct_declarator2\n");}
#line 3178 "y.tab.c"
    break;

  case 128: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list STATIC assignment_expression RIGHT_CURLY_BRACKET  */
#line 850 "TinyC3_22CS30004_22CS30061.y"
                                                                                                                                    {/* skip */ cerr << "direct_declarator -> direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list STATIC assignment_expression RIGHT_CURLY_BRACKET" << endl; yyerror("Hey there! something is wrong brother direct_declarator2\n");}
#line 3184 "y.tab.c"
    break;

  case 129: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt ASTERISK RIGHT_SQUARE_BRACKET  */
#line 851 "TinyC3_22CS30004_22CS30061.y"
                                                                                                                                    {/* doubt skip */ cerr << "direct_declarator -> direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt ASTERISK RIGHT_SQUARE_BRACKET" << endl; yyerror("Hey there! something is wrong brother direct_declarator2\n");}
#line 3190 "y.tab.c"
    break;

  case 130: /* direct_declarator: direct_declarator LEFT_ROUND_BRACKET CT parameter_type_list RIGHT_ROUND_BRACKET  */
#line 853 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "direct_declarator -> direct_declarator LEFT_ROUND_BRACKET CT parameter_type_list RIGHT_ROUND_BRACKET" << endl;
            SymbolTable *funcTable = currST;
            switchTable(currST -> parent);
            currST -> table.pop_back();
            funcTable -> name = "$function_" + (yyvsp[-4].symbolptr) -> name;
            (yyvsp[-4].symbolptr) -> nestedTable = funcTable;
            // funcTable -> print();           //TODO: free the lost table
            (yyvsp[-4].symbolptr) -> update(new SymbolType(FUNCTION));
            currSymbol = (yyvsp[-4].symbolptr);
            (yyval.symbolptr) = (yyvsp[-4].symbolptr);
        }
#line 3207 "y.tab.c"
    break;

  case 131: /* direct_declarator: direct_declarator LEFT_ROUND_BRACKET CT identifier_list_opt RIGHT_ROUND_BRACKET  */
#line 866 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "direct_declarator -> direct_declarator LEFT_ROUND_BRACKET CT identifier_list_opt RIGHT_ROUND_BRACKET" << endl;
            if((yyvsp[-1].symbolptr) != NULL) yyerror("Hey there! something is wrong brother direct_declarator2\n");
            SymbolTable *funcTable = currST;
            switchTable(currST -> parent);
            currST -> table.pop_back();
            funcTable -> name = "$function_" + (yyvsp[-4].symbolptr) -> name;
            (yyvsp[-4].symbolptr) -> nestedTable = funcTable;
            (yyvsp[-4].symbolptr) -> update(new SymbolType(FUNCTION));
            currSymbol = (yyvsp[-4].symbolptr);
            (yyval.symbolptr) = (yyvsp[-4].symbolptr);
        }
#line 3224 "y.tab.c"
    break;

  case 132: /* pointer: ASTERISK type_qualifier_list_opt  */
#line 880 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "pointer -> ASTERISK type_qualifier_list_opt" << endl;
            /* type_qualifier_list_opt should always terminate at epsilon */
            if((yyvsp[0].symbolptr) != NULL) yyerror("Hey there! something is wrong brother pointer1\n");
            (yyval.symbolptr) = new Symbol();
            (yyval.symbolptr) -> type = new SymbolType(POINTER, SIZE_OF_POINTER);
        }
#line 3236 "y.tab.c"
    break;

  case 133: /* pointer: ASTERISK type_qualifier_list_opt pointer  */
#line 888 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "pointer -> ASTERISK type_qualifier_list_opt pointer" << endl;
            /* type_qualifier_list_opt should always terminate at epsilon */
            if((yyvsp[-1].symbolptr) != NULL) yyerror("Hey there! something is wrong brother pointer2\n");
            (yyval.symbolptr) = new Symbol();
            (yyval.symbolptr) -> type = new SymbolType(POINTER, SIZE_OF_POINTER, (yyvsp[0].symbolptr) -> type);
        }
#line 3248 "y.tab.c"
    break;

  case 134: /* pointer_opt: %empty  */
#line 897 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "pointer_opt -> epsilon" << endl;
            (yyval.symbolptr) = NULL;
        }
#line 3257 "y.tab.c"
    break;

  case 135: /* pointer_opt: pointer  */
#line 902 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "pointer_opt -> pointer" << endl;
            (yyval.symbolptr) = (yyvsp[0].symbolptr);
        }
#line 3266 "y.tab.c"
    break;

  case 136: /* type_qualifier_list: type_qualifier  */
#line 907 "TinyC3_22CS30004_22CS30061.y"
                                                                {/* skip */ cerr << "type_qualifier_list -> type_qualifier" << endl;}
#line 3272 "y.tab.c"
    break;

  case 137: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 908 "TinyC3_22CS30004_22CS30061.y"
                                                                {/* skip */ cerr << "type_qualifier_list -> type_qualifier_list type_qualifier" << endl;}
#line 3278 "y.tab.c"
    break;

  case 138: /* type_qualifier_list_opt: %empty  */
#line 911 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "type_qualifier_list_opt -> epsilon" << endl;
            (yyval.symbolptr) = NULL;
        }
#line 3287 "y.tab.c"
    break;

  case 139: /* type_qualifier_list_opt: type_qualifier_list  */
#line 915 "TinyC3_22CS30004_22CS30061.y"
                                                                {/* skip */ cerr << "type_qualifier_list_opt -> type_qualifier_list" << endl;}
#line 3293 "y.tab.c"
    break;

  case 140: /* parameter_type_list: parameter_list  */
#line 918 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "parameter_type_list -> parameter_list" << endl;
            // do nothing
            (yyval.symbolptr) = (yyvsp[0].symbolptr);
        }
#line 3303 "y.tab.c"
    break;

  case 141: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 923 "TinyC3_22CS30004_22CS30061.y"
                                                                {/* skip */ cerr << "parameter_type_list -> parameter_list COMMA ELLIPSIS" << endl;}
#line 3309 "y.tab.c"
    break;

  case 142: /* parameter_list: parameter_declaration  */
#line 926 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "parameter_list -> parameter_declaration" << endl;
            // do nothing
        }
#line 3318 "y.tab.c"
    break;

  case 143: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 931 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "parameter_list -> parameter_list COMMA parameter_declaration" << endl;
            // do nothing
        }
#line 3327 "y.tab.c"
    break;

  case 144: /* parameter_declaration: declaration_specifiers declarator  */
#line 937 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "parameter_declaration -> declaration_specifiers declarator" << endl;
            // do nothing
        }
#line 3336 "y.tab.c"
    break;

  case 145: /* parameter_declaration: declaration_specifiers  */
#line 942 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "parameter_declaration -> declaration_specifiers" << endl;
            // do nothing
        }
#line 3345 "y.tab.c"
    break;

  case 146: /* identifier_list: IDENTIFIER  */
#line 947 "TinyC3_22CS30004_22CS30061.y"
                                                                {/* skip */ cerr << "identifier_list -> IDENTIFIER" << endl;}
#line 3351 "y.tab.c"
    break;

  case 147: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 948 "TinyC3_22CS30004_22CS30061.y"
                                                                {/* skip */ cerr << "identifier_list -> identifier_list COMMA IDENTIFIER" << endl;}
#line 3357 "y.tab.c"
    break;

  case 148: /* identifier_list_opt: %empty  */
#line 951 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "identifier_list_opt -> epsilon" << endl;
            // do nothing, always terminates to epsilon
            (yyval.symbolptr) = NULL;
        }
#line 3367 "y.tab.c"
    break;

  case 149: /* identifier_list_opt: identifier_list  */
#line 956 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "identifier_list_opt -> identifier_list" << endl;}
#line 3373 "y.tab.c"
    break;

  case 150: /* type_name: specifier_qualifier_list  */
#line 958 "TinyC3_22CS30004_22CS30061.y"
                                                {/* doubt skip */ cerr << "type_name -> specifier_qualifier_list" << endl;}
#line 3379 "y.tab.c"
    break;

  case 151: /* initializer: assignment_expression  */
#line 961 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "initializer -> assignment_expression" << endl;
            (yyval.symbolptr) = (yyvsp[0].expr) -> entry;
        }
#line 3388 "y.tab.c"
    break;

  case 152: /* initializer: LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET  */
#line 965 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip */ cerr << "initializer -> LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET" << endl;}
#line 3394 "y.tab.c"
    break;

  case 153: /* initializer: LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET  */
#line 966 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip */ cerr << "initializer -> LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET" << endl;}
#line 3400 "y.tab.c"
    break;

  case 154: /* initializer_list: designation_opt initializer  */
#line 968 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip */ cerr << "initializer_list -> designation_opt initializer" << endl;}
#line 3406 "y.tab.c"
    break;

  case 155: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 969 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip */ cerr << "initializer_list -> initializer_list COMMA designation_opt initializer" << endl;}
#line 3412 "y.tab.c"
    break;

  case 156: /* designation: designator_list ASSIGNMENT  */
#line 971 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "designation -> designator_list ASSIGNMENT" << endl;}
#line 3418 "y.tab.c"
    break;

  case 157: /* designation_opt: %empty  */
#line 973 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "designation_opt -> epsilon" << endl;}
#line 3424 "y.tab.c"
    break;

  case 158: /* designation_opt: designation  */
#line 974 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "designation_opt -> designation" << endl;}
#line 3430 "y.tab.c"
    break;

  case 159: /* designator_list: designator  */
#line 976 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "designator_list -> designator" << endl;}
#line 3436 "y.tab.c"
    break;

  case 160: /* designator_list: designator_list designator  */
#line 977 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "designator_list -> designator_list designator" << endl;}
#line 3442 "y.tab.c"
    break;

  case 161: /* designator: LEFT_SQUARE_BRACKET constant_expression RIGHT_SQUARE_BRACKET  */
#line 979 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip */ cerr << "designator -> LEFT_SQUARE_BRACKET constant_expression RIGHT_SQUARE_BRACKET" << endl;}
#line 3448 "y.tab.c"
    break;

  case 162: /* designator: DOT IDENTIFIER  */
#line 980 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip */ cerr << "designator -> DOT IDENTIFIER" << endl;}
#line 3454 "y.tab.c"
    break;

  case 163: /* statement: labeled_statement  */
#line 984 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "statement -> labeled_statement" << endl;}
#line 3460 "y.tab.c"
    break;

  case 164: /* statement: expression_statement  */
#line 986 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "statement -> expression_statement" << endl;
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3469 "y.tab.c"
    break;

  case 165: /* statement: compound_statement  */
#line 991 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "statement -> compound_statement" << endl;
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3478 "y.tab.c"
    break;

  case 166: /* statement: selection_statement  */
#line 996 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "statement -> selection_statement" << endl;
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3487 "y.tab.c"
    break;

  case 167: /* statement: iteration_statement  */
#line 1001 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "statement -> iteration_statement" << endl;
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3496 "y.tab.c"
    break;

  case 168: /* statement: jump_statement  */
#line 1006 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "statement -> jump_statement" << endl;
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3505 "y.tab.c"
    break;

  case 169: /* labeled_statement: IDENTIFIER COLON statement  */
#line 1011 "TinyC3_22CS30004_22CS30061.y"
                                                            {/* skip */ cerr << "labeled_statement -> IDENTIFIER COLON statement" << endl;}
#line 3511 "y.tab.c"
    break;

  case 170: /* labeled_statement: CASE constant_expression COLON statement  */
#line 1012 "TinyC3_22CS30004_22CS30061.y"
                                                            {/* skip */ cerr << "labeled_statement -> CASE constant_expression COLON statement" << endl;}
#line 3517 "y.tab.c"
    break;

  case 171: /* labeled_statement: DEFAULT COLON statement  */
#line 1013 "TinyC3_22CS30004_22CS30061.y"
                                                            {/* skip */ cerr << "labeled_statement -> DEFAULT COLON statement" << endl;}
#line 3523 "y.tab.c"
    break;

  case 172: /* compound_statement: LEFT_CURLY_BRACKET CT block_item_list_opt RIGHT_CURLY_BRACKET  */
#line 1016 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "compound_statement -> LEFT_CURLY_BRACKET CT block_item_list_opt RIGHT_CURLY_BRACKET" << endl;
            (yyval.stmt) = (yyvsp[-1].stmt);
            switchTable(currST -> parent);
        }
#line 3533 "y.tab.c"
    break;

  case 173: /* block_item_list_opt: %empty  */
#line 1023 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "block_item_list_opt -> epsilon" << endl;
            (yyval.stmt) = new Statement();
        }
#line 3542 "y.tab.c"
    break;

  case 174: /* block_item_list_opt: block_item_list  */
#line 1028 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "block_item_list_opt -> block_item_list" << endl;
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3551 "y.tab.c"
    break;

  case 175: /* block_item_list: block_item  */
#line 1034 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "block_item_list -> block_item" << endl;
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3560 "y.tab.c"
    break;

  case 176: /* block_item_list: block_item_list M block_item  */
#line 1039 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "block_item_list -> block_item_list M block_item" << endl;
            (yyval.stmt) = (yyvsp[0].stmt);
            backpatch((yyvsp[-2].stmt) -> nextlist, (yyvsp[-1].inst));
        }
#line 3570 "y.tab.c"
    break;

  case 177: /* block_item: declaration  */
#line 1046 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "block_item -> declaration" << endl;
            (yyval.stmt) = new Statement();
        }
#line 3579 "y.tab.c"
    break;

  case 178: /* block_item: statement  */
#line 1051 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "block_item -> statement" << endl;
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3588 "y.tab.c"
    break;

  case 179: /* expression_statement: expression_opt SEMICOLON  */
#line 1057 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "expression_statement -> expression_opt SEMICOLON" << endl;
            (yyval.stmt) = new Statement();
            if((yyvsp[-1].expr)) (yyval.stmt) -> nextlist = (yyvsp[-1].expr) -> nextlist; /* BEWARE : $1 may be null */
        }
#line 3598 "y.tab.c"
    break;

  case 180: /* selection_statement: IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET CB M statement  */
#line 1064 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "selection_statement -> IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET M statement" << endl;
            convertToBool((yyvsp[-4].expr));
            backpatch((yyvsp[-4].expr) -> truelist, (yyvsp[-1].inst));
            (yyval.stmt) = new Statement();
            (yyval.stmt) -> nextlist = merge((yyvsp[-4].expr) -> falselist, (yyvsp[0].stmt) -> nextlist);
        }
#line 3610 "y.tab.c"
    break;

  case 181: /* selection_statement: IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET CB M statement ELSE N M statement  */
#line 1072 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "selection_statement -> IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET M statement ELSE N M statement" << endl;
            convertToBool((yyvsp[-8].expr));
            backpatch((yyvsp[-8].expr) -> truelist, (yyvsp[-5].inst));
            backpatch((yyvsp[-8].expr) -> falselist, (yyvsp[-1].inst));
            (yyval.stmt) = new Statement();
            (yyval.stmt) -> nextlist = merge(merge((yyvsp[-4].stmt) -> nextlist, (yyvsp[-2].stmt) -> nextlist), (yyvsp[0].stmt) -> nextlist);
        }
#line 3623 "y.tab.c"
    break;

  case 182: /* selection_statement: SWITCH LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement  */
#line 1080 "TinyC3_22CS30004_22CS30061.y"
                                                                                        {/* skip */ cerr << "selection_statement -> SWITCH LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement" << endl;}
#line 3629 "y.tab.c"
    break;

  case 183: /* iteration_statement: WHILE M LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET CB M statement  */
#line 1083 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "iteration_statement -> WHILE M LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET M statement" << endl;
            convertToBool((yyvsp[-4].expr));
            backpatch((yyvsp[-4].expr) -> truelist, (yyvsp[-1].inst));
            backpatch((yyvsp[0].stmt) -> nextlist, (yyvsp[-6].inst));
            (yyval.stmt) = new Statement();
            (yyval.stmt) -> nextlist = (yyvsp[-4].expr) -> falselist;
            emit("goto", "", "", to_string((yyvsp[-6].inst)));
        }
#line 3643 "y.tab.c"
    break;

  case 184: /* iteration_statement: DO M statement M WHILE LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET SEMICOLON  */
#line 1093 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "iteration_statement -> DO M statement M WHILE LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET SEMICOLON" << endl;
            convertToBool((yyvsp[-2].expr));
            backpatch((yyvsp[-2].expr) -> truelist, (yyvsp[-7].inst));
            backpatch((yyvsp[-6].stmt) -> nextlist, (yyvsp[-5].inst));
            (yyval.stmt) = new Statement();
            (yyval.stmt) -> nextlist = (yyvsp[-2].expr) -> falselist;
        }
#line 3656 "y.tab.c"
    break;

  case 185: /* iteration_statement: FOR LEFT_ROUND_BRACKET expression_opt SEMICOLON M expression_opt SEMICOLON FN CB M expression_opt N RIGHT_ROUND_BRACKET M statement  */
#line 1102 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "iteration_statement -> FOR LEFT_ROUND_BRACKET expression_opt SEMICOLON M expression_opt SEMICOLON M expression_opt N RIGHT_ROUND_BRACKET M statement" << endl;
            if((yyvsp[-9].expr)) convertToBool((yyvsp[-9].expr));
            if((yyvsp[-9].expr)) backpatch((yyvsp[-9].expr) -> truelist, (yyvsp[-1].inst));
            if((yyvsp[-3].stmt)) backpatch((yyvsp[-3].stmt) -> nextlist, (yyvsp[-10].inst));
            if((yyvsp[0].stmt)) backpatch((yyvsp[0].stmt) -> nextlist, (yyvsp[-5].inst));
            (yyval.stmt) = new Statement();
            if((yyvsp[-9].expr)) (yyval.stmt) -> nextlist = (yyvsp[-9].expr) -> falselist;
            else (yyval.stmt) -> nextlist = makelist();
            emit("goto", "", "", to_string((yyvsp[-5].inst)));
        }
#line 3672 "y.tab.c"
    break;

  case 186: /* iteration_statement: FOR LEFT_ROUND_BRACKET declaration expression_opt SEMICOLON expression_opt RIGHT_ROUND_BRACKET statement  */
#line 1113 "TinyC3_22CS30004_22CS30061.y"
                                                                                                                                        {/* skip */ cerr << "iteration_statement -> FOR LEFT_ROUND_BRACKET declaration expression_opt SEMICOLON expression_opt RIGHT_ROUND_BRACKET statement" << endl;}
#line 3678 "y.tab.c"
    break;

  case 187: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 1115 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "jump_statement -> GOTO IDENTIFIER SEMICOLON" << endl;}
#line 3684 "y.tab.c"
    break;

  case 188: /* jump_statement: CONTINUE SEMICOLON  */
#line 1116 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "jump_statement -> CONTINUE SEMICOLON" << endl;}
#line 3690 "y.tab.c"
    break;

  case 189: /* jump_statement: BREAK SEMICOLON  */
#line 1117 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "jump_statement -> BREAK SEMICOLON" << endl;}
#line 3696 "y.tab.c"
    break;

  case 190: /* jump_statement: RETURN expression_opt SEMICOLON  */
#line 1119 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "jump_statement -> RETURN expression_opt SEMICOLON" << endl;
            (yyval.stmt) = new Statement();
            if((yyvsp[-1].expr))
                emit("return", (yyvsp[-1].expr) -> entry -> name, "", "");
            else
                emit("return", "", "", "");
        }
#line 3709 "y.tab.c"
    break;

  case 191: /* translation_unit: external_declaration  */
#line 1130 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "translation_unit -> external_declaration" << endl;}
#line 3715 "y.tab.c"
    break;

  case 192: /* translation_unit: translation_unit external_declaration  */
#line 1131 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "translation_unit -> translation_unit external_declaration" << endl;}
#line 3721 "y.tab.c"
    break;

  case 193: /* external_declaration: function_definition  */
#line 1133 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "external_declaration -> function_definition" << endl;}
#line 3727 "y.tab.c"
    break;

  case 194: /* external_declaration: declaration  */
#line 1134 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "external_declaration -> declaration" << endl;}
#line 3733 "y.tab.c"
    break;

  case 195: /* function_definition: declaration_specifiers declarator declaration_list_opt CTF compound_statement  */
#line 1137 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement" << endl;
            SymbolTable *child = currST -> table.back() -> nestedTable;
            SymbolTable *funcTable = currST -> lookup((yyvsp[-3].symbolptr) -> name) -> nestedTable;
            currST -> table.pop_back();
            for(Symbol *s: child -> table) funcTable -> table.push_back(s);
            if(quadTable -> arr.back() -> op != "return") emit("return", "", "", "");
            switchTable(globalST);
        }
#line 3747 "y.tab.c"
    break;

  case 196: /* declaration_list: declaration  */
#line 1147 "TinyC3_22CS30004_22CS30061.y"
                                                                                                        {/* skip */ cerr << "declaration_list -> declaration" << endl;}
#line 3753 "y.tab.c"
    break;

  case 197: /* declaration_list: declaration_list declaration  */
#line 1148 "TinyC3_22CS30004_22CS30061.y"
                                                                                                        {/* skip */ cerr << "declaration_list -> declaration_list declaration" << endl;}
#line 3759 "y.tab.c"
    break;

  case 198: /* declaration_list_opt: %empty  */
#line 1150 "TinyC3_22CS30004_22CS30061.y"
                                                                                                        {/* skip */ cerr << "declaration_list_opt -> epsilon" << endl;}
#line 3765 "y.tab.c"
    break;

  case 199: /* declaration_list_opt: declaration_list  */
#line 1151 "TinyC3_22CS30004_22CS30061.y"
                                                                                                        {/* skip */ cerr << "declaration_list_opt -> declaration_list" << endl;}
#line 3771 "y.tab.c"
    break;

  case 200: /* M: %empty  */
#line 1156 "TinyC3_22CS30004_22CS30061.y"
        {
            (yyval.inst) = nextinstr();
        }
#line 3779 "y.tab.c"
    break;

  case 201: /* N: %empty  */
#line 1161 "TinyC3_22CS30004_22CS30061.y"
        {
            if(currExprFor) {
                (yyval.stmt) = new Statement();
                (yyval.stmt) -> nextlist = makelist(nextinstr());
                emit("goto", "", "", "__");
            }
            else (yyval.stmt) = NULL;
        }
#line 3792 "y.tab.c"
    break;

  case 202: /* CT: %empty  */
#line 1171 "TinyC3_22CS30004_22CS30061.y"
        {
            addNestedTable(currST);
        }
#line 3800 "y.tab.c"
    break;

  case 203: /* CTF: %empty  */
#line 1176 "TinyC3_22CS30004_22CS30061.y"
        {
            emit("label", currSymbol -> name, "", "");
            currST = currSymbol -> nestedTable;
        }
#line 3809 "y.tab.c"
    break;

  case 204: /* CB: %empty  */
#line 1181 "TinyC3_22CS30004_22CS30061.y"
        {
            convertToBool(currExpr);
        }
#line 3817 "y.tab.c"
    break;

  case 205: /* FN: %empty  */
#line 1186 "TinyC3_22CS30004_22CS30061.y"
        {
            currExprFor = currExpr;
        }
#line 3825 "y.tab.c"
    break;


#line 3829 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1190 "TinyC3_22CS30004_22CS30061.y"


void yyerror(string s) {
    cerr << s << endl;
    cerr << "Error at line number: " << yylineno << " at token: " << yytext << endl;
    exit(1);
}   
