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
       vector<int>vc(n,0);
       for(int i=0;i<n;i++){
        cin>>vc[i];
       }
       map<int,int>mp;
       for(int i=0;i<n;i++){
        mp[vc[i]]++;
       }
       int maxi=0;
       for(auto it:mp){
        maxi=max(maxi,it.second);
       }
       cout<<n-maxi<<endl;
    }
  
}