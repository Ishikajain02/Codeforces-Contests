#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string d;
        cin>>d;
        int ra=0,rb=0;
        bool b=false;
           for(int i=0;i<n;i++){
           if( s[i]=='R'){
            ra++;
           }
        }
        for(int i=0;i<n;i++){
            if(d[i]=='R')rb++;
        }
        for(int i=0;i<n;i++){
           if( s[i]=='R' &&d[i]=='R'){
             continue;
           }
           else if(s[i]=='R'){
            cout<<"NO"<<endl;
            b=true;
            break;
           }
           else if(d[i]=='R'){
            cout<<"NO"<<endl;
            b=true;
            break;
           }
           
        }
       
        if((!b || ra==0 ) && ra==rb)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}