#include<iostream>
#include<stack>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()<=1){
            for(char it='a';it<='z';it++){
                if(it==s[0])continue;
                else{
                    s=it+s;
                    break;
                }
            }
            cout<<s<<endl;
        }
        else{
            int idx=-1;
            stack<char>st;
            for(int i=0;i<s.size();i++){
              if(!st.empty() &&st.top()==s[i])idx=i;
              else{
                st.push(s[i]);
              }
            }
            if(idx!=-1){
                string re="";
                for(int i=0;i<idx;i++){
                    re+=s[i];
                }
                for(char it='a';it<='z';it++){
                    if(it!=s[idx]){
                        re+=it;
                        break;
                    }
                }
                for(int i=idx;i<s.size();i++)re+=s[i];
                cout<<re<<endl;
            }
            if(idx==-1){
            char last=s[s.size()-1];
            char prev=s[s.size()-2];
            
            for(char it='a';it<='z';it++){
                if(it==last || it==prev)continue;
                else {
                    s[s.size()-1]=it;
                    s= s+last;
                    break;
                }
            }
            cout<<s<<endl;
            }
        }
    }
}