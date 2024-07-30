#include<iostream>
#include<map>
#include<climits>
using namespace std;
int main(){
 int n;
 cin>>n;
 int k=n;
 map<string,int>mp;
 while(n--){
   string s;
   cin>>s;
   mp[s]++;
 
 }
 int maxi=INT_MIN;
   string fin="uh-oh";
 for(auto it:mp){
    if(maxi<it.second){
        maxi=it.second;
        fin=it.first;
       // cout<<"im"<<endl;
    }
    //maxi=max(maxi,it.second);
   }
   //cout<<maxi;
   int val=k/2;
  // cout<<val<<" "<<n<<endl;
   if(maxi>val)cout<<fin<<endl;
   else cout<<"uh-oh"<<endl;
}