#include<iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int j=0;
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans[j]=i+1;
                j++;
            }
        }
        j=n;
        for(int i=0;i<n;i++){
             if(i%2!=0){
                ans[j-1]=i+1;
                j--;
             }
        }
        
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}