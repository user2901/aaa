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
    int n;
    cin >> n;
    Point A, B, C;
    double ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
        double dAB = dist(A, B);
        double dBC = dist(B, C);
        double dCA = dist(C, A);
        double p = (dAB + dBC + dCA)/2;
        ans += sqrt(p*(p - dAB)*(p - dBC)*(p - dCA));
    }
    cout << fixed << setprecision(2) << ans;
    return 0;
}