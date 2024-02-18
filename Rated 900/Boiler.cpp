#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++){
        cin>>vc[i];
    }
    sort(vc.begin(),vc.end());
    int s=0;
    int ans=0;
    while(m--){
        if(vc[s]<0){
        ans+=abs(vc[s]);
        s++;
        }
    }
    cout<<ans;
}