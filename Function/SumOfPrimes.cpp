#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n < 2)
        return 0;
    else if(n > 2) {
        for(int i = 2; i <= sqrt(n); i++)
            if(n%i == 0)
                return 0;
    }
    return 1;
}

int sumPrime(int n) {
    int s = 0;
    for(int i = 2; i < n; i++)
        if(isPrime(i))
            s += i;
    return s;
}

int main() {
    int n;
    cin >> n;
    cout << sumPrime(n);
    return 0;
}