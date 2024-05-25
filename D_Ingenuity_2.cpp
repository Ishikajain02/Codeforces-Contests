#include<iostream>
#include<algorithm>
using namespace std;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        string s2;
        cin>>s2;
        int gcnt=0,bcnt=0;
        int rcnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='R')rcnt++;
            if(s[i]=='G')gcnt++;
            if(s[i]=='B')bcnt++;
        }
        int rcnt1=0,bcnt1=0,gcnt1=0;
        for(int i=0;i<n;i++){
         if(s2[i]=='R')rcnt1++;
            if(s2[i]=='G')gcnt1++;
            if(s2[i]=='B')bcnt1++;
        }
        bool found=true;
        for(int i=0;i<n;i++){
            if(s[i]=='R' && s2[i]!='R'){
                cout<<"NO"<<endl;
                found=false;
                break;
            }
        }
        if(found && (gcnt+bcnt==gcnt1+bcnt1))cout<<"YES"<<endl;
        else if(found) cout<<"NO"<<endl;
   
    }
}