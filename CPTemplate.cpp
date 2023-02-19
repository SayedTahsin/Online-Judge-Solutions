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
/**
 * - less<data_type> 			--> Increasingly sorted set
 * - less_equal<data_type> 		--> Increasingly sorted multiset
 * - greater<data_type>			--> Decreasingly sorted set
 * - greated_equal<data_type> 	--> Decreasingly sorted multiset
 **/
//!------
#define YES cout << "YES" << endl
#define Yes cout << "Yes" << endl
#define yes cout << "yes" << endl
#define No cout << "No" << endl
#define NO cout << "NO" << endl
#define no cout << "no" << endl
//!-----
#define ll long long
#define int ll
#define lld long double
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
#define EPS (1e-9)
#define bug cout << "*_*\n"
//!-------
const ll INF = 1e18 + 5;
const ll MOD = 1e9 + 7;
const ll N = 100005;
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
inline void CASE() { cout << "Case " << cs++ << ":"; }
inline ll ciel(double a, double b) { return (a + (b - 1)) / b; }
inline int numOfDigit(ll n) { return log10(n) + 1; }
inline int bitsInBinary(ll n) { return log2(n) + 1; }
inline bool iskthbitSet(int a, int k) { return (a & (1 << k)); }
//!--------
//! Directional Array---------------------------------------------------------------------------------------------------------------------------------------
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
int dxk[] = {-2, -2, -1, -1, 1, 2, 2, 1};
int dyk[] = {1, -1, 2, -2, 2, 1, -1, -2};
int dx1[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy1[] = {1, 1, 0, -1, -1, -1, 0, 1};
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
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
//! modular arithmethic----------------------------------------------------------------------------------------------------------------------------------------
inline ll mod(ll a) { return (a % MOD + MOD) % MOD; }
inline ll modAdd(ll a, ll b) { return mod(mod(a) + mod(b)); }
inline ll modSub(ll a, ll b) { return mod(mod(a) - mod(b)); }
inline ll modMul(ll a, ll b) { return mod(mod(a) * mod(b)); }
inline ll modInv(ll a) { return bin_expo(a, MOD - 2); }
//------------------------------------------------------------------------------------------------------------------------------------------------------
//! Double Comparisons---------------------------------------------------------------------------------------------------------------------------------
bool equalTo(double a, double b) { return ((fabs(a - b) <= EPS) ? true : false); }
bool notEqual(double a, double b) { return ((fabs(a - b) > EPS) ? true : false); }
bool lessThan(double a, double b) { return ((a + EPS < b) ? true : false); }
bool lessThanEqual(double a, double b) { return ((a < b + EPS) ? true : false); }
bool greaterThan(double a, double b) { return ((a > b + EPS) ? true : false); }
bool greaterThanEqual(double a, double b) { return ((a + EPS > b) ? true : false); }
bool negzero(double a) { return (a < EPS) ? true : false; }
//!-----------------------------------------------------------------------------------------------------------------------------------------------------------------
//!----------------------------------------------------------------------------------------------------------------------------------------------------------
int cs = 1;
template <class T>
inline void print(vector<T> v) { fore(v) cout << x << ' '; }
inline ll ciel(double a, double b) { return (a + (b - 1)) / b; }
inline void CASE() { cout << "Case " << cs++ << ":" << endl; }
inline int numOfDigit(ll n) { return log10(n) + 1; }
inline int bitsInBinary(ll n) { return log2(n) + 1; }
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//!-----------------------------------------------------------------------------------------------------------------------------------------------------------
bool is_pel(string s)
{
    ll n = s.length() - 1;
    for (int i = 0; i < s.length() / 2; i++, n--)
        if (s[i] != s[n])
            return false;
    return true;
}
string to_binary(ll a)
{
    string s;
    while (a)
    {
        s = ((a % 2) ? "1" : "0") + s;
        a /= 2;
    }
    return s.empty() ? "0" : s;
}
int binary_to_int(string s)
{
    int x = 0;
    for (int i = s.length() - 1, j = 0; i >= 0; i--, j++)
    {
        if (s[i] == '1')
            x += (1 << j);
    }
    return x;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------
//! Primes--------------------------------------------------------------------------------------------------------------------------------------------------
//* checking with all number till sqrt(n)
bool is_prime(ll n) //! O(sqrt(n))
{
    if (n <= 1)
        return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
vector<int> Primes;
bool isPrime[10000001]; // default value 0
void sieve(int n)       //! O(n*log(n))
{
    for (int i = 3; i * i <= n; i += 2)
        if (isPrime[i] == false)
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = true;
    Primes.pb(2);
    for (int i = 3; i <= n; i += 2)
        if (isPrime[i] == false)
            Primes.pb(i);
}
vector<int> LowPrime(1000001, 0), HighPrime(1000001, 0);
void sieveLH(int n) //! High Prime Low Prime
{
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i] == false)
        {
            LowPrime[i] = HighPrime[i] = i;
            for (int j = i; j <= n; j += i)
            {
                isPrime[j] = true;
                HighPrime[j] = i;
                if (LowPrime[j] == 0)
                    LowPrime[j] = i;
            }
        }
    }
}
//* checking with all prime till sqrt(n)
bool ISPRIME(ll n) //! O(sqrt(n)/log(sqrt(n)))
{
    if (n <= 1)
        return 0;
    int idx = 0;
    int i = Primes[idx];
    while (i * i <= n)
    {
        if (n % i == 0)
            return false;
        i = Primes[++idx];
    }
    return true;
}
//---------------------------------------------------------------------------------------------------------------------------------------------
//! Factorization-----------------------------------------------------------------------------------------------------------------------------------
vector<int> factor(int n)
{
    vector<int> v;
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
            n /= i, v.pb(i);
    }
    if (n > 1)
        v.pb(n);
    return v;
}

vector<int> factor(int n) //* using HighPrime O(log(n))
{
    vector<int> fact;
    while (n > 1)
    {
        int f = HighPrime[n];
        while (n % f == 0)
        {
            fact.pb(f);
            n /= f;
        }
    }
    return fact;
}
vector<int> factor2(int n)
{
    vector<int> fact;
    for (int i = 0; Primes[i] * Primes[i] <= n; i++)
    {
        while (n % Primes[i] == 0)
        {
            n /= Primes[i];
            fact.pb(Primes[i]);
        }
    }
    if (n > 1)
        fact.pb(n);
    return fact;
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------
//! Divisors-----------------------------------------------------------------------------------------------------------------------------------------------
vector<int> divisors[1000001];
void DivisrosA(int n)
{
    for (int i = 2; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
            divisors[j].pb(i);
    }
}
vector<int> Divisors(int n)
{
    vector<int> v;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.pb(i);
            if (n / i != i)
                v.pb(n / i);
        }
    }
    return v;
}
//---------------------------------------------------------------------------------------------------------------------------------------------------
//! Euler Totient Function----------------------------------------------------------------------------------------------------------------------
ll ETF(int n) //! o(sqrt(n))
{
    ll total = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            total = (total / i) * (i - 1);
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1)
        total = (total / n) * (n - 1);
    return total;
}
int phi[1000001];
bool visited[1000001];
void ETFsieve(int n)
{
    for (int i = 1; i <= n; i++)
        phi[i] = i;
    for (int i = 2; i <= n; i++)
    {
        if (!visited[i])
        {
            for (int j = i; j <= n; j += i)
            {
                visited[j] = true;
                phi[j] = (phi[j] / i) * (i - 1);
            }
        }
    }
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------
ll egcd(int a, int b, int &x, int &y)
{
    if (b == 0)
    {
        x = 1, y = 0;
        return a;
    }
    int x1, y1;
    int d = egcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return d;
}
//! combinatorics--------------------------------------------------------------------------------------------------------------------------------
ll fact[21];
void factorial()
{
    fact[0] = 1;
    for (int i = 1; i <= 20; i++)
        fact[i] = i * fact[i - 1];
}
inline ll nPr(int n, int r) { return fact[n] / fact[n - r]; }               // max 20!
inline ll nCr(int n, int r) { return ((fact[n] / fact[n - r]) / fact[r]); } // max 20!
ll nCr2(int n, int r)                                                       // for larger values
{
    ll p = 1, k = 1;
    r = min(r, n - r);
    while (r)
    {
        p *= n;
        k *= r;
        ll m = gcd(p, k);
        p /= m;
        k /= m;
        n--, r--;
    }
    return p;
}
ll nCr(int n, int r) // with MOD
{
    r = min(r, n - r);
    if (n < r)
        return 0;
    if (r == 0)
        return 1;

    vector<int> fact(n + 1, 0);
    fact[0] = 1;
    for (int i = 1; i <= n; i++)
        fact[i] = (fact[i - 1] * i) % MOD;

    int ans = modMul(fact[n], modInv(fact[r]));
    ans = modMul(ans, modInv(fact[n - r]));
    ans = ans % MOD;
    return ans;
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------
//! bitmask
void bitmask(int k)
{
    for (int j = 0; j < (1 << k); j++)
    {
        for (int i = 0; i < k; i++)
        {
            if (j & (1 << i))
            {
                //* take the i-th element
            }
        }
    }
}
//! DSU------------------------------------------------------------------------------------------------------------------------------------------
int parent[1000001], _size[1000001];
void init(int n)
{
    for (int i = 1; i <= n; i++)
        parent[i] = i, _size[i] = 1;
}
int findp(int u)
{
    if (parent[u] == u)
        return u;
    return parent[u] = findp(parent[u]);
}
void union_set(int u, int v)
{
    u = findp(u);
    v = findp(v);
    if (u == v)
        return;
    if (_size[v] > _size[u])
        swap(u, v);
    parent[v] = u;
    _size[u] += _size[v];
    _size[v] = 0;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------
//! geometry----------------------------------------------------------------------------------------------------------------------------------------
// [x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2)]//area of from three point
ll Area_of_threePoint(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3)
{
    return abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}
//---------------------------------------------------------------------------
//! kadanes Algo-----------
int KadanesAlgo(vector<int> &v) // maxSubArray
{
    int mxsofar = INT_MIN, mxendthis_index = 0;
    for (int i = 0; i < v.size(); i++)
    {
        mxendthis_index += v[i];
        mxendthis_index = max(mxendthis_index, v[i]);
        mxsofar = max(mxsofar, mxendthis_index);
    }
    return mxsofar;
}
//!-------------------------
//! Sliding Window-----------
int slidingWindow(vector<int> &v, int k) // max k consecutive sum
{
    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += v[i];
    int ans = sum;
    for (int i = 0; i < (int)v.size() - k; i++)
    {
        sum -= v[i];
        sum += v[i + k];
        ans = max(ans, sum);
    }
    return ans;
}
//*-------------------
//! Two Pointer--------
bool ThreeSum(vector<int> &v, int target)
{
    sort(all(v));
    for (int i = 0; i < v.size(); i++)
    {
        int lo = i + 1, hi = (int)v.size() - 1;
        while (lo < hi)
        {
            int cur = v[i] + v[lo] + v[hi];
            if (cur == target)
            {
                cout << v[i] << ' ' << v[lo] << ' ' << v[hi] << endl;
                return true;
            }
            else if (cur < target)
                lo++;
            else
                hi--;
        }
    }
    return false;
}
//!-----------------

void solve()
{
}
main()
{
    NFS;
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
#endif

    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}
// comparedouble
// directionArray
// debug
// sparsTable
// BIT