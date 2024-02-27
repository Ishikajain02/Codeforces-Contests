#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    /* int n;
     cin>>n;
     vector<char>vc(n,'\0');
     for(int i=0;i<n;i++){
        cin>>vc[i];
     }
     int cnt=1,ans=1;
     for(int i=0;i<n-1;i++){
        if(vc[i]!=vc[i+1] ){
            cnt=1;
            
        }
        else{
            cnt++;
            ans=max(ans,cnt);
        }
        //else if (vc[i]!=vc[i+1] && vc[i])
     }
    
     cout<<ans+1<<endl;*/
     int x,k;
     cin>>x>>k;
     int num=1;
     if(x%k!=0){
        cout<<"1"<<endl;
        cout<<x<<endl;
        continue;
     }
     for(int i=2;i<=x;i++){
        if((x-num)%k!=0 && num%k!=0){
            cout<<i<<endl;
            cout<<x-num<<" "<<num<<endl;
            break;
        }
         num++;
     }
    }
}