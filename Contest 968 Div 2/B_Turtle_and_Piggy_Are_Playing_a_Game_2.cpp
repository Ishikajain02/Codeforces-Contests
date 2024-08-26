#include<iostream>
#include<vector>
#include<algorithm>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int>vc(n,0);
      for(int i=0;i<n;i++)cin>>vc[i];
      sort(vc.begin(),vc.end());
      cout<<vc[n/2]<<endl;
    }
}