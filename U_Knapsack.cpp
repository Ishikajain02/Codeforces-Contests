#include<iostream>
#include<vector>
using namespace std;
void fn(int &maxi,vector<pair<int,int>>&vc,int capacity,int curr,int in){
if(curr>capacity ){
    return;
}

maxi=max(maxi,curr);
fn(maxi,vc,capacity,curr+vc[0].first,in+1);
fn()

}
int main(){
    int n,w;
    cin>>n>>w;
vector<pair<int,int>>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i].first>>arr[i].second;
}
int maxi=0;


}