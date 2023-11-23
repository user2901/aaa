#include <bits/stdc++.h>
#define MAX 100005
using namespace std;

int main() {
    int n, a[MAX];
    cin >> n;
    int m = 0, w = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] == 0 ? m++ : w++;
    }
    cout << (m == w ? "YES" : "NO");
    return 0;
}