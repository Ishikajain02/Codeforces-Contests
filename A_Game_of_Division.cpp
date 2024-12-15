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
        bool ans2=false;
        if(n==1){
            cout<<"yes"<<endl<<"1"<<endl;
            continue;
        }
        for(int i=0;i<n;i++){

             bool ans=false;
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if(abs(vc[i]-vc[j])%k==0){
                    cout<<"YES"<<endl;
                    cout<<i+1<<endl;
                    ans=true;
                    ans2=true;
                    break;
                }
            }
            if(ans)break;
        }
        if(!ans2)cout<<"NO"<<endl;
    }
}