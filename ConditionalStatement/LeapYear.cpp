#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << ((x%4 == 0 && x%100 != 0) || x%400 == 0 ? "YES" : "NO");
    return 0;
}