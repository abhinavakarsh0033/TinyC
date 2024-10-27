/**
 * ASSIGNMENT 5 (TinyC, Parsing)
 * YACC file Parsing
 * Pranav Jha (22CS30061)
 * Abhinav Akarsh (22CS30004)
 */

%{
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
%}

%union {node *nodeptr;}// write sumthing
%start PROGRAM
%token LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET LEFT_ROUND_BRACKET RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET
%token DOT ARROW INCREMENT DECREMENT AMPERSAND COMMA HASH
%token ASTERISK PLUS MINUS TILDE EXCLAMATION FORWARD_SLASH PERCENT
%token LEFT_SHIFT RIGHT_SHIFT LESS_THAN GREATER_THAN LESS_THAN_EQUAL GREATER_THAN_EQUAL EQUAL NOT_EQUAL
%token CARET PIPE LOGICAL_AND LOGICAL_OR QUESTION_MARK COLON SEMICOLON ELLIPSIS
%token ASSIGNMENT MULTIPLY_ASSIGNMENT DIVIDE_ASSIGNMENT MOD_ASSIGNMENT ADD_ASSIGNMENT SUBTRACT_ASSIGNMENT LEFT_SHIFT_ASSIGNMENT RIGHT_SHIFT_ASSIGNMENT BITWISE_AND_ASSIGNMENT BITWISE_XOR_ASSIGNMENT BITWISE_OR_ASSIGNMENT
%token IDENTIFIER CONSTANT STRING_LITERAL
%token ERROR

%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE
%token ENUM EXTERN FLOAT FOR GOTO IF INLINE INT LONG REGISTER
%token RESTRICT RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION
%token UNSIGNED VOID VOLATILE WHILE BOOL COMPLEX IMAGINARY

// 1. Expressions
%type <nodeptr> primary_expression postfix_expression argument_expression_list argument_expression_list_opt unary_expression unary_operator cast_expression multiplicative_expression additive_expression shift_expression relational_expression equality_expression AND_expression exclusive_OR_expression inclusive_OR_expression logical_AND_expression logical_OR_expression conditional_expression assignment_expression assignment_expression_opt assignment_operator expression expression_opt constant_expression

// 2. Declarations
%type <nodeptr> declaration declaration_specifiers declaration_specifiers_opt init_declarator_list init_declarator_list_opt init_declarator storage_class_specifier type_specifier specifier_qualifier_list specifier_qualifier_list_opt type_qualifier function_specifier declarator direct_declarator pointer pointer_opt type_qualifier_list type_qualifier_list_opt parameter_type_list parameter_list parameter_declaration identifier_list identifier_list_opt type_name initializer initializer_list designation designation_opt designator_list designator

// 3. Statements
%type <nodeptr> statement labeled_statement compound_statement block_item_list block_item_list_opt block_item expression_statement selection_statement iteration_statement jump_statement 

// 4. External definitions
%type <nodeptr> translation_unit external_declaration function_definition declaration_list declaration_list_opt

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%%
/* Start */
PROGRAM : translation_unit      {assignRoot($1);}
        ;

/* 1. Expressions */
primary_expression : IDENTIFIER                                 {$$ = createNode("primary-expression"); addLeaf($$, "identifier");}
        | CONSTANT                                              {$$ = createNode("primary-expression"); addLeaf($$, "constant");}       
        | STRING_LITERAL                                        {$$ = createNode("primary-expression"); addLeaf($$, "string-literal");}
        | LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET     {$$ = createNode("primary-expression"); addLeaf($$, ")"); addChild($$, $2); addLeaf($$, "(");}
        ;
postfix_expression : primary_expression                                                                                     {$$ =  createNode("postfix-expression"); addChild($$, $1);}
        | postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET                                            {$$ =  createNode("postfix-expression"); addLeaf($$, "["); addChild($$, $3); addLeaf($$, "]"); addChild($$, $1);}
        | postfix_expression LEFT_CURLY_BRACKET argument_expression_list_opt RIGHT_ROUND_BRACKET                            {$$ =  createNode("postfix-expression"); addLeaf($$, ")"); addChild($$, $3); addLeaf($$, "("); addChild($$, $1);}
        | postfix_expression DOT IDENTIFIER                                                                                 {$$ =  createNode("postfix-expression"); addLeaf($$, "identifier"); addLeaf($$, "."); addChild($$, $1);}
        | postfix_expression ARROW IDENTIFIER                                                                               {$$ =  createNode("postfix-expression"); addLeaf($$, "identifier"); addLeaf($$, "->"); addChild($$, $1);}
        | postfix_expression INCREMENT                                                                                      {$$ =  createNode("postfix-expression"); addLeaf($$, "increment"); addChild($$, $1);}
        | postfix_expression DECREMENT                                                                                      {$$ =  createNode("postfix-expression"); addLeaf($$, "decrement"); addChild($$, $1);}
        | LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET          {$$ =  createNode("postfix-expression"); addLeaf($$, "}"); addChild($$, $5); addLeaf($$, "{"); addLeaf($$, ")"); addChild($$, $2); addLeaf($$, "(");}
        | LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET    {$$ =  createNode("postfix-expression"); addLeaf($$, "}"); addLeaf($$, ","); addChild($$, $5); addLeaf($$, "{"); addLeaf($$, ")"); addChild($$, $2); addLeaf($$, "(");}
        ;
argument_expression_list : assignment_expression                        {$$ = createNode("argument-expression-list"); addChild($$, $1);}
        | argument_expression_list COMMA assignment_expression          {$$ = createNode("argument-expression-list"); addChild($$, $3); addLeaf($$, ","); addChild($$, $1);}
        ;
argument_expression_list_opt : /* epsilon */            {$$ = createNode("argument_expression_list-opt"); addLeaf($$, "epsilon");}
        | argument_expression_list                      {$$ = createNode("argument-expression-list-opt"); addChild($$, $1);}
        ;
unary_expression : postfix_expression                                                   {$$ = createNode("unary-expression"); addChild($$, $1);}
        | INCREMENT unary_expression                                                    {$$ = createNode("unary-expression"); addChild($$, $2); addLeaf($$, "increment");}
        | DECREMENT unary_expression                                                    {$$ = createNode("unary-expression"); addChild($$, $2); addLeaf($$, "decrement");}
        | unary_operator cast_expression                                                {$$ = createNode("unary-expression"); addChild($$, $2); addChild($$, $1);}
        | SIZEOF unary_expression                                                       {$$ = createNode("unary-expression"); addChild($$, $2); addLeaf($$, "sizeof");}
        | SIZEOF LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET                       {$$ = createNode("unary-expression"); addLeaf($$, ")"); addChild($$, $3); addLeaf($$, "("); addLeaf($$, "sizeof");}
        ;
unary_operator : AMPERSAND              {$$ = createNode("unary-operator"); addLeaf($$, "&");}
        | ASTERISK                      {$$ = createNode("unary-operator"); addLeaf($$, "*");}
        | PLUS                          {$$ = createNode("unary-operator"); addLeaf($$, "+");}
        | MINUS                         {$$ = createNode("unary-operator"); addLeaf($$, "-");}
        | TILDE                         {$$ = createNode("unary-operator"); addLeaf($$, "~");}
        | EXCLAMATION                   {$$ = createNode("unary-operator"); addLeaf($$, "!");}
        ;
cast_expression : unary_expression                                                      {$$ = createNode("cast-expression"); addChild($$, $1);}
        | LEFT_ROUND_BRACKET type_name RIGHT_ROUND_BRACKET cast_expression              {$$ = createNode("cast-expression"); addChild($$, $4); addLeaf($$, ")"); addChild($$, $2); addLeaf($$, "(");}
        ;
multiplicative_expression : cast_expression                                 {$$ = createNode("multiplicative-expression"); addChild($$, $1);}
        | multiplicative_expression ASTERISK cast_expression                {$$ = createNode("multiplicative-expression"); addChild($$, $3); addLeaf($$, "*"); addChild($$, $1);}
        | multiplicative_expression FORWARD_SLASH cast_expression           {$$ = createNode("multiplicative-expression"); addChild($$, $3); addLeaf($$, "/"); addChild($$, $1);}
        | multiplicative_expression PERCENT cast_expression                 {$$ = createNode("multiplicative-expression"); addChild($$, $3); addLeaf($$, "%"); addChild($$, $1);}
        ;
additive_expression : multiplicative_expression                         {$$ = createNode("additive-expression"); addChild($$, $1);}
        | additive_expression PLUS multiplicative_expression            {$$ = createNode("additive-expression"); addChild($$, $3); addLeaf($$, "+"); addChild($$, $1);}
        | additive_expression MINUS multiplicative_expression           {$$ = createNode("additive-expression"); addChild($$, $3); addLeaf($$, "-"); addChild($$, $1);}
        ;
shift_expression : additive_expression                                  {$$ = createNode("shift-expression"); addChild($$, $1);}
        | shift_expression LEFT_SHIFT additive_expression               {$$ = createNode("shift-expression"); addChild($$, $3); addLeaf($$, "<<"); addChild($$, $1);}
        | shift_expression RIGHT_SHIFT additive_expression              {$$ = createNode("shift-expression"); addChild($$, $3); addLeaf($$, ">>"); addChild($$, $1);}
        ;
relational_expression : shift_expression                                {$$ = createNode("relational-expression"); addChild($$, $1);}
        | relational_expression LESS_THAN shift_expression              {$$ = createNode("relational-expression"); addChild($$, $3); addLeaf($$, "<"); addChild($$, $1);}
        | relational_expression GREATER_THAN shift_expression           {$$ = createNode("relational-expression"); addChild($$, $3); addLeaf($$, ">"); addChild($$, $1);}
        | relational_expression LESS_THAN_EQUAL shift_expression        {$$ = createNode("relational-expression"); addChild($$, $3); addLeaf($$, "<="); addChild($$, $1);}
        | relational_expression GREATER_THAN_EQUAL shift_expression     {$$ = createNode("relational-expression"); addChild($$, $3); addLeaf($$, ">="); addChild($$, $1);}
        ;
equality_expression : relational_expression                             {$$ = createNode("equality-expression"); addChild($$, $1);}
        | equality_expression EQUAL relational_expression               {$$ = createNode("equality-expression"); addChild($$, $3); addLeaf($$, "=="); addChild($$, $1);}
        | equality_expression NOT_EQUAL relational_expression           {$$ = createNode("equality-expression"); addChild($$, $3); addLeaf($$, "!="); addChild($$, $1);}
        ;
AND_expression : equality_expression                                    {$$ = createNode("AND-expression"); addChild($$, $1);}
        | AND_expression AMPERSAND equality_expression                  {$$ = createNode("AND-expression"); addChild($$, $3); addLeaf($$, "&"); addChild($$, $1);}
        ;
exclusive_OR_expression : AND_expression                                {$$ = createNode("exclusive-OR-expression"); addChild($$, $1);}
        | exclusive_OR_expression CARET AND_expression                  {$$ = createNode("exclusive-OR-expression"); addChild($$, $3); addLeaf($$, "^"); addChild($$, $1);}
        ;
inclusive_OR_expression : exclusive_OR_expression                       {$$ = createNode("inclusive-OR-expression"); addChild($$, $1);}
        | inclusive_OR_expression PIPE exclusive_OR_expression          {$$ = createNode("inclusive-OR-expression"); addChild($$, $3); addLeaf($$, "|"); addChild($$, $1);}
        ;
logical_AND_expression : inclusive_OR_expression                        {$$ = createNode("logical-AND-expression"); addChild($$, $1);}
        | logical_AND_expression LOGICAL_AND inclusive_OR_expression    {$$ = createNode("logical-AND-expression"); addChild($$, $3); addLeaf($$, "&&"); addChild($$, $1);}
        ;
logical_OR_expression : logical_AND_expression                          {$$ = createNode("logical-OR-expression"); addChild($$, $1);}
        | logical_OR_expression LOGICAL_OR logical_AND_expression       {$$ = createNode("logical-OR-expression"); addChild($$, $3); addLeaf($$, "||"); addChild($$, $1);}
        ;
conditional_expression : logical_OR_expression                                              {$$ = createNode("conditional-expression"); addChild($$, $1);}
        | logical_OR_expression QUESTION_MARK expression COLON conditional_expression       {$$ = createNode("conditional-expression"); addChild($$, $5); addLeaf($$, ":"); addChild($$, $3); addLeaf($$, "?"); addChild($$, $1);}
        ;
assignment_expression : conditional_expression                                  {$$ = createNode("assignment-expression"); addChild($$, $1);}
        | unary_expression assignment_operator assignment_expression            {$$ = createNode("assignment-expression"); addChild($$, $3); addChild($$, $2); addChild($$, $1);}
        ;
assignment_expression_opt : /* epsilon */               {$$ = createNode("assignment-expression-opt"); addLeaf($$, "epsilon");}
        | assignment_expression                         {$$ = createNode("assignment-expression-opt"); addChild($$, $1);}
        ;
assignment_operator : ASSIGNMENT                        {$$ = createNode("assignment-operator"); addLeaf($$, "=");}
        | MULTIPLY_ASSIGNMENT                           {$$ = createNode("assignment-operator"); addLeaf($$, "*=");}
        | DIVIDE_ASSIGNMENT                             {$$ = createNode("assignment-operator"); addLeaf($$, "/=");}
        | MOD_ASSIGNMENT                                {$$ = createNode("assignment-operator"); addLeaf($$, "%=");}
        | ADD_ASSIGNMENT                                {$$ = createNode("assignment-operator"); addLeaf($$, "+=");}
        | SUBTRACT_ASSIGNMENT                           {$$ = createNode("assignment-operator"); addLeaf($$, "-=");}
        | LEFT_SHIFT_ASSIGNMENT                         {$$ = createNode("assignment-operator"); addLeaf($$, "<<=");}
        | RIGHT_SHIFT_ASSIGNMENT                        {$$ = createNode("assignment-operator"); addLeaf($$, ">>=");}
        | BITWISE_AND_ASSIGNMENT                        {$$ = createNode("assignment-operator"); addLeaf($$, "&=");}
        | BITWISE_XOR_ASSIGNMENT                        {$$ = createNode("assignment-operator"); addLeaf($$, "^=");}
        | BITWISE_OR_ASSIGNMENT                         {$$ = createNode("assignment-operator"); addLeaf($$, "|=");}
        ;
expression : assignment_expression                      {$$ = createNode("expression"); addChild($$, $1);}
        | expression COMMA assignment_expression        {$$ = createNode("expression"); addChild($$, $3); addLeaf($$, ","); addChild($$, $1);}
        ;
expression_opt : /* epsilon */                          {$$ = createNode("expression-opt"); addLeaf($$, "epsilon");}
        | expression                                    {$$ = createNode("expression-opt"); addChild($$, $1);}
        ;
constant_expression : conditional_expression            {$$ = createNode("constant-expression"); addChild($$, $1);}
        ;

/* 2. Declarations */
declaration : declaration_specifiers init_declarator_list_opt SEMICOLON         {$$ = createNode("declaration"); addLeaf($$, ";"); addChild($$, $2); addChild($$, $1);}
        ;
declaration_specifiers : storage_class_specifier declaration_specifiers_opt     {$$ = createNode("declaration-specifiers"); addChild($$, $2); addChild($$, $1);}
        | type_specifier declaration_specifiers_opt                             {$$ = createNode("declaration-specifiers"); addChild($$, $2); addChild($$, $1);}
        | type_qualifier declaration_specifiers_opt                             {$$ = createNode("declaration-specifiers"); addChild($$, $2); addChild($$, $1);}
        | function_specifier declaration_specifiers_opt                         {$$ = createNode("declaration-specifiers"); addChild($$, $2); addChild($$, $1);}
        ;
declaration_specifiers_opt : /* epsilon */              {$$ = createNode("declaration-specifiers-opt"); addLeaf($$, "epsilon");}
        | declaration_specifiers                        {$$ = createNode("declaration-specifiers-opt"); addChild($$, $1);}
        ;
init_declarator_list_opt : /* epsilon */                {$$ = createNode("init-declarator-list-opt"); addLeaf($$, "epsilon");}
        | init_declarator_list                          {$$ = createNode("init-declarator-list-opt"); addChild($$, $1);}
        ;
init_declarator_list : init_declarator                  {$$ = createNode("init-declarator-list"); addChild($$, $1);}
        | init_declarator_list COMMA init_declarator    {$$ = createNode("init-declarator-list"); addChild($$, $3); addLeaf($$, ","); addChild($$, $1);}
        ;
init_declarator : declarator                            {$$ = createNode("init-declarator"); addChild($$, $1);}
        | declarator ASSIGNMENT initializer             {$$ = createNode("init-declarator"); addChild($$, $3); addLeaf($$, "="); addChild($$, $1);}
        ;
storage_class_specifier : EXTERN        {$$ = createNode("storage-class-specifier"); addLeaf($$, "extern");}
        | STATIC                        {$$ = createNode("storage-class-specifier"); addLeaf($$, "static");}
        | AUTO                          {$$ = createNode("storage-class-specifier"); addLeaf($$, "auto");}
        | REGISTER                      {$$ = createNode("storage-class-specifier"); addLeaf($$, "register");}
        ;
type_specifier : VOID                   {$$ = createNode("type-specifier"); addLeaf($$, "void");}
        | CHAR                          {$$ = createNode("type-specifier"); addLeaf($$, "char");}
        | SHORT                         {$$ = createNode("type-specifier"); addLeaf($$, "short");}
        | INT                           {$$ = createNode("type-specifier"); addLeaf($$, "int");}
        | LONG                          {$$ = createNode("type-specifier"); addLeaf($$, "long");}
        | FLOAT                         {$$ = createNode("type-specifier"); addLeaf($$, "float");}
        | DOUBLE                        {$$ = createNode("type-specifier"); addLeaf($$, "double");}
        | SIGNED                        {$$ = createNode("type-specifier"); addLeaf($$, "signed");}
        | UNSIGNED                      {$$ = createNode("type-specifier"); addLeaf($$, "unsigned");}
        | BOOL                          {$$ = createNode("type-specifier"); addLeaf($$, "_Bool");}
        | COMPLEX                       {$$ = createNode("type-specifier"); addLeaf($$, "_Complex");}
        | IMAGINARY                     {$$ = createNode("type-specifier"); addLeaf($$, "_Imaginary");}
        ;
specifier_qualifier_list : type_specifier specifier_qualifier_list_opt          {$$ = createNode("specifier-qualifier-list"); addChild($$, $2); addChild($$, $1);}
        | type_qualifier specifier_qualifier_list_opt                           {$$ = createNode("specifier-qualifier-list"); addChild($$, $2); addChild($$, $1);}
        ;
specifier_qualifier_list_opt : /* epsilon */    {$$ = createNode("specifier-qualifier-list-opt"); addLeaf($$, "epsilon");}
        | specifier_qualifier_list              {$$ = createNode("specifier-qualifier-list-opt"); addChild($$, $1);}
        ;
type_qualifier : CONST                          {$$ = createNode("type-qualifier"); addLeaf($$, "const");}
        | RESTRICT                              {$$ = createNode("type-qualifier"); addLeaf($$, "restrict");}
        | VOLATILE                              {$$ = createNode("type-qualifier"); addLeaf($$, "volatile");}
        ;
function_specifier : INLINE                     {$$ = createNode("function-specifier"); addLeaf($$, "inline");}
        ;
declarator : pointer_opt direct_declarator      {$$ = createNode("declarator"); addChild($$, $2); addChild($$, $1);}
        ;
direct_declarator : IDENTIFIER                                                                                                      {$$ = createNode("direct-declarator"); addLeaf($$, "identifier");}
        | LEFT_ROUND_BRACKET declarator RIGHT_ROUND_BRACKET                                                                         {$$ = createNode("direct-declarator"); addLeaf($$, ")"); addChild($$, $2); addLeaf($$, "(");}
        | direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt assignment_expression_opt RIGHT_SQUARE_BRACKET              {$$ = createNode("direct-declarator"); addLeaf($$, "]"); addChild($$, $4); addChild($$, $3); addLeaf($$, "["); addChild($$, $1);}
        | direct_declarator LEFT_SQUARE_BRACKET STATIC type_qualifier_list_opt assignment_expression RIGHT_SQUARE_BRACKET           {$$ = createNode("direct-declarator"); addLeaf($$, "]"); addChild($$, $5); addChild($$, $4); addLeaf($$, "static"); addLeaf($$, "["); addChild($$, $1);}
        | direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list STATIC assignment_expression RIGHT_CURLY_BRACKET                {$$ = createNode("direct-declarator"); addLeaf($$, "]"); addChild($$, $5); addLeaf($$, "static"); addChild($$, $3); addLeaf($$, "["); addChild($$, $1);}
        | direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list_opt ASTERISK RIGHT_SQUARE_BRACKET                               {$$ = createNode("direct-declarator"); addLeaf($$, "]"); addLeaf($$, "*"); addChild($$, $3); addLeaf($$, "["); addChild($$, $1);}
        | direct_declarator LEFT_ROUND_BRACKET parameter_type_list RIGHT_ROUND_BRACKET                                              {$$ = createNode("direct-declarator"); addLeaf($$, ")"); addChild($$, $3); addLeaf($$, "("); addChild($$, $1);}
        | direct_declarator LEFT_ROUND_BRACKET identifier_list_opt RIGHT_ROUND_BRACKET                                              {$$ = createNode("direct-declarator"); addLeaf($$, ")"); addChild($$, $3); addLeaf($$, "("); addChild($$, $1);}
        ;
pointer : ASTERISK type_qualifier_list_opt                      {$$ = createNode("pointer"); addChild($$, $2); addLeaf($$, "*");}
        | ASTERISK type_qualifier_list_opt pointer              {$$ = createNode("pointer"); addChild($$, $3); addChild($$, $2); addLeaf($$, "*");}
        ;
pointer_opt : /* epsilon */                                     {$$ = createNode("pointer-opt"); addLeaf($$, "epsilon");}
        | pointer                                               {$$ = createNode("pointer-opt"); addChild($$, $1);}
        ;
type_qualifier_list : type_qualifier                            {$$ = createNode("type-qualifier-list"); addChild($$, $1);}
        | type_qualifier_list type_qualifier                    {$$ = createNode("type-qualifier-list"); $2 = createNode("type-qualifier-list"); addChild($$, $2); addChild($$, $1);}
        ;
type_qualifier_list_opt : /* epsilon */                         {$$ = createNode("type-qualifier-list-opt");addLeaf($$, "epsilon");}
        | type_qualifier_list                                   {$$ = createNode("type-qualifier-list-opt"); addChild($$, $1);}
        ;
parameter_type_list : parameter_list                            {$$ = createNode("parameter-type-list"); addChild($$, $1);}
        | parameter_list COMMA ELLIPSIS                         {$$ = createNode("parameter-type-list"); addLeaf($$, "..."); addLeaf($$, ","); addChild($$, $1);}
        ;
parameter_list : parameter_declaration                          {$$ = createNode("parameter-list"); addChild($$, $1);}
        | parameter_list COMMA parameter_declaration            {$$ = createNode("parameter-list"); addChild($$, $3); addLeaf($$, ","); addChild($$, $1);}
        ;
parameter_declaration : declaration_specifiers declarator       {$$ = createNode("parameter-declaration"); addChild($$, $2); addChild($$, $1);}
        | declaration_specifiers                                {$$ = createNode("parameter-declaration"); addChild($$, $1);}
        ;
identifier_list : IDENTIFIER                                    {$$ = createNode("identifier-list"); addLeaf($$, "identifier");}
        | identifier_list COMMA IDENTIFIER                      {$$ = createNode("identifier-list"); addLeaf($$, "identifier"); addLeaf($$, ","); addChild($$, $1);}
        ;
identifier_list_opt : /* epsilon */             {$$ = createNode("identifier-list-opt"); addLeaf($$, "epsilon");}
        | identifier_list                       {$$ = createNode("identifier-list-opt"); addChild($$, $1);}
        ;
type_name : specifier_qualifier_list            {$$ = createNode("type-name"); addChild($$, $1);}
        ;   
initializer : assignment_expression                                             {$$ = createNode("initializer"); addChild($$, $1);}
        | LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET               {$$ = createNode("initializer"); addLeaf($$, "}"); addChild($$, $2); addLeaf($$, "{");}
        | LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET         {$$ = createNode("initializer"); addLeaf($$, "}"); addLeaf($$, ","); addChild($$, $2); addLeaf($$, "{");}
        ;
initializer_list : designation_opt initializer                                  {$$ = createNode("initializer-list"); addChild($$, $2); addChild($$, $1);}
        | initializer_list COMMA designation_opt initializer                    {$$ = createNode("initializer-list"); addChild($$, $4); addChild($$, $3); addLeaf($$, ","); addChild($$, $1);}
        ;
designation : designator_list ASSIGNMENT        {$$ = createNode("designation"); addLeaf($$, "="); addChild($$, $1);}
        ;
designation_opt : /* epsilon */                 {$$ = createNode("designation-opt"); addLeaf($$, "epsilon");}
        | designation                           {$$ = createNode("designation-opt"); addChild($$, $1);}
        ;
designator_list : designator                    {$$ = createNode("designator-list"); addChild($$, $1);}
        | designator_list designator            {$$ = createNode("designator-list"); addChild($$, $2); addChild($$, $1);}
        ;
designator : LEFT_SQUARE_BRACKET constant_expression RIGHT_SQUARE_BRACKET       {$$ = createNode("designator"); addLeaf($$, "]"); addChild($$, $2); addLeaf($$, "[");}
        | DOT IDENTIFIER                                                        {$$ = createNode("designator"); addLeaf($$, "identifier"); addLeaf($$, ".");}
        ;

/* 3. Statements */
statement : labeled_statement           {$$ = createNode("statement"); addChild($$, $1);}
        | expression_statement          {$$ = createNode("statement"); addChild($$, $1);}
        | compound_statement            {$$ = createNode("statement"); addChild($$, $1);}
        | selection_statement           {$$ = createNode("statement"); addChild($$, $1);}
        | iteration_statement           {$$ = createNode("statement"); addChild($$, $1);}
        | jump_statement        
        ;
labeled_statement : IDENTIFIER COLON statement            {$$ = createNode("labeled-statement"); addChild($$, $3); addLeaf($$, ":"); addLeaf($$, "identifier");}
        | CASE constant_expression COLON statement        {$$ = createNode("labeled-statement"); addChild($$, $4); addLeaf($$, ":"); addChild($$, $2); addLeaf($$, "case");}
        | DEFAULT COLON statement                       {$$ = createNode("labeled-statement"); addChild($$, $3); addLeaf($$, ":"); addLeaf($$, "default");}
        ;
compound_statement : LEFT_CURLY_BRACKET block_item_list_opt RIGHT_CURLY_BRACKET         {$$ = createNode("compound-statement"); addLeaf($$, "}"); addChild($$, $2); addLeaf($$, "{");}
        ;
block_item_list_opt : /* epsilon */             {$$ = createNode("block-item-list-opt"); addLeaf($$, "epsilon");}
        | block_item_list                       {$$ = createNode("block-item-list-opt"); addChild($$, $1);}
        ;
block_item_list : block_item                    {$$ = createNode("block-item-list"); addChild($$, $1);}
        | block_item_list block_item            {$$ = createNode("block-item-list"); addChild($$, $2); addChild($$, $1);}
        ;
block_item : declaration                                {$$ = createNode("block-item"); addChild($$, $1);}
        | statement                                     {$$ = createNode("block-item"); addChild($$, $1);}                                               
        ;
expression_statement : expression_opt SEMICOLON         {$$ = createNode("expression-statement"); addLeaf($$, ";"); addChild($$, $1);}
        ;
selection_statement : IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement %prec LOWER_THAN_ELSE              {$$ = createNode("selection-statement"); addChild($$, $5); addLeaf($$, ")"); addChild($$, $3); addLeaf($$, "("); addLeaf($$, "if");}
        | IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement ELSE statement                                 {$$ = createNode("selection-statement"); addChild($$, $7); addLeaf($$, "else"); addChild($$, $5); addLeaf($$, ")"); addChild($$, $3); addLeaf($$, "("); addLeaf($$, "if");}
        | SWITCH LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement                                            {$$ = createNode("selection-statement"); addChild($$, $5); addLeaf($$, ")"); addChild($$, $3); addLeaf($$, "("); addLeaf($$, "switch");}
        ;
iteration_statement : WHILE LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement                                                 {$$ = createNode("iteration-statement"); addChild($$, $5); addLeaf($$, ")"); addChild($$, $3); addLeaf($$, "("); addLeaf($$, "while");}
        | DO statement WHILE LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET SEMICOLON                                                {$$ = createNode("iteration-statement"); addLeaf($$, ";"); addLeaf($$, ")"); addChild($$, $5); addLeaf($$, "("); addLeaf($$, "while"); addChild($$, $2); addLeaf($$, "do");}
        | FOR LEFT_ROUND_BRACKET expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RIGHT_ROUND_BRACKET statement         {$$ = createNode("iteration-statement"); addChild($$, $9); addLeaf($$, ")"); addChild($$, $7); addLeaf($$, ";"); addChild($$, $5); addLeaf($$, ";"); addChild($$, $3); addLeaf($$, "("); addLeaf($$, "for");}
        | FOR LEFT_ROUND_BRACKET declaration expression_opt SEMICOLON expression_opt RIGHT_ROUND_BRACKET statement                      {$$ = createNode("iteration-statement"); addChild($$, $8); addLeaf($$, ")"); addChild($$, $6); addLeaf($$, ";"); addChild($$, $4); addChild($$, $3); addLeaf($$, "("); addLeaf($$, "for");}                   
        ;
jump_statement : GOTO IDENTIFIER SEMICOLON              {$$ = createNode("jump-statement"); addLeaf($$, ";"); addLeaf($$, "identifier"); addLeaf($$, "goto");}
        | CONTINUE SEMICOLON                            {$$ = createNode("jump-statement"); addLeaf($$, ";"); addLeaf($$, "continue");}
        | BREAK SEMICOLON                               {$$ = createNode("jump-statement"); addLeaf($$, ";"); addLeaf($$, "break");}
        | RETURN expression_opt SEMICOLON               {$$ = createNode("jump-statement"); addLeaf($$, ";"); addChild($$, $2); addLeaf($$, "return");}
        ;

/* 4. External definitions */
translation_unit : external_declaration                 {$$ = createNode("translation-unit"); addChild($$, $1);}
        | translation_unit external_declaration         {$$ = createNode("translation-unit"); addChild($$, $2); addChild($$, $1);}
        ;
external_declaration : function_definition              {$$ = createNode("external-declaration"); addChild($$, $1);}
        | declaration                                   {$$ = createNode("external-declaration"); addChild($$, $1);}
        ;
function_definition : declaration_specifiers declarator declaration_list_opt compound_statement         {$$ = createNode("function-definition"); addChild($$, $4); addChild($$, $3); addChild($$, $2); addChild($$, $1);}
        ;
declaration_list : declaration                                                                          {$$ = createNode("declaration-list"); addChild($$, $1);}
        | declaration_list declaration                                                                  {$$ = createNode("declaration-list"); addChild($$, $2); addChild($$, $1);}
        ;
declaration_list_opt : /* epsilon */                                                                    {$$ = createNode("declaration-list-op"); addLeaf($$, "epsilon");}
        | declaration_list                                                                              {$$ = createNode("declaration-list-op"); addChild($$, $1);}
        ;
%%

void yyerror(char *s) {
    printf("%s\n", s);
    printf("Line %d: '%s'\n", yylineno, yytext);
}