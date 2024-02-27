#include<iostream>
#include<vector>
using namespace std;
int sum(vector<int>&a){
    int s=0;
    for(int i=0;i<a.size();i++){
        s+=a[i];
    }
    return s;
}
bool remove(vector<int>&vc,int summa){
    for(int i=0;i<vc.size();i++){
        if((summa-vc[i])%3==0)return true;
    }
    return false;
}

int nearestnum(int v){
    /*int v1= v/3;
    int v2= v1+1;

    int ans = min((v-(v1*3)),((v2*3)-v));
    return ans;
    */
   int v1 = v/3;
   int v2=v1+1;
   int x = v2*3-(v);
   return x;
}
int main(){
    int t;
    cin>>t;
    while(t--){
  int n;
  cin>>n;
  vector<int>vc(n,0);
  for(int i=0;i<n;i++){
    cin>>vc[i];
  }
  int summa = sum(vc);
  if(summa%3==0){
    cout<<"0"<<endl;
    continue;
  }
  else{
    int val = nearestnum(summa);
    bool val2 = remove(vc,summa);
    if(val>=1 && val2)cout<<"1"<<endl;
    else cout<<val<<endl;
  }
}
}
