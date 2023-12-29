#include<iostream>
#include<vector>
#include<math.h>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int sum =0;
        vector<char>b(9,'A');
        for(int i=0;i<9;i++){
            cin>>b[i];
            if(b[i]=='?')continue;
            sum +=int(b[i]);
        }
        int ans= 594-sum;
        cout<<char(ans)<<endl;
    }
}