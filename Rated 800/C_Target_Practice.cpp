#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       vector<string>ans(10);
       vector<vector<int>>t(10,vector<int>(10,0));
       t={
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1},
       };
       for(int i=0;i<10;i++){
       string s;
       cin>>s;
       ans[i]= s;
       }
      // int ones=0,twos=0,threes=0,fors=0,five=0;
       /*for(int i=0;i<10;i++){
        if(ans[0][i]=='X'){
            ones++;
            ans[0][i]='.';
            
        }
        if(ans[9][i]=='X'){
             ones++;
            ans[9][i]='.';
        }
        if(ans[i][0]=='X')ones++;
        if(ans[i][9]=='X')ones++;
        
       }
       for(int i=1;i<9;i++){
        if(ans[1][i]=='X'){
            twos+=2;
            ans[1][i]='.';
           // ans[8][i]='.';
        }
        if(ans[8][i]=='X'){
            twos+=2;
            ans[8][i]='.';
        }
        if(ans[i][1]=='X'){
            twos+=2;
        }
        if(ans[i][8]=='X'){
            twos+=2;
        }
       }
       for(int i=2;i<8;i++){
        if(ans[2][i]=='X'){
            threes+=3;
            ans[2][i]='.';
            //ans[7][i]='.';
        }
        if(ans[7][i]=='X'){
            threes+= 3;
            ans[7][i]='.';
        }
        if(ans[i][2]=='X' )threes+=3;
        if(ans[i][7]=='X') threes+=3;
       }
       for(int i=3;i<7;i++){
        if(ans[3][i]=='X'){
            fors+=4;
            ans[3][i]='.';
          //  ans[6][i]='.';
        }
        if( ans[6][i]=='X'){
            fors+=4;
            ans[6][i]='.';
        }
        if(ans[i][3]=='X' )fors+=4;
        if(ans[i][6]=='X') fors+=4;
       }
       for(int i=4;i<6;i++){
        if(ans[4][i]=='X'){
            five+=5;
            ans[4][i]='.';
            //ans[i][5]='.';
        }
        if( ans[i][5]=='X'){
            five+=5;
            ans[i][5]='.';
        }
        if(ans[i][4]=='X')five+=5;
        if( ans[i][5]=='X') five+=5;
       }*/
       
       int sum =0;
       for(int i=0;i<10;i++){
        string s = ans[i];
        for(int j=0;j<10;j++){
            if(s[j]=='X')sum+= t[i][j];
        }
       }
      // cout<<ones<<twos<<threes<<fors<<five;
      // sum= ones + twos +threes+fors+five;
       cout<<sum <<endl;

    }
    return 0;
}