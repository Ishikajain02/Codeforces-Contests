#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<unordered_set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int a,b,l;
       cin>>a>>b>>l;
       unordered_set<int>se;
       if(l%a!=0 && l%b!=0){
        cout<<"1"<<endl;
        continue;
       }
       else{
        int v1= min(a,b);
        int ans=0;
       /* for(int i=0;i<=v1;i++){
            for(int j=0;j<=v1;j++){
                int num= pow(a,i)*pow(b,j);
           // cout<<numendl;
                int mun2=l/num;
               // if(i==2 && j==1)cout<<mun2<<endl;
                if(mun2>=0 &&(mun2%a==0 || mun2%b==0 || mun2==1)&& se.count(mun2)==0){
                    ans++;
                   // cout<<i<<j<<endl;
                    //cout<<mun2<<endl;
                    se.insert(mun2);
                }
            }
        }*/
        for(int i = 0; pow(a,i)<=l; i++) {
                for(int j = 0; pow(b,j)<=l; j++) {
                    int num = pow(a, i) * pow(b, j);
                   int k = l / (pow(a, i) * pow(b, j));
                if (k * pow(a, i) * pow(b, j) == l) {
                    se.insert(k);
                }
                int k2 = k - 1;
                if (k2 > 0 && k2 * pow(a, i) * pow(b, j) == l) {
                    se.insert(k2);
                }
                }
            }
        cout<<se.size()<<endl;
       }
    }
}