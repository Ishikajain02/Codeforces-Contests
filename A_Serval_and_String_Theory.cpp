/*#include<iostream>
#include<algorithm>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string d;
        cin>>d;
        if (n == 1) { // Single character cannot be rearranged
            cout << "No" << endl;
            continue;
        }
        string sorted_d = d;  
        sort(sorted_d.begin(), sorted_d.end()); // Get lexicographically smallest version

        if (d == sorted_d) {  
            // Already sorted
            cout << "No" << endl;
        } else {
            // If k > 0, we can swap to make it sorted
            if(k==0 ){
                if(d[0]>=d[n-1])
                cout<<"No"<<endl;
                else cout<<"Yes"<<endl;
                continue;
            }
            cout << "Yes" << endl;
        }
       
    }
}*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool is_universal(const string& s) {
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());
    return s < reversed_s;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if (is_universal(s)) {
            cout << "YES" << endl;
            continue;
        }

        if (k == 0) {
            cout << "NO" << endl;
            continue;
        }

        bool possible = false;
        if(n == 1){
            cout << "NO" << endl;
            continue;
        }

        for (int i = 0; i < (1 << (n * n)); ++i) {
            string temp_s = s;
            int swaps = 0;
            for (int j = 0; j < n * n; ++j) {
                if ((i >> j) & 1) {
                    int index1 = j / n;
                    int index2 = j % n;
                    if (index1 != index2) {
                        swap(temp_s[index1], temp_s[index2]);
                        swaps++;
                    }
                }
            }
            if (swaps / 2 <= k && is_universal(temp_s)) {
                possible = true;
                break;
            }
        }
        
        if(possible){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
