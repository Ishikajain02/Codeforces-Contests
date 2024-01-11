#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
 //   if(num==0)
    int num = v[k-1];
    if(num==0){
        cout<<"0"<<endl;
        return 0;
        
    }
    for(int i=k;i<n;i++){
     if(num==v[i]){
        k++;
     }
    }
    cout<<k<<endl;
    return 0;
}