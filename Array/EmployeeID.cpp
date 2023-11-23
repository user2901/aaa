#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

int main() {
    int n, a[MAX];
    cin >> n;
    bool id[100001];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        id[a[i]] = 1;
    }
    for(int i = 1; i <= 100000; i++) {
        if(!id[i]) {
            cout << i;
            break;
        }
    }
    return 0;
}