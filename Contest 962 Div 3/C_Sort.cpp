/*#include<iostream>
#include<vector>
#include<map>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string a,b;
        cin>>a>>b;
        vector<vector<int>>query(q,vector<int>(2,0));
        for(int i=0;i<q;i++){
            cin>>query[i][0]>>query[i][1];
        }
       /* for(int j=0;j<q;j++){
          map<char,int>mp1;
          map<char,int>mp2;
          int ans=0;
          for(int i=query[j][0]-1;i<query[j][1];i++)mp1[a[i]]++;
          for(int i=query[j][0]-1;i<query[j][1];i++)mp2[b[i]]++;
          for(int i=query[j][0]-1;i<query[j][1];i++){
            if(mp2.find(a[i])!=mp2.end()){
               // ans+=abs(mp1[a[i]]-mp2[a[i]]);
             //  cout<<a[i]<<"reached"<<endl;
               mp2[a[i]]--;
               mp1[a[i]]--;
               if(mp2[a[i]]==0)mp2.erase(a[i]);
               if(mp1[a[i]]==0)mp1.erase(a[i]);

            }
            else {
                ans+=mp1[a[i]];
                mp1[a[i]]--;
                 if(mp1[a[i]]==0)mp1.erase(a[i]);
            }
          }
         cout<<ans<<endl;
        }
           for (int j = 0; j < q; j++) {
            int l = query[j][0] - 1;
            int r = query[j][1] - 1;
            map<char, int> mp1, mp2;
            
            for (int i = l; i <= r; i++) {
                mp1[a[i]]++;
                mp2[b[i]]++;
            }
            
            int operations = 0;
            for (char c = 'a'; c <= 'z'; c++) {
                operations += abs(mp1[c] - mp2[c]);
            }
            
            cout << operations / 2 << endl;  // Each difference counts as two operations
        }
    }
}*/
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#define int int64_t
using namespace std;

int32_t main() {
   
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        
        // Prefix frequency arrays
        vector<vector<int>> prefixA(n + 1, vector<int>(26, 0));
        vector<vector<int>> prefixB(n + 1, vector<int>(26, 0));
        
        // Fill prefix frequency arrays
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 26; ++j) {
                prefixA[i + 1][j] = prefixA[i][j];
                prefixB[i + 1][j] = prefixB[i][j];
            }
            prefixA[i + 1][a[i] - 'a']++;
            prefixB[i + 1][b[i] - 'a']++;
        }
        
        while (q--) {
            int l, r;
            cin >> l >> r;
            l--; // convert to 0-based index
            r--; // convert to 0-based index
            
            // Calculate character frequencies in the range [l, r]
            vector<int> freqA(26, 0), freqB(26, 0);
            for (int j = 0; j < 26; ++j) {
                freqA[j] = prefixA[r + 1][j] - prefixA[l][j];
                freqB[j] = prefixB[r + 1][j] - prefixB[l][j];
            }
            
            // Calculate minimum operations
            int operations = 0;
            for (int j = 0; j < 26; ++j) {
                operations += abs(freqA[j] - freqB[j]);
            }
            
            cout << operations / 2 << endl;
        }
    }
    
    return 0;
}
