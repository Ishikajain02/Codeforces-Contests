#include<iostream>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int na,nb,k;
        cin>>na>>nb>>k;
        set<int>a;
        set<int>b;
        set<int>ans;
        for(int i=0;i<na;i++){
            int val;
            cin>>val;
            if(val<=k)a.insert(val);
        }
        for(int i=0;i<nb;i++){
            int val;
            cin>>val;
            if(val<=k)b.insert(val);
        }
        for(auto it:a){
            ans.insert(it);
        }
        for(auto it:b){
            ans.insert(it);
        }
        if(ans.size()==k && a.size()>=(k/2) && b.size()>=k/2)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
