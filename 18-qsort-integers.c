#include <stdio.h>
#include <stdlib.h>
int compare_ints(const void *a, const void *b) {
    int x = *(const int *)a, y = *(const int *)b;
    return (x > y) - (x < y);
}
int main(void) {
    int a[] = {9, 2, 7, 1, 5};
    size_t n = sizeof a / sizeof a[0];
    qsort(a, n, sizeof a[0], compare_ints);
    for (size_t i = 0; i < n; i++) printf("%d ", a[i]);
    putchar('\n');
    return 0;
}
