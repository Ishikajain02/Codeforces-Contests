#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min_deletions(vector<int>& a) {
    int n = a.size();
    int ans = n; // worst case: delete all

    // Try all pairs (i, j) for min and max
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int mini = min(a[i], a[j]);
            int maxi = max(a[i], a[j]);

            if ((mini + maxi) % 2 == 0) {
                // Count how many elements NOT between i and j
                int deletions = 0;
                for (int k = 0; k < n; k++) {
                    if (a[k] < mini || a[k] > maxi) deletions++;
                }
                ans = min(ans, deletions);
            }
        }
    }

    return ans;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) cin >> x;
        cout << min_deletions(a) << '\n';
    }
}

int main() {
    solve();
    return 0;
}
