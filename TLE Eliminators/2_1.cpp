#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int two=0,count=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==2){
                count++;
            }
        }
        bool b= false;
        for(int i=0;i<n-1;i++){
            if(v[i]==2){
                two++;
                count--;
            }
            if(two==count){
                cout<<i+1<<endl;
                b=true;
                break;
            }
        }
        if(!b)cout<<"-1"<<endl;
        
    }
    return 0;
}