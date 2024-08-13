#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s=to_string(n);
        if(s.substr(0,2)!="10"){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            if(s.size()==2){
                cout<<"NO"<<endl;
                continue;
            }
            if(s[2]=='0'){
                cout<<"NO"<<endl;
                continue;
            }
            if(s[2]=='1'&& s.size()==3){
                cout<<"NO"<<endl;
                continue;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}