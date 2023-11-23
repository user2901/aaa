#include <bits/stdc++.h>
#define MAX 1000005
#define MOD 1000007
using namespace std;

struct Edge
{
    int u, v, w;
};

Edge ed[MAX];

int main() {
    int m;
    cin >> m;
    for(int i = 0; i < m; i++)
        cin >> ed[i].u >> ed[i].v >> ed[i].w;
    int cnt = 0, ans = 1;
    for(int i = 0; i < m; i++) {
        if(ed[i].u == ed[i].v) {
            cnt++;
            ans *= ed[i].w;
            ans %= MOD;
        }
    }
    if(cnt == 0)
        cout << -1;
    else
        cout << cnt << " " << ans;
    return 0;
}