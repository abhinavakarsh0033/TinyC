/* LEX FILE */
/* ASSIGNMENT 5 (TinyC, Parsing)*/
/* Abhinav Akarsh (22CS30004) */
/* Pranav Jha (22CS30061) */

%{
    #include "y.tab.c"
%}

%option yylineno

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
{comment}               {}

"["                     {return LEFT_SQUARE_BRACKET;}
"]"                     {return RIGHT_SQUARE_BRACKET;}
"("                     {return LEFT_ROUND_BRACKET;}
")"                     {return RIGHT_ROUND_BRACKET;}
"{"                     {return LEFT_CURLY_BRACKET;}
"}"                     {return RIGHT_CURLY_BRACKET;}
"."                     {return DOT;}
"->"                    {return ARROW;}
"++"                    {return INCREMENT;}
"--"                    {return DECREMENT;}
"&"                     {return AMPERSAND;}
"*"                     {return ASTERISK;}
"+"                     {return PLUS;}
"-"                     {return MINUS;}
"~"                     {return TILDE;}
"!"                     {return EXCLAMATION;}
"/"                     {return FORWARD_SLASH;}
"%"                     {return PERCENT;}
"<<"                    {return LEFT_SHIFT;}
">>"                    {return RIGHT_SHIFT;}
"<"                     {return LESS_THAN;}
">"                     {return GREATER_THAN;}
"<="                    {return LESS_THAN_EQUAL;}
">="                    {return GREATER_THAN_EQUAL;}
"=="                    {return EQUAL;}
"!="                    {return NOT_EQUAL;}
"^"                     {return CARET;}
"|"                     {return PIPE;}       
"&&"                    {return LOGICAL_AND;}
"||"                    {return LOGICAL_OR;}
"?"                     {return QUESTION_MARK;}
":"                     {return COLON;}
";"                     {return SEMICOLON;}
"..."                   {return ELLIPSIS;}
"="                     {return ASSIGNMENT;}
"*="                    {return MULTIPLY_ASSIGNMENT;}
"/="                    {return DIVIDE_ASSIGNMENT;}
"%="                    {return MOD_ASSIGNMENT;}
"+="                    {return ADD_ASSIGNMENT;}
"-="                    {return SUBTRACT_ASSIGNMENT;}
"<<="                   {return LEFT_SHIFT_ASSIGNMENT;}
">>="                   {return RIGHT_SHIFT_ASSIGNMENT;}
"&="                    {return BITWISE_AND_ASSIGNMENT;}
"^="                    {return BITWISE_XOR_ASSIGNMENT;}
"|="                    {return BITWISE_OR_ASSIGNMENT;}
","                     {return COMMA;}
"#"                     {return HASH;}

"auto"                  {return AUTO;}
"break"                 {return BREAK;}
"case"                  {return CASE;}
"char"                  {return CHAR;}
"const"                 {return CONST;}
"continue"              {return CONTINUE;}
"default"               {return DEFAULT;}
"do"                    {return DO;}
"double"                {return DOUBLE;}
"else"                  {return ELSE;}
"enum"                  {return ENUM;}
"extern"                {return EXTERN;}
"float"                 {return FLOAT;}
"for"                   {return FOR;}
"goto"                  {return GOTO;}
"if"                    {return IF;}
"inline"                {return INLINE;}
"int"                   {return INT;}
"long"                  {return LONG;}
"register"              {return REGISTER;}
"restrict"              {return RESTRICT;}
"return"                {return RETURN;}
"short"                 {return SHORT;}
"signed"                {return SIGNED;}
"sizeof"                {return SIZEOF;}
"static"                {return STATIC;}
"struct"                {return STRUCT;}
"switch"                {return SWITCH;}
"typedef"               {return TYPEDEF;}
"union"                 {return UNION;}
"unsigned"              {return UNSIGNED;}
"void"                  {return VOID;}
"volatile"              {return VOLATILE;}
"while"                 {return WHILE;}
"_Bool"                 {return BOOL;}
"_Complex"              {return COMPLEX;}
"_Imaginary"            {return IMAGINARY;}

{identifier}            {return IDENTIFIER;}
{constant}              {return CONSTANT;}
{string_literal}        {return STRING_LITERAL;}
.                       {return ERROR;}

%%
  
int yywrap()
{
    return 1;
}