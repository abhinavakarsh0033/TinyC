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
  YYSYMBOL_CT = 167                        /* CT  */
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
#define YYLAST   1031

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  202
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  340

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
       0,    66,    66,    73,    81,    90,    99,   108,   116,   122,
     133,   158,   167,   168,   169,   178,   187,   188,   190,   196,
     204,   208,   214,   219,   225,   231,   273,   274,   276,   281,
     286,   291,   296,   301,   307,   313,   315,   332,   340,   348,
     357,   362,   371,   381,   386,   395,   405,   410,   423,   435,
     447,   460,   465,   477,   490,   495,   505,   510,   520,   525,
     535,   540,   553,   558,   571,   576,   578,   583,   593,   597,
     603,   608,   609,   610,   611,   612,   613,   614,   615,   616,
     617,   619,   624,   627,   632,   638,   642,   648,   649,   654,
     655,   657,   658,   660,   661,   663,   668,   674,   679,   687,
     688,   689,   690,   692,   697,   702,   703,   708,   709,   714,
     715,   716,   717,   722,   723,   725,   730,   733,   737,   739,
     740,   741,   743,   745,   758,   764,   769,   789,   790,   791,
     792,   801,   812,   820,   830,   834,   840,   841,   844,   848,
     850,   856,   858,   863,   869,   874,   880,   881,   884,   889,
     891,   893,   898,   899,   901,   902,   904,   906,   907,   909,
     910,   912,   913,   917,   918,   923,   928,   933,   938,   944,
     945,   946,   948,   955,   959,   965,   970,   977,   982,   988,
     995,  1003,  1012,  1014,  1024,  1033,  1044,  1046,  1047,  1048,
    1049,  1061,  1062,  1064,  1065,  1067,  1074,  1075,  1077,  1078,
    1083,  1088,  1095
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
  "N", "CT", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-186)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-203)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     914,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,    33,  -186,     2,   914,   914,   914,   914,   914,  -186,
    -186,  -186,   -40,     1,    81,  -186,   533,  -186,     8,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,   -40,    84,  -186,    84,
     643,  -186,     2,   914,   115,    84,  -186,   146,  -186,  -186,
    -186,   107,   495,    53,   713,   713,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,   765,  -186,    77,
     219,   783,  -186,    82,   113,    55,   135,   142,   137,   122,
     155,   156,   141,  -186,  -186,  -186,  -186,   235,  -186,   185,
     -44,   187,  -186,    61,   939,  -186,   939,   191,   783,   148,
      69,  -186,   643,     6,  -186,   495,  -186,  -186,   495,  -186,
     783,   783,   151,   152,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,   783,  -186,  -186,
     783,   783,   783,   783,   783,   783,   783,   783,   783,   783,
     783,   783,   783,   783,   783,   783,  -186,  -186,   783,   168,
     170,   783,   173,   169,  -186,   206,   162,   208,   783,   212,
    -186,   204,   182,  -186,  -186,  -186,  -186,   214,   216,  -186,
    -186,  -186,  -186,  -186,  -186,   -40,   -41,   835,   877,  -186,
     783,  -186,  -186,  -186,   695,  -186,   221,  -186,  -186,   136,
    -186,  -186,  -186,   222,   223,    49,   213,   224,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,    82,    82,   113,   113,    55,
      55,    55,    55,   135,   135,   142,   137,   122,   783,   783,
       7,   621,  -186,   196,  -186,   621,   621,   411,   197,   783,
     200,   783,   228,  -186,  -186,   323,   783,   783,   234,  -186,
     237,  -186,    35,   238,   231,  -186,   236,   243,  -186,    53,
    -186,  -186,  -186,   643,   249,   249,  -186,   783,  -186,   155,
     156,   783,  -186,   621,  -186,  -186,   232,   783,  -186,    62,
    -186,    78,   783,  -186,   266,   263,  -186,  -186,  -186,  -186,
     838,   225,  -186,   150,  -186,  -186,  -186,  -186,   183,  -186,
     239,  -186,   621,    87,  -186,  -186,  -186,  -186,  -186,  -186,
     139,   268,   783,   783,   621,  -186,  -186,  -186,   783,   240,
     272,   209,   621,    88,  -186,   621,  -186,  -186,   242,   783,
    -186,  -186,  -186,  -186,   621,   274,  -186,  -186,   621,  -186
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
       0,   196,   134,   199,     0,   134,   124,   123,   137,   133,
      96,    97,     0,   157,     0,     0,    28,    29,    30,    31,
      32,    33,     3,     4,     5,     6,     7,     0,     9,    22,
      34,     0,    36,    40,    43,    46,    51,    54,    56,    58,
      60,    62,    64,    66,   151,    98,   197,    83,   195,     0,
     138,     0,    81,     0,   117,   150,   117,     0,     0,     0,
       0,   158,     0,     0,   159,     0,    23,    24,     0,    26,
       0,    20,     0,     0,    14,    15,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,     0,    34,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   200,   200,     0,     3,
       0,     0,     0,     0,   200,     0,     0,     0,    83,     0,
     200,    84,     0,   177,   178,   163,   165,     0,   200,   175,
     164,   166,   167,   168,   125,   138,   139,    68,   148,     8,
       0,   118,   115,   116,     0,    85,     0,   162,   152,   157,
     154,   156,   160,     0,     0,     0,    21,     0,    18,    12,
      13,    67,    37,    38,    39,    41,    42,    44,    45,    47,
      48,    49,    50,    52,    53,    55,    57,    59,     0,     0,
       0,    83,   189,     0,   188,    83,    83,    83,     0,     0,
       0,     0,     0,   179,   172,    83,     0,     0,    29,    69,
       0,   146,   134,     0,   140,   142,   149,     0,    82,   157,
      35,   161,   153,     0,     0,    27,    10,     0,    11,    61,
      63,     0,   169,    83,   171,   200,     0,    83,   187,     0,
     190,     0,     0,   176,     0,     0,   129,   126,   144,   130,
       0,     0,   131,     0,   155,    19,    65,   170,     0,   200,
       0,   200,    83,     0,   127,   128,   141,   143,   147,    16,
     157,     0,    83,    83,    83,   182,   200,    17,     0,     0,
       0,   180,    83,     0,   200,    83,   201,   183,     0,    83,
     186,   200,   184,   201,    83,     0,   181,   200,    83,   185
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -186,  -186,  -186,  -186,  -186,  -186,   -35,  -186,   -70,    39,
      40,    18,    44,   128,   129,   127,    56,    71,  -186,  -101,
     -47,  -186,  -186,   -61,  -156,   140,   -31,     0,   108,  -186,
    -186,   270,  -186,   -54,    75,   211,    23,  -186,   -21,  -186,
     273,  -186,   229,   -94,  -186,  -186,    41,  -186,  -186,   -19,
    -108,    73,  -186,  -185,  -186,   220,   -99,  -186,   283,  -186,
    -186,    93,  -186,  -186,  -186,  -186,  -186,   316,  -186,  -186,
    -186,  -147,    12,  -186
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    21,    78,    79,   206,   207,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
     102,   250,   137,   171,   172,   196,    22,    52,    40,    33,
      34,    35,    24,    25,   105,   192,    26,    27,    61,    57,
      37,    38,    46,    47,   253,   254,   255,   256,   257,   107,
      95,   110,   111,   112,   113,   114,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,    28,    29,    30,    53,
      54,   228,   331,   101
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   103,    36,    94,   200,    51,   187,   195,   104,   108,
     229,   139,   240,    55,   263,   109,     3,   236,    32,     3,
       3,   190,    96,   242,    39,    39,    39,    39,    23,   116,
     117,   245,    11,    31,    99,    11,    11,   185,    48,   -93,
     247,  -145,   119,   271,    17,   201,   138,    17,    17,  -145,
     104,    32,   104,   266,   103,    45,   108,   103,    56,   205,
     195,   104,   109,   190,   104,    94,   173,   189,   301,    58,
     212,   213,   214,   138,   208,   190,   190,   198,   145,   146,
     120,   276,   121,   199,   302,   106,   122,   123,   124,   125,
     211,   246,   190,   316,   328,    49,   203,   230,   140,   204,
      32,   190,   190,   141,   142,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   300,    97,    45,   260,   263,   138,   106,   298,   106,
     143,   144,   272,    41,    42,    43,   274,   275,   106,   108,
     249,   106,   108,   258,   262,   109,    50,   317,   109,   100,
     153,  -202,   312,   154,   314,   294,   319,   320,   309,   138,
     147,   148,   149,   150,   310,   219,   220,   221,   222,   322,
     296,   151,   152,   333,   297,   157,   158,   329,   279,   191,
     281,   191,   215,   216,   334,   217,   218,   155,   252,   156,
     338,   184,   188,   138,   138,   223,   224,   194,   197,   284,
     285,   209,   210,   315,   231,   235,   277,   232,    45,    58,
     234,   237,   238,   239,   173,   321,    94,   241,   190,   243,
     295,   303,   244,   327,  -174,   261,   330,   267,   264,   265,
     268,   288,   273,   282,   278,   336,   138,   280,   286,   339,
      62,   287,    97,  -173,   289,   290,    64,    65,    66,   292,
     291,    67,    68,    69,    70,    71,   259,   323,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   299,
     304,   305,   311,   318,   326,   308,   313,   324,   325,   332,
     337,   225,   227,   226,   269,   159,    73,    74,    75,    76,
     252,     1,   160,   161,     2,     3,   162,   163,   164,     4,
     270,   233,     5,     6,   165,   166,   167,     7,     8,     9,
      10,    11,   168,    12,    13,    77,    14,   193,   169,    60,
      59,    15,    16,    17,   170,    18,    19,    20,    62,   186,
      97,   307,   293,   202,    64,    65,    66,    98,   283,    67,
      68,    69,    70,    71,    44,   335,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   159,    73,    74,    75,    76,     0,     1,
     160,   161,     2,     3,   162,   163,   164,     4,     0,     0,
       5,     6,   165,   166,   167,     7,     8,     9,    10,    11,
     168,    12,    13,    77,    14,     0,   169,     0,     0,    15,
      16,    17,   170,    18,    19,    20,    62,     0,     0,     0,
       0,     0,    64,    65,    66,     0,     0,    67,    68,    69,
      70,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,     0,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     0,     5,     6,
       0,     0,     0,     7,     8,     9,    10,    11,     0,    12,
      13,    77,    14,     0,     0,     0,     0,    15,    16,    17,
      62,    18,    19,    20,     0,     0,    64,    65,    66,     0,
       0,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -198,     0,     0,     0,     0,    72,    73,    74,    75,    76,
       0,     0,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     0,     0,     6,     0,     0,     0,     0,     8,     9,
       0,    11,    50,    12,    13,    77,     0,     0,     0,     0,
       0,    15,    16,    17,     0,    18,    19,    20,     0,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     0,
       5,     6,     0,     0,     0,     7,     8,     9,    10,    11,
       0,    12,    13,     0,    14,     0,     0,     0,     0,    15,
      16,    17,     0,    18,    19,    20,    62,     0,    97,     0,
       0,     0,    64,    65,    66,     0,     0,    67,    68,    69,
      70,    71,     0,     0,     0,     0,     0,     0,    62,     0,
      63,     0,     0,     0,    64,    65,    66,     0,     0,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,   159,    73,    74,    75,    76,     0,     0,   160,   161,
       0,     0,   162,   163,   164,     0,     0,     0,     0,     0,
     165,   166,   167,    72,    73,    74,    75,    76,   168,     0,
      62,    77,   259,     0,   169,     0,    64,    65,    66,     0,
     170,    67,    68,    69,    70,    71,     0,     0,   115,     0,
       0,     0,     0,    77,    64,    65,    66,     0,     0,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,     0,     0,
     118,     0,     0,     0,     0,    77,    64,    65,    66,     0,
       0,    67,    68,    69,    70,    71,     0,     0,    62,     0,
       0,     0,     0,    77,    64,    65,    66,     0,     0,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,     0,     0,
      62,     0,     0,     0,     0,    77,    64,    65,    66,     0,
       0,   248,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   306,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
       0,     0,     0,     0,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     0,     5,     6,     0,     0,     0,
       7,     8,     9,    10,    11,    77,    12,    13,     0,    14,
       0,     0,     0,     0,    15,    16,    17,   251,    18,    19,
      20,     0,     0,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     0,     5,     6,     0,     0,     0,     7,
       8,     9,    10,    11,     0,    12,    13,     0,    14,     0,
       0,     0,     0,    15,    16,    17,     0,    18,    19,    20,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       0,     5,     6,     0,     0,     0,     7,     8,     9,    10,
      11,     0,    12,    13,     0,    14,     0,     0,     2,     3,
      15,    16,    17,     4,    18,    19,    20,     6,     0,     0,
       0,     0,     8,     9,     0,    11,     0,    12,    13,     0,
       0,     0,     0,     0,     0,    15,    16,    17,     0,    18,
      19,    20
};

static const yytype_int16 yycheck[] =
{
       0,    62,    23,    50,   112,    36,   100,   108,    62,     3,
     157,    81,   168,     5,   199,     9,    60,   164,    16,    60,
      60,    14,    53,   170,    24,    25,    26,    27,    28,    64,
      65,   178,    76,     0,    55,    76,    76,    81,    37,    37,
      81,     6,    77,    36,    88,    39,    81,    88,    88,    14,
     104,    16,   106,     4,   115,    32,     3,   118,    50,   120,
     161,   115,     9,    14,   118,   112,    97,     6,     6,    46,
     140,   141,   142,   108,   121,    14,    14,     8,    23,    24,
       3,   237,     5,    14,     6,    62,     9,    10,    11,    12,
     137,   185,    14,     6,     6,    14,   115,   158,    16,   118,
      16,    14,    14,    21,    22,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   277,     7,   100,   194,   310,   161,   104,   275,   106,
      17,    18,   231,    25,    26,    27,   235,   236,   115,     3,
     187,   118,     3,   190,     8,     9,    39,     8,     9,     3,
      13,     5,   299,    31,   301,   263,   312,   313,     8,   194,
      25,    26,    27,    28,    14,   147,   148,   149,   150,   316,
     271,    29,    30,   329,   273,    34,    35,   324,   239,   104,
     241,   106,   143,   144,   331,   145,   146,    32,   188,    33,
     337,     6,     5,   228,   229,   151,   152,     6,    50,   246,
     247,    50,    50,   302,    36,    36,   237,    37,   185,   186,
      37,     5,    50,     5,   245,   314,   263,     5,    14,    37,
     267,   282,     8,   322,     8,     4,   325,    14,     6,     6,
       6,   252,    36,     5,    37,   334,   271,    37,     4,   338,
       5,     4,     7,     8,     6,    14,    11,    12,    13,     6,
      14,    16,    17,    18,    19,    20,     7,   318,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    37,
       4,     8,    89,     5,    65,    50,    37,    37,     6,    37,
       6,   153,   155,   154,   228,    50,    51,    52,    53,    54,
     290,    56,    57,    58,    59,    60,    61,    62,    63,    64,
     229,   161,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,   106,    83,    49,
      47,    86,    87,    88,    89,    90,    91,    92,     5,   100,
       7,   290,   259,   113,    11,    12,    13,    54,   245,    16,
      17,    18,    19,    20,    28,   333,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    -1,    83,    -1,    -1,    86,
      87,    88,    89,    90,    91,    92,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    -1,    -1,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    -1,    56,    -1,    -1,
      59,    60,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,    78,
      79,    80,    81,    -1,    -1,    -1,    -1,    86,    87,    88,
       5,    90,    91,    92,    -1,    -1,    11,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,
      -1,    76,    39,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    -1,    90,    91,    92,    -1,    56,
      -1,    -1,    59,    60,    -1,    -1,    -1,    64,    -1,    -1,
      67,    68,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      -1,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,
      87,    88,    -1,    90,    91,    92,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,    13,    -1,    -1,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    -1,    -1,    57,    58,
      -1,    -1,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    50,    51,    52,    53,    54,    77,    -1,
       5,    80,     7,    -1,    83,    -1,    11,    12,    13,    -1,
      89,    16,    17,    18,    19,    20,    -1,    -1,     5,    -1,
      -1,    -1,    -1,    80,    11,    12,    13,    -1,    -1,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    -1,    -1,
       5,    -1,    -1,    -1,    -1,    80,    11,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    -1,    -1,     5,    -1,
      -1,    -1,    -1,    80,    11,    12,    13,    -1,    -1,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    -1,    -1,
       5,    -1,    -1,    -1,    -1,    80,    11,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    59,    60,    -1,
      -1,    -1,    64,    -1,    -1,    67,    68,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    80,    78,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    88,    50,    90,    91,
      92,    -1,    -1,    56,    -1,    -1,    59,    60,    -1,    -1,
      -1,    64,    -1,    -1,    67,    68,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    -1,    78,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    90,    91,    92,
      56,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,    -1,
      -1,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    78,    79,    -1,    81,    -1,    -1,    59,    60,
      86,    87,    88,    64,    90,    91,    92,    68,    -1,    -1,
      -1,    -1,    73,    74,    -1,    76,    -1,    78,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    90,
      91,    92
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
     110,   111,   112,   113,   114,   144,   120,     7,   152,   132,
       3,   167,   114,   117,   127,   128,   130,   143,     3,     9,
     145,   146,   147,   148,   149,     5,   100,   100,     5,   100,
       3,     5,     9,    10,    11,    12,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,   116,   100,   102,
      16,    21,    22,    17,    18,    23,    24,    25,    26,    27,
      28,    29,    30,    13,    31,    32,    33,    34,    35,    50,
      57,    58,    61,    62,    63,    69,    70,    71,    77,    83,
      89,   117,   118,   120,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,     6,    81,   136,   137,     5,     6,
      14,   128,   129,   129,     6,   113,   119,    50,     8,    14,
     144,    39,   149,   143,   143,   117,    98,    99,   114,    50,
      50,   114,   102,   102,   102,   103,   103,   104,   104,   105,
     105,   105,   105,   106,   106,   107,   108,   109,   165,   165,
     117,    36,    37,   119,    37,    36,   165,     5,    50,     5,
     118,     5,   165,    37,     8,   165,   137,    81,    16,   114,
     115,    50,   121,   138,   139,   140,   141,   142,   114,     7,
     102,     4,     8,   147,     6,     6,     4,    14,     6,   110,
     111,    36,   150,    36,   150,   150,   118,   120,    37,   117,
      37,   117,     5,   155,   114,   114,     4,     4,   132,     6,
      14,    14,     6,   145,   144,   114,   113,   150,   165,    37,
     118,     6,     6,   117,     4,     8,    38,   140,    50,     8,
      14,    89,   165,    37,   165,   150,     6,     8,     5,   118,
     118,   150,   165,   117,    37,     6,    65,   150,     6,   165,
     150,   166,    37,   118,   165,   166,   150,     6,   165,   150
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
     165,   166,   167
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
       1,     4,     1,     4,     1,     5,     1,     3,     0,     1,
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
       4,     3,     3,     0,     1,     1,     3,     1,     1,     2,
       6,    10,     5,     7,     9,    13,     8,     3,     2,     2,
       3,     1,     2,     1,     1,     4,     1,     2,     0,     1,
       0,     0,     0
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
#line 1894 "y.tab.c"
    break;

  case 3: /* primary_expression: IDENTIFIER  */
#line 74 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "primary_expression -> IDENTIFIER" << endl;
            (yyval.expr) = new Expression();
            (yyval.expr) -> entry = (yyvsp[0].symbolptr);
            (yyval.expr) -> type = INT;                                            //TODO: fill this
            // $$ -> entry -> type = new SymbolType(IDENTIFIER);            //TODO: check if this is correct
        }
#line 1906 "y.tab.c"
    break;

  case 4: /* primary_expression: INTEGER_CONSTANT  */
#line 82 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "primary_expression -> INTEGER_CONSTANT" << endl;
			(yyval.expr) = new Expression();
			(yyval.expr) -> entry = (yyvsp[0].symbolptr);
            (yyval.expr) -> type = INT;                                            //TODO: fill this
            (yyval.expr) -> entry -> type = new SymbolType(INT, SIZE_OF_INT);
            emit("=", (yyvsp[0].symbolptr) -> value, "", (yyval.expr) -> entry -> name);
		}
#line 1919 "y.tab.c"
    break;

  case 5: /* primary_expression: FLOATING_CONSTANT  */
#line 91 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "primary_expression -> FLOATING_CONSTANT" << endl;
			(yyval.expr) = new Expression();
			(yyval.expr) -> entry = (yyvsp[0].symbolptr);
            (yyval.expr) -> type = INT;                                            //TODO: fill this
			(yyval.expr) -> entry -> type = new SymbolType(FLOAT, SIZE_OF_FLOAT);  
            emit("=", (yyvsp[0].symbolptr) -> value, "", (yyval.expr) -> entry -> name);
        }
#line 1932 "y.tab.c"
    break;

  case 6: /* primary_expression: CHARACTER_CONSTANT  */
#line 100 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "primary_expression -> CHARACTER_CONSTANT" << endl;
			(yyval.expr) = new Expression();
			(yyval.expr) -> entry = (yyvsp[0].symbolptr);
            (yyval.expr) -> type = INT;                                            //TODO: fill this
			(yyval.expr) -> entry -> type = new SymbolType(CHAR, SIZE_OF_CHAR);    
            emit("=", (yyvsp[0].symbolptr) -> value, "", (yyval.expr) -> entry -> name);
		}
#line 1945 "y.tab.c"
    break;

  case 7: /* primary_expression: STRING_LITERAL  */
#line 109 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "primary_expression -> STRING_LITERAL" << endl;
            (yyval.expr) = new Expression();
            (yyval.expr) -> entry = (yyvsp[0].symbolptr);
            (yyval.expr) -> type = INT;                                            //TODO: fill this
            (yyval.expr) -> entry -> type = new SymbolType(ARRAY, ((yyvsp[0].symbolptr) -> value).size(), new SymbolType(CHAR, SIZE_OF_CHAR));
        }
#line 1957 "y.tab.c"
    break;

  case 8: /* primary_expression: LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET  */
#line 117 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "primary_expression -> LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET" << endl;
            (yyval.expr) = (yyvsp[-1].expr);
        }
#line 1966 "y.tab.c"
    break;

  case 9: /* postfix_expression: primary_expression  */
#line 123 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "postfix_expression -> primary_expression" << endl;
            // $$ = new ArrayExpression();
			(yyval.expr) = new Expression();
			(yyval.expr) -> arr = new ArrayExpression();
			(yyval.expr) -> arr -> entry = (yyvsp[0].expr) -> entry;
            if((yyvsp[0].expr) -> entry == NULL) yyerror("Hey there! something is wrong brother postfix1\n");
			(yyval.expr) -> arr -> elementType = (yyvsp[0].expr) -> entry -> type;
			(yyval.expr) -> arr -> addr = (yyval.expr) -> arr -> entry;
        }
#line 1981 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 134 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "postfix_expression -> postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET" << endl;
            // $$ = new ArrayExpression();
            if((yyvsp[-3].expr) -> arr -> entry == NULL) yyerror("Hey there! something is wrong brother postfix0\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> arr = new ArrayExpression();
			(yyval.expr) -> arr -> entry = (yyvsp[-3].expr) -> arr -> entry;
			(yyval.expr) -> arr -> elementType = (yyvsp[-3].expr) -> arr -> elementType -> elementType;
			(yyval.expr) -> arr -> addr = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));	//creating temp to calculate index in arr
			(yyval.expr) -> arr -> type = ARRAY;

			if((yyvsp[-3].expr) -> arr -> type == ARRAY)
			{
				Symbol *temp = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));
				//sizeOfType recusively calculates the size of the arr
				emit("*", (yyvsp[-1].expr) -> entry -> name, to_string(sizeOfType((yyvsp[-3].expr) -> arr -> elementType)), temp -> name);	
				emit("+", (yyvsp[-3].expr) -> arr -> addr -> name, temp -> name, (yyval.expr) -> arr -> addr -> name);
			}
			else	//TODO: verify this
			{
                emit("*", (yyvsp[-1].expr) -> entry -> name, to_string(sizeOfType((yyvsp[-3].expr) -> arr -> elementType)), (yyval.expr) -> arr -> addr -> name);
				// emit("*", $$ -> addr -> name);
			}
        }
#line 2010 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression LEFT_ROUND_BRACKET argument_expression_list_opt RIGHT_ROUND_BRACKET  */
#line 159 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "postfix_expression -> postfix_expression LEFT_ROUND_BRACKET argument_expression_list_opt RIGHT_ROUND_BRACKET" << endl;
            /* do it not now */
            (yyval.expr) = new Expression();
			(yyval.expr) -> arr = new ArrayExpression();
			(yyval.expr) -> arr -> entry = SymbolTable::gentemp((yyvsp[-3].expr) -> arr -> elementType);
            emit("call", (yyvsp[-3].expr) -> arr -> entry -> name, to_string((yyvsp[-1].cnt)), (yyval.expr) -> arr -> entry -> name);
        }
#line 2023 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 167 "TinyC3_22CS30004_22CS30061.y"
                                                                                                                            {/* skip */ cerr << "postfix_expression -> postfix_expression DOT IDENTIFIER" << endl;}
#line 2029 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 168 "TinyC3_22CS30004_22CS30061.y"
                                                                                                                            {/* skip */ cerr << "postfix_expression -> postfix_expression ARROW IDENTIFIER" << endl;}
#line 2035 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression INCREMENT  */
#line 170 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "postfix_expression -> postfix_expression INCREMENT" << endl;
			(yyval.expr) = new Expression();
			(yyval.expr) -> arr = new ArrayExpression();
			(yyval.expr) -> arr -> entry = SymbolTable::gentemp((yyvsp[-1].expr) -> arr -> entry -> type);
			emit("=", (yyvsp[-1].expr) -> arr -> entry -> name, "", (yyval.expr) -> arr -> entry -> name);
			emit("+", (yyvsp[-1].expr) -> arr -> entry -> name, "1", (yyvsp[-1].expr) -> arr -> entry -> name);
		}
#line 2048 "y.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression DECREMENT  */
#line 179 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "postfix_expression -> postfix_expression DECREMENT" << endl;
			(yyval.expr) = new Expression();
			(yyval.expr) -> arr = new ArrayExpression();
			(yyval.expr) -> arr -> entry = SymbolTable::gentemp((yyvsp[-1].expr) -> arr -> entry -> type);
			emit("=", (yyvsp[-1].expr) -> arr -> entry -> name, "", (yyval.expr) -> arr -> entry -> name);
			emit("-", (yyvsp[-1].expr) -> arr -> entry -> name, "1", (yyvsp[-1].expr) -> arr -> entry -> name);
		}
#line 2061 "y.tab.c"
    break;

  case 16: /* postfix_expression: LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET  */
#line 187 "TinyC3_22CS30004_22CS30061.y"
                                                                                                                            {/* doubt_skip */ cerr << "postfix_expression -> LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET" << endl; yyerror("Hey there! something is wrong brother postfix2\n");}
#line 2067 "y.tab.c"
    break;

  case 17: /* postfix_expression: LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET  */
#line 188 "TinyC3_22CS30004_22CS30061.y"
                                                                                                                            {/* doubt skip */ cerr << "postfix_expression -> LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET" << endl; yyerror("Hey there! something is wrong brother postfix3\n");}
#line 2073 "y.tab.c"
    break;

  case 18: /* argument_expression_list: assignment_expression  */
#line 191 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "argument_expression_list -> assignment_expression" << endl;
			(yyval.cnt) = 1;
			emit("param", (yyvsp[0].expr) -> entry -> name, "", "");
		}
#line 2083 "y.tab.c"
    break;

  case 19: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 197 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "argument_expression_list -> argument_expression_list COMMA assignment_expression" << endl;
			(yyval.cnt) = (yyvsp[-2].cnt) + 1;
			emit("param", (yyvsp[0].expr) -> entry -> name, "", "");
		}
#line 2093 "y.tab.c"
    break;

  case 20: /* argument_expression_list_opt: %empty  */
#line 204 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "argument_expression_list_opt -> epsilon" << endl;
			(yyval.cnt) = 0;
		}
#line 2102 "y.tab.c"
    break;

  case 21: /* argument_expression_list_opt: argument_expression_list  */
#line 209 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "argument_expression_list_opt -> argument_expression_list" << endl;
			(yyval.cnt) = (yyvsp[0].cnt);
		}
#line 2111 "y.tab.c"
    break;

  case 22: /* unary_expression: postfix_expression  */
#line 215 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_expression -> postfix_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
		}
#line 2120 "y.tab.c"
    break;

  case 23: /* unary_expression: INCREMENT unary_expression  */
#line 220 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_expression -> INCREMENT unary_expression" << endl;
			emit("+", (yyvsp[0].expr) -> arr -> entry -> name, "1", (yyvsp[0].expr) -> arr -> entry -> name);
			(yyval.expr) = (yyvsp[0].expr);
		}
#line 2130 "y.tab.c"
    break;

  case 24: /* unary_expression: DECREMENT unary_expression  */
#line 226 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_expression -> DECREMENT unary_expression" << endl;
			emit("-", (yyvsp[0].expr) -> arr -> entry -> name, "1", (yyvsp[0].expr) -> arr -> entry -> name);
			(yyval.expr) = (yyvsp[0].expr);
		}
#line 2140 "y.tab.c"
    break;

  case 25: /* unary_expression: unary_operator cast_expression  */
#line 232 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_expression -> unary_operator cast_expression" << endl;
			(yyval.expr) = new Expression();
            (yyval.expr) -> truelist = (yyvsp[0].expr) -> truelist;
            (yyval.expr) -> falselist = (yyvsp[0].expr) -> falselist;
            (yyval.expr) -> nextlist = (yyvsp[0].expr) -> nextlist;
			(yyval.expr) -> arr = new ArrayExpression();
			if((yyvsp[-1].op) == AMPERSAND)
			{
				(yyval.expr) -> arr -> entry = SymbolTable::gentemp(new SymbolType(POINTER, SIZE_OF_POINTER));
				(yyval.expr) -> arr -> entry -> type -> elementType = (yyvsp[0].expr) -> arr -> entry -> type;
				emit("&", "", (yyvsp[0].expr) -> arr -> entry -> name, (yyval.expr) -> arr -> entry -> name);
			}
			else if((yyvsp[-1].op) == ASTERISK)
			{
				(yyval.expr) -> arr -> type = POINTER;
				(yyval.expr) -> arr -> addr = SymbolTable::gentemp((yyvsp[0].expr) -> arr -> entry -> type);
				(yyval.expr) -> arr -> entry = (yyvsp[0].expr) -> arr -> entry;
				emit("*", "", (yyvsp[0].expr) -> arr -> entry -> name, (yyval.expr) -> arr -> entry -> name);
			}
			else if((yyvsp[-1].op) == PLUS)
			{
                (yyval.expr) -> arr -> entry = SymbolTable::gentemp((yyvsp[0].expr) -> arr -> entry -> type);
			}
			else if((yyvsp[-1].op) == MINUS)
			{
				(yyval.expr) -> arr -> entry = SymbolTable::gentemp((yyvsp[0].expr) -> arr -> entry -> type);
				emit("-", "", (yyvsp[0].expr) -> arr -> entry -> name, (yyval.expr) -> arr -> entry -> name);
			}
			else if((yyvsp[-1].op) == TILDE)
			{
				(yyval.expr) -> arr -> entry = SymbolTable::gentemp((yyvsp[0].expr) -> arr -> entry -> type);
				emit("~", "", (yyvsp[0].expr) -> arr -> entry -> name, (yyval.expr) -> arr -> entry -> name);
			}
			else if((yyvsp[-1].op) == EXCLAMATION)
			{
                (yyval.expr) -> arr -> entry = SymbolTable::gentemp((yyvsp[0].expr) -> arr -> entry -> type);
				swap((yyval.expr) -> truelist, (yyval.expr) -> falselist);
				if((yyvsp[0].expr) -> type != BOOL) emit("!", "", (yyvsp[0].expr) -> arr -> entry -> name, (yyval.expr) -> arr -> entry -> name);
			}
		}
#line 2186 "y.tab.c"
    break;

  case 26: /* unary_expression: SIZEOF unary_expression  */
#line 273 "TinyC3_22CS30004_22CS30061.y"
                                                                                        {/* skip */ cerr << "unary_expression -> SIZEOF unary_expression" << endl;}
#line 2192 "y.tab.c"
    break;

  case 27: /* unary_expression: SIZEOF LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET  */
#line 274 "TinyC3_22CS30004_22CS30061.y"
                                                                                        {/* skip */ cerr << "unary_expression -> SIZEOF LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET" << endl;}
#line 2198 "y.tab.c"
    break;

  case 28: /* unary_operator: AMPERSAND  */
#line 277 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_operator -> AMPERSAND" << endl;
			(yyval.op) = AMPERSAND;
		}
#line 2207 "y.tab.c"
    break;

  case 29: /* unary_operator: ASTERISK  */
#line 282 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_operator -> ASTERISK" << endl;
			(yyval.op) = ASTERISK;
		}
#line 2216 "y.tab.c"
    break;

  case 30: /* unary_operator: PLUS  */
#line 287 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_operator -> PLUS" << endl;
			(yyval.op) = PLUS;
		}
#line 2225 "y.tab.c"
    break;

  case 31: /* unary_operator: MINUS  */
#line 292 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_operator -> MINUS" << endl;
			(yyval.op) = MINUS;
		}
#line 2234 "y.tab.c"
    break;

  case 32: /* unary_operator: TILDE  */
#line 297 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_operator -> TILDE" << endl;
			(yyval.op) = TILDE;
		}
#line 2243 "y.tab.c"
    break;

  case 33: /* unary_operator: EXCLAMATION  */
#line 302 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "unary_operator -> EXCLAMATION" << endl;
			(yyval.op) = EXCLAMATION;
		}
#line 2252 "y.tab.c"
    break;

  case 34: /* cast_expression: unary_expression  */
#line 309 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "cast_expression -> unary_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
		}
#line 2261 "y.tab.c"
    break;

  case 35: /* cast_expression: LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET cast_expression  */
#line 313 "TinyC3_22CS30004_22CS30061.y"
                                                                                        {/* doubt skip */ cerr << "cast_expression -> LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET cast_expression" << endl; yyerror("Hey there! something is wrong brother cast1\n");}
#line 2267 "y.tab.c"
    break;

  case 36: /* multiplicative_expression: cast_expression  */
#line 316 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "multiplicative_expression -> cast_expression" << endl;
			(yyval.expr) = new Expression();
            (yyval.expr) -> truelist = (yyvsp[0].expr) -> truelist;
            (yyval.expr) -> falselist = (yyvsp[0].expr) -> falselist;
            (yyval.expr) -> nextlist = (yyvsp[0].expr) -> nextlist;
			if((yyvsp[0].expr) -> arr -> type == ARRAY)
			{
                SymbolType *temp = (yyvsp[0].expr) -> arr -> entry -> type;
                while(temp -> type == ARRAY) temp = temp -> elementType;
				(yyval.expr) -> entry = SymbolTable::gentemp(temp);
                emit("=[]", (yyvsp[0].expr) -> arr -> entry -> name, (yyvsp[0].expr) -> arr -> addr -> name, (yyval.expr) -> entry -> name);
			}
            else if((yyvsp[0].expr) -> arr -> type == POINTER) (yyval.expr) -> entry = (yyvsp[0].expr) -> arr -> addr;
            else (yyval.expr) -> entry = (yyvsp[0].expr) -> arr -> entry;
		}
#line 2288 "y.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression ASTERISK cast_expression  */
#line 333 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "multiplicative_expression -> multiplicative_expression ASTERISK cast_expression" << endl;
            if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> arr -> elementType) == 0) yyerror("Hey there! something is wrong brother multiplicative1\n");
            (yyval.expr) = new Expression();
            (yyval.expr) -> entry = SymbolTable::gentemp((yyvsp[-2].expr) -> entry -> type);
            emit("*", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> arr -> entry -> name, (yyval.expr) -> entry -> name);
        }
#line 2300 "y.tab.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression FORWARD_SLASH cast_expression  */
#line 341 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "multiplicative_expression -> multiplicative_expression FORWARD_SLASH cast_expression" << endl;
            if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> arr -> elementType) == 0) yyerror("Hey there! something is wrong brother multiplicative2\n");
            (yyval.expr) = new Expression();
            (yyval.expr) -> entry = SymbolTable::gentemp((yyvsp[-2].expr) -> entry -> type);
            emit("/", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> arr -> entry -> name, (yyval.expr) -> entry -> name);
        }
#line 2312 "y.tab.c"
    break;

  case 39: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 349 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "multiplicative_expression -> multiplicative_expression PERCENT cast_expression" << endl;
            if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> arr -> elementType) == 0) yyerror("Hey there! something is wrong brother multiplicative3\n");
            (yyval.expr) = new Expression();
            (yyval.expr) -> entry = SymbolTable::gentemp((yyvsp[-2].expr) -> entry -> type);
            emit("%", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> arr -> entry -> name, (yyval.expr) -> entry -> name);
        }
#line 2324 "y.tab.c"
    break;

  case 40: /* additive_expression: multiplicative_expression  */
#line 358 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "additive_expression -> multiplicative_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
		}
#line 2333 "y.tab.c"
    break;

  case 41: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 363 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "additive_expression -> additive_expression PLUS multiplicative_expression" << endl;
			if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> entry -> type) == 0) yyerror("Hey there! something is wrong brother additive1\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = INT;
			(yyval.expr) -> entry = SymbolTable::gentemp((yyvsp[-2].expr) -> entry -> type);	//TODO: check this
			emit("+", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, (yyval.expr) -> entry -> name);
		}
#line 2346 "y.tab.c"
    break;

  case 42: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 372 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "additive_expression -> additive_expression MINUS multiplicative_expression" << endl;
			if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> entry -> type) == 0) yyerror("Hey there! something is wrong brother additive2\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = INT;
			(yyval.expr) -> entry = SymbolTable::gentemp((yyvsp[-2].expr) -> entry -> type);	//TODO: check this
			emit("-", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, (yyval.expr) -> entry -> name);
		}
#line 2359 "y.tab.c"
    break;

  case 43: /* shift_expression: additive_expression  */
#line 382 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "shift_expression -> additive_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
		}
#line 2368 "y.tab.c"
    break;

  case 44: /* shift_expression: shift_expression LEFT_SHIFT additive_expression  */
#line 387 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "shift_expression -> shift_expression LEFT_SHIFT additive_expression" << endl;
			if((yyvsp[0].expr) -> entry -> type -> type != INT) yyerror("Hey there! something is wrong brother shift1\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = INT;
			(yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));		//TODO: check this
			emit("<<", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, (yyval.expr) -> entry -> name);
		}
#line 2381 "y.tab.c"
    break;

  case 45: /* shift_expression: shift_expression RIGHT_SHIFT additive_expression  */
#line 396 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "shift_expression -> shift_expression RIGHT_SHIFT additive_expression" << endl;
			if((yyvsp[0].expr) -> entry -> type -> type != INT) yyerror("Hey there! something is wrong brother shift2\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = INT;
			(yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));		//TODO: check this
			emit(">>", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, (yyval.expr) -> entry -> name);
		}
#line 2394 "y.tab.c"
    break;

  case 46: /* relational_expression: shift_expression  */
#line 406 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "relational_expression -> shift_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
		}
#line 2403 "y.tab.c"
    break;

  case 47: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 411 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "relational_expression -> relational_expression LESS_THAN shift_expression" << endl;
			if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> entry -> type) == 0) yyerror("Hey there! something is wrong brother relational1\n");
			(yyval.expr) = new Expression();
            // $$ -> entry = $1 -> entry;
			(yyval.expr) -> type = BOOL;
            (yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			(yyval.expr) -> truelist = makelist(nextinstr());
			(yyval.expr) -> falselist = makelist(nextinstr() + 1);
			emit("if <", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, "");
			emit("goto", "", "", "");
		}
#line 2420 "y.tab.c"
    break;

  case 48: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 424 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "relational_expression -> relational_expression GREATER_THAN shift_expression" << endl;
			if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> entry -> type) == 0) yyerror("Hey there! something is wrong brother relational2\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = BOOL;
            (yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			(yyval.expr) -> truelist = makelist(nextinstr());
			(yyval.expr) -> falselist = makelist(nextinstr() + 1);
			emit("if >", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, "");
			emit("goto", "", "", "");
		}
#line 2436 "y.tab.c"
    break;

  case 49: /* relational_expression: relational_expression LESS_THAN_EQUAL shift_expression  */
#line 436 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "relational_expression -> relational_expression LESS_THAN_EQUAL shift_expression" << endl;
			if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> entry -> type) == 0) yyerror("Hey there! something is wrong brother relational3\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = BOOL;
            (yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			(yyval.expr) -> truelist = makelist(nextinstr());
			(yyval.expr) -> falselist = makelist(nextinstr() + 1);
			emit("if <=", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, "");
			emit("goto", "", "", "");
		}
#line 2452 "y.tab.c"
    break;

  case 50: /* relational_expression: relational_expression GREATER_THAN_EQUAL shift_expression  */
#line 448 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "relational_expression -> relational_expression GREATER_THAN_EQUAL shift_expression" << endl;
			if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> entry -> type) == 0) yyerror("Hey there! something is wrong brother relational4\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = BOOL;
            (yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			(yyval.expr) -> truelist = makelist(nextinstr());
			(yyval.expr) -> falselist = makelist(nextinstr() + 1);
			emit("if >=", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, "");
			emit("goto", "", "", "");
		}
#line 2468 "y.tab.c"
    break;

  case 51: /* equality_expression: relational_expression  */
#line 461 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "equality_expression -> relational_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
		}
#line 2477 "y.tab.c"
    break;

  case 52: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 466 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "equality_expression -> equality_expression EQUAL relational_expression" << endl;
			if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> entry -> type) == 0) yyerror("Hey there! something is wrong brother equality1\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = BOOL;
            (yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			(yyval.expr) -> truelist = makelist(nextinstr());
			(yyval.expr) -> falselist = makelist(nextinstr() + 1);
			emit("if ==", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, "");
			emit("goto", "", "", "");
		}
#line 2493 "y.tab.c"
    break;

  case 53: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 478 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "equality_expression -> equality_expression NOT_EQUAL relational_expression" << endl;
			if(typeCheck((yyvsp[-2].expr) -> entry -> type, (yyvsp[0].expr) -> entry -> type) == 0) yyerror("Hey there! something is wrong brother equality2\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = BOOL;
            (yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			(yyval.expr) -> truelist = makelist(nextinstr());
			(yyval.expr) -> falselist = makelist(nextinstr() + 1);
			emit("if !=", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, "");
			emit("goto", "", "", "");
		}
#line 2509 "y.tab.c"
    break;

  case 54: /* AND_expression: equality_expression  */
#line 491 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "AND_expression -> equality_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
		}
#line 2518 "y.tab.c"
    break;

  case 55: /* AND_expression: AND_expression AMPERSAND equality_expression  */
#line 496 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "AND_expression -> AND_expression AMPERSAND equality_expression" << endl;
			if((yyvsp[-2].expr) -> entry -> type -> type != INT || (yyvsp[0].expr) -> entry -> type -> type != INT) yyerror("Hey there! something is wrong brother AND1\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = INT;
			(yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));		//TODO: check this
			emit("&", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, (yyval.expr) -> entry -> name);
		}
#line 2531 "y.tab.c"
    break;

  case 56: /* exclusive_OR_expression: AND_expression  */
#line 506 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "exclusive_OR_expression -> AND_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
		}
#line 2540 "y.tab.c"
    break;

  case 57: /* exclusive_OR_expression: exclusive_OR_expression CARET AND_expression  */
#line 511 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "exclusive_OR_expression -> exclusive_OR_expression CARET AND_expression" << endl;
			if((yyvsp[-2].expr) -> entry -> type -> type != INT || (yyvsp[0].expr) -> entry -> type -> type != INT) yyerror("Hey there! something is wrong brother exclusive_OR1\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = INT;
			(yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));		//TODO: check this
			emit("^", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, (yyval.expr) -> entry -> name);
		}
#line 2553 "y.tab.c"
    break;

  case 58: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 521 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "inclusive_OR_expression -> exclusive_OR_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
		}
#line 2562 "y.tab.c"
    break;

  case 59: /* inclusive_OR_expression: inclusive_OR_expression PIPE exclusive_OR_expression  */
#line 526 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "inclusive_OR_expression -> inclusive_OR_expression PIPE exclusive_OR_expression" << endl;
			if((yyvsp[-2].expr) -> entry -> type -> type != INT || (yyvsp[0].expr) -> entry -> type -> type != INT) yyerror("Hey there! something is wrong brother inclusive_OR1\n");
			(yyval.expr) = new Expression();
			(yyval.expr) -> type = INT;
			(yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(INT, SIZE_OF_INT));		//TODO: check this
			emit("|", (yyvsp[-2].expr) -> entry -> name, (yyvsp[0].expr) -> entry -> name, (yyval.expr) -> entry -> name);
		}
#line 2575 "y.tab.c"
    break;

  case 60: /* logical_AND_expression: inclusive_OR_expression  */
#line 536 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "logical_AND_expression -> inclusive_OR_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
		}
#line 2584 "y.tab.c"
    break;

  case 61: /* logical_AND_expression: logical_AND_expression LOGICAL_AND M inclusive_OR_expression  */
#line 541 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "logical_AND_expression -> logical_AND_expression LOGICAL_AND M inclusive_OR_expression" << endl;
			convertToBool((yyvsp[-3].expr));
			convertToBool((yyvsp[0].expr));
			backpatch((yyvsp[-3].expr) -> truelist, (yyvsp[-1].inst));
			(yyval.expr) = new Expression();
            (yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			(yyval.expr) -> type = BOOL;
			(yyval.expr) -> truelist = (yyvsp[0].expr) -> truelist;
			(yyval.expr) -> falselist = merge((yyvsp[-3].expr) -> falselist, (yyvsp[0].expr) -> falselist);
		}
#line 2600 "y.tab.c"
    break;

  case 62: /* logical_OR_expression: logical_AND_expression  */
#line 554 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "logical_OR_expression -> logical_AND_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
		}
#line 2609 "y.tab.c"
    break;

  case 63: /* logical_OR_expression: logical_OR_expression LOGICAL_OR M logical_AND_expression  */
#line 559 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "logical_OR_expression -> logical_OR_expression LOGICAL_OR M logical_AND_expression" << endl;
			convertToBool((yyvsp[-3].expr));
			convertToBool((yyvsp[0].expr));
			backpatch((yyvsp[-3].expr) -> falselist, (yyvsp[-1].inst));
			(yyval.expr) = new Expression();
            (yyval.expr) -> entry = SymbolTable::gentemp(new SymbolType(BOOL, SIZE_OF_BOOL));
			(yyval.expr) -> type = BOOL;
			(yyval.expr) -> truelist = merge((yyvsp[-3].expr) -> truelist, (yyvsp[0].expr) -> truelist);
			(yyval.expr) -> falselist = (yyvsp[0].expr) -> falselist;
		}
#line 2625 "y.tab.c"
    break;

  case 64: /* conditional_expression: logical_OR_expression  */
#line 572 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "conditional_expression -> logical_OR_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
		}
#line 2634 "y.tab.c"
    break;

  case 65: /* conditional_expression: logical_OR_expression QUESTION_MARK expression COLON conditional_expression  */
#line 576 "TinyC3_22CS30004_22CS30061.y"
                                                                                            {/* skip */ cerr << "conditional_expression -> logical_OR_expression QUESTION_MARK expression COLON conditional_expression" << endl;}
#line 2640 "y.tab.c"
    break;

  case 66: /* assignment_expression: conditional_expression  */
#line 579 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "assignment_expression -> conditional_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
		}
#line 2649 "y.tab.c"
    break;

  case 67: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 584 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "assignment_expression -> unary_expression assignment_operator assignment_expression" << endl;
			//TODO: check this
            if((yyvsp[-2].expr) -> arr -> type == ARRAY) emit("[]=",  (yyvsp[-2].expr) -> arr -> addr -> name, (yyvsp[0].expr) -> entry -> name, (yyvsp[-2].expr) -> arr -> entry -> name);
            else if((yyvsp[-2].expr) -> arr -> type == POINTER) emit("*=", (yyvsp[-2].expr) -> arr -> entry -> name, (yyvsp[0].expr) -> entry -> name, "");
            else emit("=",(yyvsp[0].expr) -> entry -> name, "",(yyvsp[-2].expr) -> arr -> entry -> name);
        }
#line 2661 "y.tab.c"
    break;

  case 68: /* assignment_expression_opt: %empty  */
#line 593 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "assignment_expression_opt -> epsilon" << endl;
			(yyval.expr) = NULL;
		}
#line 2670 "y.tab.c"
    break;

  case 69: /* assignment_expression_opt: assignment_expression  */
#line 598 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "assignment_expression_opt -> assignment_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
		}
#line 2679 "y.tab.c"
    break;

  case 70: /* assignment_operator: ASSIGNMENT  */
#line 604 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "assignment_operator -> ASSIGNMENT" << endl;
			//do nothing
		}
#line 2688 "y.tab.c"
    break;

  case 71: /* assignment_operator: MULTIPLY_ASSIGNMENT  */
#line 608 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> MULTIPLY_ASSIGNMENT" << endl;}
#line 2694 "y.tab.c"
    break;

  case 72: /* assignment_operator: DIVIDE_ASSIGNMENT  */
#line 609 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> DIVIDE_ASSIGNMENT" << endl;}
#line 2700 "y.tab.c"
    break;

  case 73: /* assignment_operator: MOD_ASSIGNMENT  */
#line 610 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> MOD_ASSIGNMENT" << endl;}
#line 2706 "y.tab.c"
    break;

  case 74: /* assignment_operator: ADD_ASSIGNMENT  */
#line 611 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> ADD_ASSIGNMENT" << endl;}
#line 2712 "y.tab.c"
    break;

  case 75: /* assignment_operator: SUBTRACT_ASSIGNMENT  */
#line 612 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> SUBTRACT_ASSIGNMENT" << endl;}
#line 2718 "y.tab.c"
    break;

  case 76: /* assignment_operator: LEFT_SHIFT_ASSIGNMENT  */
#line 613 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> LEFT_SHIFT_ASSIGNMENT" << endl;}
#line 2724 "y.tab.c"
    break;

  case 77: /* assignment_operator: RIGHT_SHIFT_ASSIGNMENT  */
#line 614 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> RIGHT_SHIFT_ASSIGNMENT" << endl;}
#line 2730 "y.tab.c"
    break;

  case 78: /* assignment_operator: BITWISE_AND_ASSIGNMENT  */
#line 615 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> BITWISE_AND_ASSIGNMENT" << endl;}
#line 2736 "y.tab.c"
    break;

  case 79: /* assignment_operator: BITWISE_XOR_ASSIGNMENT  */
#line 616 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> BITWISE_XOR_ASSIGNMENT" << endl;}
#line 2742 "y.tab.c"
    break;

  case 80: /* assignment_operator: BITWISE_OR_ASSIGNMENT  */
#line 617 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "assignment_operator -> BITWISE_OR_ASSIGNMENT" << endl;}
#line 2748 "y.tab.c"
    break;

  case 81: /* expression: assignment_expression  */
#line 620 "TinyC3_22CS30004_22CS30061.y"
                {
            cerr << "expression -> assignment_expression" << endl;
			(yyval.expr) = (yyvsp[0].expr);
		}
#line 2757 "y.tab.c"
    break;

  case 82: /* expression: expression COMMA assignment_expression  */
#line 624 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "expression -> expression COMMA assignment_expression" << endl;}
#line 2763 "y.tab.c"
    break;

  case 83: /* expression_opt: %empty  */
#line 627 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "expression_opt -> epsilon" << endl;
            (yyval.expr) = new Expression();						//verify this
			fprintf(stderr, "Hey there! something is wrong brother expression_opt\n");
        }
#line 2773 "y.tab.c"
    break;

  case 84: /* expression_opt: expression  */
#line 633 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "expression_opt -> expression" << endl;
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2782 "y.tab.c"
    break;

  case 85: /* constant_expression: conditional_expression  */
#line 638 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip due to parent*/ cerr << "constant_expression -> conditional_expression" << endl;}
#line 2788 "y.tab.c"
    break;

  case 86: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 643 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "declaration -> declaration_specifiers init_declarator_list_opt SEMICOLON" << endl;
            // do nothing
        }
#line 2797 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: storage_class_specifier declaration_specifiers_opt  */
#line 648 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip */ cerr << "declaration_specifiers -> storage_class_specifier declaration_specifiers_opt" << endl;}
#line 2803 "y.tab.c"
    break;

  case 88: /* declaration_specifiers: type_specifier declaration_specifiers_opt  */
#line 650 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "declaration_specifiers -> type_specifier declaration_specifiers_opt" << endl;
            // do nothing
        }
#line 2812 "y.tab.c"
    break;

  case 89: /* declaration_specifiers: type_qualifier declaration_specifiers_opt  */
#line 654 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip */ cerr << "declaration_specifiers -> type_qualifier declaration_specifiers_opt" << endl;}
#line 2818 "y.tab.c"
    break;

  case 90: /* declaration_specifiers: function_specifier declaration_specifiers_opt  */
#line 655 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip */ cerr << "declaration_specifiers -> function_specifier declaration_specifiers_opt" << endl;}
#line 2824 "y.tab.c"
    break;

  case 91: /* declaration_specifiers_opt: %empty  */
#line 657 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "declaration_specifiers_opt -> epsilon" << endl;}
#line 2830 "y.tab.c"
    break;

  case 92: /* declaration_specifiers_opt: declaration_specifiers  */
#line 658 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "declaration_specifiers_opt -> declaration_specifiers" << endl;}
#line 2836 "y.tab.c"
    break;

  case 93: /* init_declarator_list_opt: %empty  */
#line 660 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "init_declarator_list_opt -> epsilon" << endl;}
#line 2842 "y.tab.c"
    break;

  case 94: /* init_declarator_list_opt: init_declarator_list  */
#line 661 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "init_declarator_list_opt -> init_declarator_list" << endl;}
#line 2848 "y.tab.c"
    break;

  case 95: /* init_declarator_list: init_declarator  */
#line 664 "TinyC3_22CS30004_22CS30061.y"
        {
            (yyval.symbolptr) = (yyvsp[0].symbolptr);
            cerr << "init_declarator_list -> init_declarator" << endl;
        }
#line 2857 "y.tab.c"
    break;

  case 96: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 669 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "init_declarator_list -> init_declarator_list COMMA init_declarator" << endl;
            //do nothing, type already stored in global variable
        }
#line 2866 "y.tab.c"
    break;

  case 97: /* init_declarator: declarator  */
#line 675 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "init_declarator -> declarator" << endl;
            (yyval.symbolptr) = (yyvsp[0].symbolptr);
        }
#line 2875 "y.tab.c"
    break;

  case 98: /* init_declarator: declarator ASSIGNMENT initializer  */
#line 680 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "init_declarator -> declarator ASSIGNMENT initializer" << endl;
            // if($3 ->  value == "") yyerror("Hey there! something is wrong brother init_declarator1\n");
            (yyvsp[-2].symbolptr) -> value = (yyvsp[0].symbolptr) -> value;
            emit("=", (yyvsp[0].symbolptr) -> name, "", (yyvsp[-2].symbolptr) -> name);
        }
#line 2886 "y.tab.c"
    break;

  case 99: /* storage_class_specifier: EXTERN  */
#line 687 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "storage_class_specifier -> EXTERN" << endl;}
#line 2892 "y.tab.c"
    break;

  case 100: /* storage_class_specifier: STATIC  */
#line 688 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "storage_class_specifier -> STATIC" << endl;}
#line 2898 "y.tab.c"
    break;

  case 101: /* storage_class_specifier: AUTO  */
#line 689 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "storage_class_specifier -> AUTO" << endl;}
#line 2904 "y.tab.c"
    break;

  case 102: /* storage_class_specifier: REGISTER  */
#line 690 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "storage_class_specifier -> REGISTER" << endl;}
#line 2910 "y.tab.c"
    break;

  case 103: /* type_specifier: VOID  */
#line 693 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "type_specifier -> VOID" << endl;
            currType = VOID;
        }
#line 2919 "y.tab.c"
    break;

  case 104: /* type_specifier: CHAR  */
#line 698 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "type_specifier -> CHAR" << endl;
            currType = CHAR;
        }
#line 2928 "y.tab.c"
    break;

  case 105: /* type_specifier: SHORT  */
#line 702 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "type_specifier -> SHORT" << endl;}
#line 2934 "y.tab.c"
    break;

  case 106: /* type_specifier: INT  */
#line 704 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "type_specifier -> INT" << endl;
            currType = INT;
        }
#line 2943 "y.tab.c"
    break;

  case 107: /* type_specifier: LONG  */
#line 708 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "type_specifier -> LONG" << endl;}
#line 2949 "y.tab.c"
    break;

  case 108: /* type_specifier: FLOAT  */
#line 710 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "type_specifier -> FLOAT" << endl;
            currType = FLOAT;
        }
#line 2958 "y.tab.c"
    break;

  case 109: /* type_specifier: DOUBLE  */
#line 714 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "type_specifier -> DOUBLE" << endl;}
#line 2964 "y.tab.c"
    break;

  case 110: /* type_specifier: SIGNED  */
#line 715 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "type_specifier -> SIGNED" << endl;}
#line 2970 "y.tab.c"
    break;

  case 111: /* type_specifier: UNSIGNED  */
#line 716 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "type_specifier -> UNSIGNED" << endl;}
#line 2976 "y.tab.c"
    break;

  case 112: /* type_specifier: BOOL  */
#line 718 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "type_specifier -> BOOL" << endl;
            currType = BOOL;
        }
#line 2985 "y.tab.c"
    break;

  case 113: /* type_specifier: COMPLEX  */
#line 722 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "type_specifier -> COMPLEX" << endl;}
#line 2991 "y.tab.c"
    break;

  case 114: /* type_specifier: IMAGINARY  */
#line 723 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "type_specifier -> IMAGINARY" << endl;}
#line 2997 "y.tab.c"
    break;

  case 115: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 726 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt" << endl;
            // do nothing, specifier qualifier should be epsilon
        }
#line 3006 "y.tab.c"
    break;

  case 116: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 730 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip : something is wrong with grammar */ cerr << "specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt" << endl;}
#line 3012 "y.tab.c"
    break;

  case 117: /* specifier_qualifier_list_opt: %empty  */
#line 733 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "specifier_qualifier_list_opt -> epsilon" << endl;
            // do nothing
        }
#line 3021 "y.tab.c"
    break;

  case 118: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 737 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "specifier_qualifier_list_opt -> specifier_qualifier_list" << endl;}
#line 3027 "y.tab.c"
    break;

  case 119: /* type_qualifier: CONST  */
#line 739 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "type_qualifier -> CONST" << endl;}
#line 3033 "y.tab.c"
    break;

  case 120: /* type_qualifier: RESTRICT  */
#line 740 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "type_qualifier -> RESTRICT" << endl;}
#line 3039 "y.tab.c"
    break;

  case 121: /* type_qualifier: VOLATILE  */
#line 741 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "type_qualifier -> VOLATILE" << endl;}
#line 3045 "y.tab.c"
    break;

  case 122: /* function_specifier: INLINE  */
#line 743 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "function_specifier -> INLINE" << endl;}
#line 3051 "y.tab.c"
    break;

  case 123: /* declarator: pointer_opt direct_declarator  */
#line 746 "TinyC3_22CS30004_22CS30061.y"
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
#line 3067 "y.tab.c"
    break;

  case 124: /* direct_declarator: IDENTIFIER  */
#line 759 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "direct_declarator -> IDENTIFIER" << endl;
            (yyvsp[0].symbolptr) -> update(new SymbolType(currType));
            (yyval.symbolptr) = (yyvsp[0].symbolptr);
        }
#line 3077 "y.tab.c"
    break;

  case 125: /* direct_declarator: LEFT_ROUND_BRACKET declarator RIGHT_ROUND_BRACKET  */
#line 765 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "direct_declarator -> LEFT_ROUND_BRACKET declarator RIGHT_ROUND_BRACKET" << endl;
            (yyval.symbolptr) = (yyvsp[-1].symbolptr);
        }
#line 3086 "y.tab.c"
    break;

  case 126: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt assignment_expression_opt RIGHT_SQUARE_BRACKET  */
#line 770 "TinyC3_22CS30004_22CS30061.y"
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
#line 3110 "y.tab.c"
    break;

  case 127: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET STATIC type_qualifier_list_opt assignment_expression RIGHT_SQUARE_BRACKET  */
#line 789 "TinyC3_22CS30004_22CS30061.y"
                                                                                                                                    {/* skip */ cerr << "direct_declarator -> direct_declarator LEFT_SQUARE_BRACKET STATIC type_qualifier_list_opt assignment_expression RIGHT_SQUARE_BRACKET" << endl; yyerror("Hey there! something is wrong brother direct_declarator2\n");}
#line 3116 "y.tab.c"
    break;

  case 128: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list STATIC assignment_expression RIGHT_CURLY_BRACKET  */
#line 790 "TinyC3_22CS30004_22CS30061.y"
                                                                                                                                    {/* skip */ cerr << "direct_declarator -> direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list STATIC assignment_expression RIGHT_CURLY_BRACKET" << endl; yyerror("Hey there! something is wrong brother direct_declarator2\n");}
#line 3122 "y.tab.c"
    break;

  case 129: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt ASTERISK RIGHT_SQUARE_BRACKET  */
#line 791 "TinyC3_22CS30004_22CS30061.y"
                                                                                                                                    {/* doubt skip */ cerr << "direct_declarator -> direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt ASTERISK RIGHT_SQUARE_BRACKET" << endl; yyerror("Hey there! something is wrong brother direct_declarator2\n");}
#line 3128 "y.tab.c"
    break;

  case 130: /* direct_declarator: direct_declarator CT LEFT_ROUND_BRACKET parameter_type_list RIGHT_ROUND_BRACKET  */
#line 793 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "direct_declarator -> direct_declarator CT LEFT_ROUND_BRACKET parameter_type_list RIGHT_ROUND_BRACKET" << endl;
            // TODO: rememeber return type
            (yyvsp[-4].symbolptr) -> nestedTable = currST;
            // currST -> parent = globalST;
            // switchTable(globalST);
            (yyval.symbolptr) = (yyvsp[-4].symbolptr);
        }
#line 3141 "y.tab.c"
    break;

  case 131: /* direct_declarator: direct_declarator CT LEFT_ROUND_BRACKET identifier_list_opt RIGHT_ROUND_BRACKET  */
#line 802 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "direct_declarator -> direct_declarator CT LEFT_ROUND_BRACKET identifier_list_opt RIGHT_ROUND_BRACKET" << endl;
            if((yyvsp[-1].symbolptr) != NULL) yyerror("Hey there! something is wrong brother direct_declarator2\n");
            (yyvsp[-4].symbolptr) -> nestedTable = currST;
            // currST -> parent = globalST;
            // switchTable(globalST);
            (yyval.symbolptr) = (yyvsp[-4].symbolptr);
            
        }
#line 3155 "y.tab.c"
    break;

  case 132: /* pointer: ASTERISK type_qualifier_list_opt  */
#line 813 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "pointer -> ASTERISK type_qualifier_list_opt" << endl;
            /* type_qualifier_list_opt should always terminate at epsilon */
            if((yyvsp[0].symbolptr) != NULL) yyerror("Hey there! something is wrong brother pointer1\n");
            (yyval.symbolptr) = new Symbol();
            (yyval.symbolptr) -> type = new SymbolType(POINTER, SIZE_OF_POINTER);
        }
#line 3167 "y.tab.c"
    break;

  case 133: /* pointer: ASTERISK type_qualifier_list_opt pointer  */
#line 821 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "pointer -> ASTERISK type_qualifier_list_opt pointer" << endl;
            /* type_qualifier_list_opt should always terminate at epsilon */
            if((yyvsp[-1].symbolptr) != NULL) yyerror("Hey there! something is wrong brother pointer2\n");
            (yyval.symbolptr) = new Symbol();
            (yyval.symbolptr) -> type = new SymbolType(POINTER, SIZE_OF_POINTER, (yyvsp[0].symbolptr) -> type);
        }
#line 3179 "y.tab.c"
    break;

  case 134: /* pointer_opt: %empty  */
#line 830 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "pointer_opt -> epsilon" << endl;
            (yyval.symbolptr) = NULL;
        }
#line 3188 "y.tab.c"
    break;

  case 135: /* pointer_opt: pointer  */
#line 835 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "pointer_opt -> pointer" << endl;
            (yyval.symbolptr) = (yyvsp[0].symbolptr);
        }
#line 3197 "y.tab.c"
    break;

  case 136: /* type_qualifier_list: type_qualifier  */
#line 840 "TinyC3_22CS30004_22CS30061.y"
                                                                {/* skip */ cerr << "type_qualifier_list -> type_qualifier" << endl;}
#line 3203 "y.tab.c"
    break;

  case 137: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 841 "TinyC3_22CS30004_22CS30061.y"
                                                                {/* skip */ cerr << "type_qualifier_list -> type_qualifier_list type_qualifier" << endl;}
#line 3209 "y.tab.c"
    break;

  case 138: /* type_qualifier_list_opt: %empty  */
#line 844 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "type_qualifier_list_opt -> epsilon" << endl;
            (yyval.symbolptr) = NULL;
        }
#line 3218 "y.tab.c"
    break;

  case 139: /* type_qualifier_list_opt: type_qualifier_list  */
#line 848 "TinyC3_22CS30004_22CS30061.y"
                                                                {/* skip */ cerr << "type_qualifier_list_opt -> type_qualifier_list" << endl;}
#line 3224 "y.tab.c"
    break;

  case 140: /* parameter_type_list: parameter_list  */
#line 851 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "parameter_type_list -> parameter_list" << endl;
            // do nothing
            (yyval.symbolptr) = (yyvsp[0].symbolptr);
        }
#line 3234 "y.tab.c"
    break;

  case 141: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 856 "TinyC3_22CS30004_22CS30061.y"
                                                                {/* skip */ cerr << "parameter_type_list -> parameter_list COMMA ELLIPSIS" << endl;}
#line 3240 "y.tab.c"
    break;

  case 142: /* parameter_list: parameter_declaration  */
#line 859 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "parameter_list -> parameter_declaration" << endl;
            // do nothing
        }
#line 3249 "y.tab.c"
    break;

  case 143: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 864 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "parameter_list -> parameter_list COMMA parameter_declaration" << endl;
            // do nothing
        }
#line 3258 "y.tab.c"
    break;

  case 144: /* parameter_declaration: declaration_specifiers declarator  */
#line 870 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "parameter_declaration -> declaration_specifiers declarator" << endl;
            // do nothing
        }
#line 3267 "y.tab.c"
    break;

  case 145: /* parameter_declaration: declaration_specifiers  */
#line 875 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "parameter_declaration -> declaration_specifiers" << endl;
            // do nothing
        }
#line 3276 "y.tab.c"
    break;

  case 146: /* identifier_list: IDENTIFIER  */
#line 880 "TinyC3_22CS30004_22CS30061.y"
                                                                {/* skip */ cerr << "identifier_list -> IDENTIFIER" << endl;}
#line 3282 "y.tab.c"
    break;

  case 147: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 881 "TinyC3_22CS30004_22CS30061.y"
                                                                {/* skip */ cerr << "identifier_list -> identifier_list COMMA IDENTIFIER" << endl;}
#line 3288 "y.tab.c"
    break;

  case 148: /* identifier_list_opt: %empty  */
#line 884 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "identifier_list_opt -> epsilon" << endl;
            // do nothing, always terminates to epsilon
            (yyval.symbolptr) = NULL;
        }
#line 3298 "y.tab.c"
    break;

  case 149: /* identifier_list_opt: identifier_list  */
#line 889 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "identifier_list_opt -> identifier_list" << endl;}
#line 3304 "y.tab.c"
    break;

  case 150: /* type_name: specifier_qualifier_list  */
#line 891 "TinyC3_22CS30004_22CS30061.y"
                                                {/* doubt skip */ cerr << "type_name -> specifier_qualifier_list" << endl;}
#line 3310 "y.tab.c"
    break;

  case 151: /* initializer: assignment_expression  */
#line 894 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "initializer -> assignment_expression" << endl;
            (yyval.symbolptr) = (yyvsp[0].expr) -> entry;
        }
#line 3319 "y.tab.c"
    break;

  case 152: /* initializer: LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET  */
#line 898 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip */ cerr << "initializer -> LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET" << endl;}
#line 3325 "y.tab.c"
    break;

  case 153: /* initializer: LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET  */
#line 899 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip */ cerr << "initializer -> LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET" << endl;}
#line 3331 "y.tab.c"
    break;

  case 154: /* initializer_list: designation_opt initializer  */
#line 901 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip */ cerr << "initializer_list -> designation_opt initializer" << endl;}
#line 3337 "y.tab.c"
    break;

  case 155: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 902 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip */ cerr << "initializer_list -> initializer_list COMMA designation_opt initializer" << endl;}
#line 3343 "y.tab.c"
    break;

  case 156: /* designation: designator_list ASSIGNMENT  */
#line 904 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "designation -> designator_list ASSIGNMENT" << endl;}
#line 3349 "y.tab.c"
    break;

  case 157: /* designation_opt: %empty  */
#line 906 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "designation_opt -> epsilon" << endl;}
#line 3355 "y.tab.c"
    break;

  case 158: /* designation_opt: designation  */
#line 907 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "designation_opt -> designation" << endl;}
#line 3361 "y.tab.c"
    break;

  case 159: /* designator_list: designator  */
#line 909 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "designator_list -> designator" << endl;}
#line 3367 "y.tab.c"
    break;

  case 160: /* designator_list: designator_list designator  */
#line 910 "TinyC3_22CS30004_22CS30061.y"
                                                {/* skip */ cerr << "designator_list -> designator_list designator" << endl;}
#line 3373 "y.tab.c"
    break;

  case 161: /* designator: LEFT_SQUARE_BRACKET constant_expression RIGHT_SQUARE_BRACKET  */
#line 912 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip */ cerr << "designator -> LEFT_SQUARE_BRACKET constant_expression RIGHT_SQUARE_BRACKET" << endl;}
#line 3379 "y.tab.c"
    break;

  case 162: /* designator: DOT IDENTIFIER  */
#line 913 "TinyC3_22CS30004_22CS30061.y"
                                                                                {/* skip */ cerr << "designator -> DOT IDENTIFIER" << endl;}
#line 3385 "y.tab.c"
    break;

  case 163: /* statement: labeled_statement  */
#line 917 "TinyC3_22CS30004_22CS30061.y"
                                        {/* skip */ cerr << "statement -> labeled_statement" << endl;}
#line 3391 "y.tab.c"
    break;

  case 164: /* statement: expression_statement  */
#line 919 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "statement -> expression_statement" << endl;
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3400 "y.tab.c"
    break;

  case 165: /* statement: compound_statement  */
#line 924 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "statement -> compound_statement" << endl;
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3409 "y.tab.c"
    break;

  case 166: /* statement: selection_statement  */
#line 929 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "statement -> selection_statement" << endl;
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3418 "y.tab.c"
    break;

  case 167: /* statement: iteration_statement  */
#line 934 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "statement -> iteration_statement" << endl;
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3427 "y.tab.c"
    break;

  case 168: /* statement: jump_statement  */
#line 939 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "statement -> jump_statement" << endl;
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3436 "y.tab.c"
    break;

  case 169: /* labeled_statement: IDENTIFIER COLON statement  */
#line 944 "TinyC3_22CS30004_22CS30061.y"
                                                            {/* skip */ cerr << "labeled_statement -> IDENTIFIER COLON statement" << endl;}
#line 3442 "y.tab.c"
    break;

  case 170: /* labeled_statement: CASE constant_expression COLON statement  */
#line 945 "TinyC3_22CS30004_22CS30061.y"
                                                            {/* skip */ cerr << "labeled_statement -> CASE constant_expression COLON statement" << endl;}
#line 3448 "y.tab.c"
    break;

  case 171: /* labeled_statement: DEFAULT COLON statement  */
#line 946 "TinyC3_22CS30004_22CS30061.y"
                                                            {/* skip */ cerr << "labeled_statement -> DEFAULT COLON statement" << endl;}
#line 3454 "y.tab.c"
    break;

  case 172: /* compound_statement: LEFT_CURLY_BRACKET block_item_list_opt RIGHT_CURLY_BRACKET  */
#line 949 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "compound_statement -> LEFT_CURLY_BRACKET block_item_list_opt RIGHT_CURLY_BRACKET" << endl;
            (yyval.stmt) = (yyvsp[-1].stmt);
        }
#line 3463 "y.tab.c"
    break;

  case 173: /* block_item_list_opt: %empty  */
#line 955 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "block_item_list_opt -> epsilon" << endl;
            (yyval.stmt) = new Statement();
        }
#line 3472 "y.tab.c"
    break;

  case 174: /* block_item_list_opt: block_item_list  */
#line 960 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "block_item_list_opt -> block_item_list" << endl;
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3481 "y.tab.c"
    break;

  case 175: /* block_item_list: block_item  */
#line 966 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "block_item_list -> block_item" << endl;
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3490 "y.tab.c"
    break;

  case 176: /* block_item_list: block_item_list M block_item  */
#line 971 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "block_item_list -> block_item_list M block_item" << endl;
            (yyval.stmt) = (yyvsp[0].stmt);
            backpatch((yyvsp[-2].stmt) -> nextlist, (yyvsp[-1].inst));
        }
#line 3500 "y.tab.c"
    break;

  case 177: /* block_item: declaration  */
#line 978 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "block_item -> declaration" << endl;
            (yyval.stmt) = new Statement();
        }
#line 3509 "y.tab.c"
    break;

  case 178: /* block_item: statement  */
#line 983 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "block_item -> statement" << endl;
            (yyval.stmt) = (yyvsp[0].stmt);
        }
#line 3518 "y.tab.c"
    break;

  case 179: /* expression_statement: expression_opt SEMICOLON  */
#line 989 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "expression_statement -> expression_opt SEMICOLON" << endl;
            (yyval.stmt) = new Statement();
            (yyval.stmt) -> nextlist = (yyvsp[-1].expr) -> nextlist; /* BEWARE : $1 may be null */
        }
#line 3528 "y.tab.c"
    break;

  case 180: /* selection_statement: IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET M statement  */
#line 996 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "selection_statement -> IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET M statement" << endl;
            convertToBool((yyvsp[-3].expr));
            backpatch((yyvsp[-3].expr) -> truelist, (yyvsp[-1].inst));
            (yyval.stmt) = new Statement();
            (yyval.stmt) -> nextlist = merge((yyvsp[-3].expr) -> falselist, (yyvsp[0].stmt) -> nextlist);
        }
#line 3540 "y.tab.c"
    break;

  case 181: /* selection_statement: IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET M statement ELSE N M statement  */
#line 1004 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "selection_statement -> IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET M statement ELSE N M statement" << endl;
            convertToBool((yyvsp[-7].expr));
            backpatch((yyvsp[-7].expr) -> truelist, (yyvsp[-5].inst));
            backpatch((yyvsp[-7].expr) -> falselist, (yyvsp[-1].inst));
            (yyval.stmt) = new Statement();
            (yyval.stmt) -> nextlist = merge(merge((yyvsp[-4].stmt) -> nextlist, (yyvsp[-2].stmt) -> nextlist), (yyvsp[0].stmt) -> nextlist);
        }
#line 3553 "y.tab.c"
    break;

  case 182: /* selection_statement: SWITCH LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement  */
#line 1012 "TinyC3_22CS30004_22CS30061.y"
                                                                                        {/* skip */ cerr << "selection_statement -> SWITCH LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement" << endl;}
#line 3559 "y.tab.c"
    break;

  case 183: /* iteration_statement: WHILE M LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET M statement  */
#line 1015 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "iteration_statement -> WHILE M LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET M statement" << endl;
            convertToBool((yyvsp[-3].expr));
            backpatch((yyvsp[-3].expr) -> truelist, (yyvsp[-1].inst));
            backpatch((yyvsp[0].stmt) -> nextlist, (yyvsp[-5].inst));
            (yyval.stmt) = new Statement();
            (yyval.stmt) -> nextlist = (yyvsp[-3].expr) -> falselist;
            emit("goto", "", "", to_string((yyvsp[-5].inst)));
        }
#line 3573 "y.tab.c"
    break;

  case 184: /* iteration_statement: DO M statement M WHILE LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET SEMICOLON  */
#line 1025 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "iteration_statement -> DO M statement M WHILE LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET SEMICOLON" << endl;
            convertToBool((yyvsp[-2].expr));
            backpatch((yyvsp[-2].expr) -> truelist, (yyvsp[-7].inst));
            backpatch((yyvsp[-6].stmt) -> nextlist, (yyvsp[-5].inst));
            (yyval.stmt) = new Statement();
            (yyval.stmt) -> nextlist = (yyvsp[-2].expr) -> falselist;
        }
#line 3586 "y.tab.c"
    break;

  case 185: /* iteration_statement: FOR LEFT_ROUND_BRACKET expression_opt SEMICOLON M expression_opt SEMICOLON M expression_opt N RIGHT_ROUND_BRACKET M statement  */
#line 1034 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "iteration_statement -> FOR LEFT_ROUND_BRACKET expression_opt SEMICOLON M expression_opt SEMICOLON M expression_opt N RIGHT_ROUND_BRACKET M statement" << endl;
            convertToBool((yyvsp[-7].expr));
            backpatch((yyvsp[-7].expr) -> truelist, (yyvsp[-1].inst));
            backpatch((yyvsp[-3].stmt) -> nextlist, (yyvsp[-8].inst));
            backpatch((yyvsp[0].stmt) -> nextlist, (yyvsp[-5].inst));
            (yyval.stmt) = new Statement();
            (yyval.stmt) -> nextlist = (yyvsp[-7].expr) -> falselist;
            emit("goto", "", "", to_string((yyvsp[-5].inst)));
        }
#line 3601 "y.tab.c"
    break;

  case 186: /* iteration_statement: FOR LEFT_ROUND_BRACKET declaration expression_opt SEMICOLON expression_opt RIGHT_ROUND_BRACKET statement  */
#line 1044 "TinyC3_22CS30004_22CS30061.y"
                                                                                                                                        {/* skip */ cerr << "iteration_statement -> FOR LEFT_ROUND_BRACKET declaration expression_opt SEMICOLON expression_opt RIGHT_ROUND_BRACKET statement" << endl;}
#line 3607 "y.tab.c"
    break;

  case 187: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 1046 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "jump_statement -> GOTO IDENTIFIER SEMICOLON" << endl;}
#line 3613 "y.tab.c"
    break;

  case 188: /* jump_statement: CONTINUE SEMICOLON  */
#line 1047 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "jump_statement -> CONTINUE SEMICOLON" << endl;}
#line 3619 "y.tab.c"
    break;

  case 189: /* jump_statement: BREAK SEMICOLON  */
#line 1048 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "jump_statement -> BREAK SEMICOLON" << endl;}
#line 3625 "y.tab.c"
    break;

  case 190: /* jump_statement: RETURN expression_opt SEMICOLON  */
#line 1050 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "jump_statement -> RETURN expression_opt SEMICOLON" << endl;
            (yyval.stmt) = new Statement();
            if((yyvsp[-1].expr) -> entry)
                emit("return", (yyvsp[-1].expr) -> entry -> name, "", "");
            else
                emit("return", "", "", "");
        }
#line 3638 "y.tab.c"
    break;

  case 191: /* translation_unit: external_declaration  */
#line 1061 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "translation_unit -> external_declaration" << endl;}
#line 3644 "y.tab.c"
    break;

  case 192: /* translation_unit: translation_unit external_declaration  */
#line 1062 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "translation_unit -> translation_unit external_declaration" << endl;}
#line 3650 "y.tab.c"
    break;

  case 193: /* external_declaration: function_definition  */
#line 1064 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "external_declaration -> function_definition" << endl;}
#line 3656 "y.tab.c"
    break;

  case 194: /* external_declaration: declaration  */
#line 1065 "TinyC3_22CS30004_22CS30061.y"
                                                        {/* skip */ cerr << "external_declaration -> declaration" << endl;}
#line 3662 "y.tab.c"
    break;

  case 195: /* function_definition: declaration_specifiers declarator declaration_list_opt compound_statement  */
#line 1068 "TinyC3_22CS30004_22CS30061.y"
        {
            cerr << "function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement" << endl;
            // currST -> parent = globalST;
            // switchTable(globalST);
        }
#line 3672 "y.tab.c"
    break;

  case 196: /* declaration_list: declaration  */
#line 1074 "TinyC3_22CS30004_22CS30061.y"
                                                                                                        {/* skip */ cerr << "declaration_list -> declaration" << endl;}
#line 3678 "y.tab.c"
    break;

  case 197: /* declaration_list: declaration_list declaration  */
#line 1075 "TinyC3_22CS30004_22CS30061.y"
                                                                                                        {/* skip */ cerr << "declaration_list -> declaration_list declaration" << endl;}
#line 3684 "y.tab.c"
    break;

  case 198: /* declaration_list_opt: %empty  */
#line 1077 "TinyC3_22CS30004_22CS30061.y"
                                                                                                        {/* skip */ cerr << "declaration_list_opt -> epsilon" << endl;}
#line 3690 "y.tab.c"
    break;

  case 199: /* declaration_list_opt: declaration_list  */
#line 1078 "TinyC3_22CS30004_22CS30061.y"
                                                                                                        {/* skip */ cerr << "declaration_list_opt -> declaration_list" << endl;}
#line 3696 "y.tab.c"
    break;

  case 200: /* M: %empty  */
#line 1083 "TinyC3_22CS30004_22CS30061.y"
        {
            (yyval.inst) = nextinstr();
        }
#line 3704 "y.tab.c"
    break;

  case 201: /* N: %empty  */
#line 1088 "TinyC3_22CS30004_22CS30061.y"
        {
            (yyval.stmt) = new Statement();
            (yyval.stmt) -> nextlist = makelist(nextinstr());
            emit("goto", "", "", "");
        }
#line 3714 "y.tab.c"
    break;

  case 202: /* CT: %empty  */
#line 1095 "TinyC3_22CS30004_22CS30061.y"
        {
            
        }
#line 3722 "y.tab.c"
    break;


#line 3726 "y.tab.c"

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

#line 1098 "TinyC3_22CS30004_22CS30061.y"


void yyerror(string s) {
    cerr << s << endl;
    cerr << "Error at line number: " << yylineno << " at token: " << yytext << endl;
    exit(1);
}   
