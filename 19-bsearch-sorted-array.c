#include <stdio.h>
#include <stdlib.h>
int compare_ints(const void *a, const void *b) {
    int x = *(const int *)a, y = *(const int *)b;
    return (x > y) - (x < y);
}
int main(void) {
    int a[] = {3, 7, 11, 15, 19, 23};
    int key = 15;
    size_t n = sizeof a / sizeof a[0];
    int *found = bsearch(&key, a, n, sizeof a[0], compare_ints);
    if (found) printf("%d found at index %td\n", key, found - a);
    else puts("Not found");
    return 0;
}
