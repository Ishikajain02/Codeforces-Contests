#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
// PBDS / Ordered Set
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
#define pbds tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
 
int main(){
     ll n;
    cin >> n;
 
    pbds p;
 
    vector<pair<ll, ll>> a (n);
 
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
 
        p.insert(a[i].second);
    }
 
    sort(a.begin(), a.end());
 
    ll ans = 0;
 
    for (ll i = 0; i < n; i++)
    {
        p.erase(a[i].second);
 
        ll sa = p.order_of_key(a[i].second);
 
        ans += sa;
    }
    
    cout << ans << "\n";
    }
