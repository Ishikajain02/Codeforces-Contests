#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ind= -1;
        int most =0;
      for(int i=0;i<n;i++){
      int a ,b;
      cin>>a>>b;
      if(a<=10 && b>most){
        most=b;
        ind =i;
      }
      }
      cout<<ind+1<<endl;
    }
}