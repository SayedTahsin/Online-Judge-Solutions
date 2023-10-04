#include <bits/stdc++.h>
using namespace std;
class singleDigit
{
    int n;

public:
    bool isSingle_Digit()
    {
        return n <= 9;
    }
    singleDigit(int value)
    {
        n = value;
    }
    void updateValue()
    {
        int m = 0;
        while (n)
        {
            m += n % 10;
            n /= 10;
        }
        n = m;
    }
    int getValue()
    {
        return n;
    }
};
int main()
{
    int n;
    cin >> n;
    singleDigit newObject(n);
    while (!newObject.isSingle_Digit())
    {
        newObject.updateValue();
    }
    cout << newObject.getValue() << endl;
}