#include <bits/stdc++.h>
using namespace std;

struct Node
{
    float grade;
    Node *next;
};

Node *createNode(float x) {
    Node *p = new Node;
    p->grade = x;
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

void printAvg(List lst) {
    Node *cur = lst.head;
    while(cur != NULL) {
        if(cur->grade < 5)
            cout << cur->grade << "\n";
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
    float x;
    while(true) {
        cin >> x;
        if(x == -1)
            break;
        insertTail(lst, x);
    }
    printAvg(lst);
    clear(lst);
    return 0;
}