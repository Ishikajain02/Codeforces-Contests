#include<iostream>
using namespace std;
#define int int64_t
int ans(){
    int l,r,L,R;
        cin>>l>>r>>L>>R;
       int left=max(l,L);
            int right=min(r,R);
            if(left>right){
                return 1;
            }
            int ans=0;
            ans+=right-left;
            if(min(l,L)<left)ans++;
            if(max(r,R)>right)ans++;
            return ans;
             //no lena dena
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        cout<<ans()<<endl;

        }
    }
