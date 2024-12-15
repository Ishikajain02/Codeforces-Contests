/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binary(vector<int>&vc,int target){
    int start=0,end=vc.size()-1;
    while(start<end){
        int mid=start+end/2;
        if(vc[mid]>=target){
            end=mid;
        }
        else if(vc[mid]<target){
            start=mid+1;
        }
    }
    return vc.size()-end;
}
int main(){
    int n,q;
    cin>>n>>q;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++)cin>>vc[i];
    vector<int>x(q,0);
    for(int i=0;i<q;i++)cin>>x[i];
    sort(vc.begin(),vc.end());
    int i=0;
    while(q--){
        if(vc[n-1]<x[i]){
          cout<<"0"<<endl;
          continue;
        }
      cout<<binary(vc,x[i])<<endl;
      i++;
    }

}*/
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binary(vector<int>& vc, int target) {
    int start = 0, end = vc.size() - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (vc[mid] >= target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return vc.size() - start;
}

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> vc(n, 0);
    for (int i = 0; i < n; i++) cin >> vc[i];
    vector<int> x(q, 0);
    for (int i = 0; i < q; i++) cin >> x[i];

    sort(vc.begin(), vc.end());
    
    for (int i = 0; i < q; i++) {
        if (vc[n - 1] < x[i]) {
            cout << "0" << endl;
            continue;
        }
        cout << binary(vc, x[i]) << endl;
    }
}

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <climits>

using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_map<string, int> substrings;
    for (int i = 0; i < N; ++i) {
        string sub;
        int cost;
        cin >> sub >> cost;
        substrings[sub] = cost;
    }

    string mainString;
    cin >> mainString;

    int length = mainString.length();
    vector<int> dp(length + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 0; i < length; ++i) {
        if (dp[i] == INT_MAX) continue;
        for (const auto& entry : substrings) {
            const string& sub = entry.first;
            int cost = entry.second;
            if (mainString.substr(i, sub.length()) == sub) {
                dp[i + sub.length()] = min(dp[i + sub.length()], dp[i] + cost);
            }
        }
    }

    if (dp[length] == INT_MAX) {
        cout << "Impossible" << endl;
    } else {
        cout << dp[length] << endl;
    }
    

    return 0;
}
*/
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<math.h>
#include<algorithm>
#include<climits>
#include<iomanip>
using namespace std;

  pair<double, double> r(double px, double py, double x1, double y1, double x2, double y2) {
    double a = y2 - y1;
    double b = x1 - x2;
    double c = x2 * y1 - x1 * y2;
    double d = (a * px + b * py + c) / sqrt(a * a + b * b);
    double nx = px - 2 * d * (a / sqrt(a * a + b * b));
    double ny = py - 2 * d * (b / sqrt(a * a + b * b));
    return {nx, ny};
}

int main() {
    double ar;
    cin >> ar;

    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double s = sqrt(ar);
    vector<pair<double, double>> cr = {
        {0, 0},
        {0, s},
        {s, s},
        {s, 0},
    };

    set<pair<double, double>> pts(cr.begin(), cr.end());

    for (const auto& c : cr) {
        auto [rx, ry] = r(c.first, c.second, x1, y1, x2, y2);
        pts.insert({rx, ry});
    }

    for (const auto& p : pts) {
        cout << fixed << setprecision(2) << p.first << " " << p.second << endl;
    }

    return 0;
}
