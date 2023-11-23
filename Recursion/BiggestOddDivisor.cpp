#include <bits/stdc++.h>
using namespace std;

int maxOddDivisor(int n) {
    if(n%2 != 0)
        return n;
    return maxOddDivisor(n/2);
}

int main() {
    int n;
    cin >> n;
    cout << maxOddDivisor(n);
    return 0;
}