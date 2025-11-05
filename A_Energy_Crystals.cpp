#include <bits/stdc++.h>
using namespace std;

int minActions(int x) {
    int actions = 0;
    vector<int> crystals(3, 0); // All crystals start discharged

    while (crystals[0] < x) {
        actions++;
        // Find optimal charging strategy
        crystals[0]++;
        crystals[1] = max(crystals[1], crystals[0] / 2);
        crystals[2] = max(crystals[2], crystals[1] / 2);
    }

    return actions;
}

int main() {
    

    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        cout << minActions(x) << "\n";
    }

    return 0;
}