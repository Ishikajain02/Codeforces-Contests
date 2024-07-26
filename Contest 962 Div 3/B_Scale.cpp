#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<string>dummy(n);
        for(int i=0;i<n;i++)cin>>dummy[i];
        vector<vector<int>>grid(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)grid[i][j]=dummy[i][j]-'0';
        }
        vector<vector<int>>ans;
        for(int i=0;i<n;){
            vector<int>temp;
            for(int j=0;j<n;){
             temp.push_back(grid[i][j]);
             j+=k;
            }
            ans.push_back(temp);
            i+=k;
        }
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j];
            }
            cout<<endl;

        }
    }
}