#include <stdio.h>
int main(void) {
    int a[] = {64, 25, 12, 22, 11};
    int n = (int)(sizeof a / sizeof a[0]);
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) if (a[j] < a[min]) min = j;
        int t = a[i]; a[i] = a[min]; a[min] = t;
    }
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    putchar('\n');
    return 0;
}
