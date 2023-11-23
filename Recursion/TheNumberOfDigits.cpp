#include <bits/stdc++.h>
using namespace std;

int cntDigits(int n) {
    if(n < 10)
        return 1;
    return 1 + cntDigits(n/10);
}

int main() {
    int n;
    cin >> n;
    cout << cntDigits(abs(n));
    return 0;
}