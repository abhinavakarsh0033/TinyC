#include<iostream>
#include<string>
#include<vector>
using namespace std;

#define SIZE_OF_VOID 0
#define SIZE_OF_BOOL 1
#define SIZE_OF_CHAR 1
#define SIZE_OF_INT 4
#define SIZE_OF_FLOAT 8
#define SIZE_OF_POINTER 4
#define SIZE_OF_FUNCTION 0

#define ARRAY 12345
#define FUNCTION 123456
#define POINTER 1234567

class Symbol;
class SymbolTable;
class SymbolType;
class Quad;
class QuadArray;
class Expression;
class ArrayExpression;
class Statement;

SymbolTable *globalST;
SymbolTable *currST;
int currType;   // type of current variable
Symbol *currSymbol;
Expression *currExpr, *currExprFor;
QuadArray *quadTable;

class SymbolType {
public:
    int type;                   //actual type of symbol
    int num_elements;           //array size of array
    SymbolType *elementType;    //type of array elements

    SymbolType();
    SymbolType(int type, int num_elements = 1, SymbolType *elementType = NULL);
    void print();
};

class Symbol {  
public:
    string name;
    SymbolType *type;
    string value;
    int size;
    int offset;
    SymbolTable *nestedTable;
    SymbolTable *parent;
    
    Symbol();
    Symbol(string name, SymbolType *type, string value, int size, int offset, SymbolTable *nestedTable = NULL);
    void update(string value);  // Updates value 
    void update(SymbolType *newType);   // Updates symbol type
    void print();

};

class SymbolTable {
public:
    static int temp_cnt;
    vector<Symbol *> table;
    SymbolTable *parent;

    SymbolTable();
    static Symbol *gentemp();                               // remember to add params as per need (type, value)
    static Symbol *gentemp(SymbolType *type);                   // remember to add params as per need (type, value)
    Symbol *lookup(string idName);
    void update(string idName, string value);
    void print();
};

class Quad {
public:
    string op;
    string arg1;    // arg 1 and/or arg 2 may be a variable (address) or a constant
    string arg2;    // arg2 may be null
    string res;     // result is variable (address) only

    Quad();
    Quad(string op, string arg1, string arg2, string res);
    void print();
};

class QuadArray {
public:
    vector<Quad *> arr;

    QuadArray();
    void print();
};

class Expression {
public:
    int type;
    Symbol *entry;
    ArrayExpression *arr;
    vector<int> truelist;
    vector<int> falselist;
    vector<int> nextlist;

    Expression();
    Expression(int type);
};

class ArrayExpression {
public:
    int type;                   // type of array       
    Symbol *addr;               // location of the array  
    SymbolType *elementType;    // type of array elements

    ArrayExpression();
    ArrayExpression(int type);
};

class Statement {
public:
    vector<int> nextlist;

    Statement();
};

void emit(string op, string arg1, string arg2, string res);

void convertToBool(Expression *expr);

void convertToInt(Expression *expr);

void backpatch(vector<int> list, int i);

int nextinstr();

vector<int> makelist();

vector<int> makelist(int i);

void switchTable(SymbolTable *newTable);

vector<int> merge(vector<int> a, vector<int> b);

int sizeOfType(SymbolType *type);

bool typeCheck(SymbolType *t1, SymbolType *t2);
