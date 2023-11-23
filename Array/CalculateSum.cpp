#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

int main() {
    int n, a[MAX];
    cin >> n;
    int s = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    cout << s;
    return 0;
}