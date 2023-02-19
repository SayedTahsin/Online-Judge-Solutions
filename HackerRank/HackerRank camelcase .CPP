#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    string s;
    getline(cin,s);
    for(int i=0;s[i];i++){
        if(s[i]>='A'&&s[i]<='Z')count++;
    }
    cout<<count+1<<endl;
    return 0;
}
