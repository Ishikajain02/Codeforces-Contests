#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string t= "codeforces";
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}