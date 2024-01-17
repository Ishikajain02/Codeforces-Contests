#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,x2,x3,x4;
        int y1,y2,y3,y4;
        int diff1,diff2;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        if(x1==x2){
            diff1= abs(y2-y1);
            diff2= abs(y4-y3);
        }
        else if (x1==x3){
            diff1=abs(y3-y1);
            diff2= abs(y4-y2);
        }
        else {
            diff1=abs(y4-y1);
            diff2=abs(y2-y3);
        }
        cout<<diff1*diff2<<endl;

    }
}