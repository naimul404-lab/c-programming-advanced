#include <stdio.h>
#define CAPACITY 5
int main(void) {
    int stack[CAPACITY], top = -1, choice, value;
    do {
        printf("\n1.Push 2.Pop 3.Display 0.Exit: ");
        if (scanf("%d", &choice) != 1) return 1;
        if (choice == 1) {
            if (top == CAPACITY - 1) puts("Stack is full.");
            else { printf("Value: "); scanf("%d", &value); stack[++top] = value; }
        } else if (choice == 2) {
            if (top == -1) puts("Stack is empty.");
            else printf("Popped: %d\n", stack[top--]);
        } else if (choice == 3) {
            for (int i = top; i >= 0; i--) printf("%d ", stack[i]);
            putchar('\n');
        }
    } while (choice != 0);
    return 0;
}
