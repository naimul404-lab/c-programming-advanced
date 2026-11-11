#include <stdio.h>
#include <stdlib.h>
typedef struct Node { int data; struct Node *next; } Node;
int main(void) {
    Node *top = NULL;
    for (int value = 10; value <= 30; value += 10) {
        Node *node = malloc(sizeof *node);
        if (!node) return 1;
        node->data = value; node->next = top; top = node;
    }
    puts("Stack (top to bottom):");
    while (top) {
        Node *old = top; printf("%d ", top->data); top = top->next; free(old);
    }
    putchar('\n');
    return 0;
}
