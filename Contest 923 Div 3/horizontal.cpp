#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char>c(n,0);
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        int i=0;
        int j=0;
        for( i=0;i<n;i++){
            if(c[i]=='B'){
                break;
            }
        }
        for(j=n-1;j>=0;j--){
            if(c[j]=='B'){
                break;
            }
        }
        cout<<(j-i)+1<<endl;
    }
}