#include<iostream>
#include<math.h>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int f=0;
     while(x>0 || y>0){
       f++;
       if(y==0){
        x-=15;
        continue;
       }
       if(y==1){
        y-=1;
        x-=11;
        continue;
       }
       x-=7;
       y-=2;
      
     }
     cout<<f<<endl;
    }
}