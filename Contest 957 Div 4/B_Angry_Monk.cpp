#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>vc(k,0);
       for(int i=0;i<k;i++)cin>>vc[i];
       sort(vc.begin(),vc.end());
       int no_of_ones=0;
       for(int i=0;i<k;i++){
        if(vc[i]==1)no_of_ones++;
        
       }
      /* int op=0;
       while(no_of_ones+vc[k-1]!=n){
        no_of_ones+=vc[no_of_ones];
        op+=vc[no_of_ones]-1;
        vc[no_of_ones]=0;
       }
       cout<<op<<endl;
     */
      int op = 0;
        while (no_of_ones + vc[k - 1] != n) {
            if (no_of_ones >= k) break;

            no_of_ones += vc[no_of_ones];
            op += vc[no_of_ones] - 1;
            vc[no_of_ones] = 0;
        }

        cout << op << endl;
    }
}