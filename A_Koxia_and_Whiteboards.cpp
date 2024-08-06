#include<iostream>
#include<algorithm>
#include<vector>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
     int n,m;
     cin>>n>>m;
     vector<int>a(n,0);
     vector<int>b(m,0);
     for(int i=0;i<n;i++)cin>>a[i];
     for(int i=0;i<m;i++)cin>>b[i];
     sort(a.begin(),a.end());
     
     //int val=min(n,m);
     int ans=0;
     for(int i=0;i<m;i++){
        a[0]=b[i];
        sort(a.begin(),a.end());
     }
     for(int i=0;i<n;i++)ans+=a[i];
     cout<<ans<<endl;
    }
}