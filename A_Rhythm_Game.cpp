#include<iostream>
#include<vector>
using namespace std;
bool canWin(int N, long long D, const vector<long long>& T, const vector<long long>& X) {
    long long curr_time = 0;
    for (int i = 0; i < N; ++i) {
        long long reach_time = curr_time + X[i]; // time to reach button
        long long leave_time = T[i] + D;         // button disappears at T[i] + D + 0.5
        if (reach_time < T[i]) {
            // too early, wait
            reach_time = T[i];
            curr_time = T[i] - X[i];
            reach_time = curr_time + X[i]; // recompute
        }
        if (reach_time > T[i] + D) {
            return false; // cannot reach in time
        }
        curr_time = reach_time + X[i]; // return back to 0
    }
    return true;
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    long long d;
    cin>>n>>d;
    vector<long long>t(n,0);
    vector<long long>x(n,0);
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    if(canWin(n,d,t,x)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
}