#include<iostream>
using namespace std;
int main(){
    int t1;
    cin>>t1;
    while(t1--){
        string s,t;
        cin>>s>>t;
        int size1=s.size();
        int size2=t.size();
        int characters=0;
        int i=0;
       while(i<size1){
            if(s[i]==t[i])characters++;
            else break;
            i++;
        }
        int ans=0;
        if(characters>0){
        ans+=characters;
        ans++;}
        //i++;
      //  cout<<ans<<endl;
       if(size1>i) ans+=(size1-i);
        if(size2>i)ans+=(size2-i);
        cout<<ans<<endl;
    }
}