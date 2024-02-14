#include<iostream>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c0=0,c1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')c0++;
            else c1++;
        }
        int val=min(c0,c1);
        //cout<<val;
        if(val%2==0)cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
    }
}