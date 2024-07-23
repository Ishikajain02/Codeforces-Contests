#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
     int n,m;
     cin>>n>>m;
     vector<int>arr(n,0);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     
     sort(arr.begin(),arr.end());
     int left=0;
    
     int maxi=INT_MIN;
     int curr=0;
     for(int right=0;right<n;right++){
     curr+=arr[right];
     while(left<=right && arr[right]-arr[left]>1 ){
        curr-=arr[left];
        left++;
     }
     while(curr>m && left<=right){
        curr-=arr[left];
        left++;
     }
    maxi=max(maxi,curr);
     }
     cout<<maxi<<endl;
    }
}