#include <bits/stdc++.h>
using namespace std;

vector<int> edg[100];
int arr[100][100];
int n, m;

int cycle = 0;
bool isValid(int x, int y)
{
    if (x >= 1 && x <= n && y >= 1 && y <= m && arr[x][y] == 2)
        return 1;
    else
        return 0;
}
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
void dfs(int i, int j)
{
    arr[i][j] = 3;
    for (int k = 0; k < 4; k++)
    {
        int x = i + dx[k];
        int y = j + dy[k];
        if (isValid(x, y))
        {
            dfs(x, y);
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
#endif

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> arr[i][j];
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] == 2)
            {
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout << cnt << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
}