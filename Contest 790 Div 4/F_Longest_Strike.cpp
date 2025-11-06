#include<iostream>
#include<vector>
#include<climits>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n,0);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        vector<int>good;
      vector<int>ans={-1,-1};
       
        for(auto &it:mp){
            if(it.second>=k){
                good.push_back(it.first);
            }
        }
                if (good.empty()) {
            cout << "-1" << "\n";
            continue;
        }

        ans[0]=good[0],ans[1]=good[0];
         int l=good[0],r=good[0];
        for(int i=1;i<good.size();i++){
            if(good[i]==good[i-1]+1){
                r=good[i];
            }
            else{
                if(r-l>ans[1]-ans[0]){
                    ans[0]=l;
                    ans[1]=r;
                }
                l=good[i];
                r=good[i];
            }
        }
        if(r-l>ans[1]-ans[0]){
            ans[0]=l;
            ans[1]=r;
        }
        if(ans[0]==-1&&ans[1]==-1){
            cout<<-1<<endl;
        }
        else{
            cout<<ans[0]<<" "<<ans[1]<<endl;
        }

    }
}