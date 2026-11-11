#include <stdio.h>
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int main(void) {
    int a, b;
    printf("Enter two positive integers: ");
    if (scanf("%d%d", &a, &b) != 2 || a <= 0 || b <= 0) return 1;
    printf("GCD = %d\n", gcd(a, b));
    return 0;
}
