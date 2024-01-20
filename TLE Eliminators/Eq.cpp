#include<iostream>
#include<vector>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
    int k;
    cin>>k;
    vector<int>a(k);
    for(int i=0;i<k;i++){
        cin>>a[i];
    }
    int sum=0;
     for(int i=0;i<k-1;i++){
        if(a[i]%2==a[i+1]%2)sum++;
     }
     cout<<sum<<endl;
    }
    return 0;
}