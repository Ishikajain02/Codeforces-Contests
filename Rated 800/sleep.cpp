#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,h,m;
        cin>>n>>h>>m;
       set<pair<int,int>>mp;
       while(n--){
        int hours,minutes;
        cin>>hours>>minutes;
        mp.insert(make_pair(hours,minutes));
       }
       int x=h;
       int y=m;
       int ans=0;
       while(true){
        if(mp.count(make_pair(x,y))){

            break;
        }
        if(y==59){
            y=0;
            x=(x+1)%24;
        }
        else{
            y++;
        }
        ans++;
       }
       cout<<ans/60<<" "<<ans%60<<endl;

    }
}