#include<iostream>
#include<string>
#define int int64_t
using namespace std;
const int MAX = 2*10e5;
int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int res[MAX];
int32_t main(){
    int t;
    cin>>t;
    res[0]=0;
    for(int i=1;i<MAX;i++){
        res[i]=res[i-1]+sumOfDigits(i);
    }
    while(t--){
      int n;
      cin>>n;
      cout<<res[n]<<endl;
    }
}

