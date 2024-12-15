#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string>vc(n);
        for(int i=0;i<n;i++)cin>>vc[i];
        int ans=0;
        for(int i=0;i<n;i++){
          if(vc[i].size()>m)break;
          else {
            ans++;
            m-=vc[i].size();
          }
        }
        cout<<ans<<endl;

    }
}