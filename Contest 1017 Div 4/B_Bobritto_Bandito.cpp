#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        int ans=0;
        if(m<=r)
        cout<<"0"<<" "<<m<<endl;
        else cout<<-(m-r)<<" "<<r<<endl;

    }
}