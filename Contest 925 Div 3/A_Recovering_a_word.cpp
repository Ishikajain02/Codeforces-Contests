#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char>vc(3,'a');
        n-=3;
          for(int i=2;i>=0 && n>0;i--){
            while(n>0 && vc[i]!='z'){
                n--;
                vc[i]++;
            }
          }
          cout<<vc[0]<<vc[1]<<vc[2]<<endl;
    }
}