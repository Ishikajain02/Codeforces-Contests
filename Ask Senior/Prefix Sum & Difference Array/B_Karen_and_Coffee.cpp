#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k,q;
    cin>>n>>k>>q;
    vector<int>a(200002,0);
    for(int i=0;i<n;i++){
        int ai,b;
        cin>>ai>>b;
        a[ai]++;
        a[b+1]--;

    }
    vector<int>an(200002,0);
    for(int i=1;i<200002;i++){
        a[i]+=a[i-1];
      
    }
    for(int i=0;i<200002;i++){
        if(a[i]>=k){
            an[i]=1;
        }
    }
    for(int i=1;i<200002;i++){
        an[i]+=an[i-1];
    }
    for(int i=0;i<q;i++){
        int ai,bi;
        cin>>ai>>bi;
        cout<<an[bi]-an[ai-1]<<endl;
    }

}