#include<iostream>
#include<vector>
using namespace std;
int binary(vector<int>&vc,int target){
    int start=-1,end=vc.size();
    while(start+1<end){
     int mid=(start+end)/2;
     if(vc[mid]>target)end=mid;
     else start=mid;
    }
    return start+1;
}
int main(){
    int n;
    cin>>n;
    int q;
    cin>>q;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++)cin>>vc[i];
    while(q--){
        int val;
        cin>>val;
        cout<<binary(vc,val)<<endl;
    }

}