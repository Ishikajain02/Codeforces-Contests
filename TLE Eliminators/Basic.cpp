#include<iostream>
#include <cstdint>

using namespace std;
int main(){
 int x1,x2,x3;
 cin>>x1>>x2>>x3;
 int g,s,l;
 if(x1>x2 && x1>x3){
    g=x1;
    if(x2>x3 ){
        s=x2;
        l=x3;
    }
    else{
        s=x3;
        l=x2;
    }
 }
 else if (x2>x3 && x2>x1){
    g=x2;
    if(x1>x3){
        s=x1;
        l=x3;
    }
    else {
        s= x3;
        l= x1;
    }
 }
 else {
    g=x3;
    if(x1>x2){
        s= x1;
        l=x2;
    }
    else{
        s= x2;
        l=x1;
    }
 }
 int sum=0;
 sum= g-s;
 sum+= s-l;
 cout<<sum<<endl;
    return 0;
}