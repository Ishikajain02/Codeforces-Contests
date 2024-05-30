#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    vector<int>vc(n);
    for(int i=0;i<n;i++)cin>>vc[i];
    vector<map<pair<int,int>,vector<int>>>mp(3);
    for(int i=0;i<n-2;i++){
        mp[0][{vc[i],vc[i+1]}].push_back(vc[i+2]);
        mp[1][{vc[i],vc[i+2]}].push_back(vc[i+1]);
        mp[2][{vc[i+1],vc[i+2]}].push_back(vc[i]);
    }
    long long ans=0;
    for(int i=0;i<3;i++){
        for(auto &it:mp[i]){
            long long curr=0;
            map<int,int>ct;
            int m=it.second.size();
             for(int i=0;i<m;i++)ct[it.second[i]]++;
             for(auto j:it.second ){
                curr+=(m-ct[j]);
             }
             ans+=curr/2;

        }
    }
    cout<<ans<<endl;
 }
}