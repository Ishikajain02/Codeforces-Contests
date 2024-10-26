#include<iostream>
#include<vector>
using namespace std;
void binary(vector<int>&vc,int target,bool &ans){
    int start=-1,end=vc.size();
    while(end>start+1){
    int mid=(start+end)/2;
    if(vc[mid]==target){
        ans=true;
        return;
    }
    else if(vc[mid]>target)end=mid;
    else start=mid;
    }
    
}
int main(){
    int n;
    cin>>n;
        int q;
    cin>>q;

    vector<int>vc(n,0);
    for(int i=0;i<n;i++)cin>>vc[i];
    while(q--){
        int target;
        cin>>target;
        bool ans=false;
        binary(vc,target,ans);
        if(ans==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
}