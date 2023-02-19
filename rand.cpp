#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

long long get_random()
{
    return (long long)(rng());
}

long long get_random_in_range(long long L, long long R)
{
    long long rndm = get_random();
    return L + (rndm % (R - L + 1));
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
#endif

    int n = get_random_in_range(1, 100000);
    int m = get_random_in_range(1, min((n * (n + 1)) / 2, 100000));
    n = 100000, m = 100000;
    cout << n << ' ' << m << endl;
    for (int i = 0; i < m; i++)
    {
        int a = get_random_in_range(1, n);
        int b = get_random_in_range(1, n);
        while (a == b)
        {
            b = get_random_in_range(1, n);
        }
        cout << a << ' ' << b << endl;
    }
    int q = get_random_in_range(1, 100000);
    q = 100000;
    cout << q << endl;
    while (q--)
    {
        cout << get_random_in_range(1, n) << endl;
    }
    return 0;
}
