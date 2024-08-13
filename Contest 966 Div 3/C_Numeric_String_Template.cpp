#include<iostream>
#include<map>
#include<vector>
#define int int64_t
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vc(n,0);
        for(int i=0;i<n;i++)cin>>vc[i];
        int m;
        cin>>m;
        while(m--){
            string s;
            cin>>s;
            if(s.size()!=n){
                cout<<"NO"<<endl;
                continue;
            }
            map<char,int>f1;
            map<int,char>f2;
            bool ans=false;
            for(int i=0;i<n;i++){
                if(f1.count(s[i]) && f1[s[i]]!=vc[i]){
                    ans=true;
                    break;
                }
                if(f2.count(vc[i])&& f2[vc[i]]!=s[i]){
                    ans=true;
                    break;
                }
                f1[s[i]]=vc[i];
                f2[vc[i]]=s[i];
            }
        if(!ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
    }
}