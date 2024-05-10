#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
       string demo="";
       for(int i=1;i<s.size();i++)demo+=s[i];
       demo+=s[0];
       if(demo==s)cout<<"NO"<<endl;
       else{
        cout<<"YES"<<endl;
        cout<<demo<<endl;
       }
    }
}