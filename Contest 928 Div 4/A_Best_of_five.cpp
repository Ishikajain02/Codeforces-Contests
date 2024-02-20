#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int cnt=0,cnt2=0;
        for(int i=0;i<5;i++){
            if(n[i]=='A'){
                cnt++;
            }
            else cnt2++;
        }
        if(cnt>cnt2)cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }
}