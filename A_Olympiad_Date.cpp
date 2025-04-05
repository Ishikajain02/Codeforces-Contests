#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vc(n,0);
        for(int i=0;i<n;i++)cin>>vc[i];
        set<int>s;
        s.insert(2);
        s.insert(0);
        s.insert(5);
        s.insert(1);
        s.insert(3);
        int zero=3;
        int one=1;
        int three=1;
        int two=2;
        int five=1;
        int total=8;
        int i=0;
        for( i=0;i<n;i++){
           if(total==0){
            cout<<i<<endl;
            break;
           }
           if(vc[i]==0 && zero>0){
            zero--;
            total--;
           }
           if(vc[i]==2 && two>0){
            two--;
            total--;
           }
           if(vc[i]==1 && one>0){
            one--;
            total--;
           }
           if(vc[i]==5 && five>0){
            five--;
            total--;
           }
           if(vc[i]==3 && three>0){
            three--;
            total--;
           }

        }
        if(i==n && total==0 ){
          cout<<n<<endl;
        }
        else if(total!=0){
            cout<<"0"<<endl;
        }
        

    }
}