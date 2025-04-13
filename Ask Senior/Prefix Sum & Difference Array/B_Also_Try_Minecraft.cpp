#include<iostream>
#include<vector>
#define int int64_t
using namespace std;

int32_t main(){
    
        int n, m;
        cin >> n >> m;
        vector<int> vc(n, 0);

        for(int i = 0; i < n; i++){
            cin >> vc[i];
        }

        vector<int> prefix(n, 0); // No need for extra space (n+2)

        for(int i = 1; i < n; i++){
            if(vc[i-1] > vc[i]){
                prefix[i] = prefix[i-1] + (vc[i-1] - vc[i]);
            } else {
                prefix[i] = prefix[i-1];
            }
        }
vector<int>prefix2(n,0);

for(int i = 1; i < n; i++){
    if(vc[i-1] < vc[i]){
        prefix2[i] = prefix2[i-1] + (vc[i] - vc[i-1]);
    } else {
        prefix2[i] = prefix2[i-1];
    }
}
        while(m--){
            int l, r;
            cin >> l >> r;
            l--; r--;  // Convert to zero-based indexing
            if(l<r){
            if(l > 0){
                cout << prefix[r] - prefix[l] << endl;
            } else {
                cout << prefix[r] << endl;
            }
        }
            else{
                if(l > 0){
                cout << prefix2[l] - prefix2[r] << endl;
            } else {
                cout << prefix2[l] << endl;
            }
            }
        }
    
}