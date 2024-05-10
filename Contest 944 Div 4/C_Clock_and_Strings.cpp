#include<iostream>
using namespace std;
void swap(int &t1,int&t2){
    int var=t1;
    t1=t2;
    t2=var;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>b)swap(a,b);
        if(c>d)swap(c,d);
        if(a>c){
            swap(a,c);
            swap(b,d);
        }
        if(a<c&& c<b && b<d)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}