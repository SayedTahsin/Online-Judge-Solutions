#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("distance1.in", "r", stdin);
    freopen("distance1.out", "w", stdout);

    int x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;
    double dis = fabs(x * a + b * y + c);
    double z = sqrt((a * a) + (b * b));
    dis = dis / z;
    cout << fixed << setprecision(10) << dis << endl;
}