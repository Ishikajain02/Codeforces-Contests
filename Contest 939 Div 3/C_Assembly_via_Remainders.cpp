#include<iostream>
#include<vector>
#define int int64_t
using namespace std;
int32_t main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>vc(n);
    for(int i=0;i<n-1;i++)cin>>vc[i];
     int curr=1e6;
    cout<<curr<<" ";
   
    for(int i=0;i<n-1;i++){
        cout<<vc[i]+curr<<" ";
        curr+=vc[i];
    }
    cout<<endl;
  }
}