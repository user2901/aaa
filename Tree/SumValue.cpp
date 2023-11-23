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

int sumNode(Node *root, int x) {
    int s = 0;
    if(root == NULL)
        return 0;
    if(root->data < x)
        s += root->data;
    s += sumNode(root->left, x) + sumNode(root->right, x);
    return s;
}

int sumBST(BST t, int x) {
    return sumNode(t.root, x);
}

int main() {
    int n, x, a;
    cin >> n >> x;
    BST t;
    init(t);
    for(int i = 0; i < n; i++) {
        cin >> a;
        addToBST(t, a);
    }
    cout << sumBST(t, x);
    return 0;
}