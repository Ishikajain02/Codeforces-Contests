#include<iostream>
#include<vector>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vc(n,0);
        for(int i=0;i<n;i++){
            cin>>vc[i];
        }
      /* int val=vc[0];
        for(int i=1;i<n;i++){
          if(vc[i]>val){
            val=vc[i];
          }
          else{
            
           /* int cnt=2;
            for(int j=vc[i];;){
                if(j>val){
                    val=j;
                //    cout<<val<<endl;
                    break;
                }
                else{
                    j=vc[i]*cnt;
                    cnt++;
                }
                    
            }
            
            int j = vc[i]; // Start with the current value
                while (j <= val) {
                    j += vc[i]; // Increment by the current value
                }
                val = j;
                
          }
        }*/

       // cout<<val<<endl;
       int curr =0;
       int val=0;

       for(auto it:vc){
         curr=curr/it+1;
         curr*=it;   
       }
       cout<<curr<<endl;
    }
}