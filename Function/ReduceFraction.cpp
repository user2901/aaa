#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while(a != b) {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << a/gcd(a, b) << " " << b/gcd(a, b);
    return 0;
}