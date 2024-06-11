#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int maxi = 0;
        int num = 0;

        for (int i = 2; i <= n; i++) {
            int sum = 0;
            for (int j = 1; j * i <= n; j++) {
                sum += j * i;
            }
            if (sum > maxi) {
                maxi = sum;
                num = i;
            }
        }
        cout << num << endl;
    }
    return 0;
}
