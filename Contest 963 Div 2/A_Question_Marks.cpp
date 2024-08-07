#include<iostream>
#include<map>
using namespace std;
int main(){
    //4n questions
    // 4 options A B C D and n correct answers 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
       map<char,int>mp;
       for(int i=0;i<s.size();i++){
        mp[s[i]]++;
       }
       for(auto it:mp){
        if(it.second>=n && it.first!='?')ans+=n;
        else if(it.first!='?') ans+=it.second;
       }
       cout<<ans<<endl;
    }
}