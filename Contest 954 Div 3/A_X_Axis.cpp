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
  for(int i=0;i<m;i++){
    cin>>vc[i];
    d.insert(vc[i]-1);
  }


  string h;
  cin>>h;
  
  sort(h.begin(),h.end());
  int u=0;
  for(auto it:d){
 //   s[*it]=h[u];
   s[it]=h[u];
    u++;
  }
  cout<<s<<endl;
    }
}