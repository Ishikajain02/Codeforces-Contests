#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        int iterations = 0;

        while (true) {
            bool decreased = false;
            bool increased = false;

            for (int i = 0; i < n; ++i) {
                if (a[i] > b[i]) {
                    a[i]--;
                    decreased = true;
                    break;  
                }
            }

            for (int i = 0; i < n; ++i) {
                if (a[i] < b[i]) {
                    a[i]++;
                    increased = true;
                    break;
                }
            }

            iterations++;

            if (!decreased) break;  
        }

        cout << iterations << endl;
    }
    return 0;
}
