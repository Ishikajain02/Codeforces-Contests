#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();){
     if(i<s.length()-2){
    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'  && i==0){
        i=i+3;
       // cout<<" ";
      }
     else if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B' ){
        i=i+3;
        cout<<" ";
      }
       else {
        cout<<s[i];
        i++;
      }
     }
     else{
        cout<<s[i];
        i++;
     }

    }
}