#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> vc(n);
        for (int i = 0; i < n; i++) {
            cin >> vc[i];
        }

        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int diff = 0;
                for (int k = 0; k < m; k++) {
                    diff += abs(vc[i][k] - vc[j][k]);
                }
                ans = min(ans, diff);
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
