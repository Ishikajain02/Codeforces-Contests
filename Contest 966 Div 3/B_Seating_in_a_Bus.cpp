#include <iostream>
#include <vector>
#include <set>
#define int int64_t
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        bool valid = true;
        set<int> occupied;
        occupied.insert(a[0]); // First passenger can sit anywhere
        
        for (int i = 1; i < n; i++) {
            int seat = a[i];
            // Check if seat has a neighboring seat that is already occupied
            if (!occupied.count(seat - 1) && !occupied.count(seat + 1)) {
                valid = false;
                break;
            }
            occupied.insert(seat);
        }
        
        if (valid) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
