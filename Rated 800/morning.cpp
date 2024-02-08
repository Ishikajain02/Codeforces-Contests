#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       string x;
       cin>>x;
       vector<int>n(4,0);
       for(int i=0;i<4;i++){
        n[i]=x[i]-'0';
       }
       int ans=0;
       for(int i=0;i<4;i++){
        if(n[i]==0){
            n[i]=10;
        }
        if(i==0){
            ans+=n[0];
        }
        else {
            ans+= abs(n[i]-n[i-1]);
            ans++;
        }
       }
       cout<<ans<<endl;
    }
}