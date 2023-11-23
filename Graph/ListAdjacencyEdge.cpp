#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

struct Edge
{
    int u, v, w;
};

void InsertionSort(Edge ed[], int n) {
    for(int i = 1; i < n; i++) {
        Edge x = ed[i];
        int j = i - 1;
        while(j >= 0 && ed[j].w > x.w) {
            ed[j+1] = ed[j];
            j--;
        }
        ed[j+1] = x;
    }
}

int main() {
    int m, k;
    cin >> m >> k;
    Edge ed[MAX];
    for(int i = 0; i < m; i++)
        cin >> ed[i].u >> ed[i].v >> ed[i].w;
    InsertionSort(ed, m);
    for(int i = k - 1; i >= 0; i--)
        cout << ed[i].u << " " << ed[i].v << "\n";
    return 0;
}