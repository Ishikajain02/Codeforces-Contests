#include<iostream>
using namespace std;
int main(){
int array[5][5];
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>array[i][j];
}
}
int index=0,in=0;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(array[i][j]==1){
            index = i+1;
            in = j+1;
        }
}
}
int sum = (abs(index-3)+ abs(3-in));
cout<<sum<<endl;
return 0;
}