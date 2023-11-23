#include <bits/stdc++.h>
#define MAX 1000005
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
    int Min = 1001;
    for(int i = 0; i < m; i++)
        if(ed[i].w < Min)
            Min = ed[i].w;
    int ans = 0;
    for(int i = 0; i < m; i++)
        if(ed[i].w == Min)
            ans += ed[i].w;
    cout << ans;
    return 0;
}