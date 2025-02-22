#include<iostream>
#include<vector>
#define int int64_t
using namespace std;
void fn(int &sum,int k,int i,int n,vector<int>&vc){
    if(k<=0)return;
    if(i<0)return;
    sum+=vc[i];
    fn(sum,k-1,i-1,n,vc);

}
int32_t main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++)cin>>vc[i];
    int sum=0;
    fn(sum,k,n-1,n,vc);
    cout<<sum<<endl;
}