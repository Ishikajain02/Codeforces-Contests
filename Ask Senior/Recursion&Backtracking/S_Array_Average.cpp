#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
void fn(double n,double &sum,vector<int>&vc,int i){
    if(i==n){
        cout<<fixed<<setprecision(6)<<double(sum/n)<<endl;
       // sum/=n;
        //cout<<sum<<endl;
        return;
    }
    sum+=vc[i];
    fn(n,sum,vc,i+1);
    return;
}
int main(){
    double n;
    cin>>n;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++)cin>>vc[i];
    double sum=0;
    fn(n,sum,vc,0);
   // cout<<sum<<endl;
}