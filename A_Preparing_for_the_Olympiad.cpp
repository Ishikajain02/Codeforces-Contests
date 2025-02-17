#include<iostream>
#include<vector>
using namespace std;
int  main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n,0);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>b(n,0);
    for(int i=0;i<n;i++)cin>>b[i];
    int val1=0,val2=0;
    val1+=a[n-1];
    for(int i=0;i<n-1;i++){
     if(a[i]>b[i+1]){
        val1+=a[i];
        val2+=b[i+1];
     }
    }
    cout<<val1-val2<<endl;
}
}