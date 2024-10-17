#include<iostream>
using namespace std;
class Transport{
    public:
    Transport(){
        cout<<"Transport constructor is called"<<endl;
    }
    void show(){
        cout<<"function of parent called"<<endl;
    }
};
class Vehicle:virtual public Transport{
public:
Vehicle(){
    cout<<"Vehicle constructor is called"<<endl;

}
void show(){
    cout<<"value is printed"<<endl;
}
};
class Bus:virtual public Transport,virtual public Vehicle{
  public:
  Bus(){
    cout<<"Bus constructor is called"<<endl;
  }
};
class Car:public Transport{
    public:
    Car(){
        cout<<"car constructor is called"<<endl;
    }
    void print(){
     cout<<"Car (child) function is called"<<endl;   
    }};
class mercedes:public Car{
    public:
    mercedes(){
        cout<<"mercedes constructor is called"<<endl;
    }
};
int main(){
    //sinle inheritance
   /* Transport t1;
    t1.show();
    Car c1;
    c1.show();
*/
//multilevel inheritance
/*mercedes m1;
m1.show();
m1.print();*/
//multiple inheritance
Bus b1;
b1.show();
//b1.showoff();
}