#include <stdio.h>
#include <stdlib.h>
typedef struct Node { int data; struct Node *left, *right; } Node;
Node *insert(Node *root, int value) {
    if (!root) { Node *n = malloc(sizeof *n); if (!n) exit(1); n->data=value; n->left=n->right=NULL; return n; }
    if (value < root->data) root->left = insert(root->left, value);
    else if (value > root->data) root->right = insert(root->right, value);
    return root;
}
void inorder(Node *r) { if (r) { inorder(r->left); printf("%d ", r->data); inorder(r->right); } }
void destroy(Node *r) { if (r) { destroy(r->left); destroy(r->right); free(r); } }
int main(void) {
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    Node *root = NULL;
    for (int i = 0; i < 7; i++) root = insert(root, values[i]);
    printf("BST inorder: "); inorder(root); putchar('\n');
    destroy(root);
    return 0;
}
