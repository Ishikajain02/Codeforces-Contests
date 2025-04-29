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
        vector<int>vc(n,0);
        for(int i=0;i<n;i++)cin>>vc[i];
       //move only and only one element
       //store the next maximum and suffix sum for calculation
       vector<int>suffix(n,0);
         int sum=0;
         for(int i=n-1;i>=0;i--){
             sum+=vc[i];
             suffix[i]=sum;
         }
         int maxi=0;
         vector<int>ans(n,0);
         ans[0]=0;
            for(int i=1;i<n;i++){
                maxi=max(maxi,vc[i-1]);
                ans[i]=maxi;
            }
        for(int i=n-1;i>=0;i--){
            int sum=0;
            if(vc[i]<ans[i]){
               sum+=ans[i];

            }
            else{
                sum+=vc[i];
            }
            if(i!=n-1){
                sum+=suffix[i+1];
            }
            cout<<sum<<" ";
        }
        cout<<endl;

    }
}