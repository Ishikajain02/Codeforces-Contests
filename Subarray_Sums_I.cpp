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
    int ans=0;
    int sum=0;
     for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=vc[j];
            if(sum==acc){
                ans++;
            }
            if(sum>acc){
                break;
            }
        }
     }
    cout<<ans<<endl;
}