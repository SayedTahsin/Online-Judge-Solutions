#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=1,c=1,u=1,s=1,count=0;
    string str;
    char sp[12]= {'!','@','#','$','%','^','&','*','(',')','-','+'};
    cin>>n;
    cin.ignore();
    cin>>str;
    for(int i=0; str[i]; i++)
    {
        if(d)
        {
            if(str[i]>=48 && str[i]<=57)
            {
                d=0;
                continue;
            }
        }
        if(u)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                u=0;
                continue;
            }
        }
        if(c)
        {
            if(str[i]>=97 && str[i]<=122)
            {
                c=0;
                continue;
            }
        }
        if(s)
        {
            for(int j=0; j<12; j++)
            {
                if(str[i]==sp[j])
                {
                    s=0;
                    break;
                }
            }
        }
    }
    count=s+d+c+u;
    n=n+count;
    if(n<6)
        count=count+(6-n);
    cout<<count<<endl;
    return 0;
}
