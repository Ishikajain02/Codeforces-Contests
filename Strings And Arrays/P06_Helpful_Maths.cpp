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
    string t;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(i==v.size()-1){
         t+=v[i];
        }
        else {
            t+= v[i];
            t+="+";
        }
    }
    cout<<t<<endl;
    return 0;
}