#include<iostream>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int q;
        cin>>q;
        set<int>st;
        if(s.size()<4){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<s.size()-4;){
          if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0'){
            st.insert(i);
            st.insert(i+1);
            st.insert(i+2);
            st.insert(i+3);
            i+=4;
          }
          else{
            i++;
          }
        }
        while(q--){
            int in,num;
            cin>>in>>num;
            if(st.find(in-1)!=st.end()){
                if(s[in]==num && st.size()>=4){
                    cout<<"YES"<<endl;
                    break;
                }
                else{
                    st.erase(in);
                    if(st.size()%4!=0)cout<<"YES"<<endl;
                    else cout<<"no"<<endl;
                }
            }
            else{
                if(num=='0'){
                    if(in>1 && in<s.size()-1 &&s[in+1]=='0' && s[in-1]=='1' && s[in-2]=='1')cout<<"YES"<<endl;
                    
                }
            }
        }
    }
}