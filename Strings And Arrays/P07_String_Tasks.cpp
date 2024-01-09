#include<iostream>
using namespace std;
int main(){
    string s;
    string t;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'|| s[i]=='u' || s[i]=='y' || s[i]=='Y' || s[i]=='A' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='E'){
            continue;
        }
        else {
          t+='.';
          t+= tolower(s[i]);
        }
    }
    cout<<t<<endl;
}