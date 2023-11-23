#include <bits/stdc++.h>
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

Node *min(List lst) {
    if(lst.head == NULL)
        return NULL;
    Node *cur = lst.head, *ans = lst.head;
    while(cur != NULL) {
        if(cur->data < ans->data)
            ans = cur;
        cur = cur->next;
    }
    return ans;
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
    List lst;
    init(lst);
    int x;
    while(true) {
        cin >> x;
        if(x == 0)
            break;
        insertTail(lst, x);
    }
    cout << min(lst)->data;
    clear(lst);
    return 0;
}