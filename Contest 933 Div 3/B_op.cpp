#include<vector>
#include<iostream>
#include<climits>
using namespace std;
string canMakeAllZero(vector<int>& a) {
    int n = a.size();

    for (int i = 1; i < n - 1; i++) {
       int mini= a[i-1];
       if(mini<0)return "NO";
       a[i-1]-=mini;
       a[i]-=2*mini;
       a[i+1]-=mini;
    }

    for (int i = 0; i < n; i++) {
        if (a[i] != 0)
            return "NO";
    }
    return "YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vc(n);
        for(int i=0;i<n;i++){
            cin>>vc[i];
        }
      cout<<canMakeAllZero(vc)<<endl;
    }
}