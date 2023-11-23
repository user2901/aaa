#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[24];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    bool ok = 1;
    if(a[n-1] == 0)
        ok = 0;
    else {
        for(int i = 0; i < n - 3; i++) {
            if(a[i] == 0 && a[i+1] == 0 && a[i+2] == 0 && a[i+3] == 0) {
                ok = 0;
                break;
            }
        }
    }
    cout << (ok ? "YES" : "NO");
    return 0;
}