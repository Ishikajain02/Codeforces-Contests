#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int r = n/2;
        string s,x;
        cin>>x>>s;
        int count=0;
        bool b = false;
        while(x.size()<100){
             if (x.find(s) != string::npos){
                cout<<count<<endl;
                b = true;
                break;
             }
             else {
                string t=x;
                x = x + t;
                count++;
             }
                  
    
        }
        if (b==false)cout<<"-1"<<endl;
        
    }
    return 0;
}