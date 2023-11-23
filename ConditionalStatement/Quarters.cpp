#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    if(x <= 3)
        cout << 1;
    else if(x <= 6)
        cout << 2;
    else if(x <= 9)
        cout << 3;
    else
        cout << 4;
    return 0;
}