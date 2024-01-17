#include<iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a%b==0){
            cout<<"0"<<endl;
          //  return 0;
        }
      /*  long long moves=1;
        for(long long i=a+1;i<=a+b;i++){
            if(i%b==0){
                break;
            }
            moves++;
        }
        cout<<moves<<endl;*/
       else {

        a= a%b;
        cout<<b-a<<endl;
       // return 0;
       }
    }
    return 0;
}