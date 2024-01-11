#include<iostream>
#include<vector>
#include<limits.h>
#include<math.h>
//#include<numbers>
using namespace std;
vector<pair<long long ,long long>>v;
int main(){
    long long a;
    cin>>a;
    if(a==1){
        cout<<"4"<<endl;
        return 0;
    }
    for(long long i=1;i<=sqrt(a);i++){
        if(a%i==0){
            v.push_back({i,a/i});
        
        }
    }
    
    long long m = LLONG_MAX;
    for(long long i=0;i<v.size();i++){
        long long t = 2*(v[i].first+v[i].second);
      //  cout<<v[i].first<<" "<<v[i].second<<endl;
      //cout<<v[i]<<endl;
        m = min(t,m);
    }
    cout<<m<<endl;
    return 0;
    
}