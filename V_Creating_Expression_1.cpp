#include<iostream>
#include<vector>
#define int int64_t
using namespace std;
void fn(bool &found,vector<int>&vc,int i,int x,int sum){
    if (found) return;
    if(i>=vc.size()){
        if(sum==x){
            found=true;
            return;
        }
        return;
    }

    fn(found,vc,i+1,x,sum+vc[i]);
    
    fn(found,vc,i+1,x,sum-vc[i]);
}
int32_t main(){
 int n,x;
 cin>>n>>x;
 if (n == 0) {
    cout << (x == 0 ? "YES" : "NO") << endl;
    return 0;
}

    vector<int> v(n,0);
    for(int i=0;i<n;i++)cin>>v[i];
    int i=0;
    //using concept of taking and nottaking
    bool found=false;
    fn(found,v,i,x,0);
    if(found)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}