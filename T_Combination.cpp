#include<iostream>
#define int int64_t
using namespace std;
long long fn(int n,int sum){
    if(n==0){
     return sum;
    }
    sum*=n;
    return fn(n-1,sum);
}
int32_t main(){
    int n,r;
    cin>>n>>r;
    if (r > n) {
        cout << 0 << endl;
        return 0; // nCr is 0 when r > n
    }

    long long n_value=fn(n,1);
    long long r_value=fn(r,1);
    long long n_r_value=fn(n-r,1);
    cout<<n_value/(r_value*n_r_value)<<endl;
}