#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        bool ans=false;
        if(a>=b){
            cout<<a<<endl;
            ans=true;
        }
        else if(2*a<=b){
         ans=true;
         cout<<"0"<<endl;
        }
        else {
            for(int i=1;i<=a;i++){
                int dec=2*i;
                if(b-dec<=(a-i)){
                    cout<<a-i<<endl;
                    ans=true;
                    break;
                }
            }
        }
        if(!ans)cout<<"0"<<endl;
    }
}