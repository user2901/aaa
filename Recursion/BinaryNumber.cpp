#include <bits/stdc++.h>
using namespace std;

void Dec2Bin(int n) {
    if(n == 0) {
        cout << 0;
        return;
    }
    if(n/2 > 0)
        Dec2Bin(n/2);
    cout << n%2;
}

int main() {
    int n;
    cin >> n;
    Dec2Bin(n);
    return 0;
}