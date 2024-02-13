#include<iostream>
#include<vector>
using namespace std;
void solve(){
       int n;
       cin>>n;
        vector<int>vc(n,0);
        for(int i=0;i<n;i++){
            cin>>vc[i];
        }
        for(int j=0;j<n;j++){
            int lf=-1,rf=-1;
         for(int i=0;i<j;i++){
            if(vc[i]<vc[j]){
                lf=i;

              break;
            }
         }
         for(int i=j+1;i<n;i++){
            if(vc[i]<vc[j]){
                rf=i;
                break;
            }
         }
         if(rf!=-1 && lf!=-1){
            cout<<"YES"<<endl;
            cout<<lf+1<<" "<<j+1<<" "<<rf+1<<endl;
            return;
         }
        }
        cout<<"NO"<<endl;
        return ;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}