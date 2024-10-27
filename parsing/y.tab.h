/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 252 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
