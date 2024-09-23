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
        for(int i=0;i<n;i++){
            cin>>vc[i];
        }
        int gold=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(vc[i]>=k)gold+=vc[i];
            else if(vc[i]==0 && gold>0){
                ans++;
                gold--;
            }
        }
        cout<<ans<<endl;
    }
}