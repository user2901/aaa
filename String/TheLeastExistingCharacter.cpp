#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    while(n--) {
        cin >> s;
        int freq[26] = {0};
        for(int i = 0; i < s.size(); i++)
            freq[tolower(s[i]) - 'a']++;
        int Min = 1001, idx = 0;
        for(int i = 0; i < 26; i++) {
            if(freq[i] != 0 && freq[i] < Min) {
                Min = freq[i];
                idx = i;
            }
        }
        cout << char(idx + 'A') << "\n";
    }
    return 0;
}