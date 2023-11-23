#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    bool ok = 1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x%2 != 0)
            ok = 0;
    }
    cout << (ok ? "YES" : "NO");
    return 0;
}