#include<iostream>
#include<vector>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>vc(n,0);
        for(int i=0;i<n;i++){
            cin>>vc[i];
        }
        int count=0;
       for(int i=0;i<n-1;i++){
         for(int j=i+1;j<n;j++){
            int val= vc[i]+vc[j];
            int val2= abs(vc[i]-vc[j]);
            if(val%x==0 && val2%y==0)count++;
         }
       }
       cout<<count<<endl;
    }
}