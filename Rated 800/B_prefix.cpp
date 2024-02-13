#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        //int i=a[n-1];
      /*  int j;
        for(int i=n-1;i>=0;i++){
        for( j=n-2;j>=0;j--){
            if(a[i]==a[j]){
                cout<<j+1<<endl;
                break;
            }
            if(j==0 && a[j]!=a[i]){
                cout<<"0"<<endl;
                break;
        }
            
        }
        }*/
       set<int>s;
       int i;
       for(i=n-1;i>=0;i--){
        if(s.count(a[i])){
            cout<<i+1<<endl;
            break;
        }
        s.insert(a[i]);
       }
       if(i<0)cout<<"0"<<endl;
       
       
    }
}