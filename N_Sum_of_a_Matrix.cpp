#include<iostream>
#include<vector>
using namespace std;
void fn(vector<vector<int>> &arr,vector<vector<int>> &arr2,vector<vector<int>> &sum,int n,int m){
    
   if(n==0 && m==0){
       sum[n][m]=arr[n][m]+arr2[n][m];
       return;
   }
    if(n==0){
         fn(arr,arr2,sum,n,m-1);
         sum[n][m]=arr[n][m]+arr2[n][m];
         return;
    }
    if(m==0){
         fn(arr,arr2,sum,n-1,m);
         sum[n][m]=arr[n][m]+arr2[n][m];
         return;
    }
    fn(arr,arr2,sum,n-1,m);
    fn(arr,arr2,sum,n,m-1);
    sum[n][m]=arr[n][m]+arr2[n][m];
    return;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m,0));
    vector<vector<int>> arr2(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr2[i][j];
        }
    }
    vector<vector<int>> sum(n,vector<int>(m,0));
    fn(arr,arr2,sum,n-1,m-1);
    //cout<<sum[n-1][m-1]<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}