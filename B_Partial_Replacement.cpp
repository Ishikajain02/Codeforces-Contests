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

        int first = -1, last = -1;

        // Find the first and last '*' in the string
        for (int i = 0; i < n; i++) {
            if (s[i] == '*') {
                if (first == -1) first = i;
                last = i;
            }
        }

        if (first == last) {
            // If there's only one '*', we just need to convert it
            cout << "1" << endl;
            continue;
        }

        int ff = 2; // We will at least change the first and last '*'
        s[first] = 'x';
        s[last] = 'x';

        int current = first;
        while (current < last) {
            int next = min(current + k, last);
            bool found = false;
            for (int i = next; i > current; i--) {
                if (s[i] == '*') {
                    ff++;
                    s[i] = 'x';
                    current = i;
                    found = true;
                    break;
                }
            }
            if (!found) {
                break;
            }
        }

        cout << ff << endl;
    }
    return 0;
}