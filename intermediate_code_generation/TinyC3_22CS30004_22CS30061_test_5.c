void swap(int *a, int *b)
{
    int temp = *a;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main()
{
    int arr[10][20];
    swap(&arr[0][1], &arr[1][2]);
    int x = &a;
    int x  = arr[0][1];
    int a, b;
    float *c = 5;
    swap(&a, b);
    int d = *c;
    return 0;
}