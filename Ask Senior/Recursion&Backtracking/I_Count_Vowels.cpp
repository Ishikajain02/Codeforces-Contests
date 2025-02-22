#include<iostream>
using namespace std;
void print(string s,int &ans,int i){
    if(s.size()==i){
        //cout<<ans;
        return;
    }
    if (s[i] != ' ') {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            ans++;
        }
    }
    print(s,ans,i+1);
    
}
int main(){
    string s;
    getline(cin,s);
    int ans=0;
    print(s,ans,0);
    cout<<ans<<endl;
}