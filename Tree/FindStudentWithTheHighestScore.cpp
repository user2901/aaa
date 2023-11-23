#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string id, name;
    float grade;
};

struct Node
{
    Student s;
    Node *left, *right;
};

Node *createNode(Student x) {
    Node *p = new Node;
    p->s = x;
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

void addToNode(Node *&root, Student x) {
    if(x.grade < root->s.grade) {
        if(root->left == NULL) {
            Node *p = createNode(x);
            root->left = p;
        }
        else
            addToNode(root->left, x);
    } else if(x.grade > root->s.grade) {
        if(root->right == NULL) {
            Node *p = createNode(x);
            root->right = p;
        }
        else
            addToNode(root->right, x);
    }
}

void addToBST(BST &t, Student x) {
    if(t.root == NULL) {
        Node *p = createNode(x);
        t.root = p;
    }
    else
        addToNode(t.root, x);
}

Node *maxNode(Node *root) {
    if(root->right == NULL)
        return root;
    else
        return maxNode(root->right);
}

Node *maxBST(BST t) {
    return maxNode(t.root);
}

int main() {
    int n;
    cin >> n;
    BST t;
    init(t);
    string id, name;
    float grade;
    for(int i = 0; i < n; i++) {
        cin >> id >> name >> grade;
        addToBST(t, Student{id, name, grade});
    }
    Node *ans = maxBST(t);
    cout << ans->s.id << " " << ans->s.name << " " << ans->s.grade;
    return 0;
}