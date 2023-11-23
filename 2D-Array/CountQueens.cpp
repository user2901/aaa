#include <bits/stdc++.h>
#define MAX 101
using namespace std;

const int dx[] = {-1, 1, 0, 0, 1, 1, -1, -1};
const int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};
int a[MAX][MAX];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            bool ok = 1;
            for(int k = 0; k < 8; k++) {
                int x = i, y = j;
                while(x >= 0 && x < n && y >= 0 && y < n) {
                    if(a[x][y] > a[i][j]) {
                        ok = 0;
                        break;
                    }
                    x += dx[k], y += dy[k];
                }
                if(!ok)
                    break;
            }
            if(ok)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}