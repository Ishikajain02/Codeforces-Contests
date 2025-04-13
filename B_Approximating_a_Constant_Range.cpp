#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<map>
int main(){
    int n;
    cin>>n;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++){
        cin>>vc[i];
    }
    map<int,int>mp;
    int ans=0;
    int left=0;
    for(int right=0;right<n;right++){
        mp[vc[right]]++;
        while(mp.size()>2){
            mp[vc[left]]--;
            if(mp[vc[left]]==0){
                mp.erase(vc[left]);
            }
            left++;
        }
        ans=max(ans,right-left+1);
    }
    cout<<ans<<endl;
}