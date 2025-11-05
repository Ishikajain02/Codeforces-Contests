#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; ++i) cin >> p[i];

        // Construct q as [2, 4, 6, ..., 2n]
        for (int i = 1; i <= n; ++i) {
            cout << 2 * i << " ";
        }
        cout << '\n';
    }

    return 0;
}
