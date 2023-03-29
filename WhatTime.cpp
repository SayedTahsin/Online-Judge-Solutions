//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#define NFS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
#define fore(arr) for (auto &x : (arr))

void solve()
{
    int n;
    cin >> n;
    cin.ignore();
    string currentDist = "", s;
    bool seh = 0;
    map<string, pair<string, string>> mp;
    for (int k = 1; k <= n; k++)
    {
        getline(cin, s);
        for (int j = 0; s[j]; j++)
        {
            int i = j;
            string tmp, tmp1;
            while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
                tmp += s[i++];
            int f = 0;
            fore(tmp) if ((x >= 'A' && x <= 'Z')) f++;
            if (f == tmp.length() && f != 0)
                currentDist = tmp;

            if (i <= s.length() - 5)
            {
                tmp1 = s.substr(j, 5);
                if (tmp1 == "sehri" || tmp1 == "Sehri")
                    seh = 1;
                if (tmp1 == "ifter" || tmp1 == "Ifter")
                    seh = 0;
            }
        }
        cout << currentDist << ' ' << currentDist.length() << ' ' << seh << endl;
        getline(cin, s);
        for (int i = 0; i <= (int)s.length() - 5; i++)
        {
            string tmp = s.substr(i, 5);
            if (tmp[2] == ':')
            {
                int f = 1;
                for (int j = 0; j < 5; j++)
                {
                    if (j == 2)
                        continue;
                    if (!(tmp[j] >= '0' && tmp[j] <= '9'))
                        f = 0;
                }
                if (f)
                {
                    // cout << tmp << endl;
                    if (seh)
                        mp[currentDist].second = tmp;
                    else
                        mp[currentDist].first = tmp;
                }
            }
        }
    }
    fore(mp) cout << x.first << ' ' << x.second.first << '-' << x.second.second << endl;
    int q;
    cin >> q;
    while (q--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            cin >> s;
            s = mp[s].first;
            if (s.empty())
                cout << "Sorry I don't know!\n";
            else
                cout << s << endl;
        }
        else
        {

            cin >> s;
            s = mp[s].second;
            if (s.empty())
                cout << "Sorry I don't know!\n";
            cout << s << endl;
        }
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