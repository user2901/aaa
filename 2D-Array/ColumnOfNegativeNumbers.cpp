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
    bool ok;
    for(int j = 0; j < n; j++) {
        ok = 1;
        for(int i = 0; i < m; i++)
            if(a[i][j] > 0)
                ok = 0;
        if(ok)
            cout << j << " ";
    }
    return 0;
}