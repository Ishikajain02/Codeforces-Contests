#include<iostream>
#include<cmath>
#define int int64_t
using namespace std;
int32_t main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;
    if(n==0)cout<<"0"<<endl;
    int total_time = 0;
        while (n > 0) {
            // In each second, we can add up to y fruits
            int fruits_added = min(n, y);
            n -= fruits_added;  // Reduce the number of fruits
            
            // Blend the fruits, but cannot blend more than x
            total_time++;
            if (n > 0) {
                n -= x;  // Blend fruits only if there are still some left
            }
        }

        cout << total_time << endl;
 }   
}