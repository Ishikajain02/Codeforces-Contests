#include<iostream>
#include<unordered_set>
using namespace std;
   unordered_set<int>s;
    void split(int x) {
     s.insert(x);
    if (x % 3 == 0)
    {
        split(x / 3);
        split(x / 3 * 2);
    }
    }
     void solve(){
          s.clear();
        int n,m;
        cin>>n>>m;
        split(n);
        if(s.count(m))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }
int main(){
    int t;
    cin>>t;

    
    while(t--){
        solve();
    }
}