#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    string str,s="";
    cin>>n;
    cin.ignore();
    getline(cin,str);
    cin>>k;
    for(int i=0; str[i]; i++)
    {
        k=k%26;
        if(str[i]>=65 && str[i]<=90)
        {
            if(str[i]+k>90)
                s+= 'A'+(str[i]+k)-91;
            else
                s+=(str[i]+k);
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            if(str[i]+k>122)
                s+= 'a'+(str[i]+k)-123;
            else
                s+=(str[i]+k);
        }
        else
            s+=str[i];
    }
    cout<<s<<endl;
    return 0;
}
