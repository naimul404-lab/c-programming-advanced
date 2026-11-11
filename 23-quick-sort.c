#include <stdio.h>
void quicksort(int a[], int low, int high) {
    if (low >= high) return;
    int pivot = a[high], i = low - 1;
    for (int j = low; j < high; j++) if (a[j] < pivot) {
        i++; int t = a[i]; a[i] = a[j]; a[j] = t;
    }
    int t = a[i + 1]; a[i + 1] = a[high]; a[high] = t;
    int p = i + 1;
    quicksort(a, low, p - 1); quicksort(a, p + 1, high);
}
int main(void) {
    int a[] = {10, 7, 8, 9, 1, 5};
    int n = (int)(sizeof a / sizeof a[0]);
    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    putchar('\n');
    return 0;
}
