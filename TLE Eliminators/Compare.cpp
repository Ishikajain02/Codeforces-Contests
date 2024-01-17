/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long ans = pow(a,b);
    long long ans2 = pow(c,d);
    if(ans>=ans2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}*/
#include<iostream>
using namespace std;

// Function to calculate power of a^b
long long power(long long a, long long b) {
    long long result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result *= a;
        }
        a *= a;
        b /= 2;
    }
    return result;
}

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long ans = power(a, b);
    long long ans2 = power(c, d);

    if (ans >= ans2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}