/* LEX FILE */
/* ASSIGNMENT 3 (TinyC, Lexical Analysis)*/
/* Abhinav Akarsh (22CS30004) */
/* Pranav Jha (22CS30061) */

%{
    #define ID 1
    #define CONST 2
    #define STRING 3
    #define PUNCT 4
    #define KEYWORD 5
    #define COMMENT 6  
    #define ERROR 7
%}

/* Spaces */
spaces                  [ \t\n\r]+

/* Keyword */
keyword                 auto|enum|restrict|unsigned|break|extern|return|void|case|float|short|volatile|char|for|signed|while|const|goto|sizeof|_Bool|continue|if|static|_Complex|default|inline|struct|_Imaginary|do|int|switch|double|long|typedef|else|register|union

/* Identifiers */
identifier              {identifier_nondigit}({identifier_nondigit}|{digit})*
identifier_nondigit     [_a-zA-Z]
digit                   [0-9]

/* Constants */
constant                {integer_constant}|{floating_constant}|{character_constant}
integer_constant        {digit}+
floating_constant		({fractional_constant}{exponent_part}?)|({digit_sequence}{exponent_part})
fractional_constant     ({digit_sequence}?\.{digit_sequence})|{digit_sequence}\.

exponent_part       	[eE]{sign}?{digit_sequence}
sign                	[+-]
digit_sequence      	{digit}+

character_constant      \'{c_char}\'
c_char                  [^\'\\\n]|{escape_sequence}
escape_sequence         \\[\'\"\?\\abfnrtv]


/* String Literals */
string_literal          \"{s_char_sequence}?\"
s_char_sequence         {s_char}+
s_char                  [^\"\\\n]|{escape_sequence}

/* Punctuators */
punctuator              \[|\]|\(|\)|\{|\}|\.|->|\+\+|--|\&|\*|\+|-|~|!|\/|\%|<<|>>|<|>|<=|>=|==|!=|\^|\&\&|\?|:|;|\.\.\.|=|\*=|\/=|\%=|\+=|-=|<<=|>>=|\&=|\^=|,|#|\||\|\||\|=

/* Comments */
comment                 {multi_line_comment}|{single_line_comment}
multi_line_comment      \/\*([^\*]|\*[^\/])*\*\/
single_line_comment     \/\/.*

%%

{spaces}                {}
{comment}               {return COMMENT;}
{keyword}               {return KEYWORD;}
{identifier}            {return ID;}
{constant}              {return CONST;}
{string_literal}        {return STRING;}
{punctuator}            {return PUNCT;}
.                       {return ERROR;}

%%
  
int yywrap()
{
    return 1;
}