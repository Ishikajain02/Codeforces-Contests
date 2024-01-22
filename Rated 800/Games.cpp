#include<iostream>
#define int int64_t
using namespace std;
int32_t main(){
    /*int n;
    cin>>n;
    while(n--){
        long long t,k,x;
        cin>>t>>k>>x;
        if(((t-k+1)*(t-k+2)/2)<x){
            cout<<"NO"<<endl;

        }
        else if ((t*(t+1)/2==x) && k!=t){
            cout<<"NO"<<endl;
        }
        else if ((t*(t+1)/2==x) && k==t){
            cout<<"YES"<<endl;
        }
        else if ((t*(t+1)/2>x) && k*(k+1)/2>x){
            cout<<"NO"<<endl;
        }
        else if ((k*(k+1)/2)>x){
            cout<<"NO"<<endl;
        }
        else if ((t*(t+1)/2>x) &&( k*(k+1)/2)<x){
            long long h=0;
            for(int i=t;i>t-k;i--){
              h+=i;
            }
            if(h<x){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }
    }
  return 0;
  */
  int t;
    cin >> t;
    while(t--) {
        int n, k, x;
        cin >> n >> k >> x;
 
        int mini = (k * (k + 1)) / 2;
        int sum=0;
       /* for(int i=n-k+1;i<=n;i++){
             sum+=i;
        }
        int maxi = sum;*/
        int maxi= (k)*((2*n)+1-k);
      // cout<<maxi;
        if (x >= mini && x <= maxi/2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

}