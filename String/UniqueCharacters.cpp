#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int freq[52] = {0};
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z')
            freq[s[i]-'a'+26]++;
        else
            freq[s[i]-'A']++;
    }
    int cnt = 0;
    for(int i = 0; i < 52; i++)
        if(freq[i])
            cnt++;
    cout << cnt;
    return 0;
}