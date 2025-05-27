#include <iostream>
#include <vector>
#define int int64_t
using namespace std;

int maxArrays(const vector<int>& a) {
    int n = a.size();
    int count = 0;
    int i = 0;

    while (i < n) {
        count++;           // Start a new array
        int val = a[i];    // Start with current value
        // Skip all elements ≤ val + 1 (they cannot start a new array)
        while (i < n && a[i] <= val + 1) {
            i++;
        }
    }
    return count;
}

int32_t main() {
  

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        cout << maxArrays(a) << '\n';
    }
    return 0;
}
