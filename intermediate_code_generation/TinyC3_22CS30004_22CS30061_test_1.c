/**
 * TinyC Intermediate Code Generation
 * Test1 : Testing function definitions, declarations and calls
 * Pranav Jha (22CS30061)
 * Abhinav Akarsh (22CS30004)
 */

void foo();
int fx(int a, int b);

int main() {
    int c = 10;
    int d = 20;
    int e = fx(c, d);
    foo();
    return 0;
}

int fx(int x, int y) {
    return (float)x + y;
}

void foo() {
    printf("Hello World\n");
    return;
}