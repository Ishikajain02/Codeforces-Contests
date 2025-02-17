#include<iostream>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int pre1=a,pre2=a+b,pre3=a+b+c;
        int div=n/pre3;
        int mod=n%pre3;
        int ans=0;
        int num=0;
        if(mod>0){
            mod-=pre1;
            num++;
        }
        if(mod>0){
            mod-=b;
            num++;

        }
        if(mod>0){
            mod-=c;
            num++;
        }
       cout<<div*3+num<<endl;

    }
}