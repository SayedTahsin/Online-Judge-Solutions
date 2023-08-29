#include <bits/stdc++.h>
using namespace std;

struct Info
{
    int nodeId;
    string nodeName;
    int parentId;
};

int main()
{
    int n;
    cin >> n;

    vector<Info> tree(n);

    for (int i = 0; i < n; i++)
    {
        cin >> tree[i].nodeId >> tree[i].nodeName >> tree[i].parentId;
    }

    for (const Info &el : tree)
    {
        cout << el.nodeId << " ";
        cout << el.nodeName << " ";
        cout << el.parentId << " ";
        cout << endl;
    }

    unordered_map<int, Info> trackNode;

    for (const Info &el : tree)
    {
        trackNode[el.nodeId] = el;
    }

    for (const auto &el : trackNode)
    {
        cout << el.first << " " << el.second.nodeName << endl;
    }

    return 0;
}
