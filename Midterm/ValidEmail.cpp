#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    int at = 0, idx = 0;
    int n = s.size();
    for(int i = 0; i < n; i++) {
        if(s[i] == '@') {
            at++;
            idx = i;
        }
    }
    if(at != 1)
        return 0;
    if(idx == 0 || idx == n - 1)
        return 0;
    for(int i = 0; i < idx; i++)
        if(!isalnum(s[i]) && s[i] != '.' && s[i] != '_')
            return 0;
    for(int i = idx + 1; i < n; i++)
        if(!isalpha(s[i]) && s[i] != '.')
            return 0;
    int dot = 0;
    for(int i = idx + 1; i < n; i++)
        if(s[i] == '.')
            dot++;
    if(dot == 0)
        return 0;
    for(int i = idx + 1; i < n - 1; i++)
        if(s[i] == '.' && s[i+1] == '.')
            return 0;
    return 1;
}

int main() {
    string s;
    getline(cin, s);
    cout << (check(s) ? "VALID" : "INVALID");
    return 0;
}