#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            cin>>v[i].first>>v[i].second;
        }
        sort(v.begin(),v.end());
       // ordered_set<pair<int,int>>o;
    }
}
