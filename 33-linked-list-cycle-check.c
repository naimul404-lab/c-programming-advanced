#include <stdio.h>
typedef struct Node { int data; struct Node *next; } Node;
int main(void) {
    Node c = {3, NULL}, b = {2, &c}, a = {1, &b};
    c.next = &b; /* Demonstration cycle: c points back to b. */
    Node *slow = &a, *fast = &a;
    int has_cycle = 0;
    while (fast && fast->next) {
        slow = slow->next; fast = fast->next->next;
        if (slow == fast) { has_cycle = 1; break; }
    }
    puts(has_cycle ? "Cycle detected." : "No cycle.");
    return 0;
}
