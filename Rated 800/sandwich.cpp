#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int b,c,h;
        cin>>b>>c>>h;
        int val=min(b-1,c+h);
        cout<<(val*2)+1<<endl;
    }
}