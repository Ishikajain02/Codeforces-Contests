#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string num="";
        bool found=true;
        for(int i=0;i<n-1;i++){
          if(s[i+1]<s[i]){
            cout<<"NO"<<endl;
            found=false;
            break;
          }
        }
        if(found)cout<<"YES"<<endl;
    }
}