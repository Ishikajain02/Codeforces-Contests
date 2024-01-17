#include<iostream>
#include <cstdint>

using namespace std;
int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long ans = a * b * c * d;
    cout << (ans % 100); // Convert to int for printing
    ans = ans / 10;
    // cout << static_cast<int>(ans % 10) << endl; // Convert to int for printing
    return 0;
}