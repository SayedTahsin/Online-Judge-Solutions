#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    int arr[130]= {0};
    string s;
    getline(cin,s);
    for(int i=0; s[i]; i++)
    {
        if(s[i]>=65 && s[i]<=90)s[i]=s[i]+32;
        arr[s[i]]++;
    }
    for(int i=97; i<=122; i++)
    {
        if(arr[i]>=1)
            count++;
    }
    if(count==26)
        cout<<"pangram"<<endl;
    else
        cout<<"not pangram"<<endl;
    return 0;
}
