// #include "TinyC3_22CS30004_22CS30061_translator.h" // already included
#include "lex.yy.c"

int SymbolTable::temp_cnt = 0;

SymbolType::SymbolType() {
    this -> type = INT;
    this -> num_elements = 1;
    this -> elementType = NULL;
}

SymbolType::SymbolType(int type, int num_elements, SymbolType *elementType) {
    this -> type = type;
    this -> num_elements = num_elements;
    this -> elementType = elementType;
}

void SymbolType::print() {
    switch(type) {
        case VOID: cout << "void"; break;
        case BOOL: cout << "bool"; break;
        case CHAR: cout << "char"; break;
        case INT: cout << "int"; break;
        case FLOAT: cout << "float"; break;
        case POINTER: elementType -> print(); cout << "*"; break;
        case FUNCTION: cout << "function"; break;
        case ARRAY: cout << "array("; cout << num_elements << ", "; elementType -> print(); cout << ")"; break;
        default: cout << "unknown";
    }
}

Symbol::Symbol() {
    this -> name = "";
    this -> type = NULL;
    this -> value = "";
    this -> size = 0;
    this -> offset = 0;
    this -> nestedTable = NULL;
}

Symbol::Symbol(string name, SymbolType *type, string value, int size, int offset, SymbolTable *nestedTable) {
    this -> name = name;
    this -> type = type;
    this -> value = value;
    this -> size = sizeOfType(type);
    this -> offset = offset;
    this -> nestedTable = nestedTable;
}

void Symbol::update(string value) {
    this -> value = value;
}

void Symbol::update(SymbolType *newType) {
    type = newType;
}

void Symbol::print() {
    cout << name << "\t";
    type -> print();
    cout << "\t" << value << "\t" << size << "\t" << offset;
    if(nestedTable) cout << "\tYes" << endl;
    else cout << "\tNo" << endl;
}

SymbolTable::SymbolTable() {
    this -> table = vector<Symbol *>();
    this -> parent = NULL;
    this -> name = "";
    this -> blockCount = 0;
}

Symbol *SymbolTable::gentemp() {
    string name = "$" + to_string(temp_cnt++);
    Symbol *temp = new Symbol(name, new SymbolType(), "", 0, 0);
    currST -> table.push_back(temp);
    return temp;
}

Symbol *SymbolTable::gentemp(SymbolType *type) {
    string name = "$" + to_string(temp_cnt++);
    Symbol *temp = new Symbol(name, type, "", 0, 0);
    currST -> table.push_back(temp);
    return temp;
}

Symbol *SymbolTable::lookup(string idName) {
    for(int i=0;i<table.size();i++)
        if(table[i] -> name == idName)
            return table[i];
    
    Symbol *symbol = NULL;
    if(parent != NULL) symbol = parent -> lookup(idName);

    if(currST==this && !symbol) {
        symbol = new Symbol(idName, new SymbolType(), "", 0, 0);
        table.push_back(symbol);
        return symbol;
    }

    return symbol;
}

void SymbolTable::update(string idName, string value) {
    Symbol *symbol = lookup(idName);
    if(symbol) symbol -> update(value);
}

void SymbolTable::print() {
    cout << "\n\t\t" << name << " SYMBOL TABLE\t\tParent : " << (parent ? parent -> name : "NULL") << endl;
    vector<Symbol *> v;
    for(Symbol *entry: table) {
        entry -> print();
        if(entry -> nestedTable) v.push_back(entry);
    }
    for(Symbol *entry: v) entry -> nestedTable -> print();
}

void SymbolTable::setOffset() {
    for(Symbol *entry: table) {
        entry -> size = sizeOfType(entry -> type);
        entry -> offset = currOffset;
        currOffset += entry -> size;
        if(entry -> nestedTable) entry -> nestedTable -> setOffset();
    }
}

Quad::Quad() {
    this -> op = "";
    this -> arg1 = "";
    this -> arg2 = "";
    this -> res = "";
}

Quad::Quad(string op, string arg1, string arg2, string res) {
    this -> op = op;
    this -> arg1 = arg1;
    this -> arg2 = arg2;
    this -> res = res;
}

void Quad::print() {
    // cout << op << "\t" << arg1 << "\t" << arg2 << "\t" << res << endl; 
    if(op == "goto") cout << op << "\t" << ((res!="__") ? to_string(stoi(res)+1) : res) << endl;
    else if(op == "if==") cout << "ifFalse\t" << arg1 << " == 0" << "\tgoto\t" << ((res!="__") ? to_string(stoi(res)+1) : res) <<endl;
    else if(op.substr(0,2) == "if") cout << "if\t" << arg1 << " " << op.substr(3) << " " << arg2 << "\tgoto\t" << ((res!="__") ? to_string(stoi(res)+1) : res) << endl;
    else if(op == "=[]") cout << res << "\t=\t" << arg1 << "[" << arg2 << "]" << endl;
    else if(op == "[]=") cout << res << "[" << arg1 << "]\t=\t" << arg2 << endl;
    else if(op == "*=") cout << "*" << res << "\t=\t" << arg1 << endl;
    else if(op == "=") cout << res << "\t=\t" << arg1 << endl;
    else if(op == "param") cout << "param\t" << arg1 << endl;
    else if(op == "call") cout << res << "\t=\t" << "call\t" << arg1 << "\t" << arg2 << endl;
    else if(op.substr(0,1) == "u") cout << res << "\t=\t" << op.substr(1) << arg1 << endl;
    else if(op == "return") cout << "return\t" << arg1 << endl << endl; 
    else if(op == "label") cout << arg1 << ":" << endl;
    else cout << res << "\t=\t" << arg1 << "\t" << op << "\t" << arg2 << endl;
}

QuadArray::QuadArray() {
    this -> arr = vector<Quad *>();
}

void QuadArray::print() {
    for(int i=0;i<arr.size();i++) {
        cout << i+1 << ":\t" << (arr[i] -> op == "label" ? "" : "\t");
        arr[i] -> print();
    }
}

Expression::Expression() {
    this -> type = INT;
    this -> entry = NULL;
    this -> arr = NULL;
    this -> truelist = vector<int>();
    this -> falselist = vector<int>();
    this -> nextlist = vector<int>();
}

Expression::Expression(int type) {
    this -> type = type;
    this -> entry = NULL;
    this -> arr = NULL;
    this -> truelist = vector<int>();
    this -> falselist = vector<int>();
    this -> nextlist = vector<int>();
}

ArrayExpression::ArrayExpression() {
    this -> type = INT;
    this -> addr = NULL;
    this -> elementType = NULL;
}

ArrayExpression::ArrayExpression(int type) {
    this -> type = type;
    this -> addr = NULL;
    this -> elementType = NULL;
}

Statement::Statement() {
    this -> nextlist = vector<int>();
}

void emit(string op, string arg1, string arg2, string res) {
    quadTable -> arr.push_back(new Quad(op, arg1, arg2, res));
}

void convertToBool(Expression *expr) {
    if(expr == NULL) yyerror("Expression is NULL");
    if(expr -> type != BOOL) {
        expr -> type = BOOL;
        expr -> truelist = makelist(nextinstr());
        emit("if==", expr -> entry -> name, "", "__");
        expr -> falselist = makelist(nextinstr());
        emit("goto", "", "", "__");
    }
}

void convertToInt(Expression *expr) {
    if(expr -> entry -> type -> type == INT) return;
    else if(expr -> entry -> type -> type == FLOAT)
        emit("float2int", expr -> entry -> name, "", expr -> entry -> name);
    else if(expr -> entry -> type -> type == CHAR)
        emit("char2int", expr -> entry -> name, "", expr -> entry -> name);
    else yyerror("Cannot convert to int");
    return;
}

void backpatch(vector<int> list, int i) {
    for(int j: list)
        quadTable -> arr[j] -> res = to_string(i);
    return;
}

int nextinstr() {
    return quadTable -> arr.size();
}

vector<int> makelist() {
    vector<int> list;
    return list;
}

vector<int> makelist(int i) {
    vector<int> list;
    list.push_back(i);
    return list;
}

void addNestedTable(SymbolTable *ST) {
    string name = ST -> name + "_Block" + to_string(ST -> blockCount++);
    Symbol *block = ST -> lookup(name);
    block -> nestedTable = new SymbolTable();
    block -> nestedTable -> parent = ST;
    currST = block -> nestedTable;
    currST -> name = name;
    return;
}

void switchTable(SymbolTable *newTable) {
    currST = newTable;
    return;
}

vector<int> merge(vector<int> a, vector<int> b) {
    a.insert(a.end(), b.begin(), b.end());
    return a;
}

int sizeOfType(SymbolType *type) {
    switch(type -> type) {
        case VOID: return SIZE_OF_VOID;
        case BOOL: return SIZE_OF_BOOL;
        case CHAR: return SIZE_OF_CHAR;
        case INT: return SIZE_OF_INT;
        case FLOAT: return SIZE_OF_FLOAT;
        case POINTER: return SIZE_OF_POINTER;
        case FUNCTION: return SIZE_OF_FUNCTION;
        case ARRAY: return sizeOfType(type -> elementType) * type ->  num_elements;
    }
    return 0;
}

bool typeCheck(SymbolType *t1, SymbolType *t2) {
    while(t1 -> type == ARRAY) t1 = t1 -> elementType;
    while(t2 -> type == ARRAY) t2 = t2 -> elementType;
    int type1 = t1 -> type;
    int type2 = t2 -> type;
    // int + float may be allowed
    return type1 == type2; // TODO: Review
}

int main() {
    globalST = new SymbolTable();
    globalST -> name = "Global";
    currST = globalST;
    quadTable = new QuadArray();
    currOffset = 0;

    yyparse();

    cout << "************************************************Quadruple Table***********************************************************" << endl;
    quadTable -> print();

    globalST -> setOffset();
    globalST -> print();
    
    return 0;
}