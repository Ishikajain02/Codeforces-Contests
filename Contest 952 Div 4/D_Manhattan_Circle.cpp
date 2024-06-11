#include<vector>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    vector<vector<char>>vc(n,vector<char>(m,'/'));
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>vc[i][j];
    }
   }
   int maxcnt=0;
   int row=0;
   for(int i=0;i<n;i++){
    int cn=0;
    for(int j=0;j<m;j++){
        if(vc[i][j]=='#')cn++;
    }
    if(maxcnt<cn){
        maxcnt=cn;
        row=i;
    }
   }
   int num=0;
   if(maxcnt==1)num=maxcnt;
   else num=maxcnt/2;
   for(int i=0;i<m;i++){
    if(vc[row][i]=='#' && maxcnt==1){
        cout<<row+1<<" "<<i+1<<endl;
        break;
    }
    if(num==0){
        cout<<row+1<<" "<<i+1<<endl;
    break;
   }
    else if(vc[row][i]=='#')num--;
   }
    }
}