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

int a[MAX][MAX];

int main() {
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    int cnt = 0;
    for(int i = 0; i < m; i++) {
        if(isPrime(a[i][0]))
            cnt++;
        if(isPrime(a[i][n-1]))
            cnt++;
    }
    for(int j = 1; j < n - 1; j++) {
        if(isPrime(a[0][j]))
            cnt++;
        if(isPrime(a[m-1][j]))
            cnt++;
    }
    cout << cnt;
    return 0;
}