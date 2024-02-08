#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
       /* int t;
        cin>>t;
        int cnt=0;
        int zero=0;
        vector<int>vc(t,0);
        for(int i=0;i<t;i++){
            cin>>vc[i];
            if(vc[i]<0)cnt++;
            if(vc[i]==0)zero++;
        }
       
        if(cnt%2!=0 || zero>0){
            cout<<"0"<<endl;
        }
        else{
            cout<<"1"<<endl;
            cout<<"1"<<" "<<"0"<<endl;
        }*/
        int n;
          cin>>n;
        vector<int>a(n,0);
      
        unordered_map<int,int>mp;
       set<int>s;
       for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
        s.insert(a[i]);
       }
       int even=0;
       for(auto i:mp){
        if(i.second%2==0){
            //cout<<s.size()-1<<endl;
            even++;
        }

       }
       if(even%2){
        cout<<s.size()-1<<endl;
       }
       else{
        cout<<s.size()<<endl;
       }
    }
    
}