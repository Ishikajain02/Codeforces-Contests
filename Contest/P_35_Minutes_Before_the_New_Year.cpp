#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        h=23-h;
        m=60-m;
        cout<<h*60+(m)<<endl;
    }
}