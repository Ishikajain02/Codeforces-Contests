#include<iostream>
#include<vector>
#include<map>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b+c;
        int ans=sum/3;
        if(sum%3!=0){
            cout<<"NO"<<endl;
            continue;
        }
        if(a>ans || b>ans ){
            cout<<"NO"<<endl;
            continue;
        }
        else if(ans>=c)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}