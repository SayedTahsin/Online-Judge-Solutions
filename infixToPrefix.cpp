#include <bits/stdc++.h>
using namespace std;
bool isNotOperator(char ch)
{
    return ch != '+' && ch != '-' && ch != '*' && ch != '/';
}

int precedence(char x)
{
    if (x == '/' || x == '*')
    {
        return 1;
    }
    if (x == '+' || x == '-')
    {
        return 0;
    }
    return -1;
}

string stringReverse(string str)
{
    string res = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        res += str[i];
    }
    return res;
}

int main()
{
    string infix;
    getline(cin, infix);

    for (char &ch : infix)
    {
        if (ch == '(')
        {
            ch = ')';
        }
        else if (ch == ')')
        {
            ch = '(';
        }
    }

    stack<char> st;
    string prefix = "";

    for (int i = infix.length() - 1; i >= 0; i--)
    {
        char ch = infix[i];
        if (isNotOperator(ch))
        {
            prefix += ch;
        }
        else if (ch == '(')
        {
            st.push(ch);
        }
        else if (ch == ')')
        {
            while (st.top() != '(')
            {
                prefix += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && precedence(st.top()) >= precedence(ch))
            {
                prefix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty())
    {
        prefix += st.top();
        st.pop();
    }

    prefix = stringReverse(prefix);
    cout << prefix;

    return 0;
}
