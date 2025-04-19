#include<iostream>
#include<vector>
#include<algorithm>
#define int int64_t
using namespace std;
int32_t main(){
    int n;
    cin>>n;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++){
        cin>>vc[i];
    }
    int m;
    cin>>m;
    vector<int>prefix(n,0);
    prefix[0]=vc[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+vc[i];
    }
    vector<int>s(n,0);
    sort(vc.begin(),vc.end());
    s[0]=vc[0];
    for(int i=1;i<n;i++){
        s[i]=s[i-1]+vc[i];
    }
   
    while(m--){
     int g,l,r;
     cin>>g>>l>>r;
     if(g==1){
            cout<<prefix[r-1]-(l==1?0:prefix[l-2])<<endl;
     }
     else {
            cout<<s[r-1]-(l==1?0:s[l-2])<<endl;
     }
    
    }
   
}