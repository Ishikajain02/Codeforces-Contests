/*#include <iostream>
#include <algorithm> // for __gcd
#include<numeric>
using namespace std;
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a%b);
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
       int g= gcd(a,b);
        if (b % a != 0) {
            cout << (b / a) * b << endl; // Corrected: use (b / a) * b
        } else {
            cout << a * b / g << endl; // Corrected: include <algorithm> for __gcd
        }
    }

    return 0;
}
*/
#include <iostream>
#include <algorithm> // for __gcd
#define ll long long;
#include <numeric>
using namespace std;

long long int gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
    cin >> a >> b;
    long long ans = gcd(a,b);
    if (a == 1)
    {
        cout << b * b<<endl;
        continue;
    }
    if (b % a == 0)
    {
        cout << b * (b / a)<<endl;
        continue;
    }
     else cout << b / ans * a<<endl;
    }

    return 0;
}
