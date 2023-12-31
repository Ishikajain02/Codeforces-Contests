#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>num(n);
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        long long mul=1;
        for(int i=0;i<n;i++){
            mul*= num[i];
        }
       if(2023%mul==0){
        cout<<"YES"<<endl;
        for(int i=0;i<k-1;i++){
            cout<<1<<" ";
        }
        cout<<2023/mul<<endl;
       }
       else cout<<"NO"<<endl;
    }
}