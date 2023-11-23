#include <bits/stdc++.h>
#define MAX 100005
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int a[MAX], idx = -1;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == x)
            idx = i + 1;
    }
    cout << idx;
    return 0;
}