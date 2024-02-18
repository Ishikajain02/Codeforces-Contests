#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     /*  vector<string>vc(8);
       for(int i=0;i<8;i++){
        cin>>vc[i];
       }
       bool ans=false;
       for(int i=0;i<8;i++){
        if(count(vc[i].begin(),vc[i].end(),'R')==8){
            cout<<"R"<<endl;
            ans=true;
            break;
        }
       }
       if(!ans)cout<<"B"<<endl;
       */
      int n;
      cin>>n;
      vector<int>vc(n,0);
      for(int i=0;i<n;i++){
        cin>>vc[i];
      }
      sort(vc.begin(),vc.end());
      bool ans=true;
      for(int i=0;i<n-1;i++){
        if(vc[i]<vc[i+1])continue;
        else {
            ans=false;
            break;
        }
      }
      if(ans)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}