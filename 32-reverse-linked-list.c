#include <stdio.h>
#include <stdlib.h>
typedef struct Node { int data; struct Node *next; } Node;
int main(void) {
    Node *head = NULL;
    for (int i = 1; i <= 4; i++) {
        Node *n = malloc(sizeof *n); if (!n) return 1;
        n->data = i; n->next = head; head = n;
    }
    puts("List:");
    for (Node *p = head; p; p = p->next) printf("%d ", p->data);
    putchar('\n');
    while (head) { Node *old = head; head = head->next; free(old); }
    return 0;
}
