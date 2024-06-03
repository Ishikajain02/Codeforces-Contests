#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f,k;
        cin>>n>>f>>k;
        vector<int>vc(n,0);
        for(int i=0;i<n;i++)cin>>vc[i];
        int ch=vc[f-1];
        sort(vc.rbegin(),vc.rend());
    
        if(k==n)cout<<"YES"<<endl;
        else if(vc[k-1]==vc[k] && vc[k]==ch){
            cout<<"MAYBE"<<endl;
        }
        else if(vc[k-1]>ch)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}