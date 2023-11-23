#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];

int main() {
    int n, x;
    cin >> n >> x;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    int cnt = 0;
    for(int i = 0; i < n; i++)
        if(a[x][i] == 1)
            cnt++;
    cout << cnt;
    return 0;
}