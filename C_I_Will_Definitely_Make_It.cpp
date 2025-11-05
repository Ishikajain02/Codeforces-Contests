#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }   
    int ans = 0;
    int sum=0;
    int left=0,right=0;
    int buf=0;
    while(right < n){
       if(sum>x){
         sum-=a[left];
         int no=right-left+2;
         ans+=(no*(no-1))/2;
        left++;
        buf=sum;
        sum=0;
        continue;
       }
       
       else{
           if(sum==0 && buf!=0){
               sum=buf;
               buf=0;
           }
            sum+=a[right];
            right++;

       }
    }
    int b=(right-left+2);
    if(sum!=0)ans+=(b*(b-1))/2;
    cout<<ans<<endl;
}