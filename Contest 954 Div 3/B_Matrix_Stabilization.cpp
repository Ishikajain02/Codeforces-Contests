#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
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
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               int mx=0;
               if(i>0)mx=max(mx,vc[i-1][j]);
               if(j>0)mx=max(mx,vc[i][j-1]);
               if(i<n-1)mx=max(mx,vc[i+1][j]);
               if(j<m-1)mx=max(mx,vc[i][j+1]);
               if(mx!=0 && vc[i][j]>mx)vc[i][j]=mx;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<vc[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

