#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        vector<char>vc(n,'\0');
        char prev='\0';
        for(int i=0;i<n;i++){
               cin>>vc[i];
        }
        for(int i=0;i<n;i++){
        
           if(vc[i]=='@'){
            cnt++;
           }
           else if(vc[i]=='*' && prev=='*')break;

           prev=vc[i];
           
        }
        cout<<cnt<<endl;
    }
}