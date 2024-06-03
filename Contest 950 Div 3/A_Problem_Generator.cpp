#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            char ch;
            cin>>ch;
            mp[ch]++;
        }
        int cnt=0;
        for(auto it:mp){
            if(it.second>=m){
                continue;
            }
            else{
                cnt=cnt+(m-it.second);
            }
        }
        cnt+=((7-mp.size())*m);
       cout<<cnt<<endl;
    
    }
}