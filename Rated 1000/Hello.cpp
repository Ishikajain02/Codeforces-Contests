#include<iostream>
#include<cctype>
#include<vector>
#include<algorithm>
#include<deque>
using namespace std;
void inp(vector<int>&v){
 for(int i=0;i<3;i++){
        cin>>v[i];
    }
}
int main(){
int n,d;
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
}