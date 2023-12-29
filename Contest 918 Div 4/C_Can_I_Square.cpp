#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long sum=0;
        for(int i=0;i<n;i++){
            int num =0;
            cin>>num;
            sum+= num;
        }
        long long ans = sqrt(sum);
        if (ans*ans==sum)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}