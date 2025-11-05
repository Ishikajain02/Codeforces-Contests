#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cnt=-1,last=-1;
        for(int i=0;i<n;i++){
            if(a[i]==1 && cnt==-1)cnt=i;
            else if(a[i]==1 && cnt!=-1)last=i;
        }
        int len=0;
        if(cnt!=-1 && last!=-1)len=last-cnt+1;
        if(len<=x)cout<<"YES"<<endl;
        else if(x==1 && cnt!=-1 && last==-1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        //
    }
}
// 1 3  5   6   4   2
// 1 3 5 4 2
//1 3 4 2
// 1 3 2
// 1 2