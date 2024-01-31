#include<iostream>
#include<climits>
#define int int64_t
using namespace std;
int32_t main(){
int x;
int s=0;
cin>>x;
s+=(x/5);
x=x%5;
s+=(x/4);
x=x%4;
s+=(x/3);
x=x%3;
s+=(x/2);
x=x%2;
s+=(x/1);
x=x%1;
cout<<s;
}