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
    int cnt = 0;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if(a[i][j] > 100)
                cnt++;
    cout << cnt;
    return 0;
}