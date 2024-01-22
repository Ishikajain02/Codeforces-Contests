#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int sum=1,m=1;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=1;i<n;i++){
            if((v[i]-v[i-1])<=k){
                sum++;
            }
            else {
                sum=1;
            }
            m= max(sum,m);
        }
        cout<<v.size()-m<<endl;
    }
}