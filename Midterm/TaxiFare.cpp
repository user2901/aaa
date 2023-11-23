#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    if(n <= 1)
        ans = 15000*n;
    else if(n <= 5)
        ans = 15000 + 13500*(n - 1);
    else
        ans = 15000 + 13500*4 + 11000*(n - 5);
    if(n >= 12)
        ans = ans*0.9;
    cout << ans;
    return 0;
}