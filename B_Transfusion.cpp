#include<iostream>
#include<vector>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vc(n,0);
        int sum=0;
       for(int i=0;i<n;i++){
            cin>>vc[i];
            sum+=vc[i];
        }
        if(sum%n!=0){
            cout<<"No"<<endl;
            continue;
        }
       //can use the logic of oddsum and evensum
       int oddcnt=n/2+(n%2);
       int evencnt=n-oddcnt;
       int oddsum=0,evensum=0;
       for(int i=0;i<n;i++){
        if(i%2!=0)oddsum+=vc[i];
        else evensum+=vc[i];
       }
       if(evensum*evencnt!=oddsum*oddcnt){
        cout<<"NO"<<endl;
       }
       else cout<<"YES"<<endl;
       
    }
}