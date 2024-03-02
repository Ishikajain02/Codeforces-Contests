#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<unordered_set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int a,b,l;
       cin>>a>>b>>l;
       unordered_set<int>se;
       int temp=l;
       int cnt1=0,cnt2=0;
       while(temp%a==0){
        cnt1++;
        temp=temp/a;
       }
       temp=l;
       while(temp%b==0){
        cnt2++;
        temp=temp/b;
       }
       for(int i=0;i<=cnt1;i++){
        for(int j=0;j<=cnt2;j++){
            int val=pow(a,i)*pow(b,j);
            if(l%val==0){
                se.insert(l/val);
            }
        }
       }
       cout<<se.size()<<endl;
    }
}