#include<iostream>
#include<map>
#include<queue>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,vector<int>>mp;
        priority_queue<int>pq;

        for(int i=0;i<k;i++){
            int b,c;
            cin>>b>>c;
            mp[b].push_back(c);
        }
        for(auto it:mp){
            int cost=0;
            for(int i=0;i<it.second.size();i++){
             cost+=it.second[i];
            }
            pq.push(cost);
        }
        int ans=0;
        while(n-- && !pq.empty()){
          ans+=pq.top();
          pq.pop();
        }
        cout<<ans<<endl;
    }
}