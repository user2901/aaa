#include <bits/stdc++.h>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    float p = a + b + c;
    float s = sqrt(p/2*(p/2-a)*(p/2-b)*(p/2-c));
    cout << fixed << setprecision(2) << p << " " << s;
    return 0;
}