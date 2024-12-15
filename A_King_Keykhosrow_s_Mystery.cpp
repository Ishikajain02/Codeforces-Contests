#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int small=min(a,b);
        int large=max(a,b);
        int i=small;
        while(true){
            if((i%small)==(i%large)){
                cout<<i<<endl;
                break;
            }
            i++;
        }
    }
} 