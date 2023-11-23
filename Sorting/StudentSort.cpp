#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

struct Student
{
    int id;
    float grade;
};

bool cmp(Student a, Student b) {
    return a.grade > b.grade || (a.grade == b.grade && a.id < b.id);
}

void merge(Student a[], int n, Student L[], int n1, Student R[], int n2) {
    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2) {
        if(cmp(L[i], R[j]))
            a[k++] = L[i++];
        else
            a[k++] = R[j++];
    }
    while(i < n1)
        a[k++] = L[i++];
    while(j < n2)
        a[k++] = R[j++];
}

void mergeSort(Student a[], int n) {
    Student L[501], R[501];
    if(n > 1) {
        int n1 = n/2, n2 = n - n1;
        for(int i = 0; i < n1; i++)
            L[i] = a[i];
        for(int i = 0; i < n2; i++)
            R[i] = a[i+n1];
        mergeSort(L, n1);
        mergeSort(R, n2);
        merge(a, n, L, n1, R, n2);
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    Student a[MAX];
    for(int i = 0; i < n; i++)
        cin >> a[i].id >> a[i].grade;
    mergeSort(a, n);
    for(int i = 0; i < k; i++)
        cout << a[i].id << "\n";
    return 0;
}