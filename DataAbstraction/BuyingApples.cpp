#include <bits/stdc++.h>
using namespace std;

struct Apple
{
    int w, p;
};

int main() {
    int n;
    cin >> n;
    Apple a[1001];
    for(int i = 0; i < n; i++)
        cin >> a[i].w >> a[i].p;
    int idx = 0;
    for(int i = 1; i < n; i++)
        if(a[i].w > a[idx].w || (a[i].w == a[idx].w && a[i].p > a[idx].p))
            idx = i;
    cout << idx;
    return 0;
}