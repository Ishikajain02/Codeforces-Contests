#include<iostream>
using namespace std;
int main(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int count =0;
    
    for(int i=1;i<=a && i<=b;i++){
        if(x/y*i<=a && x/y*i<=b)count++;
        else break;
    }
    cout<<count<<endl;
}