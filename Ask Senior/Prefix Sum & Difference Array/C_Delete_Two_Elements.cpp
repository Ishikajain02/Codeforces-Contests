#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vc(n,0);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>vc[i];
            sum+=vc[i];
        }
        int target=2*sum;
        for(int i=0;i<n;i++){
            vc[i]=vc[i]*n;
        }
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++){
            if(mp.find(target-vc[i])!=mp.end()){
                ans+=mp[target-vc[i]];
            }
            mp[vc[i]]++;
        }
        cout<<ans<<endl;
       

    }
}