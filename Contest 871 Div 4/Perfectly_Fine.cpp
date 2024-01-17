#include<iostream>
#include<climits>
#include<algorithm>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
           int n;
    cin >> n;
    int min_1 = INT_MAX, min_2 = INT_MAX, min_3 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int m;
        string s;
        cin >> m >> s;
        if (s == "10")
            min_1 = min(min_1, m);
        else if (s == "01")
            min_2 = min(min_2, m);
        else if (s == "11")
            min_3 = min(min_3, m);
    }
    if ((min_1 == INT_MAX || min_2 == INT_MAX) && min_3 == INT_MAX)
    {
        cout << -1 << endl;
      //  return;
    }
    else cout << min((min_1 + min_2), min_3) << endl;

    }
    return 0;
}