#include <iostream>
#include <cmath>
#define int int64_t 
using namespace std;

void findRepresentation(string s) {
    int year = stoi(s); 
    
    for (int i = 0; i <= 199; i++) { 
        int squared = i * i;
        
        if (squared == year) {
            int a = 0; 
            int b = i; 
            cout << a << " " << b << endl;
            return;
        }
    }
    
    cout << -1 << endl; 
}

int32_t main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        findRepresentation(s);
    }
    
    return 0;
}