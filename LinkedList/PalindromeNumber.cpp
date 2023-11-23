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

bool isPalin(int n) {
    int tmp = n, rev = 0;
    while(tmp > 0) {
        rev = rev*10 + tmp%10;
        tmp /= 10;
    }
    return n == rev;
}

void showPalin(List lst) {
    Node *cur = lst.head;
    int i = 0;
    while(cur != NULL) {
        if(isPalin(cur->data))
            cout << i << " ";
        cur = cur->next;
        i++;
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
        if(x == -1)
            break;
        insertTail(lst, x);
    }
    showPalin(lst);
    clear(lst);
    return 0;
}