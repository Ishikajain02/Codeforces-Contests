#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<char>st;
        for(int i=0;i<s.size();i++)st.insert(s[i]);
        vector<char>vc;
        for(auto it:st){
            vc.push_back(it);
        }
        sort(vc.begin(),vc.end());
        unordered_map<char,char>mp;
        int p1=0,p2=vc.size()-1;
        while(p1<=p2){
         mp[vc[p1]]=vc[p2];
         mp[vc[p2]]=vc[p1];
         p1++;
         p2--;
        }
        string ans="";
        for(auto it:s){
            ans+=mp[it];
        }
        cout<<ans<<endl;
    }
}