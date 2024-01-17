#include<iostream>
#include<bitset>
#include<algorithm>
using namespace std;
int main(){
    int n;
    int sum =0,prev =0;
    cin>>n;
    while(n--){
        int  a=0,b=0;
        cin>>a>>b;
        
        prev = prev -a;
        
       
        prev += b;
        sum= max(sum,prev);

    }
    cout<<sum<<endl;
    return 0;
}