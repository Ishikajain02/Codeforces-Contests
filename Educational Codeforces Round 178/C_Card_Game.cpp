#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases
    while (t--) {
        int n;
        cin >> n;
        string cards;
        cin >> cards;

        // Check who owns the card number 'n'
       if(cards[0]==cards[n-1]){
        if(cards[0]=='A'){
            cout<<"Alice"<<endl;
        }
        else cout<<"Bob"<<endl;
       }
       else if(cards[0]=='A' && cards[n-1]=='B'){
        if(count(cards.begin(), cards.end(), 'B')==1){
            cout<<"Alice"<<endl;
        }
        else cout<<"Bob"<<endl;
       }
       else{
        if(cards[n-2]=='A'){
            cout<<"Alice"<<endl;
        }
        else cout<<"Bob"<<endl;
       }
      
    }
    return 0;
}
