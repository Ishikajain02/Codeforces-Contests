#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int val1=n*a;
        int val2=(n/2)*b+(n%2)*a;
        if(val2>val1)cout<<val1<<endl;
        else cout<<val2<<endl;
    }
}