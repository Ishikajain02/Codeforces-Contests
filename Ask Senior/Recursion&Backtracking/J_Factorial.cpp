#include<iostream>
using namespace std;
void print(int n,long long ans){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    ans*=n;
    print(n-1,ans);

}
int main(){
    int n;
    cin>>n;
    print(n,1);
}