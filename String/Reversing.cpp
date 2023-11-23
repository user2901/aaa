#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    vector<string> words;
    string tmp = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] != ' ')
            tmp += s[i];
        else {
            words.push_back(tmp);
            tmp = "";
        }
    }
    words.push_back(tmp);
    for(int i = words.size() - 1; i >= 0; i--)
        cout << words[i] << " ";
    return 0;
}