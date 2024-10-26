#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int binary(vector<int>&x,int val){
    int start=0,end=x.size()-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(x[mid]>val){
            end=mid-1;
        }
        else start=mid+1;
    }
    return start;
}
int main(){
    int n;
    cin>>n;
    vector<int>x(n,0);
    for(int i=0;i<n;i++)cin>>x[i];
    int q;
    cin>>q;
    vector<int>vc(q,0);
    for(int i=0;i<q;i++)cin>>vc[i];
    sort(x.begin(),x.end());
    for(int i=0;i<q;i++)
    cout<<binary(x,vc[i])<<endl;
}