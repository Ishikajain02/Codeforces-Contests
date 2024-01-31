#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b && b==c && b%2!=0){
            cout<<"First"<<endl;
            //break;
            continue;
        }
        else if (a==b && b==c && b%2==0){
            cout<<"Second"<<endl;
            //break;
            continue;
        }
        else if (c%2==0){
            if(b>a)cout<<"Second"<<endl;
            else if (a==b)cout<<"Second"<<endl;
            else cout<<"First"<<endl;
            //break;
            continue;
        }
        else if(c%2!=0){
            if(a>b)cout<<"First"<<endl;
            else if(a==b)cout<<"First"<<endl;
            else cout<<"Second"<<endl;
           // break;
           continue;
        }
       

    }
}