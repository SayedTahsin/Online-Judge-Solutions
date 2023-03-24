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

    int n = get_random_in_range(1, 100);
    int m = get_random_in_range(1, 500);
    int c = 0;
    cout << n << ' ' << m << endl;
    cout << m << ' ' << m << ' ' << m << ' ' << m << ' ';
    for (int i = 4; i < n; i++)
    {
        int a = get_random_in_range(1, 500);
        cout << a << ' ';
        if (a == m)
            c++;
    }
    cout << endl;
    // if (c >= 4)
    cout << "Yes\n";
    // else
    // cout << "No\n";
}
