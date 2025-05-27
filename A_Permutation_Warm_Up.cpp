#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int result = static_cast<int>(std::floor(static_cast<double>(n * n) / 4.0)) + 1;
        std::cout << result << std::endl;
    }
    return 0;
}