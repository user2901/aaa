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

void removeNumEnd5(List &lst) {
    Node *cur = lst.head, *pre = NULL;
    while(cur != NULL) {
        if(abs(cur->data) % 10 == 5) {
            if(cur == lst.head) {
                lst.head = cur->next;
                delete cur;
                cur = lst.head;
            } else if(cur == lst.tail) {
                lst.tail = pre;
            } else {
                pre->next = cur->next;
                delete cur;
                cur = pre->next;
            }
        } else {
            pre = cur;
            cur = cur->next;
        }
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
    int n, x;
    cin >> n;
    List lst;
    init(lst);
    for(int i = 0; i < n; i++) {
        cin >> x;
        insertTail(lst, x);
    }
    removeNumEnd5(lst);
    printList(lst);
    clear(lst);
    return 0;
}