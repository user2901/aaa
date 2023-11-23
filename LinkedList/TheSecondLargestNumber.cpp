#include <bits/stdc++.h>
using namespace std;

struct Node
{
    float data;
    Node *next;
};

Node *createNode(float x) {
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

void insertTail(List &lst, float x) {
    Node *p = createNode(x);
    if(lst.head == NULL)
        lst.head = lst.tail = p;
    else {
        lst.tail->next = p;
        lst.tail = p;
    }
}

Node *max2(List lst) {
    Node *max1 = lst.head, *max2 = createNode(-1);
    Node *cur = lst.head;
    while(cur != NULL) {
        if(cur->data > max1->data) {
            max2 = max1;
            max1 = cur;
        } else if(cur->data > max2->data && cur->data < max1->data) {
            max2 = cur;
        }
        cur = cur->next;
    }
    return max2;
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
    float x;
    while(true) {
        cin >> x;
        if(x == -1)
            break;
        insertTail(lst, x);
    }
    cout << max2(lst)->data;
    clear(lst);
    return 0;
}