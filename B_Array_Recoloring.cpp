#include<iostream>
#include<queue>
#include<map>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
      /*  priority_queue<int>pq;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            pq.push(x);
        }
        int tt=k+1;
        int ans=0;
        while(tt--){
            int x=pq.top();
            pq.pop();
            ans+=x;
        }
  cout<<ans<<endl;*/
  map<int,vector<int>>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x].push_back(i);
    }
    int tt=k+1;
    int ans=0;
    for(auto it=mp.rbegin();it!=mp.rend();it--){
        if(tt==0)break;
        for(auto x:it->second){
            if(tt==0)break;

            ans+=it->first;
            
            tt--;
        }
        
    }

}
}