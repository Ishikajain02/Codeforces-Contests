#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v(3,0);
        for(int i=0;i<3;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int prev=v[0];
        if(v[1]==prev)cout<<v[2]<<endl;
        else if(v[2]==prev)cout<<v[1]<<endl;
        else cout<<prev<<endl;
    }
}