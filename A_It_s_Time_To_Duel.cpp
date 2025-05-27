#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n,0);
        for(int i=0;i<n;i++)cin>>a[i];
        //only one and consecutive zero;
        int one=0;
        bool zero=false;
        for(int i=0;i<n;i++){
            if(a[i]==1)one++;
            if(a[i]==0 && i+1<n && a[i+1]==0){
                zero=true;
                break;
            }
        }
       if(one==n || one==0 || zero){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}