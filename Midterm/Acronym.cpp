#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, ans = "";
    getline(cin, s);
    for(int i = 0; i < s.size(); i++)
        if(i == 0 || s[i-1] == ' ')
            ans += toupper(s[i]);
    cout << ans;
    return 0;
}