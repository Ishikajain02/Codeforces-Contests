#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int m=INT_MIN;
    sort(v.begin(),v.end());
    int c=0;
    for(int i=0;i<n-1;i++){
        if((v[i+1]-v[i])>k)c++;
        else {
            m=max(c,m);
            c=0;
        }
    }
    cout<<m<<endl;
    }
    return 0;
}