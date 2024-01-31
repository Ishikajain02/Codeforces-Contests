#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        string f=" ";
        bool g = false;
        for(int i=0;i<n;i++){
         if(a[i]==b[i] && a[i]!=c[i])g=true;
        else if (a[i]!=c[i] && b[i]!=c[i])g=true;
      //  else g=false;
        }
   if(!g)cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
    }
}