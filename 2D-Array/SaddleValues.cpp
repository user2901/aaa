#include <bits/stdc++.h>
#define MAX 101
using namespace std;

int maxRow(int a[][MAX], int m, int n, int i) {
    int Max = -1;
    for(int j = 0; j < n; j++)
        if(a[i][j] > Max)
            Max = a[i][j];
    return Max;
}

int minCol(int a[][MAX], int m, int n, int j) {
    int Min = 1001;
    for(int i = 0; i < m; i++)
        if(a[i][j] < Min)
            Min = a[i][j];
    return Min;
}

int main() {
    int m, n, a[MAX][MAX];
    cin >> m >> n;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    int cnt = 0;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if(a[i][j] == maxRow(a, m, n, i) && a[i][j] == minCol(a, m, n, j))
                cnt++;
    cout << cnt;
    return 0;
}