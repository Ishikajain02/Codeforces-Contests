#include<iostream>
using namespace std;
void fn(int n,int& cnt){
    if(n==1){
     cnt++;
     return;
    }
    if(n<=0)return;
    if(n%2==0){
        n/=2;
        cnt++;
        fn(n,cnt);
        return;
    }
    if(n%2!=0){
        n=3*n+1;
        cnt++;
        fn(n,cnt);
        return;
    }

}
int main(){
    int n;
    cin>>n;
    int cnt=0;
    fn(n,cnt);
    cout<<cnt<<endl;

}