#include <stdio.h>
int main(void) {
    int value = 42;
    int *ptr = &value;
    int **pptr = &ptr;
    printf("Value: %d\n", **pptr);
    return 0;
}
