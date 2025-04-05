#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#define int int64_t
using namespace std;
void fn(int n,int m,int i,int j,vector<vector<int>> &arr,int sum,int &ans){
    if(i==n-1 && j==m-1){
        ans=max(ans,sum+arr[i][j]);
        return;
    }
    if(i>=n || j>=m){
        return;
    }
    sum+=arr[i][j];
    fn(n,m,i+1,j,arr,sum,ans);
    fn(n,m,i,j+1,arr,sum,ans);
}
int32_t main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int ans=INT_MIN;
    fn(n,m,0,0,arr,0,ans);
    cout<<ans<<endl;
}