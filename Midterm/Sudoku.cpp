#include <bits/stdc++.h>
using namespace std;

const int dx[] = {-1, 1, 0, 0, -1, 1, -1, 1};
const int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};

bool check(int a[][9]) {
    // check hàng
    for(int i = 0; i < 9; i++) {
        int freq[10] = {0};
        for(int j = 0; j < 9; j++)
            freq[a[i][j]]++;
        for(int k = 1; k <= 9; k++)
            if(freq[k] != 1)
                return 0;
    }
    // check cột
    for(int j = 0; j < 9; j++) {
        int freq[10] = {0};
        for(int i = 0; i < 9; i++)
            freq[a[i][j]]++;
        for(int k = 1; k <= 9; k++)
            if(freq[k] != 1)
                return 0;
    }
    // check các ô 3x3
    int idx[] = {1, 4, 7};
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 8; k++) {
                int x = idx[i] + dx[k], y = idx[j] + dy[k];
                if(a[x][y] == a[idx[i]][idx[j]])
                    return 0;
            }
        }
    }
    return 1;
}

int main() {
    int a[9][9];
    for(int i = 0; i < 9; i++)
        for(int j = 0; j < 9; j++)
            cin >> a[i][j];
    cout << (check(a) ? "YES" : "NO");
    return 0;
}