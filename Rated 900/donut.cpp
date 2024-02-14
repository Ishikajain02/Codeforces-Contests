#include<iostream>
#include<vector>
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
      int k1=1,k2=1;
      for(int i=1;i<n-1;i++){
        if(vc[i]==vc[0]){
            k1++;
        }
        else break;
      }
      for(int j=n-2;j>=0;j--){
        if(vc[j]==vc[n-1])k2++;
        else break;
      }
     // cout<<k1<<k2;
      if(vc[0]==vc[n-1]){
       // cout<<n-2<<endl;
       n=n-(k1+k2);
       cout<<max(0,n)<<endl;
      }
     else{
      int k=max(k1,k2);
       cout<<max(0,n-k)<<endl;
     }

    }
}