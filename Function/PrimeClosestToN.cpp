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

int main() {
    int n;
    cin >> n;
    int pre = n, next = n;
    while(true) {
        if(isPrime(pre)) {
            cout << pre;
            break;
        } else {
            pre --;
        }
        if(isPrime(next)) {
            cout << next;
            break;
        } else {
            next++;
        }
    }
    return 0;
}