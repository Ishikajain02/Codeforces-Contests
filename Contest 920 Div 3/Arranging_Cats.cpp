#include<iostream>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string d,c;
    cin>>d>>c;
    int count1=0,count2=0;
    for(int i=0;i<d.length();i++){
        if(d[i]!=c[i]){
            if(d[i]=='1')count1++;
            else count2++;
        }
    }
    cout<<max(count1,count2)<<endl;
    }
    return 0;
 }