#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

int a[MAX][MAX];

int main() {
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        int s = 0;
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            s += a[i][j];
        }
        cout << i << ": " << s << "\n";
    }
    return 0;
}