#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    sort(a.begin(),a.end());
    vector<int>prefix(n,0);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+= a[i];
      prefix[i]= sum;
    //  cout<<prefix[i];
    }
    int sum2=0;
    int coins=0;
    for(int i=n-1;i>=0;i--){
        sum2+= a[i];
        if(sum2>prefix[i]){
            cout<<coins+1<<endl;
            break;
        }
        coins++;
    }
}