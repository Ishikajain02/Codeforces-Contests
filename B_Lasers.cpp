#include <iostream>
#include <vector>

void solve() {
    int n, m;
    long long x, y;
    std::cin >> n >> m >> x >> y;
    
    std::vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    
    std::vector<long long> b(m);
    for (int i = 0; i < m; ++i) {
        std::cin >> b[i];
    }
    
    // all of them at least once.
    long long result = (long long)n + m;
    std::cout << result << std::endl;
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