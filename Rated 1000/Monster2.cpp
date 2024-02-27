#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int, int>a , pair<int, int>b){
    if(a.first!=b.first)return a.first>b.first;
    else return a.second<b.second;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            int a = data%k;
            if(a==0)a=k;
            p.push_back({a,i});
        }
        sort(p.begin(),p.end(),compare);
        for(auto it:p){
            cout<<it.second+1<<" ";
        }
    }
}