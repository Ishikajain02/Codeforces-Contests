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
         map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>vc[i];
            mp[vc[i]]++;
        }
        //cnt no of pairs 
       int ans=0;
       for(auto it:mp){
      //  if(it.second%2==0){
            ans+=it.second/2;

        

       }
       cout<<ans<<endl;

    }
}