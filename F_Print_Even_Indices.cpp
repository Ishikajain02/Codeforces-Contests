#include<iostream>
#include<vector>
using namespace std;
void print(int i,vector<int>&array){
    if(i>=array.size())return;
    print(i+1,array);
    if(i%2==0)cout<<array[i]<<" ";
}
int main(){
    int n;
    cin>>n;
    vector<int>array(n,0);
    for(int i=0;i<n;i++)cin>>array[i];
    print(0,array);


}