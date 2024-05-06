#include<iostream>
using namespace std;
int gcd(int val1,int val2){
    int mini=min(val1,val2);
    int ans=0;
    for(int i=1;i<mini;i++){
        if(val1%i==0 && val2%i==0){
            ans=i;
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int val=0;
        int y=0;
        for(int i=1;i<x;i++){
            int op=gcd(x,i);
            if(op+i>=val){
                y=i;
                val=op+i;
            }
        }
        cout<<y<<endl;
    }
}