#include<iostream>
#include<vector>
#include<algorithm>
#define int int64_t
using namespace std;
int32_t main(){
    int n,q;
    cin>>n>>q;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++){
        cin>>vc[i];
    }
    vector<int>prefix(n,0);
    prefix[0]=vc[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+vc[i];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        if(l-2>=0){
            cout<<prefix[r-1]-prefix[l-2]<<endl;
        }
        else{
            cout<<prefix[r-1]<<endl;
        }
    }
}
