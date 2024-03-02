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
        vector<int>vc(n,0);
        for(int i=0;i<n;i++){
            cin>>vc[i];
        }
        sort(vc.begin(),vc.end());
        int j=n-1;
        int l=n-2;
        int i=0;
        int k=1;
        int value = abs(vc[i]-vc[j])+abs(vc[j]-vc[k])+abs(vc[k]-vc[l])+abs(vc[i]-vc[l]);
        cout<<value<<endl;
    }
}