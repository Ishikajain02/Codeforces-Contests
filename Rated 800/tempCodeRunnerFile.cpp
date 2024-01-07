    int t;
    cin>>t;
    while(t--){
       vector<vector<char>>ans(10,vector<char>(10,'.'));
       for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>ans[i][j];
        }
       }
       int ones=0,twos=0,threes=0,fors=0,five=0;
       for(int i=0;i<10;i++){
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
       for(int i=0;i<10;i++){
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
       for(int i=0;i<10;i++){
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
       for(int i=0;i<10;i++){
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