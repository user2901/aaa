#include <bits/stdc++.h>
using namespace std;

struct Ribbon
{
    int p, l;
};

int main() {
    int n;
    cin >> n;
    Ribbon a[101];
    int len[1001] = {0}, cnt[1001] = {0};
    int k = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i].p >> a[i].l;
        if(len[a[i].p] == 0)
            k++;
        len[a[i].p] += a[i].l;
        cnt[a[i].p]++;
    }
    cout << k << "\n";
    for(int i = 0; i < 1001; i++)
        if(len[i] != 0)
            cout << i << " " << len[i] << " " << cnt[i] << "\n";
    return 0;
}