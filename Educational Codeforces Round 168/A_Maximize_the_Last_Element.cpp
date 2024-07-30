#include<iostream>
#include<vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++)cin>>vc[i];
    int ans=0;
    ans=max(vc[0],vc[n-1]);
    for(int i=0;i<n;i++)
    if(i%2==0)ans=max(ans,vc[i]);
   // ans=max(ans,vc[n/2]);
    cout<<ans<<endl;
  }
}