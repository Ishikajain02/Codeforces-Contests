#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n,c,d;
        cin>>n>>c>>d;
        vector<int>vc;
        for(int i=0;i<(n*n);i++){
            //cin>>vc[i];
            int v;
            cin>>v;
            vc.push_back(v);
        }
        cout<<vc.size();
        sort(vc.begin(),vc.end());
        vector<vector<int>>ans(n,vector<int>(n,0));
        ans[0][0]=vc[0];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                /*   if (i == 0 && j == 0)
            ans[i][j] = vc[0];
             if(i>0){
                ans[i][j]=ans[i-1][j]+c;
             }
             else{
                ans[i][j]=ans[i][j-1]+d;
             }
             */
               if (i == 0 && j == 0)
                    ans[i][j] = vc[0];
               
                else
                 if(j>0)   ans[i][j] = ans[i][j - 1] + d; 
                 else if (i>0) ans[i][j]=ans[i-1][j]+c;
            }
        }
        vector<int>f(n*n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                f.push_back(ans[i][j]);
            }
        }
        sort(f.begin(),f.end());
        if(f==vc)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        

    }
}