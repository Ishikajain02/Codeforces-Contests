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
   int mo=vc[0]%vc[1];
   for(int i=2;i<n;i++){
    mo%=vc[i];
   }
   sort(vc.rbegin(),vc.rend());
   int mod2=vc[0]%vc[1];
   for(int i=2;i<n;i++){
    mod2%=vc[i];
   }
   if(mo!=0 || mod2!=0){
    cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;

  }
}