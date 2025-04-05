//considering prefix sum less than or equal vala
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++){
        cin>>vc[i];
    }
    int ans=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=vc[i];
     //   cout<<sum<<endl;
        if(sum<=x){
            ans++;
        }
    }
    cout<<ans+1<<endl;
}