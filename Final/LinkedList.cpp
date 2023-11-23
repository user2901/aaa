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

void getIntersection(List lst1, List lst2) {
    Node *cur1 = lst1.head, *cur2 = lst2.head;
    Node *pre1 = NULL, *pre2 = NULL;
    bool check = 0;
    while(cur1 != NULL && cur2 != NULL) {
        if(cur1->data < cur2->data || (pre1 != NULL && pre1->data == cur1->data)) {
            pre1 = cur1;
            cur1 = cur1->next;
        } else if(cur1->data > cur2->data || (pre2 != NULL && pre2->data == cur2->data)) {
            pre2 = cur2;
            cur2 = cur2->next;
        } else {
            check = 1;
            cout << cur1->data << " ";
            pre1 = cur1;
            cur1 = cur1->next;
            pre2 = cur2;
            cur2 = cur2->next;
        }
    }
    if(!check)
        cout << "NO INTERSECTION";
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
    List lst1, lst2;
    init(lst1), init(lst2);
    int x;
    while(true) {
        cin >> x;
        if(x == -1)
            break;
        insertTail(lst1, x);
    }
    while(true) {
        cin >> x;
        if(x == -1)
            break;
        insertTail(lst2, x);
    }
    getIntersection(lst1, lst2);
    clear(lst1);
    clear(lst2);
    return 0;
}