/*#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    if(n%2==0){
        int i=0;
        if(k<=n/2){
            i=1;
          while(k>1){
            i+2;
          }
          cout<<i<<endl;
          return 0;
        }
        else{
            k=k-n/2;
            while(k--){
                i=i+2;

            }
            cout<<i<<endl;
            return 0;
        }
    }
    else{
        int i=0;
        if(k<=(n/2)+1){
           i=1;
          while(k>1){
           i=i+2;
          }
          cout<<i<<endl;
          return 0;
        }
        else{
            k= k-((n/2)+1);
            while(k--){
                i=i+2;
            }
            cout<<i<<endl;
            return 0;
        }
    }
}*/
#include <iostream>
#define int int64_t
using namespace std;
int32_t main()
{
    int n , k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        int i = 0;
        if (k <= n / 2)
        {
            i = 1;
            while (k > 1)
            {
                k--;
                i += 2;
            }
            cout << i << endl;
            return 0;
        }
        else
        {
            k = k - n / 2;
            while (k--)
            {
                i = i + 2;
            }
            cout << i << endl;
            return 0;
        }
    }
    else
    {
        int i = 0;
        if (k <= (n / 2) + 1)
        {
            i = 1;
            while (k > 1)
            {
                i = i + 2;
                k--;
            }
            cout << i << endl;
            return 0;
        }
        else
        {
            k = k - ((n / 2) + 1);
            while (k--)
            {
                i = i + 2;
            }
            cout << i << endl;
            return 0;
        }
    }
}