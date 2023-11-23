#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

int main() {
    int n, a[MAX];
    cin >> n;
    int Max = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > Max)
            Max = a[i];
    }
    cout << Max;
    return 0;
}