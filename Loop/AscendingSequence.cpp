#include <bits/stdc++.h>
using namespace std;

int main() {
    int cur, pre = 0;
    bool ok = 1;
    while(true) {
        cin >> cur;
        if(cur == 0)
            break;
        if(cur < pre)
            ok = 0;
        pre = cur;
    }
    cout << (ok ? "YES" : "NO");
    return 0;
}