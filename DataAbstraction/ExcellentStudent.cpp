#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    float math, lit;
};

int main() {
    int n;
    cin >> n;
    Student a[101];
    for(int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].math >> a[i].lit;
    }
    int cnt = 0;
    for(int i = 0; i < n; i++)
        if((a[i].math + a[i].lit)/2 >= 9)
            cnt++;
    cout << cnt;
    return 0;
}