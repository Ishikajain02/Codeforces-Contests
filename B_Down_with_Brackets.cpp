#include <iostream>
#include <string>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        bool all_open_then_close = true;
        int n = s.size();

        for (int i = 0; i < n - 1; i++) {
            if (s[i] == ')' && s[i + 1] == '(') {
                all_open_then_close = false;
                break;
            }
        }

        if (all_open_then_close)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}

int main() {
    solve();
    return 0;
}
