#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int Id;
    string Name;
    int Parent_Id;
};

struct AnsStruct
{
    Node CurrentNode;
    Node ParentNode;
};

class Tree
{
public:
    vector<AnsStruct> Ans;

    void GenerateTree(vector<Node> inputNodes)
    {
        unordered_map<int, Node> trackNodesBasedOnId;
        for (const auto &node : inputNodes)
        {
            trackNodesBasedOnId[node.Id] = node;
        }

        for (const auto &node : inputNodes)
        {
            if (node.Parent_Id != -1)
            {
                addNode(node, trackNodesBasedOnId[node.Parent_Id]);
            }
            else
            {
                addNode(node);
            }
        }
    }

    void addNode(Node node)
    {
        AnsStruct structure;
        structure.CurrentNode = node;
        Node temp;
        temp.Name = "No Parent";
        structure.ParentNode = temp;
        Ans.push_back(structure);
    }

    void addNode(Node node, Node parentNode)
    {
        AnsStruct structure;
        structure.CurrentNode = node;
        structure.ParentNode = parentNode;
        Ans.push_back(structure);
    }

    void DisplayNode()
    {
        for (const auto &ansNode : Ans)
        {
            cout << ansNode.CurrentNode.Name << " " << ansNode.ParentNode.Name << "\n";
        }
    }
};

int main()
{

#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
#endif

    Tree tree;

    vector<Node> inputNodes = {
        {1, "Node1", -1},
        {2, "Node2", 1},
        {3, "Node3", 1},
        {4, "Node4", 2},
        {5, "Node5", 2}};

    tree.GenerateTree(inputNodes);
    tree.DisplayNode();

    return 0;
}
