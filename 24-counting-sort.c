#include <stdio.h>
int main(void) {
    int a[] = {4, 2, 2, 8, 3, 3, 1};
    int count[10] = {0};
    int n = (int)(sizeof a / sizeof a[0]);
    for (int i = 0; i < n; i++) {
        if (a[i] < 0 || a[i] > 9) { puts("Values must be 0..9"); return 1; }
        count[a[i]]++;
    }
    for (int value = 0; value < 10; value++)
        while (count[value]--) printf("%d ", value);
    putchar('\n');
    return 0;
}
