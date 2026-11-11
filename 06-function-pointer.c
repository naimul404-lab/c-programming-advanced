#include <stdio.h>
int add(int a, int b) { return a + b; }
int main(void) {
    int (*operation)(int, int) = add;
    printf("Result: %d\n", operation(12, 8));
    return 0;
}
