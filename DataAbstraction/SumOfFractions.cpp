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

Fraction sum(Fraction p1, Fraction p2) {
    Fraction p3;
    p3.num = p1.num*p2.denom + p1.denom*p2.num;
    p3.denom = p1.denom*p2.denom;
    reduce(p3);
    return p3;
}

int main() {
    Fraction p1, p2;
    cin >> p1.num >> p1.denom >> p2.num >> p2.denom;
    Fraction p3 = sum(p1, p2);
    cout << p3.num << " " << p3.denom;
    return 0;
}