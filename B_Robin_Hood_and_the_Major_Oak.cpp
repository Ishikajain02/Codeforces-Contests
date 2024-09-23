#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=0;
        ans+=pow(n,n);
        bool found=false;
        while(k--){
        ans+=pow(k,k);
        if(ans%2==0){
            cout<<"Yes"<<endl;
            found=true;
            break;
        }

        }
      // if(ans%2==0)cout<<"Yes"<<endl;
       if(!found) cout<<"No"<<endl;
    }
}