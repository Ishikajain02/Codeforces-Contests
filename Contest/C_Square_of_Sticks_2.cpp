#include<iostream>
#include<unordered_map>
#include<vector>
#define int int64_t
using namespace std;
int32_t main(){
    int n;
    cin>>n;
    vector<int>vc(n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>vc[i];
        mp[vc[i]]++;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(auto it:mp){
            if(it.first>=vc[i])cnt+=it.second;
        }
        if(cnt>=4)ans=max((vc[i]*vc[i]),ans);
    }
    cout<<ans<<endl;


}