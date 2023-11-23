#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool ok = 1;
    if(n < 2)
        ok = 0;
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i == 0)
            ok = 0;
    cout << (ok ? "YES" : "NO");
    return 0;
}