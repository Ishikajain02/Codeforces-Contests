#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int m = 2 * n;
        vector<vector<int>> G(n, vector<int>(n));
        unordered_map<int, unordered_set<int>> diag;

        // Track all seen numbers
        vector<bool> seen(m + 1, false);

        // Build diag map and mark seen numbers
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j) {
                int val;
                cin >> val;
                G[i][j] = val;
                diag[i + j].insert(val);
                seen[val] = true;
            }

        vector<int> p(m);

        // Fill p[1] to p[2n - 1] (indices from 1 to 2n)
        for (int k = 1; k < m; ++k) {
            p[k] = *diag[k - 1].begin(); // (i + j = k - 1) → p[k]
        }

        // Find the missing number (p[0])
        for (int i = 1; i <= m; ++i) {
            if (!seen[i]) {
                p[0] = i;
                break;
            }
        }

        // Output
        for (int i = 0; i < m; ++i)
            cout << p[i] << " ";
        cout << "\n";
    }

    return 0;
}
