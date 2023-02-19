#include<bits/stdc++.h>
using namespace std;
int main(){
    int q,j=0;
    string s1="hackerrank",s2;
    cin>>q;
    cin.ignore();
    while(q--){
        j=0;
            cin>>s2;
        for(int i=0;s2[i];i++){
            if(s1[j]==s2[i])j++;
            if(j==10)break;
        }
        if(j==10)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
