#include<iostream>
#include<vector>
#define int int64_t

using namespace std;
int32_t main(){
int n;
cin>>n;
vector<int>vc(n,0);
for(int i=0;i<n;i++){
    cin>>vc[i];
}
vector<int>prefix_sum(n,0);
prefix_sum[0]=vc[0];
for(int i=1;i<n;i++){
    prefix_sum[i]=vc[i]-vc[i-1];
}
for(auto i:prefix_sum){
    cout<<i<<" ";
}
cout<<endl;
return 0;
}