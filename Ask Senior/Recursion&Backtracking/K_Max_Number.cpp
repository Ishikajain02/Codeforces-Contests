#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void fn(vector<int>&vc,int &ans,int n,int i){
    if(i>=n)return;
    if(vc[i]>ans)ans=vc[i];
    fn(vc,ans,n,i+1);
}
int main(){
    int n;
    cin>>n;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++){
        cin>>vc[i];
    }
    int ans=INT_MIN;
    fn(vc,ans,n,0);
    cout<<ans<<endl;

}