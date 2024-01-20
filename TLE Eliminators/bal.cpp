#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string d;
        cin>>n>>d;
        int sum=0;
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            if(s.count(d[i])){
                sum++;
                continue;
            }
            else sum+=2;
           s.insert(d[i]);
        }
        cout<<sum<<endl;
    }
}