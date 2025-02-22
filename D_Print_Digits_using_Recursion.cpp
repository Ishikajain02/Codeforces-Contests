#include<iostream>
#define int int64_t
using namespace std;
void print(int n){
    if(n==0)return;
    print(n/10);
    cout<<n%10<<" ";
}
int32_t main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        print(t);
        cout<<endl;
    }
}