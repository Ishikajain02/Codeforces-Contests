#include<iostream>
#include<vector>
#define int int64_t
using namespace std;
void fn(int &sum,int n,int i,int*vc){
    if(i>=n)return;
    sum+=vc[i];
    fn(sum,n,i+1,vc);
}
int32_t main(){
    int n;
    cin>>n;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++)cin>>vc[i];
    int sum=0;
    int *p=vc.data();
    fn(sum,n, 0,p);
    cout<<sum<<endl;

}