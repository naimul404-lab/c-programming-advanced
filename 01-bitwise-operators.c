#include <stdio.h>
int main(void) {
    unsigned int a = 12, b = 10;
    printf("a = %u, b = %u\n", a, b);
    printf("AND: %u\n", a & b);
    printf("OR: %u\n", a | b);
    printf("XOR: %u\n", a ^ b);
    printf("Left shift a: %u\n", a << 1);
    printf("Right shift a: %u\n", a >> 1);
    return 0;
}
