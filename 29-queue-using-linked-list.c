#include <stdio.h>
#include <stdlib.h>
typedef struct Node { int data; struct Node *next; } Node;
int main(void) {
    Node *front = NULL, *rear = NULL;
    int values[] = {5, 10, 15};
    for (int i = 0; i < 3; i++) {
        Node *node = malloc(sizeof *node);
        if (!node) return 1;
        node->data = values[i]; node->next = NULL;
        if (!rear) front = rear = node;
        else { rear->next = node; rear = node; }
    }
    while (front) {
        Node *old = front; printf("%d ", old->data);
        front = front->next; free(old);
    }
    putchar('\n');
    return 0;
}
