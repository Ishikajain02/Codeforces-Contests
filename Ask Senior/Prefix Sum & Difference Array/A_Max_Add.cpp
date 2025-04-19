#include<iostream>
#include<vector>
#define int int64_t
using namespace std;
int32_t main(){
    int n;
    cin>>n;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++)cin>>vc[i];
    vector<int>prefix(n,0);
    prefix[0]=vc[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+vc[i];
    }
    vector<int>prefix2(n,0);
  prefix2[0]=prefix[0];
    for(int i=1;i<n;i++){
        prefix2[i]=prefix2[i-1]+prefix[i];
    }
    int ans=0;
    int maxi=vc[0];
    for(int i=0;i<n;i++){
     ans+=prefix2[i];
    // cout<<ans<<endl;
     maxi=max(maxi,vc[i]);
   //  cout<<maxi<<endl;
        ans+=(i+1)*maxi;
        cout<<ans<<endl;
        ans=0;
    }
   // cout<<ans<<endl;

}