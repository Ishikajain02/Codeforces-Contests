#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        /*vector<int>vc(n,0);
        for(int i=0;i<n;i++)cin>>vc[i];
        vector<int>vc1=vc;
        sort(vc1.begin(),vc1.end());
        vector<int>vc2=vc;
        sort(vc2.rbegin(),vc2.rend());
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=abs(vc1[i]-vc2[i]);
        }
        cout<<sum<<endl;*/
         vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

       int score=0;
       int maxi=INT_MIN,mini=INT_MAX;
       for(int i=0;i<n;i++){
        maxi=max(a[i],maxi);
        mini=min(mini,a[i]);
       }
      // cout<<maxi<<" "<<mini;
       score=(maxi-mini)*(n-1);
       cout<<score<<endl;
    }
}