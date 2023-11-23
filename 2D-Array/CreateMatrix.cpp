#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

int A[MAX][MAX];

int main() {
    int m, n, a, b, p;
    cin >> m >> n >> a >> b >> p;
    A[0][0] = a, A[0][1] = b;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(j >= 2)
                A[i][j] = (A[i][j-1] + A[i][j-2]) % p;
            else if(j < 2 && i > 0) {
                if(j == 0)
                    A[i][j] = (A[i-1][n-1] + A[i-1][n-2]) % p;
                else
                    A[i][j] = (A[i-1][n-1] + A[i][j-1]) % p;
            }
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++)
            cout << A[i][j] << " ";
        cout << "\n";
    }
    return 0;
}