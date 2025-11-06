#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int top_sum(vector<vector<int>>& vc, int n, int m,int i,int j) {
    int ans=0;
   while(i<n && j<m){
         ans+=vc[i][j];
         i++;
         j++;
   }
    return ans;
}
int bottom_sum(vector<vector<int>>& vc, int n, int m,int i,int j) {
    int ans=0;
   while(i>=0 && j>=0){
         ans+=vc[i][j];
         i--;
         j--;
   }
    return ans;
}
int top_right_sum(vector<vector<int>>& vc, int n, int m,int i,int j) {
    int ans=0;
   while(i<n && j>=0){
         ans+=vc[i][j];
         i++;
         j--;
   }
    return ans;
}
int bottom_left_sum(vector<vector<int>>& vc, int n, int m,int i,int j) {
    int ans=0;
   while(i>=0 && j<m){
         ans+=vc[i][j];
         i--;
         j++;
   }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>vc(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>vc[i][j];
            }
        }
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int sum1=top_sum(vc,n,m,i,j);
                int sum2=bottom_sum(vc,n,m,i,j);
                int sum3=top_right_sum(vc,n,m,i,j);
                int sum4=bottom_left_sum(vc,n,m,i,j);
                int total=sum1+sum2+sum3+sum4;
                maxi=max(maxi,total-(3*vc[i][j]));
            }

        }
        cout<<maxi<<endl;


    }
}