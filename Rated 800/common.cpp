#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int>v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       bool f=true;
       int prev =0;
       for(int i=1;i<n;i++){
       prev += v[i-1];
       if(v[i]==prev){
        cout<<"NO"<<endl;
        f=false;
        break;
       }
       
       }
       if(f){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
       }
       

        
    }
}