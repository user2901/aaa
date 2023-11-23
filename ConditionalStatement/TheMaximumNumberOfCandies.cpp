#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = a > b ? a : b;
    ans = c > ans ? c : ans;
    ans = d > ans ? d : ans;
    cout << ans;
    return 0;
}