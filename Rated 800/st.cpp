#include<iostream>
using namespace std;
int main(){
    int n;
    string t ="";
    cin>>n;
    string demo = "abcd";
    int h=n/4;
   while(h--){
      t+=demo;
   }
   int m = n%4;
   if(m==1){
    t+='a';
   }
   else if (m==2){
    t+="ab";
   }
   else if (m==3){
    t+="abc";
   }
  cout<<t;
}