#include <bits/stdc++.h>
using namespace std;

string s[100005];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> s[i];
    int cnt = 1;
    for(int i = 0; i < n - 1; i++)
        if(s[i] != s[i+1])
            cnt++;
    cout << cnt;
    return 0;
}