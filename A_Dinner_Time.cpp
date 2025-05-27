#include<iostream>
#include<algorithm>
#include<vector>
#include <cmath>
using namespace std;
bool check(int n, int m, int p, int q) {
    vector<double> a(n, 0.0);

    for (int i = 0; i <= n - p; ++i) {
        for (int j = 0; j < p; ++j) {
            a[i + j] += (double)q / p;
        }
    }

    double sum = 0;
    for (double val : a) sum += val;

    double scale = (double)m / sum;
    for (int i = 0; i < n; ++i) {
        a[i] *= scale;
    }

    for (int i = 0; i <= n - p; ++i) {
        double winSum = 0;
        for (int j = 0; j < p; ++j) {
            winSum += a[i + j];
        }
        if (fabs(winSum - q) > 1e-6) return false;
    }

    double total = 0;
    for (double val : a) total += val;
    if (fabs(total - m) > 1e-6) return false;

    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, p, q;
        cin >> n >> m >> p >> q;
        
        if (check(n, m, p, q))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}