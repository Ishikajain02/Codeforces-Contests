#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
  int n,m,k;
  cin>>n>>m>>k;
  vector<int>vc(n,0);
  for(int i=0;i<n;i++){
    cin>>vc[i];
  }
  map<int,vector<int>>mp;
  int i=0;
  while(m--){
    int li,end,val;
    cin>>li>>end>>val;
    mp[i].push_back(li);
    mp[i].push_back(end);
    mp[i].push_back(val);
    i++;
  }
  while(k--){

  }

}