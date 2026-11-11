#include <stdio.h>
typedef struct Node { int data; struct Node *left, *right; } Node;
void preorder(Node *n) { if (n) { printf("%d ", n->data); preorder(n->left); preorder(n->right); } }
void inorder(Node *n) { if (n) { inorder(n->left); printf("%d ", n->data); inorder(n->right); } }
void postorder(Node *n) { if (n) { postorder(n->left); postorder(n->right); printf("%d ", n->data); } }
int main(void) {
    Node n1 = {1, NULL, NULL}, n3 = {3, NULL, NULL};
    Node n2 = {2, &n1, &n3};
    printf("Preorder: "); preorder(&n2);
    printf("\nInorder: "); inorder(&n2);
    printf("\nPostorder: "); postorder(&n2);
    putchar('\n');
    return 0;
}
