#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

Node *createNode(int x) {
    Node *p = new Node;
    p->data = x;
    p->left = p->right = NULL;
    return p;
}

struct BST
{
    Node *root;
};

void init(BST &t) {
    t.root = NULL;
}

void addToNode(Node *&root, int x) {
    if(x < root->data) {
        if(root->left == NULL) {
            Node *p = createNode(x);
            root->left = p;
        }
        else
            addToNode(root->left, x);
    } else if(x > root->data) {
        if(root->right == NULL) {
            Node *p = createNode(x);
            root->right = p;
        }
        else
            addToNode(root->right, x);
    }
}

void addToBST(BST &t, int x) {
    if(t.root == NULL) {
        Node *p = createNode(x);
        t.root = p;
    }
    else
        addToNode(t.root, x);
}

int minNode(Node *root) {
    if(root->left == NULL)
        return root->data;
    else
        return minNode(root->left);
}

int minBST(BST t) {
    return minNode(t.root);
}

int main() {
    int n, x;
    cin >> n;
    BST t;
    init(t);
    for(int i = 0; i < n; i++) {
        cin >> x;
        addToBST(t, x);
    }
    cout << minBST(t);
    return 0;
}