#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
/*#include<climits>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string to=to_string(n);
        int ans=0;
        int in=-1;
        int size=to.size();
        int maxi=INT_MIN;
        int j=size-1;
        while(j>=0){
            if(to[j]=='0')j--;
            else break;
        }
        int zero=0;
        for(int i=0;i<=j;i++){
          maxi=max(zero,maxi);
            if(to[i]=='0'){
                zero++;
            }
            else{
                ans=max(ans,zero);
                zero=0;
            }
        }
        maxi=max(zero,maxi);
        ans=size-(maxi+1);
        cout<<ans<<endl;
    }
}*/
using namespace std;

using ll = long long;

// Function to compute the cost of a number
double computeCost(string num) {
    ll n = stoll(num);
    ll sumDigits = 0;
    for (char c : num) {
        sumDigits += (c - '0');
    }
    return (double)n / sumDigits;
}

void findMinRemovals(string n) {
    int len = n.size();
    int minRemovals = len; // Initialize with maximum possible removals
    double minCost = computeCost(n); // Initial cost of original number

    for (int mask = 1; mask < (1 << len); ++mask) {
        string newNum = "";
        int removed = 0;

        for (int i = 0; i < len; ++i) {
            if (mask & (1 << i)) {
                newNum += n[i];
            } else {
                removed++;
            }
        }

        // Ensure the new number is valid before converting
        if (newNum.empty() || newNum.find_first_not_of('0') == string::npos) continue;
        
        // Remove unnecessary leading zeros
        newNum.erase(0, newNum.find_first_not_of('0'));

        double cost = computeCost(newNum);

        if (cost < minCost) {
            minCost = cost;
            minRemovals = removed;
        }
    }

    cout << minRemovals << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        findMinRemovals(n);
    }
    return 0;
}