#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
string fn(unordered_map<int,int>mp,vector<int>vc,int target,int n){
      for(int i=0;i<n;i++){
        if(mp.find((target-vc[i]))!=mp.end()){
            if((target-vc[i])==vc[i]){
                if(mp[vc[i]]>1)return "YES";
                //else return "NO";
            }
            else return "YES";

        }
    }
    return "NO";
}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>vc(n);
    
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>vc[i];
        mp[vc[i]]++;
    }
    string ans=fn(mp,vc,target,n);
    cout<<ans<<endl;
}