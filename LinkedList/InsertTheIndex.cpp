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

void insertOrdNum(List &lst) {
    int i = 1;
    Node *p = createNode(i);
    p->next = lst.head;
    lst.head = p;
    Node *cur = p->next;
    while(cur->next != NULL) {
        Node *p = createNode(++i);
        p->next = cur->next;
        cur->next = p;
        cur = p->next;
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
    List lst;
    init(lst);
    int x;
    while(true) {
        cin >> x;
        if(x == 0)
            break;
        insertTail(lst, x);
    }
    insertOrdNum(lst);
    printList(lst);
    clear(lst);
    return 0;
}