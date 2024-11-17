#include<iostream>
#include<vector>
#include<climits>
#include<queue>
#define int int64_t
using namespace std;
int32_t main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>dist(n,LONG_MAX);
    vector<int>ways(n,0);
    int mod=1e9+7;
     ways[0]=1;
     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
     pq.push({0,0});
     while(!pq.empty()){
        int d=pq.top().first;
        int node=pq.top().second;
        pq.pop();
        for(size_t i=0;i<adj[node].size();i++){
            if(d+1<dist[adj[node][i]]){
              dist[adj[node][i]]=d+1;
              pq.push({d+1,adj[node][i]});
              ways[adj[node][i]]=ways[node];
            }
            else if(d+1==dist[adj[node][i]]){
                ways[adj[node][i]]=(ways[adj[node][i]]+ways[node])%mod;
            }
        }
     }
     cout<<ways[n-1]%mod<<endl;
}