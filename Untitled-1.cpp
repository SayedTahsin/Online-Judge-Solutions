#include <bits/stdc++.h>
using namespace std;

class Node
{
    int val;
    Node *next;
    Node()
    {
        val = 0;
        next = NULL;
    }
}

class LinkedList
{

    Node *head;

    LinkedList()
    {
        head = NULL;
    }
    
    

}

int
main()
{
    // int arr[10] = {12, 4, 2, 3, 1, 5, 12, 34, 2, 3};

    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         if (arr[i] < arr[j])
    //             swap(arr[i], arr[j]);
    //     }
    // }

    // for (int i = 0; i < 10; i++)
    //     cout << arr[i] << ' ';
    // cout << endl;

    // int l = -1, r = 11;
    // int target = 3;
    // while (l + 1 < r)
    // {
    //     int m = (l + r) / 2;
    //     if (arr[m] == target)
    //     {
    //         cout << "Found\n";
    //         break;
    //     }
    //     if (arr[m] < target)
    //         l = m;
    //     else
    //         r = m;
    // }

    
}



// SELECT palyer_id , SUM(score) FROM TABLE1 GROUP BY player_id ORDER BY SUM(score) DESC;  


