#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count =0;
    string s;
    cin>>s;
    int rem = 0;
    if(s.find("8")!=string ::npos){
        //cout<<n/11<<endl;
       // return 0;
       rem = n/11;
    }
    for(int i=0;i<s.length();i++){
        if(s[i]=='8')count++;
    }
    cout<<min(rem,count)<<endl;
    
}