#include <stdio.h>
long long memo[91];
long long fib(int n) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
    return memo[n] = fib(n - 1) + fib(n - 2);
}
int main(void) {
    int n;
    printf("Enter n (0-90): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 90) return 1;
    for (int i = 0; i <= 90; i++) memo[i] = -1;
    printf("Fibonacci(%d) = %lld\n", n, fib(n));
    return 0;
}
