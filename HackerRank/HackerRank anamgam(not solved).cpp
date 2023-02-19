Not solved
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
void sortString(string &str,int a,int b)
{
   sort(str[a], str[b]);
   return ;
}
using namespace std;
int main(){
    int count,x,q;
    string s;
    cin>>q;
    cin.ignore();
    while(q--){
        cin>>s;
        count=0;
        x=s.size();
            sortString(s,0,(x/2)-1);
            sortString(s,x/2,x-1]);
        for(int i=0,j=x/2;i<x/2;i++,j++){
            if(s[i]!=s[j])count++;
        }
        /*
        if(x%2!=0) cout<<"-1"<<endl;
        else{
            for(int i=0;i<x/2;i++){
                for(int j=x/2;j<x;j++){
                    if(s[i]==s[j]){
                        count++;
                        break;
                     }
            }
        }
        cout<<(x/2)-count<<endl;
    }*/
    cout<<count<<endl;
}
return 0;
}
