/**
 * ASSIGNMENT 5 (TinyC, Parsing)
 * Main File to check all the rules
 * Pranav Jha (22CS30061)
 * Abhinav Akarsh (22CS30004)
 */

#include "lex.yy.c"

node *createNode(char *data) {
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = (char *)malloc(strlen(data) + 1);
    strcpy(newNode->data, data);
    newNode->childlist = NULL;
    // printf("Node created: %s\n", newNode->data);
    // fflush(stdout);
    return newNode;
}

list *addToList(list *head, node * newNode) {
    list *newList = (list *)malloc(sizeof(list));
    newList->head = newNode;
    newList->next = head;
    return newList;
}

void addChild(node *parent, node *child) {
    parent->childlist = addToList(parent->childlist, child);
    // printf("Child added: %s -> %s\n", parent->data, child->data);
    // fflush(stdout);
    return;
}

void addLeaf(node *parent, char *data) {
    // printf("adding leaf\n");
    // fflush(stdout);
    node *newNode = createNode(data);
    addChild(parent, newNode);
    return;
}

node *root = NULL;
void assignRoot(node *rootnode) {
    root = rootnode;
    // printf("Root assigned\n");
    // fflush(stdout);
    return;
}

void print(node *root, int depth) {
    if (root == NULL) {
        return;
    }
    for(int i=0;i<depth;++i) {
        printf("\t");
    }
    if(depth) {
        printf("---> ");
    }
    printf("%s\n", root->data);
    list *childlist = root->childlist;
    while (childlist != NULL) {
        print(childlist->head, depth+1);
        childlist = childlist->next;
    }
    return;
}

int main() {
    // yydebug = 1;
    yyparse();
    print(root,0);
    return 0;
}