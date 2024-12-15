#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>ans(n,0);
    int mode=0;
   set<int>st;
    for(int i=0;i<n;i++){
        cin>>ans[i];
       st.insert(i+1);
       
    }
    vector<int>h(n,0);
    for(int i=0;i<n;i++){
        if(st.find(ans[i])!=st.end()){
          h[i]=ans[i];
          st.erase(ans[i]);
        }
        else{
            h[i]=*st.begin();
            st.erase(h[i]);
        }
        cout<<h[i]<<" ";
    }
    cout<<endl;


   
    }
}