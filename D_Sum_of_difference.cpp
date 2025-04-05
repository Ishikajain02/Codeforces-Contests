#include<iostream>
#include<vector>

#define  int int64_t
using namespace std;
int32_t main(){
int n;
cin>>n;
vector<int>vc(n,0);
for(int i=0;i<n;i++){
    cin>>vc[i];
}
int ans=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        ans+=abs(vc[i]-vc[j]);
    }
}
cout<<ans<<endl;
}