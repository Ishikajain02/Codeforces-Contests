#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#define int int64_t
using namespace std;
int32_t main(){
  int t;
  cin>>t;
  while(t--){
    int k;
    cin>>k;
    map<int,int>mp;
    int n=k;
    vector<int>ans(k,0);
    for(int i=0;i<k;i++){
        cin>>ans[i];
        mp[ans[i]]++;
    }
    k-=2;
    sort(ans.begin(),ans.end());
     int start=0,end=n-1;
    while(start<end){
        if(ans[start]*ans[end]>k)end--;
        else if(ans[start]*ans[end]==k){
            cout<<ans[start]<<" "<<ans[end]<<endl;
            break;
        }
        else if(ans[start]*ans[end]<k)start++;
    }
  }
}