#include <bits/stdc++.h>
using namespace std;

int maxDigit(int n) {
    int Max = 0;
    while(n > 0) {
        if(Max < n%10)
            Max = n%10;
        n /= 10;
    }
    return Max;
}

int main() {
    int n;
    cin >> n;
    cout << maxDigit(n);
    return 0;
}