#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        vector<int>a(n,0);
        int total=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            total+=a[i];
        }

        int odd=0,even=0;
        int ans=0;
        for(int i=0;i<n;i++){
            //if(a[i]==1)ans+=1;
            if(a[i]%2!=0){
                odd++;
                ans+=(a[i]-1);
        even+=((a[i])/2);
            }
            else{
             ans+=a[i];
             even+=(a[i]/2);
            } 
        }
    
        int remain=(r)-even;
       if(remain>odd)ans+=min(odd,remain);
       
        cout<<ans<<endl;

    }
}