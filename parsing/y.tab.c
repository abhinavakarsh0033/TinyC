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
#line 8 "tinyC2_22CS30004_22CS30061.y"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int yylex();
void yyerror(char *s);

typedef struct _node {
    char *data;
    struct _list *childlist;
} node;

typedef struct _list {
    struct _node *head;
    struct _list *next;
} list;

node *createNode(char *data);
void addChild(node *parent, node *child);
void addLeaf(node *parent, char *data);
void assignRoot(node *rootnode);

#line 94 "y.tab.c"

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
    CONSTANT = 306,                /* CONSTANT  */
    STRING_LITERAL = 307,          /* STRING_LITERAL  */
    ERROR = 308,                   /* ERROR  */
    AUTO = 309,                    /* AUTO  */
    BREAK = 310,                   /* BREAK  */
    CASE = 311,                    /* CASE  */
    CHAR = 312,                    /* CHAR  */
    CONST = 313,                   /* CONST  */
    CONTINUE = 314,                /* CONTINUE  */
    DEFAULT = 315,                 /* DEFAULT  */
    DO = 316,                      /* DO  */
    DOUBLE = 317,                  /* DOUBLE  */
    ELSE = 318,                    /* ELSE  */
    ENUM = 319,                    /* ENUM  */
    EXTERN = 320,                  /* EXTERN  */
    FLOAT = 321,                   /* FLOAT  */
    FOR = 322,                     /* FOR  */
    GOTO = 323,                    /* GOTO  */
    IF = 324,                      /* IF  */
    INLINE = 325,                  /* INLINE  */
    INT = 326,                     /* INT  */
    LONG = 327,                    /* LONG  */
    REGISTER = 328,                /* REGISTER  */
    RESTRICT = 329,                /* RESTRICT  */
    RETURN = 330,                  /* RETURN  */
    SHORT = 331,                   /* SHORT  */
    SIGNED = 332,                  /* SIGNED  */
    SIZEOF = 333,                  /* SIZEOF  */
    STATIC = 334,                  /* STATIC  */
    STRUCT = 335,                  /* STRUCT  */
    SWITCH = 336,                  /* SWITCH  */
    TYPEDEF = 337,                 /* TYPEDEF  */
    UNION = 338,                   /* UNION  */
    UNSIGNED = 339,                /* UNSIGNED  */
    VOID = 340,                    /* VOID  */
    VOLATILE = 341,                /* VOLATILE  */
    WHILE = 342,                   /* WHILE  */
    BOOL = 343,                    /* BOOL  */
    COMPLEX = 344,                 /* COMPLEX  */
    IMAGINARY = 345,               /* IMAGINARY  */
    LOWER_THAN_ELSE = 346          /* LOWER_THAN_ELSE  */
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
#define CONSTANT 306
#define STRING_LITERAL 307
#define ERROR 308
#define AUTO 309
#define BREAK 310
#define CASE 311
#define CHAR 312
#define CONST 313
#define CONTINUE 314
#define DEFAULT 315
#define DO 316
#define DOUBLE 317
#define ELSE 318
#define ENUM 319
#define EXTERN 320
#define FLOAT 321
#define FOR 322
#define GOTO 323
#define IF 324
#define INLINE 325
#define INT 326
#define LONG 327
#define REGISTER 328
#define RESTRICT 329
#define RETURN 330
#define SHORT 331
#define SIGNED 332
#define SIZEOF 333
#define STATIC 334
#define STRUCT 335
#define SWITCH 336
#define TYPEDEF 337
#define UNION 338
#define UNSIGNED 339
#define VOID 340
#define VOLATILE 341
#define WHILE 342
#define BOOL 343
#define COMPLEX 344
#define IMAGINARY 345
#define LOWER_THAN_ELSE 346

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 31 "tinyC2_22CS30004_22CS30061.y"
node *nodeptr;

#line 332 "y.tab.c"

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
  YYSYMBOL_CONSTANT = 51,                  /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 52,            /* STRING_LITERAL  */
  YYSYMBOL_ERROR = 53,                     /* ERROR  */
  YYSYMBOL_AUTO = 54,                      /* AUTO  */
  YYSYMBOL_BREAK = 55,                     /* BREAK  */
  YYSYMBOL_CASE = 56,                      /* CASE  */
  YYSYMBOL_CHAR = 57,                      /* CHAR  */
  YYSYMBOL_CONST = 58,                     /* CONST  */
  YYSYMBOL_CONTINUE = 59,                  /* CONTINUE  */
  YYSYMBOL_DEFAULT = 60,                   /* DEFAULT  */
  YYSYMBOL_DO = 61,                        /* DO  */
  YYSYMBOL_DOUBLE = 62,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 63,                      /* ELSE  */
  YYSYMBOL_ENUM = 64,                      /* ENUM  */
  YYSYMBOL_EXTERN = 65,                    /* EXTERN  */
  YYSYMBOL_FLOAT = 66,                     /* FLOAT  */
  YYSYMBOL_FOR = 67,                       /* FOR  */
  YYSYMBOL_GOTO = 68,                      /* GOTO  */
  YYSYMBOL_IF = 69,                        /* IF  */
  YYSYMBOL_INLINE = 70,                    /* INLINE  */
  YYSYMBOL_INT = 71,                       /* INT  */
  YYSYMBOL_LONG = 72,                      /* LONG  */
  YYSYMBOL_REGISTER = 73,                  /* REGISTER  */
  YYSYMBOL_RESTRICT = 74,                  /* RESTRICT  */
  YYSYMBOL_RETURN = 75,                    /* RETURN  */
  YYSYMBOL_SHORT = 76,                     /* SHORT  */
  YYSYMBOL_SIGNED = 77,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 78,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 79,                    /* STATIC  */
  YYSYMBOL_STRUCT = 80,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 81,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 82,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 83,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 84,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 85,                      /* VOID  */
  YYSYMBOL_VOLATILE = 86,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 87,                     /* WHILE  */
  YYSYMBOL_BOOL = 88,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 89,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 90,                 /* IMAGINARY  */
  YYSYMBOL_LOWER_THAN_ELSE = 91,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 92,                  /* $accept  */
  YYSYMBOL_PROGRAM = 93,                   /* PROGRAM  */
  YYSYMBOL_primary_expression = 94,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 95,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 96,  /* argument_expression_list  */
  YYSYMBOL_argument_expression_list_opt = 97, /* argument_expression_list_opt  */
  YYSYMBOL_unary_expression = 98,          /* unary_expression  */
  YYSYMBOL_unary_operator = 99,            /* unary_operator  */
  YYSYMBOL_cast_expression = 100,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 101, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 102,      /* additive_expression  */
  YYSYMBOL_shift_expression = 103,         /* shift_expression  */
  YYSYMBOL_relational_expression = 104,    /* relational_expression  */
  YYSYMBOL_equality_expression = 105,      /* equality_expression  */
  YYSYMBOL_AND_expression = 106,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 107,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 108,  /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 109,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 110,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 111,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 112,    /* assignment_expression  */
  YYSYMBOL_assignment_expression_opt = 113, /* assignment_expression_opt  */
  YYSYMBOL_assignment_operator = 114,      /* assignment_operator  */
  YYSYMBOL_expression = 115,               /* expression  */
  YYSYMBOL_expression_opt = 116,           /* expression_opt  */
  YYSYMBOL_constant_expression = 117,      /* constant_expression  */
  YYSYMBOL_declaration = 118,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 119,   /* declaration_specifiers  */
  YYSYMBOL_declaration_specifiers_opt = 120, /* declaration_specifiers_opt  */
  YYSYMBOL_init_declarator_list_opt = 121, /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 122,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 123,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 124,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 125,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 126, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 127, /* specifier_qualifier_list_opt  */
  YYSYMBOL_type_qualifier = 128,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 129,       /* function_specifier  */
  YYSYMBOL_declarator = 130,               /* declarator  */
  YYSYMBOL_direct_declarator = 131,        /* direct_declarator  */
  YYSYMBOL_pointer = 132,                  /* pointer  */
  YYSYMBOL_pointer_opt = 133,              /* pointer_opt  */
  YYSYMBOL_type_qualifier_list = 134,      /* type_qualifier_list  */
  YYSYMBOL_type_qualifier_list_opt = 135,  /* type_qualifier_list_opt  */
  YYSYMBOL_parameter_type_list = 136,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 137,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 138,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 139,          /* identifier_list  */
  YYSYMBOL_identifier_list_opt = 140,      /* identifier_list_opt  */
  YYSYMBOL_type_name = 141,                /* type_name  */
  YYSYMBOL_initializer = 142,              /* initializer  */
  YYSYMBOL_initializer_list = 143,         /* initializer_list  */
  YYSYMBOL_designation = 144,              /* designation  */
  YYSYMBOL_designation_opt = 145,          /* designation_opt  */
  YYSYMBOL_designator_list = 146,          /* designator_list  */
  YYSYMBOL_designator = 147,               /* designator  */
  YYSYMBOL_statement = 148,                /* statement  */
  YYSYMBOL_labeled_statement = 149,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 150,       /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 151,      /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 152,          /* block_item_list  */
  YYSYMBOL_block_item = 153,               /* block_item  */
  YYSYMBOL_expression_statement = 154,     /* expression_statement  */
  YYSYMBOL_selection_statement = 155,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 156,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 157,           /* jump_statement  */
  YYSYMBOL_translation_unit = 158,         /* translation_unit  */
  YYSYMBOL_external_declaration = 159,     /* external_declaration  */
  YYSYMBOL_function_definition = 160,      /* function_definition  */
  YYSYMBOL_declaration_list = 161,         /* declaration_list  */
  YYSYMBOL_declaration_list_opt = 162      /* declaration_list_opt  */
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
#define YYLAST   935

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  197
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  323

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   346


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
      85,    86,    87,    88,    89,    90,    91
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    64,    64,    68,    69,    70,    71,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    83,    84,    86,    87,
      89,    90,    91,    92,    93,    94,    96,    97,    98,    99,
     100,   101,   103,   104,   106,   107,   108,   109,   111,   112,
     113,   115,   116,   117,   119,   120,   121,   122,   123,   125,
     126,   127,   129,   130,   132,   133,   135,   136,   138,   139,
     141,   142,   144,   145,   147,   148,   150,   151,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   165,
     166,   168,   169,   171,   175,   177,   178,   179,   180,   182,
     183,   185,   186,   188,   189,   191,   192,   194,   195,   196,
     197,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   212,   213,   215,   216,   218,   219,   220,
     222,   224,   226,   227,   228,   229,   230,   231,   232,   233,
     235,   236,   238,   239,   241,   242,   244,   245,   247,   248,
     250,   251,   253,   254,   256,   257,   259,   260,   262,   264,
     265,   266,   268,   269,   271,   273,   274,   276,   277,   279,
     280,   284,   285,   286,   287,   288,   289,   291,   292,   293,
     295,   297,   298,   300,   301,   303,   304,   306,   308,   309,
     310,   312,   313,   314,   315,   317,   318,   319,   320,   324,
     325,   327,   328,   330,   332,   333,   335,   336
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
  "BITWISE_OR_ASSIGNMENT", "IDENTIFIER", "CONSTANT", "STRING_LITERAL",
  "ERROR", "AUTO", "BREAK", "CASE", "CHAR", "CONST", "CONTINUE", "DEFAULT",
  "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT", "FOR", "GOTO", "IF",
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
  "function_definition", "declaration_list", "declaration_list_opt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-181)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-197)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     820,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
    -181,    15,  -181,     2,   820,   820,   820,   820,   820,  -181,
    -181,  -181,    -9,    -8,    22,  -181,   505,  -181,     4,  -181,
    -181,  -181,  -181,  -181,  -181,  -181,    -9,    24,  -181,    24,
     482,  -181,     2,   820,    40,    24,  -181,    76,  -181,  -181,
    -181,    12,   465,    11,   663,   663,  -181,  -181,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,   679,  -181,   120,   147,   727,
    -181,   117,   149,   181,   151,   177,    51,    38,   104,    50,
     146,  -181,  -181,  -181,  -181,   211,  -181,   134,   -26,   783,
    -181,    44,   845,  -181,   845,   150,   727,   124,    74,  -181,
     482,     7,  -181,   465,  -181,  -181,   465,  -181,   727,   727,
     133,   158,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,   727,  -181,  -181,   727,   727,
     727,   727,   727,   727,   727,   727,   727,   727,   727,   727,
     727,   727,   727,   727,   727,   727,   727,   136,   164,   727,
     183,   189,   591,   221,   182,   228,   727,   230,   231,   224,
     202,  -181,  -181,  -181,  -181,   232,   297,  -181,  -181,  -181,
    -181,  -181,  -181,    -9,    17,   743,  -181,    28,   235,   229,
    -181,   233,   236,  -181,   727,  -181,  -181,  -181,   611,  -181,
     240,  -181,  -181,   142,  -181,  -181,  -181,   239,   242,    29,
     237,   243,  -181,  -181,  -181,  -181,  -181,  -181,  -181,   117,
     117,   149,   149,   181,   181,   181,   181,   151,   151,   177,
      51,    38,   104,    50,    -1,   591,  -181,   210,  -181,   591,
     163,   383,   215,   727,   216,   727,   727,  -181,  -181,  -181,
     727,   727,   250,  -181,   251,  -181,  -181,   746,   206,  -181,
    -181,    11,  -181,  -181,  -181,   482,   252,   252,  -181,   727,
    -181,   727,  -181,   591,  -181,   253,   223,   727,  -181,    70,
    -181,    79,   128,   260,   266,  -181,  -181,  -181,  -181,  -181,
     157,  -181,  -181,  -181,  -181,   727,   727,   238,   591,   591,
     591,  -181,  -181,  -181,   154,   129,   254,   727,   244,  -181,
    -181,  -181,   256,   727,   288,   591,  -181,   300,   591,  -181,
     591,  -181,  -181
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    99,   102,   117,   107,    97,   106,   120,   104,   105,
     100,   118,   103,   108,    98,   109,   101,   119,   110,   111,
     112,     0,   192,   132,    89,    89,    89,    89,     2,   189,
     191,     1,   136,     0,    92,    93,    95,   133,     0,    90,
      85,    86,    87,    88,   190,   134,   137,   130,    84,   132,
       0,   194,   132,   197,     0,   132,   122,   121,   135,   131,
      94,    95,     0,   155,     0,     0,    26,    27,    28,    29,
      30,    31,     3,     4,     5,     0,     7,    20,    32,     0,
      34,    38,    41,    44,    49,    52,    54,    56,    58,    60,
      62,    64,   149,    96,   195,    81,   193,     0,   136,   146,
      79,     0,   115,   148,   115,     0,     0,     0,     0,   156,
       0,     0,   157,     0,    21,    22,     0,    24,     0,    18,
       0,     0,    12,    13,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,     0,    32,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     0,     0,
       0,     0,    81,     0,     0,     0,    81,     0,     0,    82,
       0,   175,   176,   161,   163,     0,    81,   173,   162,   164,
     165,   166,   123,   136,   137,    66,   144,   132,     0,   138,
     140,   147,     0,     6,     0,   116,   113,   114,     0,    83,
       0,   160,   150,   155,   152,   154,   158,     0,     0,     0,
      19,     0,    16,    10,    11,    65,    35,    36,    37,    39,
      40,    42,    43,    45,    46,    47,    48,    50,    51,    53,
      55,    57,    59,    61,     0,    81,   187,     0,   186,    81,
       0,    81,     0,     0,     0,     0,     0,   177,   170,   174,
       0,     0,    27,    67,     0,   142,   128,     0,     0,   129,
      80,   155,    33,   159,   151,     0,     0,    25,     8,     0,
       9,     0,   167,    81,   169,     0,     0,    81,   185,     0,
     188,     0,     0,     0,     0,   127,   124,   139,   141,   145,
       0,   153,    17,    63,   168,     0,    81,     0,    81,    81,
      81,   125,   126,    14,   155,     0,     0,    81,   178,   180,
     181,    15,     0,    81,     0,    81,   182,     0,    81,   179,
      81,   184,   183
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -181,  -181,  -181,  -181,  -181,  -181,   -34,  -181,   -72,    69,
      71,    52,    63,   152,   159,   165,   166,   167,  -181,  -103,
     -48,  -181,  -181,   -61,  -155,   153,   -32,     0,   122,  -181,
    -181,   270,  -181,   -43,    -2,   217,   -24,  -181,   -18,  -181,
     276,  -181,   226,   -86,  -181,  -181,    68,  -181,  -181,   -15,
    -104,    65,  -181,  -180,  -181,   218,  -145,  -181,   273,  -181,
    -181,   155,  -181,  -181,  -181,  -181,  -181,   302,  -181,  -181,
    -181
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    21,    76,    77,   210,   211,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
     100,   254,   135,   169,   170,   200,    22,    52,    40,    33,
      34,    35,    24,    25,   103,   196,    26,    27,    61,    57,
      37,    38,    46,    47,   188,   189,   190,   191,   192,   105,
      93,   108,   109,   110,   111,   112,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    28,    29,    30,    53,
      54
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   101,    92,   199,    51,    36,   204,   137,    45,    55,
     106,   244,   185,   194,   106,    31,   107,   240,    32,   102,
     107,    94,    58,   265,    39,    39,    39,    39,    23,    48,
     114,   115,     3,   268,  -143,   271,    49,    97,   104,   -91,
      32,   117,  -143,   194,    32,   136,   205,    95,    11,     3,
     193,    50,   101,   183,    56,   101,   199,   209,   194,   102,
      17,   102,    92,   171,   151,    11,   216,   217,   218,   152,
     102,   212,   136,   102,    45,     3,   298,    17,   104,    98,
     104,    99,   202,   154,   194,   299,   276,   215,   203,   104,
     272,    11,   104,   194,   274,   234,   251,   250,   207,   187,
     195,   208,   195,    17,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   297,   118,   265,   136,   262,   119,   294,   120,
     121,   122,   123,   138,   300,   312,   153,   253,   139,   140,
     182,   306,   194,   194,   171,   106,   260,    41,    42,    43,
     264,   107,   314,   308,   309,   310,   198,   106,   317,    45,
      58,   291,   311,   107,   136,   303,   141,   142,   293,   255,
     319,   304,   235,   321,   201,   322,   145,   146,   147,   148,
     155,   156,   279,   213,   281,   282,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   223,   224,   225,
     226,   236,   283,   284,   143,   144,   149,   150,   214,   277,
     219,   220,   227,   228,   221,   222,    62,    92,    95,  -171,
     238,   292,    64,    65,    66,   239,   241,    67,    68,    69,
      70,    71,   242,   243,   305,   245,   246,   136,   194,   247,
     248,   256,   259,   257,   263,   266,   273,   258,   267,   270,
     275,   269,   278,   280,   285,   286,   289,   187,   295,   261,
     296,   157,    73,    74,   301,     1,   158,   159,     2,     3,
     160,   161,   162,     4,   302,   307,     5,     6,   163,   164,
     165,     7,     8,     9,    10,    11,   166,    12,    13,    75,
      14,   313,   167,   316,   318,    15,    16,    17,   168,    18,
      19,    20,    62,   229,    95,  -172,   320,   315,    64,    65,
      66,   230,   237,    67,    68,    69,    70,    71,   231,    60,
     232,   197,   233,    59,   184,   288,   290,    96,     0,   206,
      44,   249,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   157,    73,    74,
       0,     1,   158,   159,     2,     3,   160,   161,   162,     4,
       0,     0,     5,     6,   163,   164,   165,     7,     8,     9,
      10,    11,   166,    12,    13,    75,    14,     0,   167,     0,
       0,    15,    16,    17,   168,    18,    19,    20,    62,     0,
       0,     0,     0,     0,    64,    65,    66,     0,     0,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,     0,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     0,     5,     6,
       0,     0,     0,     7,     8,     9,    10,    11,     0,    12,
      13,    75,    14,     0,     0,     0,     0,    15,    16,    17,
      62,    18,    19,    20,     0,     0,    64,    65,    66,     0,
       0,    67,    68,    69,    70,    71,     0,    62,     0,    63,
       0,     0,     0,    64,    65,    66,     0,     0,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -196,     0,     0,    72,    73,    74,     0,     0,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     0,
       0,     6,    72,    73,    74,     0,     8,     9,     0,    11,
       0,    12,    13,    75,    50,     0,     0,     0,     0,    15,
      16,    17,     0,    18,    19,    20,     0,     0,     0,     1,
      75,     0,     2,     3,     0,     0,     0,     4,     0,     0,
       5,     6,     0,     0,     0,     7,     8,     9,    10,    11,
       0,    12,    13,     0,    14,     0,     0,     0,     0,    15,
      16,    17,     0,    18,    19,    20,    62,     0,    95,     0,
       0,     0,    64,    65,    66,     0,     0,    67,    68,    69,
      70,    71,     0,     0,     0,     0,    62,     0,   261,     0,
       0,     0,    64,    65,    66,     0,     0,    67,    68,    69,
      70,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   157,    73,    74,     0,     0,   158,   159,     0,     0,
     160,   161,   162,     0,     0,     0,     0,     0,   163,   164,
     165,    72,    73,    74,     0,     0,   166,     0,   113,    75,
       0,     0,   167,     0,    64,    65,    66,     0,   168,    67,
      68,    69,    70,    71,   116,     0,     0,     0,     0,    75,
      64,    65,    66,     0,     0,    67,    68,    69,    70,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    62,     0,     0,     0,     0,     0,    64,    65,
      66,    75,     0,    67,    68,    69,    70,    71,    62,     0,
       0,     0,     0,     0,    64,    65,    66,    75,     0,   252,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
       0,     0,     0,     0,   287,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,     0,     0,     0,     0,
       1,     0,     0,     2,     3,    75,     0,     0,     4,     0,
       0,     5,     6,     0,     0,     0,     7,     8,     9,    10,
      11,    75,    12,    13,     0,    14,     0,     0,     0,     0,
      15,    16,    17,   186,    18,    19,    20,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     0,     5,     6,
       0,     0,     0,     7,     8,     9,    10,    11,     0,    12,
      13,     0,    14,     0,     0,     0,     0,    15,    16,    17,
       0,    18,    19,    20,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     0,     5,     6,     0,     0,     0,
       7,     8,     9,    10,    11,     0,    12,    13,     0,    14,
       0,     0,     2,     3,    15,    16,    17,     4,    18,    19,
      20,     6,     0,     0,     0,     0,     8,     9,     0,    11,
       0,    12,    13,     0,     0,     0,     0,     0,     0,    15,
      16,    17,     0,    18,    19,    20
};

static const yytype_int16 yycheck[] =
{
       0,    62,    50,   106,    36,    23,   110,    79,    32,     5,
       3,   166,    98,    14,     3,     0,     9,   162,    16,    62,
       9,    53,    46,   203,    24,    25,    26,    27,    28,    37,
      64,    65,    58,     4,     6,    36,    14,    55,    62,    37,
      16,    75,    14,    14,    16,    79,    39,     7,    74,    58,
       6,    39,   113,    79,    50,   116,   159,   118,    14,   102,
      86,   104,   110,    95,    13,    74,   138,   139,   140,    31,
     113,   119,   106,   116,    98,    58,     6,    86,   102,     3,
     104,     5,     8,    33,    14,     6,   241,   135,    14,   113,
     235,    74,   116,    14,   239,   156,    79,   183,   113,    99,
     102,   116,   104,    86,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   277,     3,   304,   159,   198,     7,   273,     9,
      10,    11,    12,    16,     6,     6,    32,   185,    21,    22,
       6,   296,    14,    14,   176,     3,   194,    25,    26,    27,
       8,     9,   307,   298,   299,   300,     6,     3,   313,   183,
     184,   265,     8,     9,   198,     8,    17,    18,   271,   187,
     315,    14,    36,   318,    50,   320,    25,    26,    27,    28,
      34,    35,   243,    50,   245,   246,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,   145,   146,   147,
     148,    37,   250,   251,    23,    24,    29,    30,    50,   241,
     141,   142,   149,   150,   143,   144,     5,   265,     7,     8,
      37,   269,    11,    12,    13,    36,     5,    16,    17,    18,
      19,    20,    50,     5,   295,     5,     5,   271,    14,    37,
       8,     6,     6,    14,     4,     6,    36,    14,     6,     6,
      87,    14,    37,    37,     4,     4,    50,   257,     5,     7,
      37,    50,    51,    52,     4,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     8,    37,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    37,    81,    37,     6,    84,    85,    86,    87,    88,
      89,    90,     5,   151,     7,     8,     6,    63,    11,    12,
      13,   152,   159,    16,    17,    18,    19,    20,   153,    49,
     154,   104,   155,    47,    98,   257,   261,    54,    -1,   111,
      28,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    -1,    54,    -1,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,    76,
      77,    78,    79,    -1,    -1,    -1,    -1,    84,    85,    86,
       5,    88,    89,    90,    -1,    -1,    11,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    -1,     5,    -1,     7,
      -1,    -1,    -1,    11,    12,    13,    -1,    -1,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    50,    51,    52,    -1,    -1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    66,    50,    51,    52,    -1,    71,    72,    -1,    74,
      -1,    76,    77,    78,    39,    -1,    -1,    -1,    -1,    84,
      85,    86,    -1,    88,    89,    90,    -1,    -1,    -1,    54,
      78,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      -1,    76,    77,    -1,    79,    -1,    -1,    -1,    -1,    84,
      85,    86,    -1,    88,    89,    90,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,    13,    -1,    -1,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,    13,    -1,    -1,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    52,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    61,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    50,    51,    52,    -1,    -1,    75,    -1,     5,    78,
      -1,    -1,    81,    -1,    11,    12,    13,    -1,    87,    16,
      17,    18,    19,    20,     5,    -1,    -1,    -1,    -1,    78,
      11,    12,    13,    -1,    -1,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    78,    -1,    16,    17,    18,    19,    20,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    78,    -1,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    57,    58,    78,    -1,    -1,    62,    -1,
      -1,    65,    66,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    78,    76,    77,    -1,    79,    -1,    -1,    -1,    -1,
      84,    85,    86,    50,    88,    89,    90,    54,    -1,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,    76,
      77,    -1,    79,    -1,    -1,    -1,    -1,    84,    85,    86,
      -1,    88,    89,    90,    54,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    -1,    76,    77,    -1,    79,
      -1,    -1,    57,    58,    84,    85,    86,    62,    88,    89,
      90,    66,    -1,    -1,    -1,    -1,    71,    72,    -1,    74,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    -1,    88,    89,    90
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,    57,    58,    62,    65,    66,    70,    71,    72,
      73,    74,    76,    77,    79,    84,    85,    86,    88,    89,
      90,    93,   118,   119,   124,   125,   128,   129,   158,   159,
     160,     0,    16,   121,   122,   123,   130,   132,   133,   119,
     120,   120,   120,   120,   159,   128,   134,   135,    37,    14,
      39,   118,   119,   161,   162,     5,    50,   131,   128,   132,
     123,   130,     5,     7,    11,    12,    13,    16,    17,    18,
      19,    20,    50,    51,    52,    78,    94,    95,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   142,   118,     7,   150,   130,     3,     5,
     112,   115,   125,   126,   128,   141,     3,     9,   143,   144,
     145,   146,   147,     5,    98,    98,     5,    98,     3,     7,
       9,    10,    11,    12,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,   114,    98,   100,    16,    21,
      22,    17,    18,    23,    24,    25,    26,    27,    28,    29,
      30,    13,    31,    32,    33,    34,    35,    50,    55,    56,
      59,    60,    61,    67,    68,    69,    75,    81,    87,   115,
     116,   118,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,     6,    79,   134,   135,    50,   119,   136,   137,
     138,   139,   140,     6,    14,   126,   127,   127,     6,   111,
     117,    50,     8,    14,   142,    39,   147,   141,   141,   115,
      96,    97,   112,    50,    50,   112,   100,   100,   100,   101,
     101,   102,   102,   103,   103,   103,   103,   104,   104,   105,
     106,   107,   108,   109,   115,    36,    37,   117,    37,    36,
     148,     5,    50,     5,   116,     5,     5,    37,     8,   153,
     135,    79,    16,   112,   113,   130,     6,    14,    14,     6,
     112,     7,   100,     4,     8,   145,     6,     6,     4,    14,
       6,    36,   148,    36,   148,    87,   116,   118,    37,   115,
      37,   115,   115,   112,   112,     4,     4,    38,   138,    50,
     143,   142,   112,   111,   148,     5,    37,   116,     6,     6,
       6,     4,     8,     8,    14,   115,   116,    37,   148,   148,
     148,     8,     6,    37,   116,    63,    37,   116,     6,   148,
       6,   148,   148
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    94,    94,    94,    94,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    96,    96,    97,    97,
      98,    98,    98,    98,    98,    98,    99,    99,    99,    99,
      99,    99,   100,   100,   101,   101,   101,   101,   102,   102,
     102,   103,   103,   103,   104,   104,   104,   104,   104,   105,
     105,   105,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   113,   113,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   115,
     115,   116,   116,   117,   118,   119,   119,   119,   119,   120,
     120,   121,   121,   122,   122,   123,   123,   124,   124,   124,
     124,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   126,   126,   127,   127,   128,   128,   128,
     129,   130,   131,   131,   131,   131,   131,   131,   131,   131,
     132,   132,   133,   133,   134,   134,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   141,   142,
     142,   142,   143,   143,   144,   145,   145,   146,   146,   147,
     147,   148,   148,   148,   148,   148,   148,   149,   149,   149,
     150,   151,   151,   152,   152,   153,   153,   154,   155,   155,
     155,   156,   156,   156,   156,   157,   157,   157,   157,   158,
     158,   159,   159,   160,   161,   161,   162,   162
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     4,
       3,     3,     2,     2,     6,     7,     1,     3,     0,     1,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     0,     1,     1,     3,     2,     2,     2,     2,     0,
       1,     0,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     0,     1,     1,     1,     1,
       1,     2,     1,     3,     5,     6,     6,     5,     4,     4,
       2,     3,     0,     1,     1,     2,     0,     1,     1,     3,
       1,     3,     2,     1,     1,     3,     0,     1,     1,     1,
       3,     4,     2,     4,     2,     0,     1,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       3,     0,     1,     1,     2,     1,     1,     2,     5,     7,
       5,     5,     7,     9,     8,     3,     2,     2,     3,     1,
       2,     1,     1,     4,     1,     2,     0,     1
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
#line 64 "tinyC2_22CS30004_22CS30061.y"
                                {assignRoot((yyvsp[0].nodeptr));}
#line 1861 "y.tab.c"
    break;

  case 3: /* primary_expression: IDENTIFIER  */
#line 68 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("primary-expression"); addLeaf((yyval.nodeptr), "identifier");}
#line 1867 "y.tab.c"
    break;

  case 4: /* primary_expression: CONSTANT  */
#line 69 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("primary-expression"); addLeaf((yyval.nodeptr), "constant");}
#line 1873 "y.tab.c"
    break;

  case 5: /* primary_expression: STRING_LITERAL  */
#line 70 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("primary-expression"); addLeaf((yyval.nodeptr), "string-literal");}
#line 1879 "y.tab.c"
    break;

  case 6: /* primary_expression: LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET  */
#line 71 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("primary-expression"); addLeaf((yyval.nodeptr), ")"); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addLeaf((yyval.nodeptr), "(");}
#line 1885 "y.tab.c"
    break;

  case 7: /* postfix_expression: primary_expression  */
#line 73 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                            {(yyval.nodeptr) =  createNode("postfix-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 1891 "y.tab.c"
    break;

  case 8: /* postfix_expression: postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 74 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                            {(yyval.nodeptr) =  createNode("postfix-expression"); addLeaf((yyval.nodeptr), "["); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addLeaf((yyval.nodeptr), "]"); addChild((yyval.nodeptr), (yyvsp[-3].nodeptr));}
#line 1897 "y.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression LEFT_CURLY_BRACKET argument_expression_list_opt RIGHT_ROUND_BRACKET  */
#line 75 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                            {(yyval.nodeptr) =  createNode("postfix-expression"); addLeaf((yyval.nodeptr), ")"); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addLeaf((yyval.nodeptr), "("); addChild((yyval.nodeptr), (yyvsp[-3].nodeptr));}
#line 1903 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 76 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                            {(yyval.nodeptr) =  createNode("postfix-expression"); addLeaf((yyval.nodeptr), "identifier"); addLeaf((yyval.nodeptr), "."); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 1909 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 77 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                            {(yyval.nodeptr) =  createNode("postfix-expression"); addLeaf((yyval.nodeptr), "identifier"); addLeaf((yyval.nodeptr), "->"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 1915 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression INCREMENT  */
#line 78 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                            {(yyval.nodeptr) =  createNode("postfix-expression"); addLeaf((yyval.nodeptr), "increment"); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 1921 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression DECREMENT  */
#line 79 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                            {(yyval.nodeptr) =  createNode("postfix-expression"); addLeaf((yyval.nodeptr), "decrement"); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 1927 "y.tab.c"
    break;

  case 14: /* postfix_expression: LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET  */
#line 80 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                            {(yyval.nodeptr) =  createNode("postfix-expression"); addLeaf((yyval.nodeptr), "}"); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addLeaf((yyval.nodeptr), "{"); addLeaf((yyval.nodeptr), ")"); addChild((yyval.nodeptr), (yyvsp[-4].nodeptr)); addLeaf((yyval.nodeptr), "(");}
#line 1933 "y.tab.c"
    break;

  case 15: /* postfix_expression: LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET  */
#line 81 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                            {(yyval.nodeptr) =  createNode("postfix-expression"); addLeaf((yyval.nodeptr), "}"); addLeaf((yyval.nodeptr), ","); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr)); addLeaf((yyval.nodeptr), "{"); addLeaf((yyval.nodeptr), ")"); addChild((yyval.nodeptr), (yyvsp[-5].nodeptr)); addLeaf((yyval.nodeptr), "(");}
#line 1939 "y.tab.c"
    break;

  case 16: /* argument_expression_list: assignment_expression  */
#line 83 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("argument-expression-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 1945 "y.tab.c"
    break;

  case 17: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 84 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("argument-expression-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), ","); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 1951 "y.tab.c"
    break;

  case 18: /* argument_expression_list_opt: %empty  */
#line 86 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("argument_expression_list-opt"); addLeaf((yyval.nodeptr), "epsilon");}
#line 1957 "y.tab.c"
    break;

  case 19: /* argument_expression_list_opt: argument_expression_list  */
#line 87 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("argument-expression-list-opt"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 1963 "y.tab.c"
    break;

  case 20: /* unary_expression: postfix_expression  */
#line 89 "tinyC2_22CS30004_22CS30061.y"
                                                                                        {(yyval.nodeptr) = createNode("unary-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 1969 "y.tab.c"
    break;

  case 21: /* unary_expression: INCREMENT unary_expression  */
#line 90 "tinyC2_22CS30004_22CS30061.y"
                                                                                        {(yyval.nodeptr) = createNode("unary-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "increment");}
#line 1975 "y.tab.c"
    break;

  case 22: /* unary_expression: DECREMENT unary_expression  */
#line 91 "tinyC2_22CS30004_22CS30061.y"
                                                                                        {(yyval.nodeptr) = createNode("unary-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "decrement");}
#line 1981 "y.tab.c"
    break;

  case 23: /* unary_expression: unary_operator cast_expression  */
#line 92 "tinyC2_22CS30004_22CS30061.y"
                                                                                        {(yyval.nodeptr) = createNode("unary-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 1987 "y.tab.c"
    break;

  case 24: /* unary_expression: SIZEOF unary_expression  */
#line 93 "tinyC2_22CS30004_22CS30061.y"
                                                                                        {(yyval.nodeptr) = createNode("unary-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "sizeof");}
#line 1993 "y.tab.c"
    break;

  case 25: /* unary_expression: SIZEOF LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET  */
#line 94 "tinyC2_22CS30004_22CS30061.y"
                                                                                        {(yyval.nodeptr) = createNode("unary-expression"); addLeaf((yyval.nodeptr), ")"); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addLeaf((yyval.nodeptr), "("); addLeaf((yyval.nodeptr), "sizeof");}
#line 1999 "y.tab.c"
    break;

  case 26: /* unary_operator: AMPERSAND  */
#line 96 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("unary-operator"); addLeaf((yyval.nodeptr), "&");}
#line 2005 "y.tab.c"
    break;

  case 27: /* unary_operator: ASTERISK  */
#line 97 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("unary-operator"); addLeaf((yyval.nodeptr), "*");}
#line 2011 "y.tab.c"
    break;

  case 28: /* unary_operator: PLUS  */
#line 98 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("unary-operator"); addLeaf((yyval.nodeptr), "+");}
#line 2017 "y.tab.c"
    break;

  case 29: /* unary_operator: MINUS  */
#line 99 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("unary-operator"); addLeaf((yyval.nodeptr), "-");}
#line 2023 "y.tab.c"
    break;

  case 30: /* unary_operator: TILDE  */
#line 100 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("unary-operator"); addLeaf((yyval.nodeptr), "~");}
#line 2029 "y.tab.c"
    break;

  case 31: /* unary_operator: EXCLAMATION  */
#line 101 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("unary-operator"); addLeaf((yyval.nodeptr), "!");}
#line 2035 "y.tab.c"
    break;

  case 32: /* cast_expression: unary_expression  */
#line 103 "tinyC2_22CS30004_22CS30061.y"
                                                                                        {(yyval.nodeptr) = createNode("cast-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2041 "y.tab.c"
    break;

  case 33: /* cast_expression: LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET cast_expression  */
#line 104 "tinyC2_22CS30004_22CS30061.y"
                                                                                        {(yyval.nodeptr) = createNode("cast-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), ")"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr)); addLeaf((yyval.nodeptr), "(");}
#line 2047 "y.tab.c"
    break;

  case 34: /* multiplicative_expression: cast_expression  */
#line 106 "tinyC2_22CS30004_22CS30061.y"
                                                                            {(yyval.nodeptr) = createNode("multiplicative-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2053 "y.tab.c"
    break;

  case 35: /* multiplicative_expression: multiplicative_expression ASTERISK cast_expression  */
#line 107 "tinyC2_22CS30004_22CS30061.y"
                                                                            {(yyval.nodeptr) = createNode("multiplicative-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "*"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2059 "y.tab.c"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression FORWARD_SLASH cast_expression  */
#line 108 "tinyC2_22CS30004_22CS30061.y"
                                                                            {(yyval.nodeptr) = createNode("multiplicative-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "/"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2065 "y.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 109 "tinyC2_22CS30004_22CS30061.y"
                                                                            {(yyval.nodeptr) = createNode("multiplicative-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "%"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2071 "y.tab.c"
    break;

  case 38: /* additive_expression: multiplicative_expression  */
#line 111 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("additive-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2077 "y.tab.c"
    break;

  case 39: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 112 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("additive-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "+"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2083 "y.tab.c"
    break;

  case 40: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 113 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("additive-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "-"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2089 "y.tab.c"
    break;

  case 41: /* shift_expression: additive_expression  */
#line 115 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("shift-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2095 "y.tab.c"
    break;

  case 42: /* shift_expression: shift_expression LEFT_SHIFT additive_expression  */
#line 116 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("shift-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "<<"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2101 "y.tab.c"
    break;

  case 43: /* shift_expression: shift_expression RIGHT_SHIFT additive_expression  */
#line 117 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("shift-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), ">>"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2107 "y.tab.c"
    break;

  case 44: /* relational_expression: shift_expression  */
#line 119 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("relational-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2113 "y.tab.c"
    break;

  case 45: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 120 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("relational-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "<"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2119 "y.tab.c"
    break;

  case 46: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 121 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("relational-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), ">"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2125 "y.tab.c"
    break;

  case 47: /* relational_expression: relational_expression LESS_THAN_EQUAL shift_expression  */
#line 122 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("relational-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "<="); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2131 "y.tab.c"
    break;

  case 48: /* relational_expression: relational_expression GREATER_THAN_EQUAL shift_expression  */
#line 123 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("relational-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), ">="); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2137 "y.tab.c"
    break;

  case 49: /* equality_expression: relational_expression  */
#line 125 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("equality-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2143 "y.tab.c"
    break;

  case 50: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 126 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("equality-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "=="); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2149 "y.tab.c"
    break;

  case 51: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 127 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("equality-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "!="); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2155 "y.tab.c"
    break;

  case 52: /* AND_expression: equality_expression  */
#line 129 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("AND-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2161 "y.tab.c"
    break;

  case 53: /* AND_expression: AND_expression AMPERSAND equality_expression  */
#line 130 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("AND-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "&"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2167 "y.tab.c"
    break;

  case 54: /* exclusive_OR_expression: AND_expression  */
#line 132 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("exclusive-OR-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2173 "y.tab.c"
    break;

  case 55: /* exclusive_OR_expression: exclusive_OR_expression CARET AND_expression  */
#line 133 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("exclusive-OR-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "^"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2179 "y.tab.c"
    break;

  case 56: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 135 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("inclusive-OR-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2185 "y.tab.c"
    break;

  case 57: /* inclusive_OR_expression: inclusive_OR_expression PIPE exclusive_OR_expression  */
#line 136 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("inclusive-OR-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "|"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2191 "y.tab.c"
    break;

  case 58: /* logical_AND_expression: inclusive_OR_expression  */
#line 138 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("logical-AND-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2197 "y.tab.c"
    break;

  case 59: /* logical_AND_expression: logical_AND_expression LOGICAL_AND inclusive_OR_expression  */
#line 139 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("logical-AND-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "&&"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2203 "y.tab.c"
    break;

  case 60: /* logical_OR_expression: logical_AND_expression  */
#line 141 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("logical-OR-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2209 "y.tab.c"
    break;

  case 61: /* logical_OR_expression: logical_OR_expression LOGICAL_OR logical_AND_expression  */
#line 142 "tinyC2_22CS30004_22CS30061.y"
                                                                        {(yyval.nodeptr) = createNode("logical-OR-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "||"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2215 "y.tab.c"
    break;

  case 62: /* conditional_expression: logical_OR_expression  */
#line 144 "tinyC2_22CS30004_22CS30061.y"
                                                                                            {(yyval.nodeptr) = createNode("conditional-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2221 "y.tab.c"
    break;

  case 63: /* conditional_expression: logical_OR_expression QUESTION_MARK expression COLON conditional_expression  */
#line 145 "tinyC2_22CS30004_22CS30061.y"
                                                                                            {(yyval.nodeptr) = createNode("conditional-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), ":"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr)); addLeaf((yyval.nodeptr), "?"); addChild((yyval.nodeptr), (yyvsp[-4].nodeptr));}
#line 2227 "y.tab.c"
    break;

  case 64: /* assignment_expression: conditional_expression  */
#line 147 "tinyC2_22CS30004_22CS30061.y"
                                                                                {(yyval.nodeptr) = createNode("assignment-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2233 "y.tab.c"
    break;

  case 65: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 148 "tinyC2_22CS30004_22CS30061.y"
                                                                                {(yyval.nodeptr) = createNode("assignment-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2239 "y.tab.c"
    break;

  case 66: /* assignment_expression_opt: %empty  */
#line 150 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("assignment-expression-opt"); addLeaf((yyval.nodeptr), "epsilon");}
#line 2245 "y.tab.c"
    break;

  case 67: /* assignment_expression_opt: assignment_expression  */
#line 151 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("assignment-expression-opt"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2251 "y.tab.c"
    break;

  case 68: /* assignment_operator: ASSIGNMENT  */
#line 153 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("assignment-operator"); addLeaf((yyval.nodeptr), "=");}
#line 2257 "y.tab.c"
    break;

  case 69: /* assignment_operator: MULTIPLY_ASSIGNMENT  */
#line 154 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("assignment-operator"); addLeaf((yyval.nodeptr), "*=");}
#line 2263 "y.tab.c"
    break;

  case 70: /* assignment_operator: DIVIDE_ASSIGNMENT  */
#line 155 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("assignment-operator"); addLeaf((yyval.nodeptr), "/=");}
#line 2269 "y.tab.c"
    break;

  case 71: /* assignment_operator: MOD_ASSIGNMENT  */
#line 156 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("assignment-operator"); addLeaf((yyval.nodeptr), "%=");}
#line 2275 "y.tab.c"
    break;

  case 72: /* assignment_operator: ADD_ASSIGNMENT  */
#line 157 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("assignment-operator"); addLeaf((yyval.nodeptr), "+=");}
#line 2281 "y.tab.c"
    break;

  case 73: /* assignment_operator: SUBTRACT_ASSIGNMENT  */
#line 158 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("assignment-operator"); addLeaf((yyval.nodeptr), "-=");}
#line 2287 "y.tab.c"
    break;

  case 74: /* assignment_operator: LEFT_SHIFT_ASSIGNMENT  */
#line 159 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("assignment-operator"); addLeaf((yyval.nodeptr), "<<=");}
#line 2293 "y.tab.c"
    break;

  case 75: /* assignment_operator: RIGHT_SHIFT_ASSIGNMENT  */
#line 160 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("assignment-operator"); addLeaf((yyval.nodeptr), ">>=");}
#line 2299 "y.tab.c"
    break;

  case 76: /* assignment_operator: BITWISE_AND_ASSIGNMENT  */
#line 161 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("assignment-operator"); addLeaf((yyval.nodeptr), "&=");}
#line 2305 "y.tab.c"
    break;

  case 77: /* assignment_operator: BITWISE_XOR_ASSIGNMENT  */
#line 162 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("assignment-operator"); addLeaf((yyval.nodeptr), "^=");}
#line 2311 "y.tab.c"
    break;

  case 78: /* assignment_operator: BITWISE_OR_ASSIGNMENT  */
#line 163 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("assignment-operator"); addLeaf((yyval.nodeptr), "|=");}
#line 2317 "y.tab.c"
    break;

  case 79: /* expression: assignment_expression  */
#line 165 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2323 "y.tab.c"
    break;

  case 80: /* expression: expression COMMA assignment_expression  */
#line 166 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), ","); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2329 "y.tab.c"
    break;

  case 81: /* expression_opt: %empty  */
#line 168 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("expression-opt"); addLeaf((yyval.nodeptr), "epsilon");}
#line 2335 "y.tab.c"
    break;

  case 82: /* expression_opt: expression  */
#line 169 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("expression-opt"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2341 "y.tab.c"
    break;

  case 83: /* constant_expression: conditional_expression  */
#line 171 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("constant-expression"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2347 "y.tab.c"
    break;

  case 84: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 175 "tinyC2_22CS30004_22CS30061.y"
                                                                                {(yyval.nodeptr) = createNode("declaration"); addLeaf((yyval.nodeptr), ";"); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2353 "y.tab.c"
    break;

  case 85: /* declaration_specifiers: storage_class_specifier declaration_specifiers_opt  */
#line 177 "tinyC2_22CS30004_22CS30061.y"
                                                                                {(yyval.nodeptr) = createNode("declaration-specifiers"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 2359 "y.tab.c"
    break;

  case 86: /* declaration_specifiers: type_specifier declaration_specifiers_opt  */
#line 178 "tinyC2_22CS30004_22CS30061.y"
                                                                                {(yyval.nodeptr) = createNode("declaration-specifiers"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 2365 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: type_qualifier declaration_specifiers_opt  */
#line 179 "tinyC2_22CS30004_22CS30061.y"
                                                                                {(yyval.nodeptr) = createNode("declaration-specifiers"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 2371 "y.tab.c"
    break;

  case 88: /* declaration_specifiers: function_specifier declaration_specifiers_opt  */
#line 180 "tinyC2_22CS30004_22CS30061.y"
                                                                                {(yyval.nodeptr) = createNode("declaration-specifiers"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 2377 "y.tab.c"
    break;

  case 89: /* declaration_specifiers_opt: %empty  */
#line 182 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("declaration-specifiers-opt"); addLeaf((yyval.nodeptr), "epsilon");}
#line 2383 "y.tab.c"
    break;

  case 90: /* declaration_specifiers_opt: declaration_specifiers  */
#line 183 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("declaration-specifiers-opt"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2389 "y.tab.c"
    break;

  case 91: /* init_declarator_list_opt: %empty  */
#line 185 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("init-declarator-list-opt"); addLeaf((yyval.nodeptr), "epsilon");}
#line 2395 "y.tab.c"
    break;

  case 92: /* init_declarator_list_opt: init_declarator_list  */
#line 186 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("init-declarator-list-opt"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2401 "y.tab.c"
    break;

  case 93: /* init_declarator_list: init_declarator  */
#line 188 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("init-declarator-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2407 "y.tab.c"
    break;

  case 94: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 189 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("init-declarator-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), ","); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2413 "y.tab.c"
    break;

  case 95: /* init_declarator: declarator  */
#line 191 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("init-declarator"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2419 "y.tab.c"
    break;

  case 96: /* init_declarator: declarator ASSIGNMENT initializer  */
#line 192 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("init-declarator"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "="); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2425 "y.tab.c"
    break;

  case 97: /* storage_class_specifier: EXTERN  */
#line 194 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("storage-class-specifier"); addLeaf((yyval.nodeptr), "extern");}
#line 2431 "y.tab.c"
    break;

  case 98: /* storage_class_specifier: STATIC  */
#line 195 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("storage-class-specifier"); addLeaf((yyval.nodeptr), "static");}
#line 2437 "y.tab.c"
    break;

  case 99: /* storage_class_specifier: AUTO  */
#line 196 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("storage-class-specifier"); addLeaf((yyval.nodeptr), "auto");}
#line 2443 "y.tab.c"
    break;

  case 100: /* storage_class_specifier: REGISTER  */
#line 197 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("storage-class-specifier"); addLeaf((yyval.nodeptr), "register");}
#line 2449 "y.tab.c"
    break;

  case 101: /* type_specifier: VOID  */
#line 199 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("type-specifier"); addLeaf((yyval.nodeptr), "void");}
#line 2455 "y.tab.c"
    break;

  case 102: /* type_specifier: CHAR  */
#line 200 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("type-specifier"); addLeaf((yyval.nodeptr), "char");}
#line 2461 "y.tab.c"
    break;

  case 103: /* type_specifier: SHORT  */
#line 201 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("type-specifier"); addLeaf((yyval.nodeptr), "short");}
#line 2467 "y.tab.c"
    break;

  case 104: /* type_specifier: INT  */
#line 202 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("type-specifier"); addLeaf((yyval.nodeptr), "int");}
#line 2473 "y.tab.c"
    break;

  case 105: /* type_specifier: LONG  */
#line 203 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("type-specifier"); addLeaf((yyval.nodeptr), "long");}
#line 2479 "y.tab.c"
    break;

  case 106: /* type_specifier: FLOAT  */
#line 204 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("type-specifier"); addLeaf((yyval.nodeptr), "float");}
#line 2485 "y.tab.c"
    break;

  case 107: /* type_specifier: DOUBLE  */
#line 205 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("type-specifier"); addLeaf((yyval.nodeptr), "double");}
#line 2491 "y.tab.c"
    break;

  case 108: /* type_specifier: SIGNED  */
#line 206 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("type-specifier"); addLeaf((yyval.nodeptr), "signed");}
#line 2497 "y.tab.c"
    break;

  case 109: /* type_specifier: UNSIGNED  */
#line 207 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("type-specifier"); addLeaf((yyval.nodeptr), "unsigned");}
#line 2503 "y.tab.c"
    break;

  case 110: /* type_specifier: BOOL  */
#line 208 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("type-specifier"); addLeaf((yyval.nodeptr), "_Bool");}
#line 2509 "y.tab.c"
    break;

  case 111: /* type_specifier: COMPLEX  */
#line 209 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("type-specifier"); addLeaf((yyval.nodeptr), "_Complex");}
#line 2515 "y.tab.c"
    break;

  case 112: /* type_specifier: IMAGINARY  */
#line 210 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("type-specifier"); addLeaf((yyval.nodeptr), "_Imaginary");}
#line 2521 "y.tab.c"
    break;

  case 113: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 212 "tinyC2_22CS30004_22CS30061.y"
                                                                                {(yyval.nodeptr) = createNode("specifier-qualifier-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 2527 "y.tab.c"
    break;

  case 114: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 213 "tinyC2_22CS30004_22CS30061.y"
                                                                                {(yyval.nodeptr) = createNode("specifier-qualifier-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 2533 "y.tab.c"
    break;

  case 115: /* specifier_qualifier_list_opt: %empty  */
#line 215 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("specifier-qualifier-list-opt"); addLeaf((yyval.nodeptr), "epsilon");}
#line 2539 "y.tab.c"
    break;

  case 116: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 216 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("specifier-qualifier-list-opt"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2545 "y.tab.c"
    break;

  case 117: /* type_qualifier: CONST  */
#line 218 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("type-qualifier"); addLeaf((yyval.nodeptr), "const");}
#line 2551 "y.tab.c"
    break;

  case 118: /* type_qualifier: RESTRICT  */
#line 219 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("type-qualifier"); addLeaf((yyval.nodeptr), "restrict");}
#line 2557 "y.tab.c"
    break;

  case 119: /* type_qualifier: VOLATILE  */
#line 220 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("type-qualifier"); addLeaf((yyval.nodeptr), "volatile");}
#line 2563 "y.tab.c"
    break;

  case 120: /* function_specifier: INLINE  */
#line 222 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("function-specifier"); addLeaf((yyval.nodeptr), "inline");}
#line 2569 "y.tab.c"
    break;

  case 121: /* declarator: pointer_opt direct_declarator  */
#line 224 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("declarator"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 2575 "y.tab.c"
    break;

  case 122: /* direct_declarator: IDENTIFIER  */
#line 226 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                                    {(yyval.nodeptr) = createNode("direct-declarator"); addLeaf((yyval.nodeptr), "identifier");}
#line 2581 "y.tab.c"
    break;

  case 123: /* direct_declarator: LEFT_ROUND_BRACKET declarator RIGHT_ROUND_BRACKET  */
#line 227 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                                    {(yyval.nodeptr) = createNode("direct-declarator"); addLeaf((yyval.nodeptr), ")"); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addLeaf((yyval.nodeptr), "(");}
#line 2587 "y.tab.c"
    break;

  case 124: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt assignment_expression_opt RIGHT_SQUARE_BRACKET  */
#line 228 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                                    {(yyval.nodeptr) = createNode("direct-declarator"); addLeaf((yyval.nodeptr), "]"); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr)); addLeaf((yyval.nodeptr), "["); addChild((yyval.nodeptr), (yyvsp[-4].nodeptr));}
#line 2593 "y.tab.c"
    break;

  case 125: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET STATIC type_qualifier_list_opt assignment_expression RIGHT_SQUARE_BRACKET  */
#line 229 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                                    {(yyval.nodeptr) = createNode("direct-declarator"); addLeaf((yyval.nodeptr), "]"); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr)); addLeaf((yyval.nodeptr), "static"); addLeaf((yyval.nodeptr), "["); addChild((yyval.nodeptr), (yyvsp[-5].nodeptr));}
#line 2599 "y.tab.c"
    break;

  case 126: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list STATIC assignment_expression RIGHT_CURLY_BRACKET  */
#line 230 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                                    {(yyval.nodeptr) = createNode("direct-declarator"); addLeaf((yyval.nodeptr), "]"); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addLeaf((yyval.nodeptr), "static"); addChild((yyval.nodeptr), (yyvsp[-3].nodeptr)); addLeaf((yyval.nodeptr), "["); addChild((yyval.nodeptr), (yyvsp[-5].nodeptr));}
#line 2605 "y.tab.c"
    break;

  case 127: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt ASTERISK RIGHT_SQUARE_BRACKET  */
#line 231 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                                    {(yyval.nodeptr) = createNode("direct-declarator"); addLeaf((yyval.nodeptr), "]"); addLeaf((yyval.nodeptr), "*"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr)); addLeaf((yyval.nodeptr), "["); addChild((yyval.nodeptr), (yyvsp[-4].nodeptr));}
#line 2611 "y.tab.c"
    break;

  case 128: /* direct_declarator: direct_declarator LEFT_ROUND_BRACKET parameter_type_list RIGHT_ROUND_BRACKET  */
#line 232 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                                    {(yyval.nodeptr) = createNode("direct-declarator"); addLeaf((yyval.nodeptr), ")"); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addLeaf((yyval.nodeptr), "("); addChild((yyval.nodeptr), (yyvsp[-3].nodeptr));}
#line 2617 "y.tab.c"
    break;

  case 129: /* direct_declarator: direct_declarator LEFT_ROUND_BRACKET identifier_list_opt RIGHT_ROUND_BRACKET  */
#line 233 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                                    {(yyval.nodeptr) = createNode("direct-declarator"); addLeaf((yyval.nodeptr), ")"); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addLeaf((yyval.nodeptr), "("); addChild((yyval.nodeptr), (yyvsp[-3].nodeptr));}
#line 2623 "y.tab.c"
    break;

  case 130: /* pointer: ASTERISK type_qualifier_list_opt  */
#line 235 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("pointer"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "*");}
#line 2629 "y.tab.c"
    break;

  case 131: /* pointer: ASTERISK type_qualifier_list_opt pointer  */
#line 236 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("pointer"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addLeaf((yyval.nodeptr), "*");}
#line 2635 "y.tab.c"
    break;

  case 132: /* pointer_opt: %empty  */
#line 238 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("pointer-opt"); addLeaf((yyval.nodeptr), "epsilon");}
#line 2641 "y.tab.c"
    break;

  case 133: /* pointer_opt: pointer  */
#line 239 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("pointer-opt"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2647 "y.tab.c"
    break;

  case 134: /* type_qualifier_list: type_qualifier  */
#line 241 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("type-qualifier-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2653 "y.tab.c"
    break;

  case 135: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 242 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("type-qualifier-list"); (yyvsp[0].nodeptr) = createNode("type-qualifier-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 2659 "y.tab.c"
    break;

  case 136: /* type_qualifier_list_opt: %empty  */
#line 244 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("type-qualifier-list-opt");addLeaf((yyval.nodeptr), "epsilon");}
#line 2665 "y.tab.c"
    break;

  case 137: /* type_qualifier_list_opt: type_qualifier_list  */
#line 245 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("type-qualifier-list-opt"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2671 "y.tab.c"
    break;

  case 138: /* parameter_type_list: parameter_list  */
#line 247 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("parameter-type-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2677 "y.tab.c"
    break;

  case 139: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 248 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("parameter-type-list"); addLeaf((yyval.nodeptr), "..."); addLeaf((yyval.nodeptr), ","); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2683 "y.tab.c"
    break;

  case 140: /* parameter_list: parameter_declaration  */
#line 250 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("parameter-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2689 "y.tab.c"
    break;

  case 141: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 251 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("parameter-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), ","); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2695 "y.tab.c"
    break;

  case 142: /* parameter_declaration: declaration_specifiers declarator  */
#line 253 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("parameter-declaration"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 2701 "y.tab.c"
    break;

  case 143: /* parameter_declaration: declaration_specifiers  */
#line 254 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("parameter-declaration"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2707 "y.tab.c"
    break;

  case 144: /* identifier_list: IDENTIFIER  */
#line 256 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("identifier-list"); addLeaf((yyval.nodeptr), "identifier");}
#line 2713 "y.tab.c"
    break;

  case 145: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 257 "tinyC2_22CS30004_22CS30061.y"
                                                                {(yyval.nodeptr) = createNode("identifier-list"); addLeaf((yyval.nodeptr), "identifier"); addLeaf((yyval.nodeptr), ","); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr));}
#line 2719 "y.tab.c"
    break;

  case 146: /* identifier_list_opt: %empty  */
#line 259 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("identifier-list-opt"); addLeaf((yyval.nodeptr), "epsilon");}
#line 2725 "y.tab.c"
    break;

  case 147: /* identifier_list_opt: identifier_list  */
#line 260 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("identifier-list-opt"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2731 "y.tab.c"
    break;

  case 148: /* type_name: specifier_qualifier_list  */
#line 262 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("type-name"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2737 "y.tab.c"
    break;

  case 149: /* initializer: assignment_expression  */
#line 264 "tinyC2_22CS30004_22CS30061.y"
                                                                                {(yyval.nodeptr) = createNode("initializer"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2743 "y.tab.c"
    break;

  case 150: /* initializer: LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET  */
#line 265 "tinyC2_22CS30004_22CS30061.y"
                                                                                {(yyval.nodeptr) = createNode("initializer"); addLeaf((yyval.nodeptr), "}"); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addLeaf((yyval.nodeptr), "{");}
#line 2749 "y.tab.c"
    break;

  case 151: /* initializer: LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET  */
#line 266 "tinyC2_22CS30004_22CS30061.y"
                                                                                {(yyval.nodeptr) = createNode("initializer"); addLeaf((yyval.nodeptr), "}"); addLeaf((yyval.nodeptr), ","); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr)); addLeaf((yyval.nodeptr), "{");}
#line 2755 "y.tab.c"
    break;

  case 152: /* initializer_list: designation_opt initializer  */
#line 268 "tinyC2_22CS30004_22CS30061.y"
                                                                                {(yyval.nodeptr) = createNode("initializer-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 2761 "y.tab.c"
    break;

  case 153: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 269 "tinyC2_22CS30004_22CS30061.y"
                                                                                {(yyval.nodeptr) = createNode("initializer-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addLeaf((yyval.nodeptr), ","); addChild((yyval.nodeptr), (yyvsp[-3].nodeptr));}
#line 2767 "y.tab.c"
    break;

  case 154: /* designation: designator_list ASSIGNMENT  */
#line 271 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("designation"); addLeaf((yyval.nodeptr), "="); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 2773 "y.tab.c"
    break;

  case 155: /* designation_opt: %empty  */
#line 273 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("designation-opt"); addLeaf((yyval.nodeptr), "epsilon");}
#line 2779 "y.tab.c"
    break;

  case 156: /* designation_opt: designation  */
#line 274 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("designation-opt"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2785 "y.tab.c"
    break;

  case 157: /* designator_list: designator  */
#line 276 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("designator-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2791 "y.tab.c"
    break;

  case 158: /* designator_list: designator_list designator  */
#line 277 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("designator-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 2797 "y.tab.c"
    break;

  case 159: /* designator: LEFT_SQUARE_BRACKET constant_expression RIGHT_SQUARE_BRACKET  */
#line 279 "tinyC2_22CS30004_22CS30061.y"
                                                                                {(yyval.nodeptr) = createNode("designator"); addLeaf((yyval.nodeptr), "]"); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addLeaf((yyval.nodeptr), "[");}
#line 2803 "y.tab.c"
    break;

  case 160: /* designator: DOT IDENTIFIER  */
#line 280 "tinyC2_22CS30004_22CS30061.y"
                                                                                {(yyval.nodeptr) = createNode("designator"); addLeaf((yyval.nodeptr), "identifier"); addLeaf((yyval.nodeptr), ".");}
#line 2809 "y.tab.c"
    break;

  case 161: /* statement: labeled_statement  */
#line 284 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("statement"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2815 "y.tab.c"
    break;

  case 162: /* statement: expression_statement  */
#line 285 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("statement"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2821 "y.tab.c"
    break;

  case 163: /* statement: compound_statement  */
#line 286 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("statement"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2827 "y.tab.c"
    break;

  case 164: /* statement: selection_statement  */
#line 287 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("statement"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2833 "y.tab.c"
    break;

  case 165: /* statement: iteration_statement  */
#line 288 "tinyC2_22CS30004_22CS30061.y"
                                        {(yyval.nodeptr) = createNode("statement"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2839 "y.tab.c"
    break;

  case 167: /* labeled_statement: IDENTIFIER COLON statement  */
#line 291 "tinyC2_22CS30004_22CS30061.y"
                                                          {(yyval.nodeptr) = createNode("labeled-statement"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), ":"); addLeaf((yyval.nodeptr), "identifier");}
#line 2845 "y.tab.c"
    break;

  case 168: /* labeled_statement: CASE constant_expression COLON statement  */
#line 292 "tinyC2_22CS30004_22CS30061.y"
                                                          {(yyval.nodeptr) = createNode("labeled-statement"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), ":"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr)); addLeaf((yyval.nodeptr), "case");}
#line 2851 "y.tab.c"
    break;

  case 169: /* labeled_statement: DEFAULT COLON statement  */
#line 293 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("labeled-statement"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), ":"); addLeaf((yyval.nodeptr), "default");}
#line 2857 "y.tab.c"
    break;

  case 170: /* compound_statement: LEFT_CURLY_BRACKET block_item_list_opt RIGHT_CURLY_BRACKET  */
#line 295 "tinyC2_22CS30004_22CS30061.y"
                                                                                        {(yyval.nodeptr) = createNode("compound-statement"); addLeaf((yyval.nodeptr), "}"); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addLeaf((yyval.nodeptr), "{");}
#line 2863 "y.tab.c"
    break;

  case 171: /* block_item_list_opt: %empty  */
#line 297 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("block-item-list-opt"); addLeaf((yyval.nodeptr), "epsilon");}
#line 2869 "y.tab.c"
    break;

  case 172: /* block_item_list_opt: block_item_list  */
#line 298 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("block-item-list-opt"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2875 "y.tab.c"
    break;

  case 173: /* block_item_list: block_item  */
#line 300 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("block-item-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2881 "y.tab.c"
    break;

  case 174: /* block_item_list: block_item_list block_item  */
#line 301 "tinyC2_22CS30004_22CS30061.y"
                                                {(yyval.nodeptr) = createNode("block-item-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 2887 "y.tab.c"
    break;

  case 175: /* block_item: declaration  */
#line 303 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("block-item"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2893 "y.tab.c"
    break;

  case 176: /* block_item: statement  */
#line 304 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("block-item"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2899 "y.tab.c"
    break;

  case 177: /* expression_statement: expression_opt SEMICOLON  */
#line 306 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("expression-statement"); addLeaf((yyval.nodeptr), ";"); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 2905 "y.tab.c"
    break;

  case 178: /* selection_statement: IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement  */
#line 308 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                        {(yyval.nodeptr) = createNode("selection-statement"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), ")"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr)); addLeaf((yyval.nodeptr), "("); addLeaf((yyval.nodeptr), "if");}
#line 2911 "y.tab.c"
    break;

  case 179: /* selection_statement: IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement ELSE statement  */
#line 309 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                        {(yyval.nodeptr) = createNode("selection-statement"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), "else"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr)); addLeaf((yyval.nodeptr), ")"); addChild((yyval.nodeptr), (yyvsp[-4].nodeptr)); addLeaf((yyval.nodeptr), "("); addLeaf((yyval.nodeptr), "if");}
#line 2917 "y.tab.c"
    break;

  case 180: /* selection_statement: SWITCH LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement  */
#line 310 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                        {(yyval.nodeptr) = createNode("selection-statement"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), ")"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr)); addLeaf((yyval.nodeptr), "("); addLeaf((yyval.nodeptr), "switch");}
#line 2923 "y.tab.c"
    break;

  case 181: /* iteration_statement: WHILE LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement  */
#line 312 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                                        {(yyval.nodeptr) = createNode("iteration-statement"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), ")"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr)); addLeaf((yyval.nodeptr), "("); addLeaf((yyval.nodeptr), "while");}
#line 2929 "y.tab.c"
    break;

  case 182: /* iteration_statement: DO statement WHILE LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET SEMICOLON  */
#line 313 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                                        {(yyval.nodeptr) = createNode("iteration-statement"); addLeaf((yyval.nodeptr), ";"); addLeaf((yyval.nodeptr), ")"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr)); addLeaf((yyval.nodeptr), "("); addLeaf((yyval.nodeptr), "while"); addChild((yyval.nodeptr), (yyvsp[-5].nodeptr)); addLeaf((yyval.nodeptr), "do");}
#line 2935 "y.tab.c"
    break;

  case 183: /* iteration_statement: FOR LEFT_ROUND_BRACKET expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RIGHT_ROUND_BRACKET statement  */
#line 314 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                                        {(yyval.nodeptr) = createNode("iteration-statement"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), ")"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr)); addLeaf((yyval.nodeptr), ";"); addChild((yyval.nodeptr), (yyvsp[-4].nodeptr)); addLeaf((yyval.nodeptr), ";"); addChild((yyval.nodeptr), (yyvsp[-6].nodeptr)); addLeaf((yyval.nodeptr), "("); addLeaf((yyval.nodeptr), "for");}
#line 2941 "y.tab.c"
    break;

  case 184: /* iteration_statement: FOR LEFT_ROUND_BRACKET declaration expression_opt SEMICOLON expression_opt RIGHT_ROUND_BRACKET statement  */
#line 315 "tinyC2_22CS30004_22CS30061.y"
                                                                                                                                        {(yyval.nodeptr) = createNode("iteration-statement"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addLeaf((yyval.nodeptr), ")"); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr)); addLeaf((yyval.nodeptr), ";"); addChild((yyval.nodeptr), (yyvsp[-4].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-5].nodeptr)); addLeaf((yyval.nodeptr), "("); addLeaf((yyval.nodeptr), "for");}
#line 2947 "y.tab.c"
    break;

  case 185: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 317 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("jump-statement"); addLeaf((yyval.nodeptr), ";"); addLeaf((yyval.nodeptr), "identifier"); addLeaf((yyval.nodeptr), "goto");}
#line 2953 "y.tab.c"
    break;

  case 186: /* jump_statement: CONTINUE SEMICOLON  */
#line 318 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("jump-statement"); addLeaf((yyval.nodeptr), ";"); addLeaf((yyval.nodeptr), "continue");}
#line 2959 "y.tab.c"
    break;

  case 187: /* jump_statement: BREAK SEMICOLON  */
#line 319 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("jump-statement"); addLeaf((yyval.nodeptr), ";"); addLeaf((yyval.nodeptr), "break");}
#line 2965 "y.tab.c"
    break;

  case 188: /* jump_statement: RETURN expression_opt SEMICOLON  */
#line 320 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("jump-statement"); addLeaf((yyval.nodeptr), ";"); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addLeaf((yyval.nodeptr), "return");}
#line 2971 "y.tab.c"
    break;

  case 189: /* translation_unit: external_declaration  */
#line 324 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("translation-unit"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2977 "y.tab.c"
    break;

  case 190: /* translation_unit: translation_unit external_declaration  */
#line 325 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("translation-unit"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 2983 "y.tab.c"
    break;

  case 191: /* external_declaration: function_definition  */
#line 327 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("external-declaration"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2989 "y.tab.c"
    break;

  case 192: /* external_declaration: declaration  */
#line 328 "tinyC2_22CS30004_22CS30061.y"
                                                        {(yyval.nodeptr) = createNode("external-declaration"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 2995 "y.tab.c"
    break;

  case 193: /* function_definition: declaration_specifiers declarator declaration_list_opt compound_statement  */
#line 330 "tinyC2_22CS30004_22CS30061.y"
                                                                                                        {(yyval.nodeptr) = createNode("function-definition"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-2].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-3].nodeptr));}
#line 3001 "y.tab.c"
    break;

  case 194: /* declaration_list: declaration  */
#line 332 "tinyC2_22CS30004_22CS30061.y"
                                                                                                        {(yyval.nodeptr) = createNode("declaration-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 3007 "y.tab.c"
    break;

  case 195: /* declaration_list: declaration_list declaration  */
#line 333 "tinyC2_22CS30004_22CS30061.y"
                                                                                                        {(yyval.nodeptr) = createNode("declaration-list"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr)); addChild((yyval.nodeptr), (yyvsp[-1].nodeptr));}
#line 3013 "y.tab.c"
    break;

  case 196: /* declaration_list_opt: %empty  */
#line 335 "tinyC2_22CS30004_22CS30061.y"
                                                                                                        {(yyval.nodeptr) = createNode("declaration-list-op"); addLeaf((yyval.nodeptr), "epsilon");}
#line 3019 "y.tab.c"
    break;

  case 197: /* declaration_list_opt: declaration_list  */
#line 336 "tinyC2_22CS30004_22CS30061.y"
                                                                                                        {(yyval.nodeptr) = createNode("declaration-list-op"); addChild((yyval.nodeptr), (yyvsp[0].nodeptr));}
#line 3025 "y.tab.c"
    break;


#line 3029 "y.tab.c"

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

#line 338 "tinyC2_22CS30004_22CS30061.y"


void yyerror(char *s) {
    printf("%s\n", s);
    printf("Line %d: '%s'\n", yylineno, yytext);
}
