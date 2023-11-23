#include <bits/stdc++.h>
using namespace std;

bool isPalin(string &s, int i, int j) {
    if(i >= j)
        return 1;
    if(s[i] != s[j])
        return 0;
    return isPalin(s, i+1, j-1);
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << (isPalin(s, 0, n-1) ? "YES" : "NO");
    return 0;
}