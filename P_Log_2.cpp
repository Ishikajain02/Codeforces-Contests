#include<iostream>
#include<math.h>
#define int int64_t
using namespace std;
int32_t main(){
    int n;
    cin>>n;
    int i=0;
    int po=0;
    while(po<n){
        po=pow(2,i);
        i++;
     //   cout<<po<<endl;
    }
   // if(po==n)cout<<i<<endl;
    //else
     cout<<i-1<<endl;
}