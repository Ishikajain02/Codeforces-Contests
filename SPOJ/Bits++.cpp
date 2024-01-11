#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    while(n--){
        string f ;
        cin>>f;
        if(f[0]=='+' || f[f.size()-1]=='+'){
         x++;
        }
        else{
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}