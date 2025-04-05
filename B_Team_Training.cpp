#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<climits>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>vc(n,0);
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            cin>>vc[i];
            pq.push(vc[i]);
        }
       // sort(vc.begin(),vc.end());
        int ans=0;
        int to_be=0;
        int digi=1;
        int prev=INT_MAX;
        //663321
        while(!pq.empty()){
           prev=min(prev,pq.top());//6
            ans=(digi*prev);//6
            digi++;//2
            if(ans>=x){
                to_be++;
                ans=0;
                digi=1;
            }
            pq.pop();
        }
        cout<<to_be<<endl;
    }
}