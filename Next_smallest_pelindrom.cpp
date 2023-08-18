//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    vector<int> generateNextPalindrome(int num[], int n)
    {
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            nums[i] = num[i];

        if (n == 1)
        {
            if (nums[0] == 9)
            {
                nums[0] = 1;
                nums.push_back(1);
            }
            else
                nums[0]++;
            return nums;
        }
        int flag = 0, ex = 0;
        for (int i = 0; i < n / 2; i++)
        {
            int j = n - i - 1;
            if (nums[i] > nums[j])
            {
                ex++;
                nums[j] = nums[i];
                flag = 0;
            }
            else if (nums[i] < nums[j])
            {
                ex++;
                nums[j] = nums[i];
                flag = 1;
            }
        }
        for (int i = 0; i < n; i++)
            cout << nums[i] << ' ';
        cout << endl;
        if (flag || !ex)
        {
            int i = n / 2;
            int j = n - i - 1;
            while (1)
            {
                if (nums[i] == 9)
                {
                    nums[i] = 0, nums[j] = 0;
                }
                else
                {
                    if (i == j)
                        nums[i]++;
                    else
                        nums[i]++, nums[j]++;
                    break;
                }
                i++, j--;
                if (j < 0)
                {
                    nums[0] = 1;
                    nums.push_back(1);
                    break;
                }
            }
        }
        return nums;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends