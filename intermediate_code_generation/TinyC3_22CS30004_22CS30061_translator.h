#include<iostream>
#include<string>
#include<vector>
#include<queue>
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
int currType;
Symbol *currSymbol;
Expression *currExpr, *currExprFor;
QuadArray *quadTable;
int currOffset;

// SUPPORTING DATA STRUCTURES

/**
 * SymbolType class
 * 
 * SymbolType class is used to represent the type of a symbol in the intermediate code
 * 
 * Members:
 * - type: actual type of symbol
 * - num_elements: number of elements in case of array
 * - elementType: type of array elements
 * 
 * Methods:
 * - SymbolType(): default constructor
 * - SymbolType(SymbolType *): copy constructor
 * - SymbolType(int, int = 1, SymbolType = NULL): constructor
 * - void print(): print the type
 */
class SymbolType {
public:
    int type;
    int num_elements;
    SymbolType *elementType;

    SymbolType();
    SymbolType(SymbolType *t);
    SymbolType(int type, int num_elements = 1, SymbolType *elementType = NULL);
    void print();
};


/**
 * Symbol class
 *
 * Symbol class is a structure for storing the symbol information
 *
 * Members:
 * - name: name of the symbol
 * - type: type of the symbol
 * - value: initial value of the symbol
 * - size: width/size of the symbol
 * - offset: offset in the memory
 * - nestedTable: nested symbol table
 * 
 * Methods:
 * - Symbol(): default constructor
 * - Symbol(string, SymbolType *, string, int, int, SymbolTable *): constructor
 * - void update(string): update value
 * - void update(SymbolType *): update type
 * - void print(): print the symbol
 */
class Symbol {  
public:
    string name;
    SymbolType *type;
    string value;
    int size;
    int offset;
    SymbolTable *nestedTable;
    
    Symbol();
    Symbol(string name, SymbolType *type, string value, int size, int offset, SymbolTable *nestedTable = NULL);
    void update(string value);  // Updates value 
    void update(SymbolType *newType);   // Updates symbol type
    void print();

};

/**
 * SymbolTable class
 * 
 * SymbolTable class is a structure for storing the symbols
 * 
 * Static Members:
 * - temp_cnt: count of temporary variables generated
 * 
 * Static Methods:
 * - gentemp(): generates a temporary variable
 * - gentemp(SymbolType *): generates a temporary variable with the given type
 * 
 * Members:
 * - table: list of symbols
 * - parent: parent symbol table
 * - name: name of the symbol table
 * - blockCount: count of blocks present in the symbol table
 * 
 * Methods:
 * - SymbolTable(): default constructor
 * - lookup(string): searches for a symbol in the symbol table going up the hierarchy
 *                   if the id exists in the current symbol table, it returns the symbol
 *                   else it creates a new symbol and returns it
 * - update(string, string): updates the value of the symbol with the given id
 * - setOffset(): sets the offset of the symbols in the symbol table
 * - print(): prints the symbol table
 */
class SymbolTable {
public:
    static int temp_cnt;
    vector<Symbol *> table;
    SymbolTable *parent;
    string name;
    int blockCount;

    SymbolTable();
    static Symbol *gentemp();
    static Symbol *gentemp(SymbolType *type);
    Symbol *lookup(string idName);
    void update(string idName, string value);
    void setOffset();
    void print();
};


/**
 * Quad class
 * 
 * Structure to store a 3-address quad
 * 
 * Members:
 * - op: operation
 * - arg1: first argument (maybe a variable, address or constant)
 * - arg2: second argument (maybe a variable, address or constant)
 * - res: result (maybe a variable or address)
 * 
 * Methods:
 * - Quad(): default constructor
 * - Quad(string, string, string, string): constructor
 * - void print(): print the quad
 */
class Quad {
public:
    string op;
    string arg1;
    string arg2;
    string res;

    Quad();
    Quad(string op, string arg1, string arg2, string res);
    void print();
};


/**
 * QuadArray class
 * 
 * Structure to store a list of quads
 * 
 * Members:
 * - arr: list of quads
 * 
 * Methods:
 * - QuadArray(): default constructor
 * - void print(): print the quad array
 */
class QuadArray {
public:
    vector<Quad *> arr;

    QuadArray();
    void print();
};


/**
 * Expression class
 * 
 * Expression class is used to represent the expressions in the code
 * 
 * Members:
 * - type: type of the expression (BOOL / INT(represents non-boolean expressions))
 * - entry: symbol table entry of the expression
 * - arr: to store the array and pointer information
 * - truelist: list of quad indices containing true labels
 * - falselist: list of quad indices containing false labels
 * - nextlist: list of quad indices containing next labels
 * 
 * Methods:
 * - Expression(): default constructor
 * - Expression(int): constructor with type as parameter
 */
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

/**
 * ArrayExpression class
 *
 * ArrayExpression class is used to represent array and pointers in the intermediate code,
 * as we can't access multidimensional arrays directly in intermediate code, we need to calculate
 * the address of the element using the base address of the array and the index of the element
 *
 * Members:
 * - type: type of array (ARRAY, POINTER)
 * - addr: location of the array (address for the calculation of the element)
 * - elementType: type of array elements (used for multidimensional arrays)
 *
 * Methods:
 * - ArrayExpression(): default constructor
 * - ArrayExpression(int): constructor that uses the type of array as parameter
 */
class ArrayExpression {
public:
    int type;  
    Symbol *addr;
    SymbolType *elementType;

    ArrayExpression();
    ArrayExpression(int type);
};

/**
 * Statement class
 *
 * Statement class is used to represent the statements in the intermediate code
 *
 * Members:
 * - nextlist: list of quad indices containing next labels
 *
 * Methods:
 * - Statement(): default constructor
 */
class Statement {
public:
    vector<int> nextlist;

    Statement();
};


// GLOBAL FUNCTIONS

/**
 * emit function
 * 
 * Generates a quad and adds it to the quad array
 * 
 * Parameters:
 * - op: operation
 * - arg1: first argument
 * - arg2: second argument
 * - res: result
 * 
 * Returns:
 * - void
 */
void emit(string op, string arg1, string arg2, string res);


/**
 * convertToBool function
 * 
 * Converts the expression to boolean type to be used in conditional statements
 * 
 * Parameters:
 * - expr: expression to be converted
 * 
 * Returns:
 * - void
 */
void convertToBool(Expression *expr);

/**
 * convertToInt function
 * 
 * Converts the expression to integer type to be used in array indexing
 * 
 * Parameters:
 * - expr: expression to be converted
 * 
 * Returns:
 * - void
 */
void convertToInt(Expression *expr);


/**
 * backpatch function
 * 
 * Updates the list of quads with the given instruction number
 * 
 * Parameters:
 * - list: list of quads
 * - i: instruction number
 * 
 * Returns:
 * - void
 */
void backpatch(vector<int> list, int i);


/**
 * nextinstr function
 * 
 * Returns the next instruction number
 * Next instruction is simply the size of the quad array + 1
 * 
 * Parameters:
 * - void
 * 
 * Returns:
 * - int: next instruction number
 */
int nextinstr();


/**
 * makelist function
 * 
 * Creates an empty list
 * 
 * Parameters:
 * - void
 * 
 * Returns:
 * - vector<int>: empty list
 */
vector<int> makelist();


/**
 * makelist function
 * 
 * Creates a list with the given instruction number
 * 
 * Parameters:
 * - i: instruction number
 * 
 * Returns:
 * - vector<int>: list containing the given instruction number
 */
vector<int> makelist(int i);


/**
 * addNestedTable function
 * 
 * Adds a new nested symbol table to the current symbol table
 * 
 * Parameters:
 * - ST: symbol table to be added
 * 
 * Returns:
 * - void
 */
void addNestedTable(SymbolTable *ST);


/**
 * switchTable function
 * 
 * Switches the current symbol table to the new symbol table
 * 
 * Parameters:
 * - newTable: new symbol table
 * 
 * Returns:
 * - void
 */
void switchTable(SymbolTable *newTable);


/**
 * merge function
 * 
 * Merges two lists of truelist, falselist or nextlist
 * 
 * Parameters:
 * - a: first list
 * - b: second list
 * 
 * Returns:
 * - vector<int>: merged list
 */
vector<int> merge(vector<int> a, vector<int> b);


/**
 * sizeOfType function
 * 
 * Returns the size of the given type
 * 
 * Parameters:
 * - type: type of the symbol
 * 
 * Returns:
 * - int: size of the type
 */
int sizeOfType(SymbolType *type);


/**
 * typeCheck function
 * 
 * Checks the type of the two expressions and returns the type which is compatible
 * for the operation
 * Converts the type of lower size to the type of higher size to avoid loss of data
 * 
 * Parameters:
 * - E1: first expression
 * - E2: second expression
 * 
 * Returns:
 * - SymbolType *: compatible type or NULL if the types are not compatible
 */
SymbolType *typeCheck(Expression *E1, Expression *E2);


/**
 * convertType function
 * 
 * Converts the type of the expression from one type to another
 * 
 * Parameters:
 * - expr: expression to be converted
 * - from: type of the expression
 * - to: type to be converted to
 * 
 * Returns:
 * - void
 */
void convertType(Expression *expr, SymbolType *from, SymbolType *to);
