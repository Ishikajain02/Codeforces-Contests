#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vc(n,0);
        for(int i=0;i<n;i++){
            cin>>vc[i];
        }
        sort(vc.begin(),vc.end());
        int ele=vc[n-1];
        int sum=INT_MIN;
        for(int i=0;i<n;i++){
            sum=max(sum,ele-vc[i]);
        }
        cout<<sum<<endl;
    }
}