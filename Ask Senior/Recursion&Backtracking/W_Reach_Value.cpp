#include<iostream>
#define int int64_t
using namespace std;
bool poss(int n,int curr){
    if(curr>n){
        return false;
    }
    if(curr==n)return true;
    return poss(n,curr*10)||poss(n,curr*20);
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       bool to_be=poss(n,1);
         if(to_be){
              cout<<"YES"<<endl;
         }
         else{
              cout<<"NO"<<endl;
         }
    }
}