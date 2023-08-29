#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
#endif

    string ans = "";
    string str;
    getline(cin, str);
    str += " ";
    int sz = str.length();
    int k;
    cin >> k;
    int end[sz + 10] = {0};
    for (int i = 0; i < sz; i++)
    {
        end[i] = 0;
        if (str[i] == ' ')
        {
            end[i - 1] = 1;
        }
    }
    int ptr = 0;
    while (ptr < sz - 1)
    {
        if (end[ptr + k - 1] == 1)
        {
            for (int i = ptr; i < ptr + k; i++)
            {
                ans += str[i];
            }
            ans += '\n';
            ptr = ptr + k + 1;
        }
        else
        {
            int j = ptr + k - 1, cn = 0;
            while (j >= 0 && end[j] != 1)
            {
                j--;
                cn++;
            }
            for (int i = 0; i < cn; i++)
            {
                ans += " ";
            } // it is for left align
            for (int i = ptr; i <= j; i++)
            {
                ans += str[i];
            }
            /* for(int i=0;i<cn;i++){
                ans+=" ";
            } */
            // it is for right align
            ans += '\n';
            ptr = j + 2;
        }
    }
    cout << ans;

    return 0;
}
