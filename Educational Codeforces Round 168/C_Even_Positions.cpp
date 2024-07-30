#include<iostream>
#include<vector>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    s[0]='(';
    int o=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(')o++;
        else if(s[i]==')')o--;
        else{
            if(o){
                s[i]=')';
                o--;
            }
            else{
                s[i]='(';
                o++;
            }
        }
    }
    vector<int>val;
    int ans=0;
   for(int i=0;i<n;i++){
    if(s[i]=='(')val.push_back(i);
    else{ 
        ans+=i-val.back();
    val.pop_back();
    }
   }
   cout<<ans<<endl;
}
}