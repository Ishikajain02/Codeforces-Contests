#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>semi(n,0);
        bool tt=true;
        for(int i=0;i<n;i++)cin>>semi[i];
        for(int i=0;i<n-1;i++){
            if(abs(semi[i+1]-semi[i])==7 ||abs(semi[i+1]-semi[i])==5 )continue;
            else {
                tt=false;
            }
            
        }
        if(tt)cout<<"YES"<<endl;
        else cout<<"No"<<endl;
    }
}