#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    //simply use the concept of prefix sum array and suffix sum array;
    int n;
    cin>>n;
   vector<int>vc(n,0);
   for(int i=0;i<n;i++){
    cin>>vc[i];
   }
   vector<int>prefix(n,0);
   vector<int>suffix(n,0);
   prefix[0]=vc[0];
   suffix[n-1]=vc[n-1];
    for(int i=1;i<n;i++){
     prefix[i]=prefix[i-1]+vc[i];
    }
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]+vc[i];
    }
    int diff=INT_MAX;
    for(int i=0;i<n-1;i++){
        diff=min(diff,abs(prefix[i]-suffix[i+1]));
    }
    cout<<diff<<endl;

}