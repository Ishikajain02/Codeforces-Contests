#include<iostream>
#define int int64_t
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;

        int i = 0, j = 0;
        bool valid = true;

        while (j < s.size()) {
            if (i >= p.size()) {
                valid = false;
                break;
            }

            if (s[j] == p[i]) {
                // Always consume one sound
                j++;

                
                if (j < s.size() && s[j] == p[i]) {
                    j++;
                }

                // Move to next hit in p
                i++;
            } else {
                valid = false;
                break;
            }
        }

        // At the end, make sure all hits from p are used
        if (i != p.size()) valid = false;

        cout << (valid ? "YES" : "NO") << endl;
    }

    return 0;
}
