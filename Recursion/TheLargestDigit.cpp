#include <bits/stdc++.h>
using namespace std;

int maxDigit(int n) {
    if(n < 10)
        return n;
    return max(n%10, maxDigit(n/10));
}

int main() {
    int n;
    cin >> n;
    cout << maxDigit(abs(n));
    return 0;
}