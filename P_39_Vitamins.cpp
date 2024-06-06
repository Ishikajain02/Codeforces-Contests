#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<string,int>mp;
    while(n--){
        int num;
        string s;
        cin>>num>>s;
        if(mp.find(s)!=mp.end()){
            mp[s]=min(num,mp[s]);
        }
        else{
            mp[s]=num;
        }

    }
    int ans=0;
    if(mp.find("A")!=mp.end()){
        ans+=mp["A"];
        if(mp.find("BC")!=mp.end()){
            ans+=mp["BC"];
        }
//maxi=min(maxi,ans);
        
    }
}