#include<iostream>
#include<bitset>
#include<string>
using namespace std;
int main(){
    long long n;
    cin>>n;
    string t= to_string(n);
    long long count=0;
    for(long long i=0;i<t.length();i++){
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
    cout<<"YES"<<endl;
}