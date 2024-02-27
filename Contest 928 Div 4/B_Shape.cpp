#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    vector<string>vc(n);
    for(int i=0;i<n;i++){
        
            cin>>vc[i];
        
    }
    bool tri=false;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(vc[i][j]=='1')cnt++;
        }
     // cout<<cnt;
        if(cnt==1)tri=true;
        else if(cnt>1)break;
    }
    reverse(vc.begin(),vc.end());
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(vc[i][j]=='1')cnt++;
            
        }
        if(cnt==1)tri=true;
      else if (cnt>1) break;
    }
    if(tri)cout<<"TRIANGLE"<<endl;
    else cout<<"SQUARE"<<endl;
 }
 return 0;
}