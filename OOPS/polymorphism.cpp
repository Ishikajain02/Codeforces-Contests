#include<iostream>
using namespace std;
class Transport{
 string name;
 int num;
 public:
 void func(){
    cout<<"parent function called"<<endl;
 }
 virtual void same(){
    cout<<"Transport class function called"<<endl;
 }
};
class Vehicle:public Transport{
  int wheels;
 // string color;
  int num;
  public:
  //compile time polymorphism
    void same(){
    cout<<"Vehicle class called"<<endl;
  }
  int selection(){
    cout<<"Without parameters"<<endl;
  }
  int selection(string color){
   cout<<"Color of the vehicle is "<<color<<endl;
  }
  int selection(string brand,string transport){
    cout<<"Brand is "<<brand<<" "<<"Transport "<<transport<<endl;
}
//run time polymorphism

};

int main(){
/*Vehicle v1;
v1.selection();
v1.selection("red");
v1.selection("mercedes","car");
Transport t1;
t1.func();*/
Transport *t1=new Transport;
Transport *t2=new Transport;
Vehicle v1;
t1->same();
t2->same();
t2=&v1;
v1.same();
t2->same();

}