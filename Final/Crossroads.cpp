#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[4][4];
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            cin >> a[i][j];
    bool ok = 0;
    for(int i = 0; i < 4; i++) {
        if(a[i][3] == 1) {
            if(i == 0) {
                if(a[3][2] == 1 || a[2][1] == 1 || a[1][0] == 1) {
                    ok = 1;
                    break;
                }
            } else if(i == 1) {
                if(a[0][2] == 1 || a[2][0] == 1 || a[3][1] == 1) {
                    ok = 1;
                    break;
                }
            } else if(i == 2) {
                if(a[3][0] == 1 || a[0][1] == 1 || a[1][2] == 1) {
                    ok = 1;
                    break;
                }
            } else if(i == 3) {
                if(a[2][2] == 1 || a[0][0] == 1 || a[1][1] == 1) {
                    ok = 1;
                    break;
                }
            }
            if(a[i][3] == 1 && (a[i][2] == 1 || a[i][1] == 1 || a[i][0] == 1)) {
                ok = 1;
                break;
            }
        }
    }
    cout << (ok ? "YES" : "NO");
    return 0;
}