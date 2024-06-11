#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
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
       
        for(int j=0;j<n;j++){
         if(j==0 && a[j]==0){
            cnt++;
            ans.push_back(a[j]);
            continue;
        }
         ans.push_back(a[j]);
         sort(ans.begin(),ans.end());
         int sum=0;
         for(int i=0;i<ans.size()-1;i++){
           sum+=a[i];
         }
         
         if(sum==a[ans.size()-1])cnt++;
        }
     
     cout<<cnt<<endl;
    }

}
