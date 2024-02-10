#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
   
    while(t--){
        int n;
        cin>>n;
        vector<int>vc(n,0);
       //  vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            cin>>vc[i];
        }
        int ans=0;
        int curr=0;
        for(int i=0;i<n;i++){
         if(vc[i]==0){
            if(curr!=0){
                curr=0;
                ans++;
            }
         }
         else{
            curr++;
         }

        }
        if(curr!=0){
            ans++;
        }
        ans=min<int>(ans,2);
      cout<<ans<<endl;
    }
}