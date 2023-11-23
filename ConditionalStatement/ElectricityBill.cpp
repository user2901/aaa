#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int ans = 0;
    if(b - a <= 50)
        ans = 1484*(b - a);
    else if(b - a <= 100)
        ans = 1484*50 + 1533*(b-a-50);
    else if(b - a <= 200)
        ans = 1484*50 + 1533*50 + 1786*(b-a-100);
    else if(b - a <= 300)
        ans = 1484*50 + 1533*50 + 1786*100 + 2242*(b-a-200);
    else if(b - a <= 400)
        ans = 1484*50 + 1533*50 + 1786*100 + 2242*100 + 2503*(b-a-300);
    else
        ans = 1484*50 + 1533*50 + 1786*100 + 2242*100 + 2503*100 + 2587*(b-a-400);
    cout << int(ans*1.1);
    return 0;
}