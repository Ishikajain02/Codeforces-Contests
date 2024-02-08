#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        unordered_map<char,int>mp;
        int n;
        cin>>n;
        vector<int>vc(n,0);
        for(int i=0;i<n;i++){
            cin>>vc[i];
        }
        int val=0;
        for(int i=0;i<n;i++){
            if(vc[i]==0){
            mp[char(97+val)]++;
            cout<<char(97+val);
            val++;
            }
            else{
               for(auto& it:mp){
                if(it.second==vc[i]){
                 cout<<it.first;
                 it.second++;
                 break;
                }
               }
            }
        }
        cout<<endl;
    }
}