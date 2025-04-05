#include<iostream>
#include<vector>
#include<climits>
#define int int64_t
using namespace std;
//brute force giving tle

int32_t main(){
    int n,acc;
    cin>>n>>acc;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++){
        cin>>vc[i];
    }
    int pairss=0;
    int left=0;
    int sum=0;
    for(int right=0;right<n;right++){
     sum+=vc[right];
        while(sum>acc){
            sum-=vc[left];
            left++;
        }
        if(sum==acc){
            pairss++;
        }
    }
    cout<<pairss<<endl;
}