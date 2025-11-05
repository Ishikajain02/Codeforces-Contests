#include <iostream>
#include <vector>
#include <utility>

void solve() {
    int n;
    long long m;
    std::cin >> n >> m;

    std::vector<std::pair<long long, int>> reqs(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> reqs[i].first >> reqs[i].second;
    }

    long long total_points = 0;
    long long current_time = 0;
    int current_side = 0;

    for (int i = 0; i < n; ++i) {
        long long next_time = reqs[i].first;
        int next_side = reqs[i].second;

        long long interval_len = next_time - current_time;
        int side_diff = current_side ^ next_side; 

        long long max_runs_in_interval = interval_len;
        if ((max_runs_in_interval % 2) != side_diff) {
            max_runs_in_interval--;
        }
        
        total_points += max_runs_in_interval;

        current_time = next_time;
        current_side = next_side;
    }

    long long final_interval_len = m - current_time;
    total_points += final_interval_len;

    std::cout << total_points << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}