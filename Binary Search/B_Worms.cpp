#include<iostream>
#include<vector>
using namespace std;
int binary(vector<int>&vc,int target){
    if(target<vc[0])return 1;
    int start=-1;
    int end=vc.size();
    while(start+1<end){
    int mid=(start+end)/2;
    if(vc[mid]>target)end=mid;
    else start=mid;
    cout<<start<<" "<<end<<endl;
    }
    return start+1;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n,0);
    for(int i=0;i<n;i++)cin>>a[i];
    int m;
    cin>>m;
    vector<int>q(m,0);
    for(int i=0;i<m;i++)cin>>q[i];
    vector<int>pref(n,0);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        pref[i]=sum;
    }
    for(int i=0;i<m;i++){
        cout<<binary(pref,q[i])<<endl;
    }
}