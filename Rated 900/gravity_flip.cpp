#include<iostream>
#include<string>
using namespace std;
int main(){
 char x;
 cin>>x;
 string v;
 cin>>v;
 string t1,t2,t3;
 t1="qwertyuiop";
 t2="asdfghjkl;";
 t3="zxcvbnm,./";
 string ans="";
 if(x=='R'){
    for(int i=0;i<v.size();i++){
          if (t1.find(v[i]) != std::string::npos) {
            for(int j=0;j<t1.size();j++){
                if(t1[j]==v[i]){
                       ans+= t1[j-1];
                }
            }
           
}
       else if(t2.find(v[i]) != std::string::npos){
    //     ans+=t2[i+1];
     for(int j=0;j<t2.size();j++){
                if(t2[j]==v[i]){
                       ans+= t2[j-1];
                }
            }
}
       else {
    //ans+=t3[i+1];
     for(int j=0;j<t3.size();j++){
                if(t3[j]==v[i]){
                       ans+= t3[j-1];
                }
            }
}
    }

 }
 else{
        for(int i=0;i<v.size();i++){
        if (t1.find(v[i]) != std::string::npos) {
            for(int j=0;j<t1.size();j++){
                if(t1[j]==v[i]){
                       ans+= t1[j+1];
                }
            }
           
}
else if(t2.find(v[i]) != std::string::npos){
    //     ans+=t2[i+1];
     for(int j=0;j<t2.size();j++){
                if(t2[j]==v[i]){
                       ans+= t2[j+1];
                }
            }
}
else {
    //ans+=t3[i+1];
     for(int j=0;j<t3.size();j++){
                if(t3[j]==v[i]){
                       ans+= t3[j+1];
                }
            }
}
    }
 
// cout<<ans<<endl;
 }
 cout<<ans<<endl;
}