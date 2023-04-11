#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{

#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> v;
    set<int> s;
    for (int i = 0; i < k; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    for (auto x : s)
        v.push_back(x);
    int ans = 0;
    k = (int)v.size();
    for (int mask = 1; mask < (1 << k); mask++)
    {
        int temp = n, c = 0;
        for (int i = 0; i < k; i++)
        {
            int x = mask & (1 << i);
            if (x)
            {
                c++;
                temp /= v[i];
            }
        }
        if (c % 2 == 0)
            ans -= temp;
        else
            ans += temp;
    }
    cout << ans << endl;
}