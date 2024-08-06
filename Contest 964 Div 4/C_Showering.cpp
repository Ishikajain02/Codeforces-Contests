#include<iostream>
#include<vector>
#include<algorithm>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
   while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        vector<vector<int>> vc(n, vector<int>(2, 0));
        for (int i = 0; i < n; i++) {
            cin >> vc[i][0] >> vc[i][1];
        }
        sort(vc.begin(), vc.end());

        bool found = false;

        // Check gap from start to the first segment
        if (vc[0][0] >= s) {
            cout << "YES" << endl;
            continue;
        }

        // Check gaps between segments
        for (int i = 0; i < n - 1; i++) {
            if (vc[i + 1][0] - vc[i][1] >= s) {
                cout << "YES" << endl;
                found = true;
                break;
            }
        }

        // Check gap from the last segment to the end
        if (!found && m - vc[n - 1][1] >= s) {
            cout << "YES" << endl;
            continue;
        }

        if (!found) {
            cout << "NO" << endl;
        }
    }
    return 0;
}