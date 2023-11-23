#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

int main() {
    int n, a[MAX];
    cin >> n;
    bool ok = 1;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 0)
            ok = 0;
    }
    cout << (ok ? "YES" : "NO");
    return 0;
}