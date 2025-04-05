#include<iostream>
#include<vector>
#define int int64_t
using namespace std;
void fn(int i,int n,int& maxi,vector<int>&vc){
    if(i>=n)return;
    maxi=max(maxi,vc[i]);
    cout<<maxi<<" ";
    fn(i+1,n,maxi,vc);
}
int32_t main(){
int n;
cin>>n;
vector<int>vc(n,0);
for(int i=0;i<n;i++){
    cin>>vc[i];
}
int maxi=vc[0];
fn(0,n,maxi,vc);
}