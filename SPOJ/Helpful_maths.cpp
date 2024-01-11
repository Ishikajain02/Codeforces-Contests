#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>v;
    for(int i=0;i<s.length();i++){
    if(s[i]!='+'){
        v.push_back(s[i]);
    }
    }
    sort(v.begin(),v.end());
    string t;
    for(int i=0;i<v.size()-1;i++){
      t+=v[i];
      t+='+';
    }
    t+=v[v.size()-1];
    cout<<t<<endl;
}