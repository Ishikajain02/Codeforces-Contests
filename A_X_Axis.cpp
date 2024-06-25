#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    vector<int>vc;
    vc.push_back(x1);
    vc.push_back(x2);
    vc.push_back(x3);
    sort(vc.begin(),vc.end());
    int sum=vc[2]-vc[1];
    sum+=(vc[1]-vc[0]);
    cout<<sum<<endl;
}
}