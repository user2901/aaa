#include <bits/stdc++.h>
#define MAX 100005
using namespace std;

void merge(int a[], int n, int L[], int n1, int R[], int n2) {
    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2) {
        if(L[i] > R[j])
            a[k++] = L[i++];
        else
            a[k++] = R[j++];
    }
    while(i < n1)
        a[k++] = L[i++];
    while(j < n2)
        a[k++] = R[j++];
}

void mergeSort(int a[], int n) {
    int L[50001], R[50001];
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
    int n, a[MAX];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    mergeSort(a, n);
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}