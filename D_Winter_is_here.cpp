//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#define NFS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

#define ll long long
#define int ll
const ll MOD = 1e9 + 7;
#define FILL(x, y) memset(x, y, sizeof(x))

ll bin_expo(ll a, ll b)
{
    ll s = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
            s = ((s % MOD) * (a % MOD)) % MOD;
        a = ((a % MOD) * (a % MOD)) % MOD, b = b >> 1;
    }
    return s % MOD;
}

void solve()
{
    int n, a;
    cin >> n;
    vector<int> mp(1000001, 0);
    // int mp[1000001];
    // FILL(mp,0);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        mp[a]++;
    }
    // int arr[1000001] = {0}, ans[1000001];
    vector<int> arr(1000001, 0), ans(1000001, 0);
    int answer = 0;
    for (int i = 1000000; i >= 2; i--)
    {
        for (int j = i; j <= 1000000; j += i)
            arr[i] += mp[j];

        ans[i] = (arr[i] * bin_expo(2, arr[i] - 1)) % MOD;

        for (int j = i + i; j <= 1000000; j += i)
            ans[i] = (ans[i] - ans[j] + MOD) % MOD;
        answer = (answer + (ans[i] * i) % MOD) % MOD;
    }
    cout << answer << endl;
}

main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    //     freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
    // #endif
    NFS;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}