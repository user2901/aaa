#include <bits/stdc++.h>
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

int main() {
    int m, n, k;
    cin >> m >> n >> k;
    int a[10001], b[10001], c[20002];
    for(int i = 0; i < m; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    merge(c, m+n, a, m, b, n);
    cout << c[m+n-1-k];
    return 0;
}