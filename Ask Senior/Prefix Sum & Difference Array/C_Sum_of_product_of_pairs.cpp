#include <vector>
#include <iostream>
#define int int64_t
using namespace std;

const int MOD = 1e9 + 7;

int32_t main() {
    int n;
    cin >> n;
    vector<int> vc(n);
    for (int i = 0; i < n; i++) {
        cin >> vc[i];
        vc[i] %= MOD; // Safe to mod input
    }

    vector<int> prefix(n);
    prefix[0] = vc[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = (prefix[i - 1] + vc[i]) % MOD;
    }

    int last = prefix[n - 1]; // Total sum of all elements
    int ans = 0;

    for (int i = 0; i < n; i++) {
        // Correct modulo subtraction: (last - prefix[i] + MOD) % MOD
        int remain = (last - prefix[i] + MOD) % MOD;
        int contrib = (vc[i] * remain) % MOD;
        ans = (ans + contrib) % MOD;
    }

    cout << ans << endl;
}
