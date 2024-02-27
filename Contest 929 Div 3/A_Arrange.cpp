#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(int& a,int& b){
    return a<b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>vc(n,0);
        for(int i=0;i<n;i++){
            cin>>vc[i];
        }
        sort(vc.rbegin(),vc.rend());
        int sum=0;
        for(int i=n-1;i>=0;i--){
            if(vc[i]<0)vc[i]=(-vc[i]);
            sum+=vc[i];
        }
        cout<<sum<<endl;
    }
}