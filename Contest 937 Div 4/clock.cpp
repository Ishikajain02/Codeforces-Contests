#include<iostream>
#include<iomanip> 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        
        int hh= (n[0]-'0')*10+(n[1]-'0');
        int mm=(n[3]-'0')*10+(n[4]-'0');
        
        string val="AM";
       // if(hh>12)val="PM";
           if(hh == 12 && mm == 0) { // Check if it's midnight
            val = "PM";
        } else if(hh == 12 && mm > 0) { // Check if it's noon
            val = "PM";
        } else if(hh > 12) { // Convert 13-23 to 1-11 for PM times
          //  hh -= 12;
            val = "PM";
        } 
        if(hh%12>0)hh=hh%12;
        if(hh%12==0)hh=12;
        
          cout << setw(2) << setfill('0') << hh << ":"
             << setw(2) << setfill('0') << mm <<" "<< val << endl;
        
    }
}