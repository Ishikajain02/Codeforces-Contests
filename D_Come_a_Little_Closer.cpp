#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> monsters(n);
        set<pair<int, int>> monster_set;
        vector<int> xs, ys;

        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            monsters[i] = {x, y};
            xs.push_back(x);
            ys.push_back(y);
            monster_set.insert({x, y});
        }

        if (n == 1) {
            cout << "1\n";
            continue;
        }

        // Get sorted xs and ys for candidate placements
        sort(xs.begin(), xs.end());
        sort(ys.begin(), ys.end());

        vector<int> x_cand, y_cand;
        for (int i = 0; i < min(50, n); ++i) {
            x_cand.push_back(xs[i]);
            y_cand.push_back(ys[i]);
        }
        for (int i = max(0, n - 50); i < n; ++i) {
            x_cand.push_back(xs[i]);
            y_cand.push_back(ys[i]);
        }

        ll min_area = LLONG_MAX;

        // Try all monsters and candidate new positions
        for (int i = 0; i < n; ++i) {
            // Temporarily remove this monster
            vector<pair<int, int>> others;
            for (int j = 0; j < n; ++j) {
                if (j != i) others.push_back(monsters[j]);
            }

            for (int new_x : x_cand) {
                for (int new_y : y_cand) {
                    if (monster_set.count({new_x, new_y}) && make_pair(new_x, new_y) != monsters[i])
                        continue;

                    // Add moved monster
                    others.push_back({new_x, new_y});

                    int min_x = INT_MAX, max_x = INT_MIN;
                    int min_y = INT_MAX, max_y = INT_MIN;

                    for (auto [x, y] : others) {
                        min_x = min(min_x, x);
                        max_x = max(max_x, x);
                        min_y = min(min_y, y);
                        max_y = max(max_y, y);
                    }

                    ll area = 1LL * (max_x - min_x + 1) * (max_y - min_y + 1);
                    min_area = min(min_area, area);

                    others.pop_back(); // Remove moved monster
                }
            }
        }

        cout << min_area << '\n';
    }

    return 0;
}
