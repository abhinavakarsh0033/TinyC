void swap (int *xp, int *yp) {                      // pointers
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
    return;
}

void sort (int *arr, int n) {
    int i, j, min_idx;
    i = 0;
    j = 0;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
    return;
}