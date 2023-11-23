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

int main() {
    int n, a[MAX];
    cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(isPrime(a[i]))
            cnt++;
    }
    cout << cnt;
    return 0;
}