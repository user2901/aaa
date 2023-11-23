#include <bits/stdc++.h>
using namespace std;

bool isPalin(int n) {
    int tmp = n, rev = 0;
    while(tmp > 0) {
        rev = rev*10 + tmp%10;
        tmp /= 10;
    }
    return n == rev;
}

int main() {
    int n;
    cin >> n;
    cout << (isPalin(n) ? "YES" : "NO");
    return 0;
}