#include<iostream>
#include<vector>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==1){
         for(int i=1;i<=n/2;i++){
            cout<<i<<" ";
         }
         for(int i=n;i>n/2;i--){
            cout<<i<<" ";
         }
         cout<<endl;
        }
        else cout<<"-1"<<endl;
       
    }
}