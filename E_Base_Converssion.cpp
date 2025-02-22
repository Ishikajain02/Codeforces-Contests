#include<iostream>
#include<algorithm>
#define int int64_t
using namespace std;
void fn(int n,string f){
    if(n==0){
       // f+="0";
        reverse(f.begin(),f.end());
        cout<<f<<endl;
        return;
    }
    f+=(n%2+'0');
    fn(n/2,f);
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        fn(n,"");
    }
}