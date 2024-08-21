#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vc(n,0);
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>vc[i];
            s.insert(vc[i]);
        }
        if(s.size()>2){
            cout<<"NO"<<endl;
            continue;
        }
        int prev=0,curr=0;
        for(auto it:s){
          if(prev==0)prev=it;
          else curr=it;
        }
       // cout<<prev<<" "<<curr;
        if(abs(prev-curr)<=1){
            cout<<"NO"<<endl;
            continue;
        }
        else cout<<"YES"<<endl;
    }
}