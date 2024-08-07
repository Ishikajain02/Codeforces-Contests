#include<iostream>
#define int int64_t
using namespace std;
int32_t score(int a,int b){
if(a<b)return -1;
if(a==b)return 0;
if(a>b)return 1;
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
       int a1,a2,b1,b2;
       cin>>a1>>a2>>b1>>b2;
       int ans=0;
       if(score(a1,b1)+score(a2,b2)>0)ans++;
       if(score(a2,b1)+score(a1,b2)>0)ans++;
       if(score(a1,b2)+score(a2,b1)>0)ans++;
       if(score(a2,b2)+score(a1,b1)>0)ans++;
       cout<<ans<<endl;
       
    }
}