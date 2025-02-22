#include<iostream>
#include<vector>
#define int int64_t
using namespace std;
void fn(int n,int i ,vector<int>&vc,bool &found,int sum,int k){
    if(i>=n)return;
    if(sum>k)return;
    if(sum==k){
        cout<<"YES"<<endl;
        found=true;
        return;
    }
    if(found)return;
    fn(n,i+1,vc,found,sum+vc[i],k);
    fn(n,i+1,vc,found,sum-vc[i],k);
}
int32_t main(){
  int n,x;
  cin>>n>>x;
  vector<int>vc(n,0);
  for(int i=0;i<n;i++)cin>>vc[i];
   int sum=0;
   bool found=false;
   fn(n,1,vc,found,sum,x);
   if(!found)cout<<"NO"<<endl;
}