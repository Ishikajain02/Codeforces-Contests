#include<iostream>
#include<string>
#define int int64_t
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       int fsum=0;
        for(int i=1;i<=n;i++){
            if(i>9){
                string num=to_string(i);
                int sum2=0;
                for(int i=0;i<num.size();i++){
                     sum2+=(num[i]-'0');
                }
                fsum+=sum2;
            }
            else fsum+=i;
        }
        cout<<fsum<<endl;
        /*int s2u=45;
        int div= (n-1)/9;
        int re=(n-1)%9+1;
        int fsum= div*s2u;
        fsum+= (re*(re+1))/2;
        cout<<fsum<<endl;
         int fsum = 0;
        for (int i = 1; i <= n; i++) {
            if (i <= 9) {
                fsum += i;
            } else {
                fsum += sumOfDigits(i);
            }
        }
        cout << fsum << endl;*/
    }
}

