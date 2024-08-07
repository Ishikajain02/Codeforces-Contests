#include<iostream>
#include<vector>
#include<algorithm>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        vector<vector<int>>vc(n,vector<int>(2,0));
        for(int i=0;i<n;i++){
            cin>>vc[i][0]>>vc[i][1];
        }
        sort(vc.begin(),vc.end());
        if(vc[0][0]>=s){
            cout<<"YES"<<endl;
            continue;
        }
       // cout<<vc[0][0]<<endl;
        bool foun=false;
       for(int i=0;i<n-1;i++){
         if(vc[i+1][0]-vc[i][1]>=s){
            cout<<"YES"<<endl;
            foun=true;
            break;
         }
       }
       if(m-vc[n-1][1]>=s && !foun){
        cout<<"YES"<<endl;
        continue;
       }
       if(foun)continue;
       else cout<<"NO"<<endl;
    }
}
