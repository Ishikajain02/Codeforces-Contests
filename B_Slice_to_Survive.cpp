#include <iostream>
using namespace std;

int optimalTurns(int n, int m, int a, int b) {
    int rowCuts = max(a - 1, n - a);
    int colCuts = max(b - 1, m - b);
    return rowCuts + colCuts;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        cout << optimalTurns(n, m, a, b) << endl;
    }
    return 0;
}