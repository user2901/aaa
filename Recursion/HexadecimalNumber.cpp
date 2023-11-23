#include <bits/stdc++.h>
using namespace std;

void Dec2Hex(int n) {
    if(n == 0) {
        cout << 0;
        return;
    }
    if(n/16 > 0)
        Dec2Hex(n/16);
    cout << (n%16 < 10 ? char(n%16 + '0') : char('A' + n%16 - 10));
}

int main() {
    int n;
    cin >> n;
    Dec2Hex(n);
    return 0;
}