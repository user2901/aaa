#include <bits/stdc++.h>
using namespace std;

struct Fraction
{
    int num, denom;
};

int gcd(int a, int b) {
    while(a != b) {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

void reduce(Fraction &p) {
    if(p.num == 0) {
        p.denom = 1;
        return;
    }
    int x = gcd(abs(p.num), abs(p.denom));
    p.num /= x;
    p.denom /= x;
}

int main() {
    int n;
    cin >> n;
    Fraction a[1001];
    for(int i = 0; i < n; i++)
        cin >> a[i].num >> a[i].denom;
    int idx = 0;
    for(int i = 1; i < n; i++)
        if(1.0*a[i].num / a[i].denom > 1.0*a[idx].num / a[idx].denom)
            idx = i;
    reduce(a[idx]);
    cout << a[idx].num << " " << a[idx].denom;
    return 0;
}