#include<iostream>
#include<vector>
#define int int64_t
using namespace std;
int32_t main(){
    int n;
    cin>>n;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++)cin>>vc[i];
    int half=n/2;
    for(int i=0;i<=half;i++){
        if(vc[i]!=vc[n-1-i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}