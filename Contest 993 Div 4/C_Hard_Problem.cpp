#include<iostream>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int ans=0;
        int lefta=0,leftb=0;
        int leftc=0;
        if(a>=m){
            lefta=a-m;
            ans+=m;
        }
         if(a<m){
      leftc=m-a;
      ans+=a;
        }
        if(b>=m){
            leftb=b-m;
            ans+=m;
        }
         if(b<m){
            ans+=b;
            leftc+=m-b;
        }
      //  cout<<ans<<leftc<<endl;
        ans+=min(leftc,c);
        cout<<ans<<endl;

    }
}