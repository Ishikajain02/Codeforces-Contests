#include<iostream>
#include<bitset>
#define int int64_t
#include<string>
using namespace std;
int32_t main(){
    int n;
    cin>>n;
    string t= to_string(n);
    int count=0;
   
    for(int i=0;i<t.length();i++){
      if(t[i]=='7' || t[i]=='4')count++;
    }
     if(count==0)cout<<"NO"<<endl;
    else if(count==7|| count==4)cout<<"YES"<<endl;
    
    else cout<<"NO"<<endl;
}
/*
/* for(long long i=0;i<t.length();i++){
      if(t[i]=='7'){
        count++;
      }
      else if(t[i]=='4'){
        count++;
      }
      else{
        cout<<"NO"<<endl;
        return 0;
      }
    }
    string num = to_string(count);
    long long a=0;
    for(int i=0;i<num.length();i++){
        if(num[i]=='7' || num[i]=='4')continue;
        else {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;*/