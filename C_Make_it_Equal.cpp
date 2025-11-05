#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canMakeEqual(vector<long long>& S, vector<long long>& T, long long k) {
    sort(S.begin(), S.end());
    sort(T.begin(), T.end());

    int n = S.size();
    for (int i = 0; i < n; ++i) {
        if ((S[i] % k) != (T[i] % k)) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> S(n), T(n);
        for (int i = 0; i < n; ++i) cin >> S[i];
        for (int i = 0; i < n; ++i) cin >> T[i];

        if (canMakeEqual(S, T, k))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
