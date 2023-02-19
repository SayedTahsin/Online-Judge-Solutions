#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,sum=0;
    cin>>str;
    if(str.size()%3==0)
        for(i=0; i<str.size(); i+=3)
        {
            if(str[i]!='S')
                sum++;
            if(str[i+1]!='O')
                sum++;
            if(str[i+2]!='S')
                sum++;
        }
    cout<<sum<<endl;
    return 0;
}
