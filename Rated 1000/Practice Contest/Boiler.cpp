#include<iostream>
#include<vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  string g;
  cin>>g;
  if(n!=5){
    cout<<"NO"<<endl;
    continue;
  }
  bool b=true;
  int cndT=0,cndu=0,cndm=0,cndi=0,cndr=0;
 for(int i=0;i<n;i++){
    
 if(g[i]=='T') cndT++;
      else if(g[i]=='i') cndi++;
      else if(g[i]=='u') cndu++;
      else if(g[i]=='r') cndr++;
      else if(g[i]=='m') cndm++;
      else if(cndT>1 || cndm>1 || cndu>1 || cndi>1 || cndr>1){
        b=false;
    }
    else b=false;
 }
  if(b)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  }
}