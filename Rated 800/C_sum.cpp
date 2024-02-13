#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        string sum="";
        for(int i=9;i>=1;i--){
            if(s>=i){

                sum+=to_string(i);
                s-=i;
            }

        }
        reverse(sum.begin(),sum.end());
        cout<<sum<<endl;
    }
}