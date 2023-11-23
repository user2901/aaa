#include <bits/stdc++.h>
#define MAX 100005
using namespace std;

int main() {
    int n, a[MAX];
    cin >> n;
    int Min = 1001;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] < Min)
            Min = a[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
        ans += a[i] - Min;
    cout << ans;
    return 0;
}