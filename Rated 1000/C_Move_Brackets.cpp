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
        int ans=0;
        int op=0;
        for(int i=0;i<n;i++){
            if(op==0 && s[i]==')')ans++;
            else if(s[i]==')')op--;
            else{
                op++;
            }
        }
        cout<<ans<<endl;
    }
}