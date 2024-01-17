#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    int l;
    cin>>l;
    int p;
    cin>>p;
    vector<int>p1(p);
    unordered_set<int>se;
    for(int i=0;i<p;i++){
     cin>>p1[i];
     se.insert(p1[i]);
    }
    int q;
    cin>>q;
    vector<int>q1(q);
    for(int i=0;i<q;i++){
        cin>>q1[i];
        se.insert(q1[i]);
    }
  //  unordered_set()
  for(int i=1;i<=l;i++){
    if(se.find(i)!=se.end())continue;
    else {
        cout<<"Oh, my keyboard!"<<endl;
        return 0;
    }
  }
  cout<<"I become the guy."<<endl;
  return 0;
}