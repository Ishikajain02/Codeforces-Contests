#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    string g;
    cin>>n>>g;
    bool b= false;
    for(int i=1;i<n;i++){
        string t= g.substr(0,i);
        string other= g.substr(0+i,n-i);
        int l1= count(t.begin(),t.end(),'L');
        int o1=count(t.begin(),t.end(),'O');
        int l2=count(other.begin(),other.end(),'L');
        int o2= count(other.begin(),other.end(),'O');
        if(l1!=l2 && o1!=o2){
            cout<<i<<endl;
            b=true;
            break;
        }
       

    }
     if(!b)cout<<"-1";
    
}