#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, s = 0;
    cin >> x;
    while(x > 0) {
        s += x%10;
        x /= 10;
    }
    cout << s%10;
    return 0;
}