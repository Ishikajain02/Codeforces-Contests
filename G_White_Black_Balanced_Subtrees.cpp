#include <iostream>
#include <vector>
using namespace std;

pair<int,int> dfs(int node, vector<vector<int>>& vc, string &s, int &ans) {
    int black = (s[node-1] == 'B');
    int white = (s[node-1] == 'W');

    for (auto child : vc[node]) {
        pair<int,int> childRes = dfs(child, vc, s, ans);
        black += childRes.first;
        white += childRes.second;
    }

    if (black == white) ans++;
    return make_pair(black, white);
}

int main() {
   

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> vc(n + 1);
        for (int i = 2; i <= n; i++) {
            int x; cin >> x;
            vc[x].push_back(i);
        }
        string s;
        cin >> s;
        int ans = 0;
        dfs(1, vc, s, ans);
        cout << ans << '\n';
    }
}
