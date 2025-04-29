#include<iostream>
#include<vector>
#include<map>
using namespace  std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<int,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]-'0']++;
        }
        vector<int>vc(10,0);
        if(mp[9]>0){
            vc[0]=9;
            mp[9]--;
            int i=1;
            while(mp[9]>0){
                vc[10-i]=9;
                mp[9]--;
                i++;
            }
           mp.erase(9);
        }
        while(!mp.empty()){
          
        }


    }
}