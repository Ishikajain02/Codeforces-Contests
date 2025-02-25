#include<iostream>
#include<vector>
using namespace std;
void fn(int &s,int &e,int curr,int& ans){
    if(curr>e){
        return;
    }
    if(curr==e){
        ans++;
        return;
    }
    fn(s,e,curr+1,ans);
    fn(s,e,curr+2,ans);
    fn(s,e,curr+3,ans);
    return;
}
int main(){
    int s,e;
    cin>>s>>e;
    int ans=0;
    fn(s,e,s,ans);
    cout<<ans<<endl;
}