#include<iostream>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        string s;
        cin>>s;
        string f="";
      bool ff=true;
      if(d==0){
        s+=(d+'0');
        cout<<s<<endl;
        continue;
      }
       for(int i=0;i<n;i++){
        if( ff && s[i]-'0'<d){
            f+=(d+'0');
            ff=false;
            f+=s[i];
           // cout<<s[i]<<(char)d<<endl;
        }
         else f+=s[i];
       }
       if(ff)f+=(d+'0');
       cout<<f<<endl;
    }
}