//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define NFS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

using namespace __gnu_pbds;
template <typename DT>
using oset = tree<DT, null_type, less<DT>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename DT, typename FUNC>
using o_set = tree<DT, null_type, FUNC, rb_tree_tag, tree_order_statistics_node_update>;
template <typename DT1, typename DT2>
using omap = tree<DT1, DT2, less<DT1>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename DT1, typename DT2, typename FUNC>
using o_map = tree<DT1, DT2, FUNC, rb_tree_tag, tree_order_statistics_node_update>;

//!------
#define ndl "\n"
#define YES cout << "YES\n"
#define Yes cout << "Yes\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
//!-----
#define ll long long
#define int ll
// #define double long double
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define vll vector<pll>
#define pb push_back
#define ff first
#define ss second
//!--------
#define PQiimn priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>
#define PQllmn priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>>
#define PQiimx priority_queue<pair<int, int>>
#define PQllmx priority_queue<pair<ll, ll>>
#define PQ priority_queue<int>
#define PQmn priority_queue<int, greater<int>>
//!--------
#define FILL(x, y) memset(x, y, sizeof(x))
#define clr(x, y) memset(x, 0, sizeof(x))
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fore(arr) for (auto &x : (arr))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x *(y / gcd(x, y))
#define preci(x) fixed << setprecision(x)
#define PI (acos(-1.0))
#define SZ(x) (int)x.size()
#define bug cout << "*_*\n"
//!-------
#define EPS (1e-6)
const ll INF = 1e18 + 5;
const ll MOD = 1e9 + 7;
bool equalTo(double a, double b) { return ((fabs(a - b) <= EPS) ? true : false); }
bool notEqual(double a, double b) { return ((fabs(a - b) > EPS) ? true : false); }
bool lessThan(double a, double b) { return ((a + EPS < b) ? true : false); }
bool lessThanEqual(double a, double b) { return ((a < b + EPS) ? true : false); }
bool greaterThan(double a, double b) { return ((a > b + EPS) ? true : false); }
bool greaterThanEqual(double a, double b) { return ((a + EPS > b) ? true : false); }
bool negzero(double a) { return (a < EPS) ? true : false; }
//!-------
ll POW(ll b, ll p)
{
    ll r = 1;
    for (int i = 0; i < p; i++)
        r *= b;
    return r;
}
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
inline ll mod(ll a) { return (a % MOD + MOD) % MOD; }
inline ll modAdd(ll a, ll b) { return mod(mod(a) + mod(b)); }
inline ll modSub(ll a, ll b) { return mod(mod(a) - mod(b)); }
inline ll modMul(ll a, ll b) { return mod(mod(a) * mod(b)); }
inline ll modInv(ll a) { return bin_expo(a, MOD - 2); }
//!---------
// int dx[] = {0, 0, -1, 1};
// int dy[] = {1, -1, 0, 0};
// int dxk[] = {-2, -2, -1, -1, 1, 2, 2, 1};
// int dyk[] = {1, -1, 2, -2, 2, 1, -1, -2};
// int dx1[] = {0, 1, 1, 1, 0, -1, -1, -1};
// int dy1[] = {1, 1, 0, -1, -1, -1, 0, 1};
//!---------
template <class T>
inline void print(vector<T> v) { fore(v) cout << x << ' '; }
template <class T>
inline void print(set<T> v) { fore(v) cout << x << ' '; }
template <class T>
inline void print(multiset<T> v) { fore(v) cout << x << ' '; }
template <class T, class U>
inline void print(map<T, U> v) { fore(v) cout << x.ff << ' ' << x.ss << endl; }
template <class T, class U>
inline void print(multimap<T, U> v) { fore(v) cout << x.ff << ' ' << x.ss << endl; }
template <class T>
inline void print(T u) { cout << '*' << u << '*' << endl; }
//!---------
int cs = 1;
inline void CASE() { cout << "Case #" << cs++ << ": "; }
inline int ciel(double a, double b) { return (a + (b - 1)) / b; }
inline int numOfDigit(int n) { return log10(n) + 1; }
inline int bitsInBinary(int n) { return log2(n) + 1; }
inline bool iskthbitSet(int a, int k) { return (a & (1 << k)); }
//!---------
bool is_prime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

const int N = 3e5 + 5;
int arr[N];
int Tree[4 * N];
void init(int node, int b, int e)
{
    if (b == e)
    {
        Tree[node] = arr[b];
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(left, b, mid);
    init(right, mid + 1, e);
    Tree[node] = (Tree[left] ^ Tree[right]);
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b) // out
        return 0;
    if (b >= i && e <= j) // relevent segment
        return Tree[node];
    int left = node * 2; // aro vangte hobe
    int right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(left, b, mid, i, j);
    int p2 = query(right, mid + 1, e, i, j);
    return (p1 ^ p2); // left and right side r sum
}
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b) // out
        return;
    if (b >= i && e <= i) // relevent segment
    {
        Tree[node] ^= newvalue; // assiging new value
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(left, b, mid, i, newvalue);
    update(right, mid + 1, e, i, newvalue);
    Tree[node] = (Tree[left] ^ Tree[right]);
}
void solve()
{
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    init(1, 1, n);
    while (q--)
    {
        int t, x, y;
        cin >> t >> x >> y;
        if (t == 1)
            update(1, 1, n, x, y);
        else
            cout << query(1, 1, n, x, y) << endl;
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