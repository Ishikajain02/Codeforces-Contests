#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    string final;
    cin>>final;
    vector<int>vc(26,0);
    vector<int>vc2(26,0);
    for(int i=0;i<s.size();i++)vc[s[i]-'A']++;
    for(int j=0;j<t.size();j++)vc[t[j]-'A']++;
    for(int i=0;i<final.size();i++)vc2[final[i]-'A']++;
    if(vc==vc2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}