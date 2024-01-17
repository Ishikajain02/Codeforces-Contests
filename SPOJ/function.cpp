#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    bool t= false;
    long long sum =0;
   /* for(int i=1;i<=n;i++){
      if(!t){
        sum -= i;
        t= true;
      }
      else{
        sum+= i;
        t=false;
      }
      throwing tle

    }*/ 
    if(n%2==0)sum = (n/2);
    else sum = -1*(n+1)/2;
    cout<<sum<<endl;
}