#include<iostream>
using namespace std;
void fn(int a,int b,int n,int i){
   if(i==n){
    cout<<b<<endl;
    return;
   }

  int c=b;
   //a=b;
   b+=a;
   a=c;
   fn(a,b,n,i+1);//4

}
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"0"<<endl;
        return 0;
    }
    if(n==2){
        cout<<"1"<<endl;
        return 0;
    }
    fn(1,1,n,3);

}