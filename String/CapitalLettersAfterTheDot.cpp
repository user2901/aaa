#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    for(int i = 2; i < s.size(); i++)
        if(s[i-1] == ' ' && s[i-2] == '.')
            s[i] = toupper(s[i]);
    cout << s;
    return 0;
}