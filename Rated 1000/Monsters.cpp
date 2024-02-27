#include<iostream>
#include<vector>
#include<climits>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,int>mp;
        vector<int>vc(n,0);
        for(int i=0;i<n;i++){
            cin>>vc[i];
        }
        for(int i=0;i<n;i++){
            mp.insert({i+1,vc[i]});
        }
        
        while(!mp.empty()){
            int m=INT_MIN;
            for(auto it:mp){
                m=max(it.second,m);
                cout<<m;
            }
            for(auto it:mp){
                if(it.second==m){
                    it.second-=k;
                    if(it.second<=0){
                        cout<<it.first<<" ";
                        mp.erase(it.first);
                        break;
                    }
                }
            }
        }
    }
}