#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    int Min = 10, Max = 0;
    while(true) {
        cin >> x;
        if(x == -1)
            break;
        if(x < Min)
            Min = x;
        if(x > Max)
            Max = x;
    }
    cout << Max << " " << Min;
    return 0;
}