#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string f;
    cin>>f;
    int cnt=0,tt=0,mm=0;
    for(int i=0;i<n;i++){
        if(f[i]=='T'){
            tt++;
        }
        else mm++;
    }
    if(mm*2!=tt){
        cout<<"NO"<<endl;
        continue;
    }
    bool b=false;
    for(int i=0;i<n;i++){
        if(f[i]=='T')cnt++;
        else cnt--;
        if(cnt<0){
            cout<<"NO"<<endl;
            b=true;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(f[i]=='T')cnt++;
        else cnt--;
        if(cnt<0){
            cout<<"NO"<<endl;
            b=true;
        }
    }
    if(!b)cout<<"YES"<<endl;

    }
}