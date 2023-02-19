#include <bits/stdc++.h>
using namespace std;

struct stdInfo
{
    string Name, ID;
    double cg;
};

int main()
{

#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
#endif

    //! Loop
    //! nested Loop
    //! Array
    //! multidimental array
    //! structure

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cout << i << ' ';
    cout << endl;
    cout << endl;

    int sp = n - 1;
    for (int i = 1; i <= n; i++, sp--)
    {
        for (int j = 1; j <= sp; j++)
            cout << ' ';

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }
    cout << endl;

    int arr[4][3];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    stdInfo arr[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i].Name >> arr[i].ID >> arr[i].cg;
        cout << arr[i].Name << ' ' << arr[i].ID << ' ' << arr[i].cg << endl;
    }

}