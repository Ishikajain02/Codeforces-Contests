#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            s[i]='4';
        }
        if(s[i]=='e'){
            s[i]='3';
        }
        if(s[i]=='i'){
            s[i]='1';
        }
        if(s[i]=='o'){
            s[i]='0';
        }
        if(s[i]=='s'){
            s[i]='5';
        }
    }
    cout<<s<<endl;
}