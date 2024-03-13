#include<iostream>
#include<cctype>
#include<vector>
#include<algorithm>
#include<deque>
#include<climits>
using namespace std;
void inp(vector<int>&v){
 for(int i=0;i<3;i++){
        cin>>v[i];
    }
}
int maxi(vector<int>&v){
    int m=0;
    for(int i=0;i<v.size();i++){
        m=max(m,v[i]);
    }
    return m;
}
void outp(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
/*int n,d;
cin>>n>>d;
vector<int>vc(n,0);
for(int i=0;i<n;i++){
    cin>>vc[i];
}
sort(vc.rbegin(),vc.rend());
deque<int>q;
for(int i=0;i<n;i++){
    q.push_back(vc[i]);
}
int team=0;

while (!q.empty()) {
        int val = (d / (q.front()));
        q.pop_front();
        while (!q.empty() && q.size() >= val && val!=0) {
            q.pop_back();
            val--;
        }
       if(val==0) team++;
    }
cout<<team<<endl;
*/
int t;
cin>>t;
while(t--){
  int a,b,c;
  cin>>a>>b>>c;
  if(a<=max(b,c)){
    cout<<max(b,c)-a+1<<" ";
  }
  else cout<<0<<" ";
  if(b<=max(a,c)){
    cout<<max(a,c)-b+1<<" ";
  }
  else cout<<0<<" ";
  if(c<=max(a,b)){
    cout<<max(a,b)-c+1;
  }
  else cout<<0<<" ";
  cout<<endl;
}

}