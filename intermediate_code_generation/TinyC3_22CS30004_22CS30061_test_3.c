int M = 1e9 + 7;
int binpow_iterative(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}

int binpow_recursive(int a, int b) {
    if (b == 0)
        return 1;
    int res = binpow_recursive(a, b / 2);
    res = (res * res) % M;
    if (b & 1)
        res = (res * a) % M;
    return res;
}

int main() {
    int a = 2;
    int b = 10;
    int c = binpow_iterative(a, b);
    int d = binpow_recursive(a, b);
    return 0;
}

