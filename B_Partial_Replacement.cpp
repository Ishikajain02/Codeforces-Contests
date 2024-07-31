#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int idx=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                idx=i;
                // cout<<i<<" ";
                break;
            }
        }
        int ans=0;
        if(idx==-1)cout<<"0"<<endl;
        else{
            for(int i=idx;i<n;){
                if(i==idx){
                    s[i]='x';
                    i+=k;
                    ans++;
                 //  cout<<i<<" ";
                }
               else if(s[i]=='*'){
                s[i]='x';
                i+=k;
                ans++;
                // cout<<i<<" ";
               }
               else{
                  if(s[i-1]=='*'){
                    s[i-1]='x';
                  i+=k-1;
                  ans++;
                  }
               //    cout<<i<<" ";
               }
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='*'){
                s[i]='x';
                ans++;
                break;
                // cout<<i<<" ";
            }
            if(s[i]=='x')break;
        }
        cout<<ans<<endl;
    }
}