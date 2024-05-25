#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int p1,p2,p3;
        cin>>p1>>p2>>p3;
        if((p1+p2+p3)%2!=0)cout<<"-1"<<endl;
        else if(p3>(p1+p2))cout<<p1+p2<<endl;
        else{
            cout<<(p1+p2+p3)/2<<endl;
        }
    }
}