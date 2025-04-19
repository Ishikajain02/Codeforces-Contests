#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++){
        cin>>vc[i];
    }
    vector<int>prefix(n,0);
    prefix[0]=vc[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+vc[i];
    }
    int ans=INT_MAX,ind=-1;
    for(int i=0;i<n;i++){
        if(i+k-1<n){
            int x=prefix[i+k-1]-(i==0?0:prefix[i-1]);
            if(x<ans){
                ans=x;
                ind=i+1;
            }
        }
    }
    cout<<ind<<endl;
}