#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>vc(n,0);
        for(int i=0;i<n;i++)cin>>vc[i];
        int ans=0;
       int curr=k;
       for(int i=0;i<n;i++){
        if(vc[i]==0){
            while(curr>0 && i<n && vc[i]==0){
                curr--;
                i++;
            }
            
            if(curr==0){
                ans++;
               
            }
             curr=k;
        }
       }
       if(curr==0) ans++;
        cout<<ans<<endl;
    }

}