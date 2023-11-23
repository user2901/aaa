#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++)
        s[i] = tolower(s[i]);
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'b' || s[i] == 'i' || s[i] == 'g' || s[i] == 'o') {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}