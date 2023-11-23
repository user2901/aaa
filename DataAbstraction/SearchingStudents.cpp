#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string id, math, lit;
};

int main() {
    int n, q;
    cin >> n >> q;
    Student a[1001];
    for(int i = 0; i < n; i++)
        cin >> a[i].id >> a[i].math >> a[i].lit;
    string id[1001];
    for(int i = 0; i < q; i++)
        cin >> id[i];
    for(int i = 0; i < q; i++) {
        for(int j = 0; j < n; j++) {
            if(a[j].id == id[i]) {
                cout << a[j].math << " " << a[j].lit << "\n";
                break;
            }
        }
    }
    return 0;
}