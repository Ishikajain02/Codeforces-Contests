#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define mod2 998244353
#define endl '\n' 
#define sz(x) (int)(x.size())
#define all(x) x.begin(),x.end()
#define print(x) {for(auto v: x) {cout << v<< ' ';} cout << endl;}
#define printp(x) {for(auto v: x) {cout << v.first << ':' << v.second << ' ';} cout << endl;}
#define printv(x) { for (auto v: x){ print(v) }}
 
bool check(multiset<int> &a , vector<int> &b){
    int i = 0 ;
    for (int v: a){
        if (v > b[i])
            return false;
        i++;
    }
    return true;
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        multiset<int> a;
        for (int i=0;i<n;i++)   {
            int x;cin >> x;
            a.insert(x);
        }
        vector<int> b(n);
        for (int &v: b)
            cin >> v;
        sort(all(b));
        int ans = 0;
        while (!check(a , b)){
            a.insert(1);
            ans++;
            a.erase(--a.end());
        }
        
        cout << ans<< endl;
    }
      
    
      
      
      
      
      
    return 0;
}