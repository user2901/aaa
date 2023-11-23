#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, x;
    cin >> a >> b >> x;
    if(x%a == 0 && x%b == 0)
        cout << "Both";
    else if(x%a == 0)
        cout << "Upan";
    else if(x%b == 0)
        cout << "Ipan";
    else
        cout << "No";
    return 0;
}