#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node()
    {
        val = 0;
        next = NULL;
    }
    Node(int value)
    {
        val = value;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *node;
    LinkedList()
    {
        node = NULL;
    }

    void insertData(int value)
    {
        Node *newNode = new Node(value);
        if (node == NULL)
        {
            node = newNode;
            return;
        }
        Node *ref = node;
        while (ref->next != NULL)
        {
            ref = ref->next;
        }
        ref->next = newNode;
    }
    void display()
    {
        Node *ref = node;
        while (ref != NULL)
        {
            cout << ref->val << ' ';
            ref = ref->next;
        }
        cout << endl;
    }
    void Delete(int index)
    {
        Node *temp1 = node, *temp2 = NULL;
        if (index == 0)
        {
            node = node->next;
            return;
        }
        temp1 = node;
        while (index--)
        {
            temp2 = temp1;
            temp1 = temp1->next;
        }
        temp2->next = temp1->next;
        return;
    }
};

int main()
{
    LinkedList list;
    list.insertData(5);
    list.insertData(1);
    list.insertData(6);
    list.insertData(2);
    list.display();
    list.Delete(2);
    list.display();
}