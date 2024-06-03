#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>mp1;
        vector<int>vc(n);
        for(int i=0;i<n;i++){
            cin>>vc[i];
            mp1[vc[i]]++;
        }
        vector<int>b(n);
        unordered_map<int,int>mp2;
        for(int i=0;i<n;i++){
            cin>>b[i];
            mp2[b[i]]++;
        }
        int m;
        cin>>m;
        vector<int>d(m);
        unordered_map<int,int>mp3;
        for(int i=0;i<m;i++){
            cin>>d[i];
           mp3[d[i]]++;   
        }
        unordered_map<int,int>mp4;
        for(auto it:mp1){
            if(mp2.find(it.first)!=mp2.end()){
              mp4[it.first]=min(it.second,mp2[it.first]);
            }
        }     
        bool found=false;
        if(mp4.size()>mp3.size())cout<<"NO"<<endl;
        else{
            for(auto it:mp4){
                if(mp3.find(it.first)!=mp3.end()){
                    if(mp3[it.first]<it.second){
                        cout<<"NO"<<endl;
                        found=true;
                        break;
                    }
                }
                else {
                    cout<<"NO"<<endl;
                    found=true;
                    break;
                }
            }
           if(!found)cout<<"YES"<<endl;
        }
    }
}