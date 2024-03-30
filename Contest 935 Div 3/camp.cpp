#include<iostream>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
         int totalIntroverts = a;
    int totalExtroverts = b;
    int totalUniversals = c;

    // Calculate the total number of people
    int totalPeople = totalIntroverts + totalExtroverts * 2 + totalUniversals;

    // Calculate the total number of tents required for each category
     int tentsForIntroverts = totalIntroverts;
    int tentsForExtroverts = (totalExtroverts + 1) / 2; // Each tent can accommodate 2 extroverts
    int remainingExtroverts = totalExtroverts % 2;
    int tentsForUniversals = (totalUniversals + 2) / 3; // Each universal can share a tent with two others
    int remainingUniversals = totalUniversals % 3;// Each universal can share a tent with two others

    // Calculate the total number of tents needed
    int totalTents = max(max(tentsForIntroverts, tentsForExtroverts), tentsForUniversals);

    // Check if the total number of tents is sufficient for all people
    if (totalTents * 3 < totalPeople) {
        cout<<"-1"<<endl;
        continue; // Not enough tents to accommodate all people
    }
    cout<<totalTents<<endl;
    }
}