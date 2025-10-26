#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left, *right;
} Node;


Node* newNode(int value) {
    Node* n = (Node*)malloc(sizeof(Node));
    n->data = value;
    n->left = n->right = NULL;
    return n;
}


Node* insert(Node* root, int value) {
    if (root == NULL)
        return newNode(value);
    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    return root;
}


int height(Node* root) {
    if (root == NULL)
        return 0;
    int hl = height(root->left);
    int hr = height(root->right);
    return (hl > hr ? hl : hr) + 1;
}

int main() {
    int n, value;
    Node* root = NULL;

    
    while (scanf("%d", &value) == 1) {
        root = insert(root, value);
    }

    printf("%d\n", height(root));
    return 0;
}
