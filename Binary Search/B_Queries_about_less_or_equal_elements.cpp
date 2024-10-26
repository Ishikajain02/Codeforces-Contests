#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binary(vector<int>&vc,int val){
    int start=-1,end=vc.size();
    while (start+1<end)
    {
        int mid=(start+end)/2;
        if(vc[mid]>val)end=mid;
        else start=mid;
        /* code */

    }
    return start+1;
}
int main(){
int n;
cin>>n;
int k;
cin>>k;
vector<int>vc(n,0);
for(int i=0;i<n;i++)cin>>vc[i];
sort(vc.begin(),vc.end());
while(k--){
    int val;
    cin>>val;
    cout<<binary(vc,val)<<" ";
}
}