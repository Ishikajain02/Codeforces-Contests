#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){
        if(toupper(s1[i])==toupper(s2[i])){
           continue;
        }
        else if(toupper(s1[i])<=toupper(s2[i])){
            cout<<"-1";
            return 0;
        }
        else{
            cout<<"1";
            return 0;
        }
    }
    cout<<"0";
}