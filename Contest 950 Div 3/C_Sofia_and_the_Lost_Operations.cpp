#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++)cin>>b[i];
    int m;
    cin>>m;
    vector<int>d(m);
    for(int i=0;i<m;i++)cin>>d[i];
    unordered_map<int,int>mp1;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i])mp1[b[i]]++;
    }
    unordered_map<int,int>mp2;
    for(int i=0;i<m;i++){
        mp2[d[i]]++;
    }
    bool found=true;
    for(auto it:mp1){
        
            if(it.second>mp2[it.first]){
                found=false;
            }
        
    }
    if(count(b.begin(),b.end(),d[m-1])==0)found=false;
    if(found)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

   }
}