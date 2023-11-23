#include <bits/stdc++.h>
using namespace std;

struct Node
{
    string id;
    int price, status;
    Node *next;
};

Node *createNode(string id, int pr, int st) {
    Node *p = new Node;
    p->id = id, p->price = pr, p->status = st;
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

void insertTail(List &lst, string id, int pr, int st) {
    Node *p = createNode(id, pr, st);
    if(lst.head == NULL)
        lst.head = lst.tail = p;
    else {
        lst.tail->next = p;
        lst.tail = p;
    }
}

void showRoom(List lst) {
    Node *cur = lst.head;
    while(cur != NULL) {
        if(cur->status == 0)
            cout << cur->id << " " << cur->price << "\n";
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
    int n;
    cin >> n;
    string id;
    int price, status;
    for(int i = 0; i < n; i++) {
        cin >> id >> price >> status;
        insertTail(lst, id, price, status);
    }
    showRoom(lst);
    clear(lst);
    return 0;
}