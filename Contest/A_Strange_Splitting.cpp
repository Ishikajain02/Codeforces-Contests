#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        if(arr[0]==arr[n-1])cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            vector<char>ano(n,'R');
            ano[1]='B';
            for(int i=0;i<n;i++)cout<<ano[i];
            cout<<endl;
        }
        //cout<<endl;
    }
}