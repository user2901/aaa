#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t = "";
    getline(cin, s);
    for(int i = s.size() - 1; i >= 0; i--)
        if(i%2 != 0)
            t += s[i];
    for(int i = 0, j = 0; i < s.size(); i++) {
        if(i%2 != 0)
            cout << t[j++];
        else
            cout << s[i];
    }
    return 0;
}