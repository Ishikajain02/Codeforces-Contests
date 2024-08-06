#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#define int int64_t
using namespace std;
int32_t main(){
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
    vector<int>even;
    int maxeven=0,maxeven2=0,maxodd=0;
    int evencnt=0;
    for(int i=0;i<n;i++){
        if(vc[i]%2==0){
            evencnt++;
            even.push_back(vc[i]);
            if(vc[i]>maxeven){
                maxeven2=maxeven;
            maxeven=vc[i];
            }
            else if(vc[i]>maxeven2){
                maxeven2=vc[i];
            }
        }
        else {
            if(vc[i]>maxodd){
                maxodd=vc[i];
            }
        }

    }
   //int num=maxeven2+maxodd;
   int ans=even.size();
 //  cout<<maxeven<<" "<<maxeven2<<" "<<maxodd<<" "<<evencnt<<endl;
   //maxodd
 if(maxodd==0 || maxeven==0){
    cout<<"0"<<endl;
    continue;
 }
  for(int i=0;i<even.size();i++){
    if(maxodd<even[i]){
        ans++;
       break;
    }
    else maxodd+=even[i];
  }
  cout<<ans<<endl;
}
}