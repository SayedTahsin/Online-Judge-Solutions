#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    int arr[n];
    memset(arr, -1, sizeof(arr));
    for (ll i = 0; i < n; i++)
    {
        ll x = i * i;
        x = x % n;
        arr[x] = i;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}