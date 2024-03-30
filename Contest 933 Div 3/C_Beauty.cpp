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
        int val=0;
        for(int i=0;i<n-2;i++){
            if(s.substr(i,5)=="mapie"){
                val++;
                s[i+2]='?';
            }
           else if(s.substr(i,3)=="map"|| s.substr(i,3)=="pie" ){
                val++;
                s[i+1]='?';
            }
        }
        cout<<val<<endl;
    }
}