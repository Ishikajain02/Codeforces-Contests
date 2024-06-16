#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int div1=n/3;
    if(div1%3==0)div1+=1;
    int div2=n/3;
    if(div2%3==0)div2+=1;
    int div3=n-(div1+div2);
    if(div3%3==0){
        
        if((div2+1)%3!=0){
            div2+=1;
            div3-=1;
        }
        else if((div1+1)%3!=0){
            div1+=1;
            div3-=1;
        }
        else if((div2-1)%3!=0){
            div2-=1;
            div3++;
        }
        else if((div1-1)%3!=0){
            div1-=1;
            div3++;
        }
    }
    cout<<div1<<" "<<div2<<" "<<div3<<endl;
}