#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
 string a;
 cin>>a;
 string an="";
for(int i=0;i<a.size();i++){
    if(a[i]=='q')an+='p';
    else if(a[i]=='p')an+='q';
    else an+='w';
}
reverse(an.begin(),an.end());
cout<<an<<endl;
    }
}