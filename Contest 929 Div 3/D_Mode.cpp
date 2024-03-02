#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
   int n;
   cin>>n;
   vector<int>vc(n,0);
   for(int i=0;i<n;i++){
    cin>>vc[i];
   }
   
   sort(vc.begin(),vc.end());
   if(vc[0]!=vc[1]){
    cout<<"YES"<<endl;
    continue;
   }
   int i;
   bool f=false;
   for( i=2;i<n;i++){
    if(vc[i]%vc[0]!=0){
        cout<<"YES"<<endl;
        f=true;
        break;
    }
   }
   //if(i==n)cout<<"YES"<<endl;
   if(!f)cout<<"NO"<<endl;
   
  }
}