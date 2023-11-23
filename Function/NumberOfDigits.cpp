#include <bits/stdc++.h>
using namespace std;

int cntDigits(int n) {
    int cnt = 0;
    while(n > 0) {
        n /= 10;
        cnt++;
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    cout << cntDigits(n);
    return 0;
}