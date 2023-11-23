#include <bits/stdc++.h>
#define MAX 5001
using namespace std;

int main() {
    int n, a[MAX], b[MAX];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    int idx = 0;
    for(int i = 0; i < n; i++)
        if(a[i] > a[idx] || (a[i] == a[idx] && b[i] > b[idx]))
            idx = i;
    cout << idx + 1;
    return 0;
}