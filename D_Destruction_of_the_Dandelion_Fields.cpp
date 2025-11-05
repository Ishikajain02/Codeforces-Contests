#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <functional> 

void solve() {
    int n;
    std::cin >> n;
    
    std::vector<long long> evens;
    std::vector<long long> odds;
    
    for (int i = 0; i < n; ++i) {
        long long a;
        std::cin >> a;
        if (a % 2 == 0) {
            evens.push_back(a);
        } else {
            odds.push_back(a);
        }
    }
    
    long long total_cut = 0;
    
    if (odds.empty()) {
        std::cout << 0 << std::endl;
        return;
    }
    
    for (long long e : evens) {
        total_cut += e;
    }
    
    std::sort(odds.begin(), odds.end(), std::greater<long long>());
    
    for (size_t i = 0; i < odds.size(); ++i) {
        if (i % 2 == 0) {
            total_cut += odds[i];
        }
    }
    
    std::cout << total_cut << std::endl;
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