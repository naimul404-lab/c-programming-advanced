#include <stdio.h>
#include <stdlib.h>
typedef struct Node { int data; struct Node *next; } Node;
int main(void) {
    Node *head = NULL, **tail = &head;
    for (int i = 1; i <= 4; i++) {
        Node *node = malloc(sizeof *node);
        if (!node) return 1;
        node->data = i * 10; node->next = NULL; *tail = node; tail = &node->next;
    }
    for (Node *p = head; p; p = p->next) printf("%d ", p->data);
    putchar('\n');
    while (head) { Node *old = head; head = head->next; free(old); }
    return 0;
}
