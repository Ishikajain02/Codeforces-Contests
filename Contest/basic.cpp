#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std;

#define mod 1000000007
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    int size = 2 * n;
    vector<int> arr(2 * n);
    vector<int> left, right;
    set<int> leftst, rightst;
    for (int i = 0; i < 2 * n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) {
        left.push_back(arr[i]);
        leftst.insert(arr[i]);
    }
    for (int i = 0; i < n; i++) {
        right.push_back(arr[2 * n - 1 - i]);
        rightst.insert(arr[2 * n - 1 - i]);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        while (leftst.find(left.back()) == leftst.end()) {
            left.pop_back();
        }
        while (rightst.find(right.back()) == rightst.end()) {
            right.pop_back();
        }
        if (left.back() > right.back()) {
            cnt += *leftst.rbegin();
            cout<<*leftst.rbegin()<<" ";
            leftst.erase(*leftst.rbegin());
            rightst.erase(right.back());
            right.pop_back();
        } else {
            cnt += *rightst.rbegin();
            cout<< *rightst.rbegin()<<" ";
            rightst.erase(*rightst.rbegin());
            leftst.erase(left.back());
            left.pop_back();
        }
    }
    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
