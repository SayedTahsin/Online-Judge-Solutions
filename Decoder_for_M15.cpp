//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#define NFS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int mx = 0;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            mx = max(mx, s[i] - 48);
        if (s[i] >= 'A' && s[i] <= 'Z')
            mx = max(mx, s[i] - 65 + 10);
    }
    cout << mx + 1 << endl;
}

main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
#endif
    NFS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}