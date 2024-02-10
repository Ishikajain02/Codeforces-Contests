#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<char>vc(n,0);
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            cin>>vc[i];
            mp[vc[i]]++;
        }
        int r=0;
        if(mp.size()==1){
            cout<<"YES"<<endl;
            continue;
        }
        for(auto it:mp){
          if(it.second%2!=0){
            r++;
          }
        }
        if(r-1>k){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;

    }
}