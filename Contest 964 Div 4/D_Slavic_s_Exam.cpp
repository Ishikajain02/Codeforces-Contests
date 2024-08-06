#include<iostream>
#define int int64_t
using namespace std;

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string t;
        cin>>t;
        int j=0;
        int i=0;
        for(i=0; i<t.size() && j<s.size();){
            if(s[j]==t[i] || s[j]=='?'){
                if(s[j]=='?'){
                    s[j]=t[i];
                }
                j++;
                i++;
            } else {
                j++;
            }
        }
        for(int k=0; k<s.size(); k++){
            if(s[k]=='?'){
                s[k]='a';
            }
        }
        if(i==t.size()){
            cout<<"Yes"<<endl;
            cout<<s<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
