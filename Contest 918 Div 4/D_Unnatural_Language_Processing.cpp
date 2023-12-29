#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        vector<char>v(n,' ');
        for(int i=0;i<n;i++){
            
            if(s[i]=='a'|| s[i]=='e'){
               v[i]='V';
            }
            else v[i]='C';
        }
        for(int i=0;i<n;i++){
            if(v[i]=='V'){
                if(i+1<n &&i+2<n && v[i+1]=='C' && v[i+2]=='C'){
                    cout<<s[i]<<s[i+1]<<".";
                    i++;
                }
                else if(i+1<n &&i+2<n &&v[i+1]=='C'){
                    cout<<s[i]<<".";
                }
                else if(i+1<n &&i+2==n){
                    cout<<s[i]<<s[i+1];
                    i++;
                }
                else{
                    cout<<s[i];
                }
            }
            else{
                cout<<s[i];
            }
        }
        cout<<endl;
    }

}