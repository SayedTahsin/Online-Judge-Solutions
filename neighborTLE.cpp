//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#define NFS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
vector<int> v[100001];
int vis[100001];
map<int, int> ans;
int size;
void dfs(int u)
{
    size++;
    vis[u] = 1;
    for (auto child : v[u])
        if (!vis[child])
            dfs(child);
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
    int q;
    cin >> q;
    while (q--)
    {
        cin >> a;
        size = 0;
        memset(vis, 0, sizeof(vis));
        dfs(a);
        cout << size - 1 << endl;
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