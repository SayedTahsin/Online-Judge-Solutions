#include<bits/stdc++.h>
#define lln long long int
using namespace std;
int main(){
    lln n,arr[11],total=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total+=arr[i];
    }
    cout<<total<<endl;
}
