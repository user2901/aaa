#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

int a[MAX][MAX];

int main() {
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    int ans = 0, Max = 0;
    for(int i = 0; i < m; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(a[i][j] % 2 == 0)
                cnt++;
        }
        if(cnt > Max) {
            Max = cnt;
            ans = i;
        }
    }
    cout << ans;
    return 0;
}