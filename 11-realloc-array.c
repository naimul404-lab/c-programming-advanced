#include <stdio.h>
#include <stdlib.h>
int main(void) {
    size_t n = 3, bigger = 5;
    int *a = malloc(n * sizeof *a);
    if (!a) return 1;
    for (size_t i = 0; i < n; i++) a[i] = (int)(i + 1) * 10;
    int *temp = realloc(a, bigger * sizeof *a);
    if (!temp) { free(a); return 1; }
    a = temp;
    for (size_t i = n; i < bigger; i++) a[i] = (int)(i + 1) * 10;
    for (size_t i = 0; i < bigger; i++) printf("%d ", a[i]);
    putchar('\n');
    free(a);
    return 0;
}
