#include<iostream>
#include<vector>
#include<set>
#define ll long long int
using namespace std;
void solve(){
    ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
         cin>>v[i];
        }
       set<long long>s;
       ll sum=0;
     //  bool flag=false;
       s.insert(0);
       for(long long i=0;i<n;i++){
        if(i%2)sum+=v[i];
        else sum-=v[i];
        if(s.count(sum)){
            cout<<"YES"<<endl;
           // flag=true;
            return;
          //  return 0;
       }
       s.insert(sum);
    }

    cout<<"NO"<<endl;
    
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
}
}