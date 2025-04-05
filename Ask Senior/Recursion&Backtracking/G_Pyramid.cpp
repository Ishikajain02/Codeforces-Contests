#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=1;
    int w=1;
    while(k<=2*n){
       
        for(int i=1;i<=n-w;i++){
           cout<<" ";
        }
       
        for(int h=1;h<=k;h++){
            cout<<"*";
        }
        w++;
        k+=2;
        
        cout<<endl;
    }
}