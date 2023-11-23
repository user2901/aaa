#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

bool isPrime(int n) {
    if(n < 2)
        return 0;
    else if(n > 2) {
        for(int i = 2; i <= sqrt(n); i++)
            if(n%i == 0)
                return 0;
    }
    return 1;
}

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

void Tachmang(int a[], int n, int b[], int &m) {
    for(int i = 0; i < n; i++)
        if(!isPrime(a[i]))
            b[m++] = a[i];
}

int main() {
    int n, a[MAX];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int m = 0, b[MAX];
    Tachmang(a, n, b, m);
    InsertionSort(b, m);
    for(int i = 0, j = 0; i < n; i++) {
        if(!isPrime(a[i]))
            cout << b[j++] << " ";
        else
            cout << a[i] << " ";
    }
    return 0;
}