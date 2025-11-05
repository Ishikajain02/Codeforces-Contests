#include <iostream>
using namespace std;

// Reverse simulation function
int find_initial_x(int k, int x) {
    for (int i = 0; i < k; ++i) {
        if (x % 2 == 0) {
            x *= 2;
        } else {
            // Reverse of x = 3 * prev + 1
            if ((x - 1) % 3 == 0) {
                int temp = (x - 1) / 3;
                // Only consider if temp is odd, as 3x + 1 only applied to odd
                if (temp % 2 == 1) {
                    x = temp;
                    continue;
                }
            }
            // Otherwise, reverse even step
            x *= 2;
        }
    }
    return x;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;
        cout << find_initial_x(k, x) << endl;
    }
    return 0;
}
