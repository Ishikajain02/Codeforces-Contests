#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vc(2*n,0);
        for(int i=0;i<2*n;i++){
            cin>>vc[i];
        }
        sort(vc.begin(),vc.end());
        int sum=0;
        for(int i=0;i<2*n;i+=2){
         sum+=min(vc[i],vc[i+1]);
        }
        cout<<sum<<endl;
    }
}