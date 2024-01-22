#include<iostream>
using namespace std;
int main(){
    string p;
    cin>>p;
    bool t= false;
    for(int i=0;i<p.length();i++){
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9'){
            cout<<"YES"<<endl;
            //break;
            t=true;
            break;
        }
       // else cout<<"NO"<<endl;
    }
    if(!t)cout<<"NO"<<endl;
}