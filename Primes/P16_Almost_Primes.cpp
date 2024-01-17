#include<iostream>
using namespace std;
 int main(){
    int n;
    int x;
    cin>>n>>x;
    int count =0;
    for(int i=1;i<=n;i++){
        if(x%i==0){
        for(int j=1;j<=n;j++){
            if((i*j)==x){
                count++;
            }
        }
        }
    }
    cout<<count<<endl;
    return 0;
 }