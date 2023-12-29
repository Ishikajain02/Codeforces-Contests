#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve(){
      vector<pair<int,int>>a;
    vector<pair<int,int>>b;
    vector<pair<int,int>>c;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        a.push_back({val,i});
    }
      for(int i=0;i<n;i++){
        int val;
        cin>>val;
        b.push_back({val,i});
    }
      for(int i=0;i<n;i++){
        int val;
        cin>>val;
        c.push_back({val,i});
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    sort(c.begin(),c.end());
    reverse(c.begin(),c.end());
    int ans=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(a[i].second!=b[j].second  && b[j].second!=c[k].second && c[k].second!= a[i].second){
                    ans = max (ans,a[i].first+b[j].first+c[k].first);
                }
            }
        }
    }
    cout<< ans;
}
int main(){
  
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}