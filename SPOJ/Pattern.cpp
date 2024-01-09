#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int r,c=0;
        cin>>r>>c;
       vector<string>ans(3);
    int s = c;
    string bet;
    for(int i=0;i<4;i++){
        if(i==0 || i==c-1)bet+= "*";
        else bet+=".";
    }    
    string up;
    for(int i=0;i<4;i++)up += "*";

    for(int i=0;i<3;i++){
       if(i==2)ans[i]=up;
       else ans[i]=bet;
    }
    int col = c;
    vector<vector<string>>f(r,vector<string>(c));
    for(int i=0;i<r;i++){
         vector<string>d;
        for(int j=0;j<c;j++){
           
            if(i==0){
            d.push_back(up);

            }
            else {
            d.push_back(bet);
            }
        }
        f.push_back(d);
    }
    for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
        cout<<f[i][j];
       }
       cout<<endl;
    }
   }
   return 0;
}