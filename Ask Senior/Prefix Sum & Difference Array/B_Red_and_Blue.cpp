#include<iostream>
#include<vector>
#include<climits>
using namespace std;
/*
void fn(vector<int>&a,vector<int>&b,int i,int j,int n,int m,int sum,int &maxi){
    maxi=max(maxi,sum);
    if(i>=n && j>=m)return;
 //   if(j>=m)return;
    //take first
   
   if(i<n) fn(a,b,i+1,j,n,m,sum+a[i],maxi);
 if(j<m)   fn(a,b,i,j+1,n,m,sum+b[j],maxi);
 if(i<n && j<m)   fn(a,b,i+1,j+1,n,m,sum+a[i]+b[j],maxi);

}*/
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>pref(n,0);
    
    vector<int>vc(n,0);

    for(int i=0;i<n;i++){
        cin>>vc[i];

    }
    pref[0]=vc[0];
    int min1=0;
    min1=max(pref[0],min1);
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+vc[i];
        min1=max(min1,pref[i]);
    }
    int m;
    cin>>m;
    vector<int>pref2(m,0);
    vector<int>vc2(m,0);
    for(int i=0;i<m;i++)cin>>vc2[i];
    //using the concept of dp;
   pref2[0]=vc2[0];
   int min2=0;
   min2=max(pref2[0],min2);
   for(int i=1;i<m;i++){
    pref2[i]=pref2[i-1]+vc2[i];
    min2=max(min2,pref2[i]);
   }
    int sum=0,maxi=INT_MIN;
  //  fn(vc,vc2,0,0,n,m,sum,maxi);
    cout<<min1+min2<<endl;
}
}