#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        char f=a[0];
        a[0]=b[0];
        b[0]=f;
        cout<<a<<" "<<b<<endl;
    }
}