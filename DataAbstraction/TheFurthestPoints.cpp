#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x, y;
};

double dist(Point a, Point b) {
    return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

int main() {
    Point M, a[1001];
    int n;
    cin >> M.x >> M.y >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i].x >> a[i].y;
    Point ans = a[0];
    for(int i = 1; i < n; i++)
        if(dist(M, a[i]) > dist(M, ans))
            ans = a[i];
    cout << ans.x << " " << ans.y;
    return 0;
}