#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int val = n%100;
    if(val==0)cout<<"K00"<<endl;
    else cout<<"K"<<val<<endl;
}