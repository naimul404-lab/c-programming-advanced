#include <stdio.h>
void process(int value, void (*callback)(int)) { callback(value); }
void show_square(int n) { printf("Square: %d\n", n * n); }
int main(void) {
    process(7, show_square);
    return 0;
}
