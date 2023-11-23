#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, cnt = 0;
    while(true) {
        cin >> x;
        if(x == 0)
            break;
        if(x == 5)
            cnt++;
    }
    cout << cnt;
    return 0;
}