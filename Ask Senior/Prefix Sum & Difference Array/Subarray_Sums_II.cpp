#include<iostream>
#include<vector>
#include<map>
#define int int64_t
using namespace std;
int32_t main(){
    int n;
    cin>>n;
    int sum=0;
    cin>>sum;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++){
        cin>>vc[i];
    }

    map<int,int>mp;
    int ans=0;
    int x=0;
    for(int i=0;i<n;i++){
        x+=vc[i];
        if(x==sum){
            ans++;
        }
        if(mp.find(x-sum)!=mp.end()){
            ans+=mp[x-sum];
        }
       
        mp[x]++;
    }
    cout<<ans<<endl;
}