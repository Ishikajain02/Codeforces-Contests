#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int val=2;
        vector<vector<char>>vc(2,vector<char>(n,'\0'));
        for(int j=0;j<2;j++){
            for(int i=0;i<n;i++){
                char g;
                cin>>g;
                vc[j][i]=g;
            }
        }
        int cnt=0;
     for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            if(i+1<2&& j+2<n){
                if(vc[i][j]=='x' && vc[i][j+1]=='.' && vc[i][j+2]=='x'&&  vc[i+1][j]=='.' && vc[i+1][j+1]=='.' && vc[i+1][j+2]=='.'){
                    cnt++;
                }
            }
        }
     }
     for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            if(i+1<2&& j+2<n){
            if(vc[i][j]=='.' && vc[i][j+1]=='.' && vc[i][j+2]=='.' && vc[i+1][j]=='x' && vc[i+1][j+1]=='.' && vc[i+1][j+2]=='x')cnt++;
            }
        }
     }
    cout<<cnt<<endl;
}
}