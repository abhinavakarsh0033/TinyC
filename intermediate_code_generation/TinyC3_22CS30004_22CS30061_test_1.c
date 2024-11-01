// Testing function definitions, declarations and calls

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
    return x + y;
}

void foo() {
    printf("Hello World\n");
    return;
}