#include<iostream>
#include<vector>
#include<climits>
#include<cmath>
#define int int64_t
using namespace std;
int32_t main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
 int ans=0;
 if(n%2==0){
    ans=(n/(k-1));
    if(n%(k-1)!=0) ans++;
 }
 else{
    n-=k;//32
    ans=(n/(k-1));//32/6//5
    ans++;
   if((n)%(k-1)!=0) ans++;//6
 }

cout << ans << endl;
 }
}
