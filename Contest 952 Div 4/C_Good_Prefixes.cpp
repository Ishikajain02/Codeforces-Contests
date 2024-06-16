#include<iostream>
#include<vector>
#include<algorithm>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>a(n,0);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
       // sum+=a[i];
    }
   /* int cnt=0;
    int var=0;
    for(int i=0;i<n;i++){
        if(i==0 && a[i]==0)cnt++;
        else{
            if(var==sum)cnt++;
            var+=a[i];
            sum-=a[i];
            if(var==sum)cnt++;
        }
    }
    cout<<cnt<<endl;
    */
   int cnt=0;
     vector<int>ans;
      // int sum=0;
      int mx=0;
        for(int j=0;j<n;j++){
         mx=max(a[j],mx);
        sum+=a[j];
        if(2*mx==sum)cnt++;
        }
     
     cout<<cnt<<endl;
    }

}
