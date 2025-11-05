#include <iostream>
#include <vector>
#define int long long
using namespace std;

int32_t main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long count = 0;
    long long sum = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {
        sum += a[right];

        // Shrink the window until sum <= x
        while (sum > x && left <= right) {
            sum -= a[left];
            left++;
        }

        // All subarrays ending at 'right' with start from 'left' to 'right' have sum <= x
      int sz= right - left + 1;
        count += (sz*(sz + 1)) / 2; // Count subarrays from left to right
    }

  //  long long total_subarrays = 1LL * n * (n + 1) / 2;
    //long long result = total_subarrays - count;

    cout << count << endl;

    return 0;
}
