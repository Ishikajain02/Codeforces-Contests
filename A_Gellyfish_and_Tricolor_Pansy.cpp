/*#include<iostream>
#include<vector>
using namespace std;
int main(){

}*/
#include <iostream>
#define int int64_t
using namespace std;

void determine_winner(int a, int b, int c, int d) {
    if (a <= d) {
        cout << "Flower" << endl;
    } else if (b <= c) {
        cout << "Gellyfish" << endl;
    } else {
        cout << "Gellyfish" << endl;
    }
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        determine_winner(a, b, c, d);
    }
    return 0;
}
