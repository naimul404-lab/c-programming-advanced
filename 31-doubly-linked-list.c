#include <stdio.h>
#include <stdlib.h>
typedef struct Node { int data; struct Node *prev, *next; } Node;
int main(void) {
    Node *a = malloc(sizeof *a), *b = malloc(sizeof *b);
    if (!a || !b) { free(a); free(b); return 1; }
    a->data = 10; a->prev = NULL; a->next = b;
    b->data = 20; b->prev = a; b->next = NULL;
    for (Node *p = a; p; p = p->next) printf("%d ", p->data);
    putchar('\n');
    free(a); free(b);
    return 0;
}
