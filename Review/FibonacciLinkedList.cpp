#include <bits/stdc++.h>
#define MOD 1000007
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNode(int x) {
    Node *p = new Node;
    p->data = x;
    p->next = NULL;
    return p;
}

struct List
{
    Node *head, *tail;
};

void init(List &lst) {
    lst.head = lst.tail = NULL;
}

void insertTail(List &lst, int x) {
    Node *p = createNode(x);
    if(lst.head == NULL)
        lst.head = lst.tail = p;
    else {
        lst.tail->next = p;
        lst.tail = p;
    }
}

void printList(List lst) {
    Node *cur = lst.head;
    while(cur != NULL) {
        cout << cur->data << " ";
        cur = cur->next;
    }
}

void clear(List &lst) {
    while(lst.head != NULL) {
        Node *cur = lst.head;
        lst.head = cur->next;
        delete cur;
    }
    lst.tail = NULL;
}

int main() {
    int x, y, n, f;
    cin >> x >> y >> n;
    List lst;
    init(lst);
    insertTail(lst, x);
    insertTail(lst, y);
    for(int i = 0; i < n - 2; i++) {
        f = (x + y) % MOD;
        insertTail(lst, f);
        x = y;
        y = f;
    }
    printList(lst);
    clear(lst);
    return 0;
}