#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n,k;
        cin>>m>>n>>k;
        vector<int>bi(m);
        vector<int>ci(n);
        for(int i=0;i<m;i++){
            cin>>bi[i];
        }
        for(int i=0;i<n;i++){
            cin>>ci[i];
        }
        vector<pair<int,int>>ans;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(bi[i]+ci[j]<=k){
                    ans.push_back({i,j});
                }
            }
        }
        cout<<ans.size()<<endl;
    }
}