#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<int> vc(n);
        for(int i = 0; i < n; i++){
            cin >> vc[i];
        }

        // Sort descending (most important change)
        sort(vc.rbegin(), vc.rend());

        // Prefix sums
        vector<long long> prefix(n, 0);
        prefix[0] = vc[0];
        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i - 1] + vc[i];
        }

        while(q--){
            long long target;
            cin >> target;

            // Find first prefix >= target
            auto it = lower_bound(prefix.begin(), prefix.end(), target);
            if(it == prefix.end())
                cout << -1 << "\n";
            else
                cout << (it - prefix.begin() + 1) << "\n";
        }
    }
    return 0;
}
