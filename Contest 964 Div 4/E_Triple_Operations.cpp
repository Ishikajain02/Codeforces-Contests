#include<iostream>
#include<vector>
#define int int64_t
using namespace std;
int32_t cal(int n){
    if(n<3)return 1;
    return 1+cal(n/3);
}
int32_t main(){
    int t;
    cin>>t;
    vector<int>vc(3e5,0);
        vc[1]=1;
        for(int i=2;i<3e5;i++){
            vc[i]=vc[i-1]+cal(i);
        }
    while(t--){
        int l,r;
        cin>>l>>r;
        
        int ans=2*cal(l);
        cout<<ans+(vc[r]-vc[l])<<endl;
    }
}