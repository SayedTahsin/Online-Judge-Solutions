#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("area.in", "r", stdin);
    freopen("area.out", "w", stdout);

    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (auto &x : v)
        cin >> x.first >> x.second;
    v.push_back({v[0].first, v[0].second});

    double ans1 = 0;

    for (int i = 0; i < n; i++)
        ans1 += v[i].first * v[i + 1].second;
    double ans2 = 0;
    for (int i = 0; i < n; i++)
        ans2 += v[i].second * v[i + 1].first;

    double ans = fabs(ans1 - ans2);
    cout << fixed << setprecision(15) << 0.5 * ans << endl;
}