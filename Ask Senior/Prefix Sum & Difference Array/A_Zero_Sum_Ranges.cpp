#include<iostream>
#include<vector>
#include<map>
#define int int64_t
using namespace std;
int32_t main(){
int n;
cin>>n;
vector<int>vc(n,0);
for(int i=0;i<n;i++){
    cin>>vc[i];
}
map<int,int>mp;
int ans=0;
int sum=0;
for(int i=0;i<n;i++){
    sum+=vc[i];
    if(sum==0){
        ans++;
    }
    if(mp.find(sum)!=mp.end()){
        ans+=mp[sum];
    }
    mp[sum]++;
}
cout<<ans<<endl;
}