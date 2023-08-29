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

int main()
{
    string infix;
    getline(cin, infix);
    stack<char> st;
    string postfix = "";

    for (char ch : infix)
    {
        if (isNotOperator(ch))
        {
            postfix += ch;
        }
        else if (ch == '(')
        {
            st.push(ch);
        }
        else if (ch == ')')
        {
            while (st.top() != '(')
            {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && precedence(st.top()) >= precedence(ch))
            {
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty())
    {
        postfix += st.top();
        st.pop();
    }

    cout << postfix;

    return 0;
}
