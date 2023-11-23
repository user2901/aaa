#include <bits/stdc++.h>
#define MAX 1000005
using namespace std;

struct Edge
{
    int u, v;
};

int a[1001][1001];
Edge ed[MAX];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    int k = 0;
    for(int i = 0; i < n; i++)
        for(int j = i; j < n; j++)
            if(a[i][j] == 1)
                ed[k++] = Edge{i, j};
    cout << k << "\n";
    for(int i = 0; i < k; i++)
        cout << ed[i].u << " " << ed[i].v << "\n";
    return 0;
}