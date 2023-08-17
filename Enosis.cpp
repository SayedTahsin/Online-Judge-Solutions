#include <bits/stdc++.h>
using namespace std;

int main()
{
    //! Find the second max Element in a Array with only one loop
    // int arr[11] = {1, 4, 5, 3, 5, 2, 6, 2, 1, 6, 7};

    // int mx = arr[0], mx2 = -1;

    // for (int i = 0; i < 11; i++)
    // {
    //     if (arr[i] > mx)
    //     {
    //         mx2 = mx;
    //         mx = arr[i];
    //     }
    //     else if (arr[i] < mx)
    //     {
    //         mx2 = max(mx2, arr[i]);
    //     }
    // }
    // cout << mx2 << endl;

    //! Center aligning a right angled triangle of numbers. the limit will be given for the base level.
    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     int sp = n - i - 1;
    //     while (sp--)
    //         cout << ' ';
    //     for (int j = 1; j <= i * 2 + 1; j++)
    //         cout << "1";
    //     cout << endl;
    // }

    //! Make a one sorted array from two different sorted arrays without sort function
    // int n = 5, m = 6;
    // int arr[n] = {1, 7, 8, 11, 22}, brr[m] = {2, 3, 4, 5, 8, 10};

    // int i = 0, j = 0;
    // int NewArr[n + m];
    // int idx = 0;
    // while (i < n && j < m)
    // {
    //     if (arr[i] < brr[j])
    //         NewArr[idx++] = arr[i++];
    //     else
    //         NewArr[idx++] = brr[j++];
    // }

    // while (i < n)
    //     NewArr[idx++] = arr[i++];
    // while (j < m)
    //     NewArr[idx++] = brr[j++];

    // for (int i = 0; i < n + m; i++)
    //     cout << NewArr[i] << ' ';
    // cout << endl;

    //! Given an array of numbers. Calculate the absolute difference between sum of odd elements and even elements
    // int n = 5;
    // int arr[n] = {1, 7, 8, 11, 22};

    // int ev = 0, od = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] % 2 == 0)
    //         ev += arr[i];
    //     else
    //         od += arr[i];
    // }
    // cout << abs(ev - od) << endl;

    //! Average of an array without max,min
    // int n = 5;
    // int arr[n] = {1, 7, 8, 11, 22};

    // int mn = arr[0], mx = arr[0];
    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += arr[i];
    //     mn = min(mn, arr[i]);
    //     mx = min(mx, arr[i]);
    // }
    // sum -= mn;
    // sum -= mx;
    // cout << fixed << setprecision(20) << (double)sum / (n - 2) << endl;

    //! Counting the number of digits of a number
    // int n = 12354;
    // cout << (int)log10(n) + 1 << endl;
    // int ans = 1;
    // while (n)
    // {
    //     n /= 10;
    //     if (n)
    //         ans++;
    // }
    // cout << ans << endl;

    //! Check a num is palindrome or not
    // int n = 122;
    // int temp = n;
    // int m = 0;
    // while (temp)
    // {
    //     m = m * 10 + (temp % 10);
    //     temp /= 10;
    // }
    // if (n == m)
    //     cout << "YES";
    // else
    //     cout << "NO";

    //! Write the fibonacci sequence using only one loop?

    // int a = 0, b = 1;
    // int n = 10;
    // cout << a << ' ' << b << ' ';
    // for (int i = 2; i < n; i++)
    // {
    //     int c = a + b;
    //     cout << c << ' ';
    //     a = b;
    //     b = c;
    // }
    // cout << endl;

    //! Find out whether the string is an anagram or not.
    // string s = "hello", t = "lloeh";

    // sort(s.begin(), s.end());
    // sort(t.begin(), t.end());
    // if (s == t)
    //     cout << "YES";
    // else
    //     cout << "NO";
    //! second method
    // int count[260] = {0};
    // if (s.length() == t.length())
    // {
    //     for (int i = 0; i < s.length(); i++)
    //     {
    //         count[s[i]]++;
    //         count[t[i]]--;
    //     }
    //     int flag = 1;
    //     for (int i = 0; i < 256; i++)
    //     {
    //         if (count[i] != 0)
    //         {
    //             flag = 0;
    //         }
    //     }
    //     if (flag)
    //         cout << "YES";
    //     else
    //         cout << "NO";
    // }
    // else
    //     cout << "NO";

    //! Checking a string is Pangram or not
    // string s = "hello";

    // int arr[26] = {0};
    // for (int i = 0; s[i]; i++)
    // {
    //     if (s[i] >= 'A' && s[i] <= 'Z')
    //         arr[s[i] - 'A']++;
    //     else if (s[i] >= 'a' && s[i] <= 'z')
    //         arr[s[i] - 'a']++;
    // }
    // int flag = 1;
    // for (int i = 0; i < 26; i++)
    // {
    //     if (arr[i] == 0)
    //         flag = 0;
    // }
    // if (flag)
    //     cout << "YES";
    // else
    //     cout << "NO";

    //! Print repeating elements in an array
    // int arr[5] = {1, 2, 2, 4, 4};

    // map<int, int> mp;
    // for (int i = 0; i < 5; i++)
    //     mp[arr[i]]++;
    // for (auto &x : mp)
    // {
    //     if (x.second > 1)
    //         cout << x.first << endl;
    // }

    //! print 1,2,3 ... 10, 9, 8 ...1 with a single for loop.
    // int x = 1, flag = 1;
    // for (int i = 0; i < 19; i++)
    // {
    //     cout << x << ' ';
    //     if (flag)
    //         x++;
    //     else
    //         x--;
    //     if (x == 11)
    //     {
    //         flag = 0;
    //         x -= 2;
    //     }
    // }
    //-----------------------------
    // int flag = 1;
    // for (int i = 1; i;)
    // {
    //     cout << i << ' ';
    //     if (i == 10)
    //         flag = 0;
    //     if (flag)
    //         i++;
    //     else
    //         i--;
    // }
    // cout << endl;

    //! IP Validation
    // string validIPAddress(string queryIP)
    // {
    //     int ip4 = 0;
    //     int cnt = 0;
    //     for (int i = 0; queryIP[i]; i++)
    //     {
    //         if (queryIP[i] == '.')
    //         {
    //             cnt++;
    //             ip4 = 1;
    //         }
    //         if (queryIP[i] == ':')
    //         {
    //             ip4 = 0;
    //             break;
    //         }
    //     }
    //     if (ip4)
    //     {
    //         if (cnt != 3)
    //             return "Neither";

    //         string s;
    //         for (int i = 0; queryIP[i]; i++)
    //         {
    //             if ((queryIP[i] < '0' || queryIP[i] > '9') && queryIP[i] != '.')
    //                 return "Neither";

    //             if (queryIP[i] == '.')
    //             {
    //                 if (s.empty() || s.length() > 3)
    //                     return "Neither";
    //                 if (s.length() != 1 && s[0] == '0')
    //                 {
    //                     return "Neither";
    //                 }
    //                 int n = stoi(s);
    //                 if (n > 255)
    //                     return "Neither";
    //                 s.clear();
    //             }
    //             else
    //                 s += queryIP[i];
    //         }
    //         if (s.empty() || stoi(s) > 255)
    //             return "Neither";
    //         if (s.length() != 1 && s[0] == '0')
    //             return "Neither";
    //         return "IPv4";
    //     }
    //     else
    //     {
    //         string s;
    //         cnt = 0;
    //         for (int i = 0; queryIP[i]; i++)
    //         {
    //             if ((queryIP[i] >= '0' && queryIP[i] <= '9') || (queryIP[i] >= 'A' && queryIP[i] <= 'F') || (queryIP[i] >= 'a' && queryIP[i] <= 'f') || queryIP[i] == ':')
    //             {
    //                 if (queryIP[i] == ':')
    //                 {
    //                     cnt++;
    //                     if (s.length() > 4 || s.empty())
    //                         return "Neither";
    //                     s.clear();
    //                 }
    //                 else
    //                     s += queryIP[i];
    //             }
    //             else
    //             {
    //                 return "Neither";
    //             }
    //         }
    //         if (s.empty() || s.length() > 4)
    //             return "Neither";
    //         if (cnt == 7)
    //             return "IPv6";
    //         else
    //             return "Neither";
    //     }
    // }
    //! 26. Given a sentence as a string. Reverse the words keep the sequence and output the reversed word string.
    // string str = "I am preparing for Enosis Interview";
    // stringstream s(str);
    // string word;
    // string ans;
    // while (s >> word)
    // {
    //     reverse(word.begin(), word.end());
    //     ans += word + " ";
    // }
    // str = ans;
    // cout << str << endl;

    //-------------------------

    // string s = "I am preparing for Enosis Interview";
    // string tmp, ans;

    // for (int i = 0; s[i]; i++)
    // {
    //     if (s[i] != ' ')
    //         tmp += s[i];

    //     if (s[i] == ' ' || i == s.length() - 1)
    //     {
    //         reverse(tmp.begin(), tmp.end());
    //         ans += tmp + ' ';
    //         tmp.clear();
    //     }
    // }
    // cout << ans << endl;

    //! You are given an array. You have to print the array(without using extra space) after one circular shift.
    // int n = 6;
    // int arr[n] = {0, 1, 2, 3, 4, 5};
    // int shift = 2;
    // for (int i = n - shift; i < n; i++)
    //     cout << arr[i];
    // for (int i = 0; i < n - shift; i++)
    //     cout << arr[i];
    // cout << endl;

    //! Divide a long sentence into multiple sentences with length at most N so that no word is broken in multiple lines.
    // string s = "Hello I am Writting this code for practice";
    // int windowSize = 10;
    // int cur = 0;
    // vector<string> v;
    // string tmp;
    // for (int i = 0; s[i]; i++)
    // {
    //     if (s[i] != ' ')
    //         tmp += s[i];
    //     if (s[i] == ' ' || i == s.length() - 1)
    //     {
    //         v.push_back(tmp);
    //         tmp.clear();
    //     }
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     int x = cur + v[i].length();
    //     if (x <= windowSize)
    //     {
    //         cur += v[i].length();
    //         cout << v[i];
    //         if (cur != windowSize)
    //         {
    //             cur++;
    //             cout << ' ';
    //         }
    //     }
    //     else
    //     {
    //         cout << endl;
    //         cur = v[i].length();
    //         cout << v[i];
    //         if (cur != windowSize)
    //         {
    //             cur++;
    //             cout << ' ';
    //         }
    //     }
    // }
    // cout << endl;



}