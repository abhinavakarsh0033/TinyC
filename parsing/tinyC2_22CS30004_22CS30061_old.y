%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int yylex();
void yyerror(char *s);

typedef struct _node {
    int type;
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
%token COMMENT KEYWORD IDENTIFIER CONSTANT STRING_LITERAL PUNCTUATOR
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
PROGRAM : translation_unit      {$1 = createNode("translation-unit"); assignRoot($1);}
        ;

/* 1. Expressions */
primary_expression : IDENTIFIER         {addLeaf($$, "identifier");}
        | CONSTANT                      {addLeaf($$, "constant");}       
        | STRING_LITERAL                {addLeaf($$, "string-literal");}
        | '(' expression ')'            {addLeaf($$, ")"); $2 = createNode("expression"); addChild($$, $2); addLeaf($$, "(");}
        ;
postfix_expression : primary_expression                                 {$1 =  createNode("primary-expression"); addChild($$, $1);}
        | postfix_expression '[' expression ']'                         {$1 = createNode("postfix-expression"); $3 = createNode("expression"); addLeaf($$, "["); addChild($$, $3); addLeaf($$, "]"); addChild($$, $1);}
        | postfix_expression '(' argument_expression_list_opt ')'       {$1 = createNode("postfix-expression"); $3 = createNode("argument-expression-list-opt"); addLeaf($$, ")"); addChild($$, $3); addLeaf($$, "("); addChild($$, $1);}
        | postfix_expression '.' IDENTIFIER                             {$1 = createNode("postfix-expression"); addLeaf($$, "identifier"); addLeaf($$, "."); addChild($$, $1);}
        | postfix_expression ARROW IDENTIFIER                           {$1 = createNode("postfix-expression"); addLeaf($$, "identifier"); addLeaf($$, "->"); addChild($$, $1);}
        | postfix_expression INCREMENT                                  {$1 = createNode("postfix-expression"); addLeaf($$, "increment"); addChild($$, $1);}
        | postfix_expression DECREMENT                                  {$1 = createNode("postfix-expression"); addLeaf($$, "decrement"); addChild($$, $1);}
        | '(' type_name ')' '{' initializer_list '}'                    {$2 = createNode("type-name"); $5 = createNode("initializer-list"); addLeaf($$, "}"); addChild($$, $5); addLeaf($$, "{"); addLeaf($$, ")"); addChild($$, $2); addLeaf($$, "(");}
        | '(' type_name ')' '{' initializer_list ',' '}'                {$2 = createNode("type-name"); $5 = createNode("initializer-list"); addLeaf($$, "}"); addLeaf($$, ","); addChild($$, $5); addLeaf($$, "{"); addLeaf($$, ")"); addChild($$, $2); addLeaf($$, "(");}
        ;
argument_expression_list : assignment_expression                        {$1 = createNode("assignment-expression"); addChild($$, $1);}
        | argument_expression_list ',' assignment_expression            {$1 = createNode("argument-expression-list"); $3 = createNode("assignment-expression"); addChild($$, $3); addLeaf($$, ","); addChild($$, $1);}
        ;
argument_expression_list_opt : /* epsilon */            {addLeaf($$, "epsilon");}
        | argument_expression_list                      {$1 = createNode("argument-expression-list"); addChild($$, $1);}
        ;
unary_expression : postfix_expression                   {$1 = createNode("postfix-expression"); addChild($$, $1);}
        | INCREMENT unary_expression                    {$2 = createNode("unary-expression"); addChild($$, $2); addLeaf($$, "increment");}
        | DECREMENT unary_expression                    {$2 = createNode("unary-expression"); addChild($$, $2); addLeaf($$, "decrement");}
        | unary_operator cast_expression                {$1 = createNode("unary-operator"); $2 = createNode("cast-expression"); addChild($$, $2); addChild($$, $1);}
        | SIZEOF unary_expression                       {$2 = createNode("unary-expression"); addChild($$, $2); addLeaf($$, "sizeof");}
        | SIZEOF '(' type_name ')'                      {$3 = createNode("type-name"); addLeaf($$, ")"); addChild($$, $3); addLeaf($$, "("); addLeaf($$, "sizeof");}
        ;
unary_operator : '&'            {addLeaf($$, "&");}
        | '*'                   {addLeaf($$, "*");}
        | '+'                   {addLeaf($$, "+");}
        | '-'                   {addLeaf($$, "-");}
        | '~'                   {addLeaf($$, "~");}
        | '!'                   {addLeaf($$, "!");}
        ;
cast_expression : unary_expression                      {$1 = createNode("unary-expression"); addChild($$, $1);}
        | '(' type_name ')' cast_expression             {$2 = createNode("type-name"); $4 = createNode("cast-expression"); addChild($$, $4); addLeaf($$, ")"); addChild($$, $2); addLeaf($$, "(");}
        ;
multiplicative_expression : cast_expression                             {$1 = createNode("cast-expression"); addChild($$, $1);}
        | multiplicative_expression '*' cast_expression                 {$1 = createNode("multiplicative-expression"); $3 = createNode("cast-expression"); addChild($$, $3); addLeaf($$, "*"); addChild($$, $1);}
        | multiplicative_expression '/' cast_expression                 {$1 = createNode("multiplicative-expression"); $3 = createNode("cast-expression"); addChild($$, $3); addLeaf($$, "/"); addChild($$, $1);}
        | multiplicative_expression '%' cast_expression                 {$1 = createNode("multiplicative-expression"); $3 = createNode("cast-expression"); addChild($$, $3); addLeaf($$, "%"); addChild($$, $1);}
        ;
additive_expression : multiplicative_expression                         {$1 = createNode("multiplicative-expression"); addChild($$, $1);}
        | additive_expression '+' multiplicative_expression             {$1 = createNode("additive-expression"); $3 = createNode("multiplicative-expression"); addChild($$, $3); addLeaf($$, "+"); addChild($$, $1);}
        | additive_expression '-' multiplicative_expression             {$1 = createNode("additive-expression"); $3 = createNode("multiplicative-expression"); addChild($$, $3); addLeaf($$, "-"); addChild($$, $1);}
        ;
shift_expression : additive_expression                                  {$1 = createNode("additive-expression"); addChild($$, $1);}
        | shift_expression LEFT_SHIFT additive_expression               {$1 = createNode("shift-expression"); $3 = createNode("additive-expression"); addChild($$, $3); addLeaf($$, "<<"); addChild($$, $1);}
        | shift_expression RIGHT_SHIFT additive_expression              {$1 = createNode("shift-expression"); $3 = createNode("additive-expression"); addChild($$, $3); addLeaf($$, ">>"); addChild($$, $1);}
        ;
relational_expression : shift_expression                                {$1 = createNode("shift-expression"); addChild($$, $1);}
        | relational_expression '<' shift_expression                    {$1 = createNode("relational-expression"); $3 = createNode("shift-expression"); addChild($$, $3); addLeaf($$, "<"); addChild($$, $1);}
        | relational_expression '>' shift_expression                    {$1 = createNode("relational-expression"); $3 = createNode("shift-expression"); addChild($$, $3); addLeaf($$, ">"); addChild($$, $1);}
        | relational_expression LESS_THAN_EQUAL shift_expression        {$1 = createNode("relational-expression"); $3 = createNode("shift-expression"); addChild($$, $3); addLeaf($$, "<="); addChild($$, $1);}
        | relational_expression GREATER_THAN_EQUAL shift_expression     {$1 = createNode("relational-expression"); $3 = createNode("shift-expression"); addChild($$, $3); addLeaf($$, ">="); addChild($$, $1);}
        ;
equality_expression : relational_expression                             {$1 = createNode("relational-expression"); addChild($$, $1);}
        | equality_expression EQUAL relational_expression               {$1 = createNode("equality-expression"); $3 = createNode("relational-expression"); addChild($$, $3); addLeaf($$, "=="); addChild($$, $1);}
        | equality_expression NOT_EQUAL relational_expression           {$1 = createNode("equality-expression"); $3 = createNode("relational-expression"); addChild($$, $3); addLeaf($$, "!="); addChild($$, $1);}
        ;
AND_expression : equality_expression                                    {$1 = createNode("equality-expression"); addChild($$, $1);}
        | AND_expression '&' equality_expression                        {$1 = createNode("AND-expression"); $3 = createNode("equality-expression"); addChild($$, $3); addLeaf($$, "&"); addChild($$, $1);}
        ;
exclusive_OR_expression : AND_expression                                {$1 = createNode("AND-expression"); addChild($$, $1);}
        | exclusive_OR_expression '^' AND_expression                    {$1 = createNode("exclusive-OR-expression"); $3 = createNode("AND-expression"); addChild($$, $3); addLeaf($$, "^"); addChild($$, $1);}
        ;
inclusive_OR_expression : exclusive_OR_expression                       {$1 = createNode("exclusive-OR-expression"); addChild($$, $1);}
        | inclusive_OR_expression '|' exclusive_OR_expression           {$1 = createNode("inclusive-OR-expression"); $3 = createNode("exclusive-OR-expression"); addChild($$, $3); addLeaf($$, "|"); addChild($$, $1);}
        ;
logical_AND_expression : inclusive_OR_expression                        {$1 = createNode("inclusive-OR-expression"); addChild($$, $1);}
        | logical_AND_expression LOGICAL_AND inclusive_OR_expression    {$1 = createNode("logical-AND-expression"); $3 = createNode("inclusive-OR-expression"); addChild($$, $3); addLeaf($$, "&&"); addChild($$, $1);}
        ;
logical_OR_expression : logical_AND_expression                          {$1 = createNode("logical-AND-expression"); addChild($$, $1);}
        | logical_OR_expression LOGICAL_OR logical_AND_expression       {$1 = createNode("logical-OR-expression"); $3 = createNode("logical-AND-expression"); addChild($$, $3); addLeaf($$, "||"); addChild($$, $1);}
        ;
conditional_expression : logical_OR_expression                                  {$1 = createNode("logical-OR-expression"); addChild($$, $1);}
        | logical_OR_expression '?' expression ':' conditional_expression       {$1 = createNode("conditional-expression"); $3 = createNode("expression"); $5 = createNode("conditional-expression"); addChild($$, $5); addLeaf($$, ":"); addChild($$, $3); addLeaf($$, "?"); addChild($$, $1);}
        ;
assignment_expression : conditional_expression                                  {$1 = createNode("conditional-expression"); addChild($$, $1);}
        | unary_expression assignment_operator assignment_expression            {$1 = createNode("unary-expression"); $2 = createNode("assignment-operator"); $3 = createNode("assignment-expression"); addChild($$, $3); addChild($$, $2); addChild($$, $1);}
        ;
assignment_expression_opt : /* epsilon */               {addLeaf($$, "epsilon");}
        | assignment_expression                         {$1 = createNode("assignment-expression"); addChild($$, $1);}
        ;
assignment_operator : '='                               {addLeaf($$, "=");}
        | MULTIPLY_ASSIGNMENT                           {addLeaf($$, "*=");}
        | DIVIDE_ASSIGNMENT                             {addLeaf($$, "/=");}
        | MOD_ASSIGNMENT                                {addLeaf($$, "%=");}
        | ADD_ASSIGNMENT                                {addLeaf($$, "+=");}
        | SUBTRACT_ASSIGNMENT                           {addLeaf($$, "-=");}
        | LEFT_SHIFT_ASSIGNMENT                         {addLeaf($$, "<<=");}
        | RIGHT_SHIFT_ASSIGNMENT                        {addLeaf($$, ">>=");}
        | BITWISE_AND_ASSIGNMENT                        {addLeaf($$, "&=");}
        | BITWISE_XOR_ASSIGNMENT                        {addLeaf($$, "^=");}
        | BITWISE_OR_ASSIGNMENT                         {addLeaf($$, "|=");}
        ;
expression : assignment_expression                      {$1 = createNode("assignment-expression"); addChild($$, $1);}
        | expression ',' assignment_expression          {$1 = createNode("expression"); $3 = createNode("assignment-expression"); addChild($$, $3); addLeaf($$, ","); addChild($$, $1);}
        ;
expression_opt : /* epsilon */                          {addLeaf($$, "epsilon");}
        | expression                                    {$1 = createNode("expression"); addChild($$, $1);}
        ;
constant_expression : conditional_expression            {$1 = createNode("conditional-expression"); addChild($$, $1);}
        ;

/* 2. Declarations */
declaration : declaration_specifiers init_declarator_list_opt ';'               {$1 = createNode("declaration-specifiers"); $2 = createNode("init-declarator-list-opt"); addLeaf($$, ";"); addChild($$, $2); addChild($$, $1);}
        ;
declaration_specifiers : storage_class_specifier declaration_specifiers_opt     {$1 = createNode("storage-class-specifier"); $2 = createNode("declaration-specifiers-opt"); addChild($$, $2); addChild($$, $1);}
        | type_specifier declaration_specifiers_opt                             {$1 = createNode("type-specifier"); $2 = createNode("declaration-specifiers-opt"); addChild($$, $2); addChild($$, $1);}
        | type_qualifier declaration_specifiers_opt                             {$1 = createNode("type-qualifier"); $2 = createNode("declaration-specifiers-opt"); addChild($$, $2); addChild($$, $1);}
        | function_specifier declaration_specifiers_opt                         {$1 = createNode("function-specifier"); $2 = createNode("declaration-specifiers-opt"); addChild($$, $2); addChild($$, $1);}
        ;
declaration_specifiers_opt : /* epsilon */              {addLeaf($$, "epsilon");}
        | declaration_specifiers                        {$1 = createNode("declaration-specifiers"); addChild($$, $1);}
        ;
init_declarator_list_opt : /* epsilon */                {addLeaf($$, "epsilon");}
        | init_declarator_list                          {$1 = createNode("init-declarator-list"); addChild($$, $1);}
        ;
init_declarator_list : init_declarator                  {$1 = createNode("init-declarator"); addChild($$, $1);}
        | init_declarator_list ',' init_declarator      {$1 = createNode("init-declarator-list"); $3 = createNode("init-declarator"); addChild($$, $3); addLeaf($$, ","); addChild($$, $1);}
        ;
init_declarator : declarator                            {$1 = createNode("declarator"); addChild($$, $1);}
        | declarator '=' initializer                    {$1 = createNode("declarator"); $3 = createNode("initializer"); addChild($$, $3); addLeaf($$, "="); addChild($$, $1);}
        ;
storage_class_specifier : EXTERN        {addLeaf($$, "extern");}
        | STATIC                        {addLeaf($$, "static");}
        | AUTO                          {addLeaf($$, "auto");}
        | REGISTER                      {addLeaf($$, "register");}
        ;
type_specifier : VOID                   {addLeaf($$, "void");}
        | CHAR                          {addLeaf($$, "char");}
        | SHORT                         {addLeaf($$, "short");}
        | INT                           {addLeaf($$, "int");}
        | LONG                          {addLeaf($$, "long");}
        | FLOAT                         {addLeaf($$, "float");}
        | DOUBLE                        {addLeaf($$, "double");}
        | SIGNED                        {addLeaf($$, "signed");}
        | UNSIGNED                      {addLeaf($$, "unsigned");}
        | BOOL                          {addLeaf($$, "_Bool");}
        | COMPLEX                       {addLeaf($$, "_Complex");}
        | IMAGINARY                     {addLeaf($$, "_Imaginary");}
        ;
specifier_qualifier_list : type_specifier specifier_qualifier_list_opt          {$1 = createNode("type-specifier"); $2 = createNode("specifier-qualifier-list-opt"); addChild($$, $2); addChild($$, $1);}
        | type_qualifier specifier_qualifier_list_opt                           {$1 = createNode("type-qualifier"); $2 = createNode("specifier-qualifier-list-opt"); addChild($$, $2); addChild($$, $1);}
        ;
specifier_qualifier_list_opt : /* epsilon */    {addLeaf($$, "epsilon");}
        | specifier_qualifier_list              {$1 = createNode("specifier-qualifier-list"); addChild($$, $1);}
        ;
type_qualifier : CONST                          {addLeaf($$, "const");}
        | RESTRICT                              {addLeaf($$, "restrict");}
        | VOLATILE                              {addLeaf($$, "volatile");}
        ;
function_specifier : INLINE                     {addLeaf($$, "inline");}
        ;
declarator : pointer_opt direct_declarator      {$1 = createNode("pointer-opt"); $2 = createNode("direct-declarator"); addChild($$, $2); addChild($$, $1);}
        ;
direct_declarator : IDENTIFIER                                                                  {addLeaf($$, "identifier");}
        | '(' declarator ')'                                                                    {$2 = createNode("declarator"); addLeaf($$, ")"); addChild($$, $2); addLeaf($$, "(");}
        | direct_declarator '[' type_qualifier_list_opt assignment_expression_opt ']'           {$1 = createNode("direct-declarator"); $3 = createNode("type-qualifier-list-opt"); $4 = createNode("assignment-expression-opt"); addLeaf($$, "]"); addChild($$, $4); addChild($$, $3); addLeaf($$, "["); addChild($$, $1);}
        | direct_declarator '[' STATIC type_qualifier_list_opt assignment_expression ']'        {$1 = createNode("direct-declarator"); $4 = createNode("type-qualifier-list-opt"); $5 = createNode("assignment-expression"); addLeaf($$, "]"); addChild($$, $5); addChild($$, $4); addLeaf($$, "static"); addLeaf($$, "["); addChild($$, $1);}
        | direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'            {$1 = createNode("direct-declarator"); $3 = createNode("type-qualifier-list"); $5 = createNode("assignment-expression"); addLeaf($$, "]"); addChild($$, $5); addLeaf($$, "static"); addChild($$, $3); addLeaf($$, "["); addChild($$, $1);}
        | direct_declarator '[' type_qualifier_list_opt '*' ']'                                 {$1 = createNode("direct-declarator"); $3 = createNode("type-qualifier-list-opt"); addLeaf($$, "]"); addLeaf($$, "*"); addChild($$, $3); addLeaf($$, "["); addChild($$, $1);}
        | direct_declarator '(' parameter_type_list ')'                                         {$1 = createNode("direct-declarator"); $3 = createNode("parameter-type-list"); addLeaf($$, ")"); addChild($$, $3); addLeaf($$, "("); addChild($$, $1);}
        | direct_declarator '(' identifier_list_opt ')'                                         {$1 = createNode("direct-declarator"); $3 = createNode("identifier-list-opt"); addLeaf($$, ")"); addChild($$, $3); addLeaf($$, "("); addChild($$, $1);}
        ;
pointer : '*' type_qualifier_list_opt                   {$2 = createNode("type-qualifier-list-opt"); addChild($$, $2); addLeaf($$, "*");}
        | '*' type_qualifier_list_opt pointer           {$2 = createNode("type-qualifier-list-opt"); $3 = createNode("pointer"); addChild($$, $3); addChild($$, $2); addLeaf($$, "*");}
        ;
pointer_opt : /* epsilon */             {addLeaf($$, "epsilon");}
        | pointer                       {$1 = createNode("pointer"); addChild($$, $1);}
        ;
type_qualifier_list : type_qualifier                    {$1 = createNode("type-qualifier"); addChild($$, $1);}
        | type_qualifier_list type_qualifier            {$1 = createNode("type-qualifier"); $2 = createNode("type-qualifier-list"); addChild($$, $2); addChild($$, $1);}
        ;
type_qualifier_list_opt : /* epsilon */                 {addLeaf($$, "epsilon");}
        | type_qualifier_list                           {$1 = createNode("type-qualifier-list"); addChild($$, $1);}
        ;
parameter_type_list : parameter_list                    {$1 = createNode("parameter-list"); addChild($$, $1);}
        | parameter_list ',' ELLIPSIS                   {$1 = createNode("parameter-list"); addLeaf($$, "..."); addLeaf($$, ","); addChild($$, $1);}
        ;
parameter_list : parameter_declaration                          {$1 = createNode("parameter-declaration"); addChild($$, $1);}
        | parameter_list ',' parameter_declaration              {$1 = createNode("parameter-list"); $3 = createNode("parameter-declaration"); addChild($$, $3); addLeaf($$, ","); addChild($$, $1);}
        ;
parameter_declaration : declaration_specifiers declarator       {$1 = createNode("declaration-specifiers"); $2 = createNode("declarator"); addChild($$, $2); addChild($$, $1);}
        | declaration_specifiers                                {$1 = createNode("declaration-specifiers"); addChild($$, $1);}
        ;
identifier_list : IDENTIFIER                    {addLeaf($$, "identifier");}
        | identifier_list ',' IDENTIFIER        {$1 = createNode("identifier-list"); addLeaf($$, "identifier"); addLeaf($$, ","); addChild($$, $1);}
        ;
identifier_list_opt : /* epsilon */             {addLeaf($$, "epsilon");}
        | identifier_list                       {$1 = createNode("identifier-list"); addChild($$, $1);}
        ;
type_name : specifier_qualifier_list            {$1 = createNode("specifier-qualifier-list"); addChild($$, $1);}
        ;   
initializer : assignment_expression             {$1 = createNode("assignment-expression"); addChild($$, $1);}
        | '{' initializer_list '}'              {$2 = createNode("initializer-list"); addLeaf($$, "}"); addChild($$, $2); addLeaf($$, "{");}
        | '{' initializer_list ',' '}'          {$2 = createNode("initializer-list"); addLeaf($$, "}"); addLeaf($$, ","); addChild($$, $2); addLeaf($$, "{");}
        ;
initializer_list : designation_opt initializer                  {$1 = createNode("designation-opt"); $2 = createNode("initializer"); addChild($$, $2); addChild($$, $1);}
        | initializer_list ',' designation_opt initializer      {$1 = createNode("initializer-list"); $3 = createNode("designation-opt"); $4 = createNode("initializer"); addChild($$, $4); addChild($$, $3); addLeaf($$, ","); addChild($$, $1);}
        ;
designation : designator_list '='               {$1 = createNode("designator-list"); addLeaf($$, "="); addChild($$, $1);}
        ;
designation_opt : /* epsilon */                 {addLeaf($$, "epsilon");}
        | designation                           {$1 = createNode("designation"); addChild($$, $1);}
        ;
designator_list : designator                    {$1 = createNode("designator"); addChild($$, $1);}
        | designator_list designator            {$1 = createNode("designator"); $2 = createNode("designator-list"); addChild($$, $2); addChild($$, $1);}
        ;
designator : '[' constant_expression ']'        {$2 = createNode("constant-expression"); addLeaf($$, "]"); addChild($$, $2); addLeaf($$, "[");}
        | '.' IDENTIFIER                        {addLeaf($$, "identifier"); addLeaf($$, ".");}
        ;

/* 3. Statements */
statement : labeled_statement           {$1 = createNode("labeled-statement"); addChild($$, $1);}
        | expression_statement          {$1 = createNode("expression-statement"); addChild($$, $1);}
        | compound_statement            {$1 = createNode("compound-statement"); addChild($$, $1);}
        | selection_statement           {$1 = createNode("selection-statement"); addChild($$, $1);}
        | iteration_statement           {$1 = createNode("iteration-statement"); addChild($$, $1);}
        | jump_statement        
        ;
labeled_statement : IDENTIFIER ':' statement            {$3 = createNode("statement"); addChild($$, $3); addLeaf($$, ":"); addLeaf($$, "identifier");}
        | CASE constant_expression ':' statement        {$2 = createNode("constant-expression"); $4 = createNode("statement"); addChild($$, $4); addLeaf($$, ":"); addChild($$, $2); addLeaf($$, "case");}
        | DEFAULT ':' statement                         {$3 = createNode("statement"); addChild($$, $3); addLeaf($$, ":"); addLeaf($$, "default");}
        ;
compound_statement : '{' block_item_list_opt '}'        {$2 = createNode("block-item-list-opt"); addLeaf($$, "}"); addChild($$, $2); addLeaf($$, "{");}
        ;
block_item_list_opt : /* epsilon */             {addLeaf($$, "epsilon");}
        | block_item_list                       {$1 = createNode("block-item-list"); addChild($$, $1);}
        ;
block_item_list : block_item                    {$1 = createNode("block-item"); addChild($$, $1);}
        | block_item_list block_item            {$1 = createNode("block-item"); $2 = createNode("block-item-list"); addChild($$, $2); addChild($$, $1);}
        ;
block_item : declaration                        {$1 = createNode("declaration"); addChild($$, $1);}
        | statement                             {$1 = createNode("statement"); addChild($$, $1);}                                               
        ;
expression_statement : expression_opt ';'       {$1 = createNode("expression-opt"); addLeaf($$, ";"); addChild($$, $1);}
        ;
selection_statement : IF '(' expression ')' statement %prec LOWER_THAN_ELSE             {$3 = createNode("expression"); $5 = createNode("statement"); addChild($$, $5); addLeaf($$, ")"); addChild($$, $3); addLeaf($$, "("); addLeaf($$, "if");}
        | IF '(' expression ')' statement ELSE statement                                {$3 = createNode("expression"); $5 = createNode("statement"); $7 = createNode("statement"); addChild($$, $7); addLeaf($$, "else"); addChild($$, $5); addLeaf($$, ")"); addChild($$, $3); addLeaf($$, "("); addLeaf($$, "if");}
        | SWITCH '(' expression ')' statement                                           {$3 = createNode("expression"); $5 = createNode("statement"); addChild($$, $5); addLeaf($$, ")"); addChild($$, $3); addLeaf($$, "("); addLeaf($$, "switch");}
        ;
iteration_statement : WHILE '(' expression ')' statement                                {$3 = createNode("expression"); $5 = createNode("statement"); addChild($$, $5); addLeaf($$, ")"); addChild($$, $3); addLeaf($$, "("); addLeaf($$, "while");}
        | DO statement WHILE '(' expression ')' ';'                                     {$2 = createNode("statement"); $5 = createNode("expression"); addLeaf($$, ";"); addLeaf($$, ")"); addChild($$, $5); addLeaf($$, "("); addLeaf($$, "while"); addChild($$, $2); addLeaf($$, "do");}
        | FOR '(' expression_opt ';' expression_opt ';' expression_opt ')' statement    {$3 = createNode("expression-opt"); $5 = createNode("expression-opt"); $7 = createNode("expression-opt"); $9 = createNode("statement"); addChild($$, $9); addLeaf($$, ")"); addChild($$, $7); addLeaf($$, ";"); addChild($$, $5); addLeaf($$, ";"); addChild($$, $3); addLeaf($$, "("); addLeaf($$, "for");}
        | FOR '(' declaration expression_opt ';' expression_opt ')' statement           {$3 = createNode("declaration"); $4 = createNode("expression-opt"); $6 = createNode("expression-opt"); $8 = createNode("statement"); addChild($$, $8); addLeaf($$, ")"); addChild($$, $6); addLeaf($$, ";"); addChild($$, $4); addChild($$, $3); addLeaf($$, "("); addLeaf($$, "for");}                   
        ;
jump_statement : GOTO IDENTIFIER ';'                    {addLeaf($$, ";"); addLeaf($$, "identifier"); addLeaf($$, "goto");}
        | CONTINUE ';'                                  {addLeaf($$, ";"); addLeaf($$, "continue");}
        | BREAK ';'                                     {addLeaf($$, ";"); addLeaf($$, "break");}
        | RETURN expression_opt ';'                     {$2 = createNode("expression-opt"); addLeaf($$, ";"); addChild($$, $2); addLeaf($$, "return");}
        ;

/* 4. External definitions */
translation_unit : external_declaration                 {$1 = createNode("external-declaration"); addChild($$, $1);}
        | translation_unit external_declaration         {$1 = createNode("external-declaration"); $2 = createNode("translation-unit"); addChild($$, $2); addChild($$, $1);}
        ;
external_declaration : function_definition              {$1 = createNode("function-definition"); addChild($$, $1);}
        | declaration                                   {$1 = createNode("declaration"); addChild($$, $1);}
        ;
function_definition : declaration_specifiers declarator declaration_list_opt compound_statement         {$1 = createNode("declaration-specifiers"); $2 = createNode("declarator"); $3 = createNode("declaration-list-opt"); $4 = createNode("compound-statement"); addChild($$, $4); addChild($$, $3); addChild($$, $2); addChild($$, $1);}
        ;
declaration_list : declaration                                                                          {$1 = createNode("declaration"); addChild($$, $1);}
        | declaration_list declaration                                                                  {$1 = createNode("declaration-list"); $2 = createNode("declaration"); addChild($$, $2); addChild($$, $1);}
        ;
declaration_list_opt : /* epsilon */                                                                    {addLeaf($$, "epsilon");}
        | declaration_list                                                                              {$1 = createNode("declaration-list"); addChild($$, $1);}
        ;
%%

void yyerror(char *s) {
    printf("%s\n", s);
}