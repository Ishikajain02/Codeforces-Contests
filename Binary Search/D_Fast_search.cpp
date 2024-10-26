#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binary(vector<int>&vc,int target){
    int start=-1,end=vc.size();
    while(start+1<end){
        int mid=(start+end)/2;
        if(vc[mid]>target)end=mid;
        else start=mid;
    }
    return end;
}
//1 3 4 10 10
//start=0,3;

int main(){
int n;
cin>>n;
vector<int>vc(n,0);
for(int i=0;i<n;i++)cin>>vc[i];
sort(vc.begin(),vc.end());
int k;
cin>>k;
while(k--){
    int l,r;
    cin>>l>>r;
    //l start
    int low=binary(vc,l);
    int high=binary(vc,r);
    cout<<low<<" "<<high<<endl;
    cout<<high-low+1<<endl;
}
}