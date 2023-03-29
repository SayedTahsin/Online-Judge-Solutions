//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#define NFS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
void solve()
{
    int n, a;
    cin >> n;
    int rafiq = 0, shafiq = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        int x = a + 1;
        x /= 2;
        if (a % 2 == 0)
            rafiq += x;
        else
            shafiq += x;
    }
    if (rafiq > shafiq)
        cout << "Shafiq\n";
    else
        cout << "Rafiq\n";
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