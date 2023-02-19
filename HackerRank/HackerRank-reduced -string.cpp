#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=1; i<s.length(); i++)
    {
        if(s[i]==s[i-1])
        {
            s.erase(i-1,2);
            i=0;
        }
    }
    if(s.length()==0)
        cout<<"empty string";
    else
        cout <<s;
    return 0;
}
