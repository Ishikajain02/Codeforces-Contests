#include<iostream>
#include<vector>
#include<deque>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n,0);
        deque<int>d;
        for(int i=0;i<n;i++){
            cin>>a[i];
            d.push_back(a[i]);
        }
        string st;
        cin>>st;
        vector<int>h;
        for(int j=0;j<n;j++){
            int pro=1;
            for(int i=0;i<d.size();i++){
                pro*=(d[i]%m);
            }
           h.push_back(pro%m);
           if(st[j]=='L')d.pop_front();
           else d.pop_back();
        }
        
        for(int i=0;i<h.size();i++){
            cout<<h[i]<<" ";
        }
        cout<<endl;
    }
}