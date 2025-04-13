#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#define int int64_t
using namespace std;
int32_t main(){
  int n,m,k;
  cin>>n>>m>>k;
  vector<int>vc(n,0);
  for(int i=0;i<n;i++){
    cin>>vc[i];
  }
  vector<vector<int>>query(m,vector<int>(3,0));
  for(int i=0;i<m;i++){
    cin>>query[i][0]>>query[i][1]>>query[i][2];
  }
  vector<vector<int>>r(k,vector<int>(2,0));
  for(int i=0;i<k;i++){
    cin>>r[i][0]>>r[i][1];
  }
  vector<int>prefix(m,0);
  for(int i=0;i<k;i++){
    int f=r[i][0]-1;
    int s=r[i][1]-1;
    if(s+1<m){
      prefix[s+1]-=1;
    }
    prefix[f]+=1;

  }
 for(int i=1;i<m;i++){
    prefix[i]+=prefix[i-1];
  }
  vector<int>ans(n,0);

  for(int i=0;i<m;i++){
    int l=query[i][0]-1;
    int r=query[i][1]-1;
    int x=query[i][2];
    if(r+1<n){
      ans[r+1]-=(x*prefix[i]);
    }
    ans[l]+=(x*prefix[i]);
  }
    for(int i=1;i<n;i++){
        ans[i]+=ans[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]+vc[i]<<" ";
    }
  cout<<endl;
}