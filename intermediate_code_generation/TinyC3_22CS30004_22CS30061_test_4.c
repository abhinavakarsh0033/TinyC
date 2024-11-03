/**
 * TinyC Intermediate Code Generation
 * Test4 : Testing pointers, arrays, postfix and prefix operators,
 * Pranav Jha (22CS30061)
 * Abhinav Akarsh (22CS30004)
 */

void merge_sort(int *A, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(A, start, mid);
        merge_sort(A, mid + 1, end);
        merge(A, start, mid, end);
    }
    return;
}

void merge(int A[100], int start, int mid, int end)
{
    int p = start, q = mid + 1;
    int Arr[100];
    int k = 0;
    int i;
    for (i = start; i <= end; i++)
    {
        if (p > mid) Arr[k++] = A[q++];
        else if (q > end) Arr[k++] = A[p++];
        else if (A[p] < A[q]) Arr[k++] = A[p++];
        else Arr[k++] = A[q++];
    }
    int p;
    for (p = 0; p < k; p++)
    {
        A[start++] = Arr[p];
    }
    return;
}