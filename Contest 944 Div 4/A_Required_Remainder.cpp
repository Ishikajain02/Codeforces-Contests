#include<iostream>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        int ans=0;
      ans=n%x;
      if(n-ans+y<=n){
        cout<<(n-ans+y)<<endl;
      }

        else{
        cout<< n-ans-x+y<<endl;
        }
        
    }
}