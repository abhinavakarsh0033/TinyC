/**
 * ASSIGNMENT 3 (TinyC, Lexical Analysis)
 * MAIN File to check the lexical rules
 * Pranav Jha (22CS30061)
 * Abhinav Akarsh (22CS30004)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lex.yy.c"

// Data structure to store symbol table
typedef struct _node
{
    char *name;
    int count;
    struct _node *next;
} node;
typedef node *symboltable;

// Function to add lexemes to symbol table
symboltable addtbl(symboltable T, char *id)
{
    node *p;
    p = T;
    while (p)
    {
        if (!strcmp(p->name, id))
        {
            p -> count++;
            return T;
        }
        p = p -> next;
    }
    p = (node *)malloc(sizeof(node));
    p -> name = (char *)malloc((strlen(id) + 1) * sizeof(char));
    p -> count = 1;
    strcpy(p->name, id);
    p -> next = T;
    return p;
}

// Function to print symbol table
void printtbl(symboltable *T)
{
    printf("\n");
    for(int i=0;i<55;i++) printf("*");
    printf("\n%30s\n\n","SYMBOL TABLE");
    for(int i=0;i<55;i++) printf("-");
    printf("\n%15s", "TOKENS");
    printf("%10s", "|");
    printf("%15s\n", "LEXEMES");
    for(int i = 1; i <= 4; i++)
    {
        node *p = T[i];
        int n = 0, j = 0;
        while(p) p = p->next, n++;
        for(j = 0; j < 24; j++) printf("-");
        printf("|");
        for(j = 0; j < 30; j++) printf("-");
        printf("\n");
        char s[50];
        if(i == ID) sprintf(s, "IDENTIFIER(%d)", n);
        else if(i == CONST) sprintf(s, "CONSTANT(%d)", n);
        else if(i == STRING) sprintf(s, "STRING(%d)", n);
        else if(i == PUNCT) sprintf(s, "PUNCTUATOR(%d)", n);
        for(j=1, p=T[i]; p; p=p->next, j++) {
            if(j == n/2) {
                printf("%19s", s);
                printf("%6s", "|");
            }
            else {
                printf("%25s", "|");
            }
            printf("\t\t%s\n", p->name);
        }
    }
    for(int i=0;i<55;i++) printf("-");
}

int main()
{
    int nextok;
    symboltable T[5] = {NULL};
    while ((nextok = yylex()))
    {
        switch (nextok)
        {
        case ID:
            T[ID] = addtbl(T[ID], yytext);
            printf("<identifier,%s>\n", yytext);
            break;
        case CONST:
            T[CONST] = addtbl(T[CONST], yytext);
            printf("<constant,%s>\n", yytext);
            break;
        case STRING:
            T[STRING] = addtbl(T[STRING], yytext);
            printf("<string-literal,%s>\n", yytext);
            break;
        case PUNCT:
            T[PUNCT] = addtbl(T[PUNCT], yytext);
            printf("<punctuator,%s>\n", yytext);
            break;
        case KEYWORD:
            printf("<keyword,%s>\n", yytext);
            break;
        case COMMENT:
            printf("*** COMMENT ***\n");
            break;
        default:
            printf("*** Unknown Token (%s) ***", yytext);
            break;
        }
    }
    printtbl(T);
    return 0;
}