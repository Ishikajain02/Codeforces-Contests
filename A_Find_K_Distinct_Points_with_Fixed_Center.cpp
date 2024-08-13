#include<iostream>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        if(k&2!=0){
            cout<<x<<" "<<y<<endl;
           k--;
        }
        for(int i=1;i<=k/2;i++)cout<<x<<" "<<y-i<<endl;
        for(int i=1;i<=k/2;i++)cout<<x<<" "<<y+i<<endl;
    }
}