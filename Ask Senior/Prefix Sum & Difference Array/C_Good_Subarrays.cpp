#include<iostream>
#include<map>
#include<vector>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        vector<int>vc;
        for(int i=0;i<n;i++){
            vc.push_back(s[i]-'0');
        }
        //um of the element==length
        vector<int>prefix(n,0);
        map<int,int>mp;
        int sum=0;
        mp[0] = 1;
        for(int i=0;i<n;i++){
            sum+=vc[i];
            prefix[i]=sum;
            mp[prefix[i]-i-1]++;
        }
        int ans=0;
        for(auto it:mp){
            int x=it.second;
            ans+=((x*(x-1))/2);
        }
        cout<<ans<<endl;
    }
}