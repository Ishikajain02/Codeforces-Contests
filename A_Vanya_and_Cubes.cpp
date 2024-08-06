#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1)cout<<"1"<<endl;
    else{
        int val=0;
        for(int i=1;i<sqrt(n);i++){
          if(pow(2,i)<=n)val=i;
          else break;
        }
        cout<<val<<endl;
    }
}