#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int moves,height;
       cin>>moves>>height;
       if(height>moves)cout<<"No"<<endl;
       else if(height==moves)cout<<"Yes"<<endl;
       else{
        if((moves-height)%2==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
       } 
    }
}