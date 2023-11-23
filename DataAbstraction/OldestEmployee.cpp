#include <bits/stdc++.h>
using namespace std;

struct Employee
{
    string id, name;
    int dob;
};

int main() {
    int n;
    cin >> n;
    Employee a[1001];
    for(int i = 0; i < n; i++)
        cin >> a[i].id >> a[i].name >> a[i].dob;
    int idx = 0;
    for(int i = 1; i < n; i++)
        if(a[i].dob < a[idx].dob || (a[i].dob == a[idx].dob && a[i].id < a[idx].id))
            idx = i;
    cout << a[idx].id << " " << a[idx].name << " " << a[idx].dob;
    return 0;
}