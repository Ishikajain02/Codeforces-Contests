#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<map>
#include<queue>
#define int int64_t
using namespace std;


int32_t main(){
    int n,q;
    cin>>n>>q;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++){
        cin>>vc[i];
    }
    vector<int>pre(n,0);
    while(q--){
        int l,r;
        cin>>l>>r;
        if(r<n){
            pre[r]-=1;
        }
        pre[l-1]+=1;
    }
    vector<int>demo(n,0);
    for(int i=0;i<n;i++){
        if(i==0){
            demo[i]=pre[i];
        }
        else{
            demo[i]=demo[i-1]+pre[i];
        }
    }
   // priority_queue<int,vector<int>,greater<int>>pq;
   priority_queue<int>pq;
   priority_queue<int>pq2;
   for(int i=0;i<n;i++){
    pq.push(vc[i]);
    pq2.push(demo[i]);
   }
   int ans=0;
   while(!pq.empty() && !pq2.empty()){
    ans+=pq2.top()*pq.top();
   // cout<<pq.top()<<" "<<pq2.top()<<endl;
    pq.pop();
    pq2.pop();
   }
   cout<<ans<<endl;
}