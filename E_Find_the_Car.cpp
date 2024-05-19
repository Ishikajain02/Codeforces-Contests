#include<iostream>
#include<vector>
#include<algorithm>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<int>a(k);
        vector<int>b(k);
        for(int i=0;i<k;i++)cin>>a[i];
        for(int i=0;i<k;i++)cin>>b[i];
        while(q--){
            int d;
            cin>>d;
            auto it=lower_bound(a.begin(),a.end(),d);
            int i=it-a.begin();
             if (i==0) {
                cout << (d*b[0])/a[0] << ' ';
                continue;
            }
            
            int dis1=a[i]-a[i-1];
            int dis2= d-a[i-1];
            //int val=dis1*dis2;
            int time=b[i]-b[i-1];
            cout<<b[i-1]+dis2*time/dis1<<" ";
        
        }
        cout<<endl;
    }
}