#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int ones=0;
      int zero=0;
      int cut=0;
      for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            if(ones==0){
                zero=0;
                cut++;
                ones++;
            }
            else{
                ones++;
            }
        }
        if(s[i]=='0'){
            if(zero==0){
                ones=0;
                cut++;
                zero++;
            }
            else{
                zero++;
            }
        }
      }
      for(int i=0;i<s.size()-1;i++){
        if(s[i]=='0' && s[i+1]=='1'){
            cut-=1;
            break;
        }
      }
      cout<<cut<<endl;
    }
}