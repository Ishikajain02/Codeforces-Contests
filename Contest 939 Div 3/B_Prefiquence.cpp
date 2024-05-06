#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        int j=0;
        int cnt=0;
        for(int i=0;i<min(n,m)&& j<m;){
            if(a[i]==b[j]){
                cnt++;
                i++;
            }
            j++;
        }
        cout<<cnt<<endl;
    }
}