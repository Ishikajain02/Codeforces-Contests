#include <iostream>
#include <vector>
using namespace std;

bool checkArray(const vector<int>& b) {
    for (int i = 1; i < b.size(); i++) {
        if (b[i] == 1 && b[i-1] == 1) {
            return false; // Consecutive 1s found, no valid array 'a' exists
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n-2);
        for (int i = 0; i < n-2; i++) {
            cin >> b[i];
        }

        if (checkArray(b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
