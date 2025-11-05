#include<iostream>
#include<vector>
using namespace std;
int main(){ 
    int n,s;
    cin>>n>>s;

    vector<int>vc(n,0);
    int i=0,j=n-1;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>vc[i];
        sum+=vc[i];
    }
    
    while(i<j){
        if(sum==s){
            cout<<j-i+1<<endl;
            return 0;
        }
        if(sum>s){
            sum-=vc[i];
            i++;
        }
        else{
            sum-=vc[j];
            j--;
        }
    }
}