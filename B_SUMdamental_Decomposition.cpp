#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        long long n, x;
        std::cin >> n >> x;
        if (n == 1) {
            std::cout << x << std::endl;
        } else if (n % 2 == 0) {
            if (x == 0) {
                std::cout << n << std::endl;
            } else {
                std::cout << x + n << std::endl;
            }
        } else {
            if (x == 0) {
                std::cout << -1 << std::endl;
            } else {
                std::cout << x + n - 1 << std::endl;
            }
        }
    }
    return 0;
}