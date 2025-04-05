#include<iostream>
#include<vector>
#include<algorithm>
#define int int64_t
using namespace std;
int32_t main(){
    int n;
    cin>>n;
    int cnt=0;
    vector<pair<int,int>>vc;
    int val=n;
    while(val--){
        int x,y;
        cin>>x>>y;
        vc.push_back({x,1});
        vc.push_back({y,-1});
    }
    /*sort(vc.begin(),vc.end());
    cnt++;
    for(int i=1;i<n;i++){
        if(vc[i-1].second<vc[i].first || vc[i-1].second<vc[i].second){
            cnt++;
        }
      //  cout<<vc[i-1].second<<" "<<vc[i].first<<endl;
    }
  cout<<cnt<<endl;*/
 int k=vc.size();
 vector<int>pref(k);
 sort(vc.begin(),vc.end());
 pref[0]=vc[0].second;
 int maxi=vc[0].second;
 for(int i=1;i<vc.size();i++){
  pref[i]=pref[i-1]+vc[i].second;
  maxi=max(pref[i],maxi);
 }
cout<<maxi<<endl;
 
}