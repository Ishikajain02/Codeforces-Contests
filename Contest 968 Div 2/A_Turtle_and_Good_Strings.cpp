#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n<=1){
            cout<<"No"<<endl;
            continue;
        }
        if(s[0]==s[n-1]){
            cout<<"No"<<endl;
            continue;
        }
        cout<<"Yes"<<endl;
    }
}