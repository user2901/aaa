#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string s;
    while(n--) {
        getline(cin, s);
        for(int i = 0; i < s.size(); i++) {
            if(i == 0 || s[i-1] == ' ')
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
        }
        cout << s << "\n";
    }
    return 0;
}