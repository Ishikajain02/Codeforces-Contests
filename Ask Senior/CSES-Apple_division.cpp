#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;
void fn(long long&diff,int n,vector<ll>&vc,int i,ll curr1,ll curr2){
    if(i>n)return;
    if(i==n){
        diff=min(diff,llabs(curr1-curr2));
        return;
    }
    fn(diff,n,vc,i+1,curr1+vc[i],curr2);
    fn(diff,n,vc,i+1,curr1,curr2+vc[i]);

}
int main(){
    int n;
    cin>>n;
    vector<ll>vc(n,0);
    for(int i=0;i<n;i++){
        cin>>vc[i];
    }
    ll grp1=0;
    ll grp2=0;
    long long  diff=LONG_MAX;
    fn(diff,n,vc,0,grp1,grp2);
    cout<<diff<<endl;
}