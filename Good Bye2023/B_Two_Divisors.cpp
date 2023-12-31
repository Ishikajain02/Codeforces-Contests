#include<iostream>
#include<math.h>
#include<algorithm>
#include<cmath>
#include<numeric>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a, b;
    cin>>a>>b;
    if(b%a!=0){
        cout<<b/a*b<<endl;
    }
    else cout<<a*b/__gcd(a,b)<<endl;
    }
    return 0;
}