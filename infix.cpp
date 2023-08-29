#include <bits/stdc++.h>
using namespace std;

bool isDigit(char ch)
{
    return ch >= '0' && ch <= '9';
}

double operation(double u, double v, char ch)
{
    if (ch == '+')
    {
        return u + v;
    }
    if (ch == '-')
    {
        return u - v;
    }
    if (ch == '*')
    {
        return u * v;
    }
    if (ch == '/')
    {
        return u / v;
    }
    return 0.0;
}

int precedence(char ch)
{
    if (ch == '/' || ch == '*')
    {
        return 1;
    }
    if (ch == '+' || ch == '-')
    {
        return 0;
    }
    return -1;
}

int main()
{
     string infix;
     getline( cin, infix);

     stack<double> opn;
     stack<char> opr;

    for (int i = 0; i < infix.length(); i++)
    {
        char ch = infix[i];
        if (isDigit(ch))
        {
            double num = 0.0;
            while (i < infix.length() && isDigit(infix[i]))
            {
                num = num * 10.0 + (infix[i] - '0');
                i++;
            }
            i--;
            opn.push(num);
        }
        else if (ch == '(')
        {
            opr.push(ch);
        }
        else if (ch == ')')
        {
            while (opr.top() != '(')
            {
                double u = opn.top();
                opn.pop();
                double v = opn.top();
                opn.pop();
                char x = opr.top();
                opr.pop();
                opn.push(operation(v, u, x));
            }
            opr.pop();
        }
        else
        {
            while (!opr.empty() && precedence(opr.top()) >= precedence(ch))
            {
                double u = opn.top();
                opn.pop();
                double v = opn.top();
                opn.pop();
                char x = opr.top();
                opr.pop();
                opn.push(operation(v, u, x));
            }
            opr.push(ch);
        }
    }

    while (!opr.empty())
    {
        double u = opn.top();
        opn.pop();
        double v = opn.top();
        opn.pop();
        char x = opr.top();
        opr.pop();
        opn.push(operation(v, u, x));
    }

     cout << opn.top() <<  endl;

    return 0;
}
