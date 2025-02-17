#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        //if we find any two consecutive alphabets then ans is 1 else s.size()
        bool fiound=false;
        for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            fiound=true;
            break;
        }
        }
        if(fiound){
            cout<<"1"<<endl;
        }
        else cout<<s.size()<<endl;
    }
}