#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
  int n,m;
  cin>>n>>m;
  string s;
  cin>>s;
  vector<int>vc(m,0);
  set<int>d;
 vector<char>ishi;
  for(int i=0;i<m;i++){
    cin>>vc[i];
    d.insert(vc[i]);
  }


  string h;
  cin>>h;
  for(int i=0;i<m;i++)ishi.push_back(h[i]);
  sort(ishi.begin(),ishi.end());
  int u=0;
  for(auto it:d){
    h[it]=ishi[u];
    u++;
  }
  cout<<h<<endl;
    }
}