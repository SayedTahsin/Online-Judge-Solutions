//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#define NFS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
vector<int> v[100001];
int comp[100001], vis[100001];
map<int, int> ans;
int s;
void dfs(int u, int c)
{
    s++;
    vis[u] = 1, comp[u] = c;
    for (auto child : v[u])
        if (!vis[child])
            dfs(child, c);
}
void solve()
{
    int n, m, a, b;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            s = 0;
            c++;
            dfs(i, c);
            ans[c] = s - 1;
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        cin >> a;
        cout << ans[comp[a]] << '\n';
    }
}

main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
#endif
    NFS;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}