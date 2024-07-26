#include<iostream>
#include<vector>
#include<algorithm>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>>vc(n);
        
        for(int i=0;i<n;i++)cin>>vc[i].first;
        for(int i=0;i<n;i++)cin>>vc[i].second;
        int ans=0;
        sort(vc.begin(),vc.end());
        for(int i=0;i<n;i++){
            int j=min(m/vc[i].first,vc[i].second);
            ans=max(ans,j*vc[i].first);

        }
        for(int i=0;i<n-1;i++){
         if(vc[i+1].first-vc[i].first>1)continue;
            int curr=m;
            int a=min(curr/vc[i].first,vc[i].second);
            curr-=a*vc[i].first;
            int b=min(curr/vc[i+1].first,vc[i+1].second);
                curr-=b*vc[i+1].first;
            
            int x=min({a,vc[i+1].second-b,curr});
            curr-=x;
            ans=max(ans,m-curr);

        }
        cout<<ans<<endl;
    }
}