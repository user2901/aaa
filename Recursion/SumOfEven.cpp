#include <bits/stdc++.h>
#define MAX 10005
using namespace std;

int sumEven(int a[], int n) {
    if(n == 0)
        return 0;
    if(a[n-1] % 2 == 0)
        return a[n-1] + sumEven(a, n-1);
    return sumEven(a, n-1);
}

int main() {
    int n, a[MAX];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << sumEven(a, n);
    return 0;
}