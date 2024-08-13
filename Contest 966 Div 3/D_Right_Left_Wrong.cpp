#include<iostream>
#include<vector>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n,0);
        for(int i=0;i<n;i++)cin>>a[i];
        int l=0,r=n-1;
        int ans=0;
        for(int i=0;i<n;i++)ans+=a[i];
        string s;
        cin>>s;
        int f=0;
        while(l<r){
          while(l<r && s[l]!='L'){
          
            ans-=a[l];
              l++;
          }
          while(r>0 && s[r]!='R'){
          
            ans-=a[r];
              r--;
          }
          if(l>=r){
            break;
          }
          f+=ans;
          ans-=a[l];
          ans-=a[r];
          l++;
          r--;

        }
        cout<<f<<endl;
    }
}