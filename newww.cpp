/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binary(vector<int>&vc,int target){
    int start=0,end=vc.size()-1;
    while(start<end){
        int mid=start+end/2;
        if(vc[mid]>=target){
            end=mid;
        }
        else if(vc[mid]<target){
            start=mid+1;
        }
    }
    return vc.size()-end;
}
int main(){
    int n,q;
    cin>>n>>q;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++)cin>>vc[i];
    vector<int>x(q,0);
    for(int i=0;i<q;i++)cin>>x[i];
    sort(vc.begin(),vc.end());
    int i=0;
    while(q--){
        if(vc[n-1]<x[i]){
          cout<<"0"<<endl;
          continue;
        }
      cout<<binary(vc,x[i])<<endl;
      i++;
    }

}*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binary(vector<int>& vc, int target) {
    int start = 0, end = vc.size() - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (vc[mid] >= target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return vc.size() - start;
}

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> vc(n, 0);
    for (int i = 0; i < n; i++) cin >> vc[i];
    vector<int> x(q, 0);
    for (int i = 0; i < q; i++) cin >> x[i];

    sort(vc.begin(), vc.end());
    
    for (int i = 0; i < q; i++) {
        if (vc[n - 1] < x[i]) {
            cout << "0" << endl;
            continue;
        }
        cout << binary(vc, x[i]) << endl;
    }
}
