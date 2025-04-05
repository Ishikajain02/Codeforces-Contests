#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=2*n-1;
    int w=n;
    while(k>=1){
       
    for(int i=1;i<=n-w;i++){
        cout<<" ";
     }
    
     for(int h=1;h<=k;h++){
         cout<<"*";
     }
     w--;
     k-=2;
     
     cout<<endl;
    }
}