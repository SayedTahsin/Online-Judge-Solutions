#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        cin>>s;
        sort(s.begin(),s.end());
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]==s[i+1])
            {
                s.erase(i,1);
                i=-1;
            }
        }
        cout<<s.size()<<endl;
    }
    return 0;
}
