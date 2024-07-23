#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=0;
        if(k<=n){
            if(k==0){
                cout<<"0"<<endl;
                continue;
            }
            else {
                cout<<"1"<<endl;
                continue;
            }
        }
        ans++;
        k-=n;
        n--;
        while(k>0){
            k-=n;
            ans++;
            if(k<=0)break;
            k-=n;
            ans++;
            n--;
        }
        cout<<ans<<endl;
    }
}