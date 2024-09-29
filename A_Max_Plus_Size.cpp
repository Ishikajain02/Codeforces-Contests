#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum1=0,sum2=0;
        int max1=0,max2=0;
        for(int i=0;i<n;){
            max1=max(max1,arr[i]);
          sum1++;
          i+=2;
        }
        for(int i=1;i<n;){
           max2=max(max2,arr[i]);
           sum2++;
           i+=2;
        }
        sum1+=max1;
        sum2+=max2;
        cout<<max(sum1,sum2)<<endl;
    }
}