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
        int to=0;
        for(int i=0;i<n;i++){
            cin>>vc[i];
            to+=vc[i];
        }
        int val=to/n;
        int req=0;
        bool bo=true;
      for(int i=0;i<n-1;i++){
        if(vc[i]>val)req+=(vc[i]-val);
        else {
            int m= abs(val-vc[i]);
            if(m<=req){
                req-=m;
            }
            else{
                cout<<"NO"<<endl;
                bo=false;
                break;
        }
        }
      }
        if(bo)cout<<"YES"<<endl;
     //   else cout<<"NO"<<endl;

    }
}