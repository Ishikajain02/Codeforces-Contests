#include<iostream>
#include<vector>
using namespace std;
int main(){
   /* int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>>vc(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>vc[i][j];
            }
        }
        int sum1=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(vc[i][j]==1){
                    sum1++;
                }
            }
        }
        bool st=false;
        for(int i=3;i<=10;i++){
            if(i*i==sum1){
                cout<<"Square"<<endl;
                st=true;
                break;
            }

        }
        if(!st)cout<<"triangle"<<endl;
      
    }
}*/
  int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> vc(n);
        for (int i = 0; i < n; i++) {
           cin>>vc[i];
        }
        int sum1 = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                sum1 += (vc[i][j]-'0');
            }
        }
       // cout<<sum1<<endl;
        bool st = false;
        for (int i = 2; i<=10; i++) {
            if (i * i == sum1) {
                cout << "Square" << endl;
                st = true;
                break;
            }
        }
        if (!st) cout << "Triangle" << endl;
    }
    return 0;
}