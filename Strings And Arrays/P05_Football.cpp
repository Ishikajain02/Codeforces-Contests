#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count;
    if(s.length()<=6){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<s.length()-6;i++){
        count =1;
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                count++;
            }
            else break;
        }
        if(count>=7){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}