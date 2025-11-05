#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vc(n,0);
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>vc[i];
            ans=min(ans,vc[i]);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=vc[i]-ans;
        }
        cout<<sum<<endl;

    }
}