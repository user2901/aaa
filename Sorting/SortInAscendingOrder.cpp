#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

void InsertionSort(int a[], int n) {
    for(int i = 1; i < n; i++) {
        int x = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > x) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;
    }
}

int main() {
    int n, a[MAX];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    InsertionSort(a, n);
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}