#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int zeros = 0, ones = 0;
        for (char c : s) {
            if (c == '0') zeros++;
            else ones++;
        }

        int total_pairs = n / 2;

       
        bool possible = false;

        for (int good = 0; good <= total_pairs; ++good) {
            int bad = total_pairs - good;
            // For good pairs, need 2*good of same kind
            // Try all distributions of good pairs between 0s and 1s
            for (int zero_good = 0; zero_good <= good; ++zero_good) {
                int one_good = good - zero_good;
                int zeros_needed = 2 * zero_good + bad; // bad needs 1 zero
                int ones_needed = 2 * one_good + bad;   // bad needs 1 one
                if (zeros_needed <= zeros && ones_needed <= ones && good == k) {
                    possible = true;
                    break;
                }
            }
            if (possible) break;
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}
